//
// Created by AnDTN on 2/13/2023.
//

using namespace std;
void displayStudent(const vector<Student> &vec) {
  cout << setw(20) << left << "Name of Student" << setw(20) << left
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
string identify() {
  string temp{};
  string id{};
  while (true) {
    cout << STUDENT_ID_ANNOUNCEMENT << endl;
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
  temp = "BA9-" + id;
  return temp;
}
bool checkDateOfBirth(const string &s) {
  // 04/02/2000
  cout << DOB_ANNOUNCEMENT << endl;
  if (s.length() != 10) {
    cout << SYSTEM_NOTICE << WRONG_FORMAT << endl;
    return false;
  }
  for (char c : s)
    if (!isdigit(c) && c != '/' || c == ' ')
      return false;
  if (stoi(s.substr(0, 2)) < 1 || stoi(s.substr(0, 2)) > 31) {
    cout << SYSTEM_NOTICE << DAY_ERROR << endl;
    return false;
  }
  if (stoi(s.substr(3, 2)) < 1 || stoi(s.substr(3, 2)) > 12) {
    cout << SYSTEM_NOTICE << MOTH_ERROR << endl;
    return false;
  }
  if (isNumber(s.substr(0, 3)) && isNumber(s.substr(3, 3)))
    return false;
  return true;
}

void getStudentInfor(Student *s) {
  string first_name;
  string last_name;
  string dob;
  string id;
  string address;
  string phone_num;
  Departments department;
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
    dob =
        sInput(DOB_INPUT);
    if (checkDateOfBirth(dob)) {
      break;
    } else {
      cout << SYSTEM_NOTICE
           << WRONG_FORMAT << endl;
    }
  }
  id = identify();
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
  while (true) {
    cout << DEPARTMENT_INPUT;
    department = static_cast<Departments>(nInput());
    if (isValidDepartment(department))
      break;
    else
      cout << SYSTEM_NOTICE << WRONG_FORMAT << endl;
  }

  Student st1(first_name,
              last_name,
              dob,
              id,
              address,
              phone_num,
              Departments(department));
  *s = st1;
}

void getStudentID(Student *s) {
  string first_name;
  string last_name;
  string dob;
  string id;
  string address;
  string phone_num;
  id = identify();
  Student
      st1(first_name, last_name, dob, id, address, phone_num, Departments(0));
  *s = st1;
}
void studentModify() {
  cout << THE_MODIFY_MENU << endl;
  cout << setw(50) << setfill('=') << "" << endl;
  cout << setfill(' ') << endl;
  cout << SELECTIONS;
}
void modify(Student *s) {
  string first_name;
  string last_name;
  string dob;
  string id;
  string address;
  string phone_num;
  Departments department;
  int choice;
  do {
    studentModify();
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
          cout << DOB_ANNOUNCEMENT << endl;
          dob = sInput(DOB_INPUT);
          if (checkDateOfBirth(dob)) {
            break;
          } else {
            cout << SYSTEM_NOTICE
                 << WRONG_FORMAT
                 << endl;
          }
        }
        s->setDateOfBirth(dob);
        break;
      case 4:id = identify();
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
      case 7:
        while (true){
          cout << DEPARTMENT_INPUT;
          department = static_cast<Departments>(nInput());
          if (isValidDepartment(department))
            break;
          else
            cout << SYSTEM_NOTICE << WRONG_FORMAT << endl;
        }
        s->setDepartment(department);
        break;
      case 8:cout << SYSTEM_NOTICE << QUIT_SYSTEM << endl;
        break;
      default:
        cout << SYSTEM_NOTICE
             << UNKNOWN_SELECTION << endl;
        break;
    }
  } while (choice != 8);
}