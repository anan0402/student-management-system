//
// Created by AnDTN on 2/21/2023.
//

//
// Created by AnDTN on 2/21/2023.
//
using namespace std;
void displaySubjectRegister(const vector<SubjectRegister> &vec) {
  for (const auto &elem : vec) {
    cout << elem << endl;
  }
}
string identifyClassCode() {
  string temp{};
  string id{};
  while (true) {
    cout << GET_CLASS_CODE_ANNOUNCE << endl;
    id = sInput(NUMERIC);
    if (id.empty()) {
      cout << SYSTEM_NOTICE << DISALLOW_EMPTY << endl;
    } else {
      if (isNumber(id)) {
        cout<<SYSTEM_NOTICE<<SUCCESS<<endl;
        break;
      } else {
        cout << SYSTEM_NOTICE
             << WRONG_FORMAT << endl;
      }
    }
  }
  temp = "Class-" + id;
  return temp;
}
SubjectRegister getSubjectRegisterInfor() {
  Subject subject;
  Subject *fSubject{nullptr};
  fSubject = new Subject;
  vector<Student> vec;
  string student_id;
  string code;
  string date;
  Teacher teacher;
  Teacher *fTeacher{nullptr};
  fTeacher = new Teacher();

  while (true) {
    getSubjectID(fSubject);
    auto it = find(subject_vec.begin(), subject_vec.end(), *fSubject);
    if (it != subject_vec.end()) {
      subject = *it;
      break;
    } else {
      cout << SYSTEM_NOTICE << DONT_EXIST_SUBJECT << endl;
    }
  }
  student_id = sInput(GET_STUDENT_ID);
  for (auto const &student : student_vec) {
    if (student_id == student.getID()
        && subject.getDepartment() == student.getDepartment()) {
      vec.push_back(student);
    }
  }
  if (vec.empty()) {
    cout << SYSTEM_NOTICE << DONT_EXIST_STUDENT << endl;
  }
  code = identifyClassCode();
  do {
    cout << DT_ANNOUNCEMENT << endl;
    date = sInput(GET_DATE);
  } while (!checkDate(date)); // checkDate (date) == false

  while (true) {
    getTeacherID(fTeacher);
    auto it = find(teacher_vec.begin(), teacher_vec.end(), *fTeacher);
    auto it1 =
        find(it->getVec().begin(), it->getVec().end(), subject.getDepartment());
    if (it != teacher_vec.end() && it1 != it->getVec().end()) {
      teacher = *it;
      break;
    } else {
      cout << SYSTEM_NOTICE << DONT_EXIST_TEACHER << endl;
    }
  }
  delete fTeacher;
  delete fSubject;
  SubjectRegister temp{subject, vec, code, date, teacher};
  return temp;
}
void getClassCode(SubjectRegister*s){
  Subject subject;
  vector<Student>vec;
  string code;
  string date;
  Teacher teacher;
  do {
    cout << GET_CLASS_CODE_ANNOUNCE << endl;
    code = sInput(GET_CLASS_CODE);
  } while (code.empty());
  SubjectRegister st1 (subject, vec, code, date,teacher);
  *s=st1;
}
void modifySubjectRegister() {
  cout << THE_SUBJECT_REGISTER_MENU << endl;
  cout << setw(50) << setfill('=') << "" << endl;
  cout << setfill(' ') << endl;
  cout << SELECTIONS;
}
void updateSubjectRegisterInfor(SubjectRegister *s) {
  int choice;
  Teacher teacher;
  Teacher *fTeacher{nullptr};
  fTeacher = new Teacher();
  Student *fStudent{nullptr};
  fStudent = new Student();
  auto it = student_vec.begin();
  string date;
  vector<Student> vec;
  auto it1 = vec.begin();
  do {
    modifySubjectRegister();
    choice = nInput();
    switch (choice) {
      case 1:
        do {
          cout << DT_ANNOUNCEMENT << endl;
          date = sInput(GET_DATE);
        } while (!checkDate(date)); // checkDate (date) == false
        s->setDate(date);
        break;
      case 2:vec = s->getVec();
        getStudentID(fStudent);
        it = find(student_vec.begin(), student_vec.end(), *fStudent);
        if (it != student_vec.end()
            && s->getSubject().getDepartment() == it->getDepartment()) {
          if (vec.empty()) {
            vec.emplace_back(*it);
          } else {
            it1 = find(vec.begin(), vec.end(), *fStudent);
            if (it1 == vec.end()) {
              vec.emplace_back(*it);
            } else {
              cout << SYSTEM_NOTICE << EXIST_STUDENT << endl;
            }
          }
        } else {
          cout << SYSTEM_NOTICE << DONT_EXIST_STUDENT << endl;
        }
        s->setVec(vec);
        break;
      case 3:
        while (true) {
          getTeacherID(fTeacher);
          auto it2 = find(teacher_vec.begin(), teacher_vec.end(), *fTeacher);
          auto it3 = find(it2->getVec().begin(),
                          it2->getVec().end(),
                          s->getSubject().getDepartment());
          if (it2 != teacher_vec.end() && it3 != it2->getVec().end()) {
            teacher = *it2;
            break;
          } else{
            cout<<SYSTEM_NOTICE<<DONT_EXIST_TEACHER<<endl;
          }
        }
        s->setTeacher(teacher);
        break;
      case 4:cout << SYSTEM_NOTICE << QUIT_SYSTEM << endl;
        break;
      default:cout << SYSTEM_NOTICE << UNKNOWN_SELECTION << endl;
    }
  } while (choice != 3);
  delete fStudent;
}

void deleteStudent(SubjectRegister *s) {
  Student *fStudent{nullptr};
  fStudent = new Student();
  vector<Student> vec;
  auto it = vec.begin();
  vec = s->getVec();
  getStudentID(fStudent);
  if (vec.empty()) {
    cout << SYSTEM_NOTICE << THE_EMPTY_VECTOR << endl;
  } else {
    it = find(vec.begin(), vec.end(), *fStudent);
    if (it != vec.end()) {
      vec.erase(it);
    } else {
      cout << SYSTEM_NOTICE << DONT_EXIST_STUDENT << endl;
    }
  }
  s->setVec(vec);
  delete fStudent;
}
