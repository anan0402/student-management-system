//
// Created by AnDTN on 2/21/2023.
//

//
// Created by AnDTN on 2/21/2023.
//

using namespace std;
void displayTeacher(const vector<Teacher> &vec) {
  cout << setw(20) << left << "Name of Teacher" << setw(20) << left
       << "Date of birth"
       << setw(20) << left << "ID" << setw(20) << left << "Address"
       << setw(20) << left << "Phone number" << endl;
  cout << setw(100) << setfill('-') << "" << endl;
  cout << setfill(' ') << endl;
  for (const auto &elem : vec) {
    cout << elem << endl;
  }
  cout << endl;
}
string identifyTeacherId() {
  string temp{};
  string id{};
  while (true) {
    cout << TEACHER_ID_ANNOUNCEMENT << endl;
    id = sInput(NUMERIC);
    if (id.empty()) {
      cout << SYSTEM_NOTICE << DISALLOW_EMPTY << endl;
    } else {
      if (isNumber(id)) {
        break;
      } else {
        cout << SYSTEM_NOTICE
             << WRONG_FORMAT << endl;
      }
    }
  }
  temp = "TC" + id;
  return temp;
}

void getTeacherInfor(Teacher *s) {
  string first_name;
  string last_name;
  string dob;
  string id;
  string address;
  string phone_num;
  vector<Departments> departmentVec;
  Departments department;
  int num;
  int present_year;
  int sub;
  while (true) {
    cout << FN_ANNOUNCEMENT << endl;
    first_name = sInput(FN_INPUT);
    if (!first_name.empty() && checkName(first_name, false)) {
      break;
    } else {
      cout << SYSTEM_NOTICE << WRONG_FORMAT << endl;
    }
  }
  while (true) {
    cout << LN_ANNOUNCEMENT << endl;
    last_name = sInput(LN_INPUT);
    if (!last_name.empty() && checkName(last_name, true)) {
      break;
    } else {
      cout << SYSTEM_NOTICE << WRONG_FORMAT << endl;
    }
  }
  while (true) {
    cout << DT_ANNOUNCEMENT << endl;

    dob =
        sInput(DOB_INPUT);
    cout << PRESENT_YEAR_INPUT << endl;
    present_year = nInput();
    sub = (present_year - stoi(dob.substr(6, 4)));
    if (checkDate(dob) && sub >= 25) {
      cout << SYSTEM_NOTICE << SUCCESS << endl;
      break;
    } else {
      cout << SYSTEM_NOTICE
           << WRONG_FORMAT << endl;
    }
  }
  id = identifyTeacherId();
  address = sInput(ADDRESS_INPUT);
  while (true) {
    phone_num = sInput(PHONE_INPUT);
    if (!phone_num.empty()) {
      if (isNumber(phone_num) && phone_num.length() == 10)
        break;
      else
        cout << SYSTEM_NOTICE << WRONG_FORMAT << endl;
    } else {
      cout << SYSTEM_NOTICE << EMPTY << endl;
      break;
    }
  }
  cout << NUM_DEPARTMENT << endl;
  num = nInput();
  for (int i = 0; i < num; ++i) {
    while (true) {
      cout << DEPARTMENT_ANNOUNCE;
      cout << DEPARTMENT_INPUT;
      department = static_cast<Departments>(nInput());
      if (isValidDepartment(department)) {
        departmentVec.push_back(department);
        break;
      } else {
        cout << SYSTEM_NOTICE << WRONG_FORMAT << endl;
      }
    }
  }
  Teacher st1(first_name,
              last_name,
              dob,
              id,
              address,
              phone_num, departmentVec);
  *s = st1;

}
void getTeacherID(Teacher *s) {
  string first_name;
  string last_name;
  string dob;
  string id;
  string address;
  string phone_num;
  vector<Departments> departmentVec;
  id = identifyTeacherId();
  Teacher
      st1(first_name, last_name, dob, id, address, phone_num, departmentVec);
  *s = st1;
}
void teacherModify() {
  cout << THE_MODIFY_MENU << endl;
  cout << setw(50) << setfill('=') << "" << endl;
  cout << setfill(' ') << endl;
  cout << SELECTIONS;
}
void modify(Teacher *s) {
  string first_name;
  string last_name;
  string dob;
  string id;
  string address;
  string phone_num;
  vector<Departments> departmentVec;
  Departments department;
  Teacher *fTeacher{nullptr};
  fTeacher = new Teacher();
  auto it = teacher_vec.begin();
  int num;
  int sub;
  int present_year;
  int choice;
  do {
    teacherModify();
    choice = nInput();
    switch (choice) {
      case 1:
        while (true) {
          cout << FN_ANNOUNCEMENT << endl;
          first_name = sInput(FN_INPUT);
          if (!first_name.empty() && checkName(first_name, false)) {
            break;
          } else {
            cout << SYSTEM_NOTICE << WRONG_FORMAT << endl;
          }
        }
        s->setFirstName(first_name);
        break;
      case 2:
        while (true) {
          last_name = sInput(LN_INPUT);
          if (!last_name.empty() && checkName(last_name, true))
            break;
          else
            cout << SYSTEM_NOTICE << WRONG_FORMAT << endl;
        }
        s->setLastName(last_name);
        break;
      case 3:
        while (true) {
          cout << DT_ANNOUNCEMENT << endl;
          dob = sInput(DOB_INPUT);
          cout << PRESENT_YEAR_INPUT << endl;
          present_year = nInput();
          sub = (present_year - stoi(dob.substr(6, 4)));
          if (checkDate(dob) && sub >= 25) {
            break;
          } else {
            cout << SYSTEM_NOTICE
                 << WRONG_FORMAT
                 << endl;
          }
        }
        s->setDateOfBirth(dob);
        break;
      case 4:
        while (true) {
          getTeacherID(fTeacher);
          it = find(teacher_vec.begin(), teacher_vec.end(), *fTeacher);
          if (it == teacher_vec.end()) {
            id = fTeacher->getID();
            cout << SYSTEM_NOTICE << SUCCESS << endl;
            break;
          } else {
            cout << SYSTEM_NOTICE << EXIST_STUDENT << endl;
          }
        }
        s->setID(id);
        break;
      case 5:address = sInput(ADDRESS_INPUT);
        if (address.empty()) {
          cout << SYSTEM_NOTICE << EMPTY << endl;
        }
        s->setAddress(address);
        break;
      case 6:
        while (true) {
          cout << PHONE_ANNOUNCEMENT << endl;
          phone_num = sInput(PHONE_INPUT);
          if (!phone_num.empty()) {
            if (isNumber(phone_num) && phone_num.length() == 10)
              break;
            else
              cout << SYSTEM_NOTICE << WRONG_FORMAT << endl;
          } else {
            cout << SYSTEM_NOTICE << EMPTY << endl;
            break;
          }
        }
        s->setPhoneNum(phone_num);
        break;
      case 7:cout << NUM_DEPARTMENT << endl;
        num = nInput();
        for (int i = 0; i < num; ++i) {
          while (true) {
            cout << DEPARTMENT_ANNOUNCE;
            cout << DEPARTMENT_INPUT;
            department = static_cast<Departments>(nInput());
            if (isValidDepartment(department)) {
              departmentVec.push_back(department);
              break;
            } else {
              cout << SYSTEM_NOTICE << WRONG_FORMAT << endl;
            }
          }
        }
        s->setDepartment(departmentVec);
        break;
      case 8:cout << SYSTEM_NOTICE << QUIT_SYSTEM << endl;
        break;
      default:
        cout << SYSTEM_NOTICE
             << UNKNOWN_SELECTION << endl;
    }
  } while (choice != 8);
}

