//
// Created by AnDTN on 2/15/2023.
//

using namespace std;

SubjectRegister getSubjectRegisterInfor(const vector<Subject> &subject_vec,
                                        const vector<Student> &student_vec) {
  Subject subject;
  string subject_id;
  vector<Student> vec;
  string student_id;
  string code;
  string date;
  do {
    cout << GET_SUBJECT_ID_ANNOUNCE << endl;
    subject_id = sInput(GET_SUBJECT_ID);
    for (auto const &elem : subject_vec) {
      if (subject_id == elem.getID()) {
        subject = elem;
        break;
      }
    }
  } while (subject_id.empty());
  if (subject.empty()) {
    cout << SYSTEM_NOTICE << DONT_EXIST_SUBJECT << endl;
    exit(0);
  }
  student_id = sInput(GET_STUDENT_ID);
  for (auto const &student : student_vec) {
    if (student_id == student.getID()) {
      vec.push_back(student);
    }
  }
  if (vec.empty()) {
    cout << SYSTEM_NOTICE << DONT_EXIST_STUDENT << endl;
  }
  do {
    cout << GET_CLASS_CODE_ANNOUNCE << endl;
    code = sInput(GET_CLASS_CODE);
  } while (code.empty());

  do {
    cout << DT_ANNOUNCEMENT << endl;
    date = sInput(GET_DATE);
  } while (!checkDate(date)); // checkDate (date) == false

  SubjectRegister temp{subject, vec, code, date};
  return temp;
}
void modifySubjectRegister() {
  cout << THE_SUBJECT_REGISTER_MENU << endl;
  cout << setw(50) << setfill('=') << "" << endl;
  cout << setfill(' ') << endl;
  cout << SELECTIONS;
}
void updateSubjectRegisterInfor(SubjectRegister *s,
                                const vector<Student> &student_vec) {
  int choice;
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
          cout << DOB_ANNOUNCEMENT << endl;
          date = sInput(GET_DATE);
        } while (!checkDate(date)); // checkDate (date) == false
        s->setDate(date);
        break;
      case 2:
        vec = s->getVec();
        getStudentID(fStudent);
        it = find(student_vec.begin(), student_vec.end(), *fStudent);
        if(it != student_vec.end()){
          if(vec.empty()){
            vec.emplace_back(*it);
          } else{
            it1 = find(vec.begin(), vec.end(), *fStudent);
            if(it1 == vec.end()){
              vec.emplace_back(*it);
            } else{
              cout<<SYSTEM_NOTICE<<EXIST_STUDENT<<endl;
            }
          }
        } else{
          cout<<SYSTEM_NOTICE<<DONT_EXIST_STUDENT<<endl;
        }
        s->setVec(vec);
        break;
      case 3: cout << SYSTEM_NOTICE << QUIT_SYSTEM << endl;
        break;
      default:cout << SYSTEM_NOTICE << UNKNOWN_SELECTION << endl;
    }
  } while (choice != 3);
  delete fStudent;
}

void deleteStudent (SubjectRegister *s){
  Student *fStudent{nullptr};
  fStudent = new Student();
  vector<Student> vec;
  auto it = vec.begin();
  vec = s->getVec();
  getStudentID(fStudent);
  if(vec.empty()){
    cout<<SYSTEM_NOTICE<<THE_EMPTY_VECTOR<<endl;
  }else{
    it = find(vec.begin(), vec.end(),*fStudent);
    if(it != vec.end()){
      vec.erase(it);
    } else{
      cout<<SYSTEM_NOTICE<<DONT_EXIST_STUDENT<<endl;
    }
  }
  s->setVec(vec);
  delete fStudent;
}