//
// Created by AnDTN on 2/13/2023.
//

using namespace std;
void displaySubject(const vector<Subject> &vec) {
  cout << setw(14) << left << "ID" << "Name of Subject"
      << setw(30) << right << "Department"
       << endl;
  cout << setw(60) << setfill('-') << "" << endl;
  cout << setfill(' ') << endl;
  for (const auto &elem : vec)
    cout << elem << endl;
  cout << endl;
}
void getSubjectInfor(Subject *s) {
  string name;
  string id;
  Departments department;
  while (true) {
    cout << SUBJECT_NAME_ANNOUNCEMENT << endl;
    name = sInput(SUBJECT_NAME_INPUT);
    if (!name.empty() && checkName(name, true))
      break;
    else
      cout << SYSTEM_NOTICE << WRONG_FORMAT << endl;
  }
  while (true) {
    id = sInput(SUBJECT_ID_INPUT);
    if (!id.empty())
      break;
    else
      cout << SYSTEM_NOTICE << EMPTY << endl;
  }
  while (true) {
    cout << DEPARTMENT_ANNOUNCE;
    cout << DEPARTMENT_INPUT;
    department = static_cast<Departments>(nInput());
    if (isValidDepartment(department)) {
      break;
    } else {
      cout << SYSTEM_NOTICE << WRONG_FORMAT << endl;
    }
  }
  Subject s1(name, id, Departments(department));
  *s = s1;
}
void getSubjectID(Subject *s) {
  string name;
  string id;
  while (true) {
    id = sInput(SUBJECT_ID_INPUT);
    if (!id.empty())
      break;
    else
      cout << SYSTEM_NOTICE << WRONG_FORMAT << endl;
  }
  Subject st1(name, id, Departments(0));
  *s = st1;
}
void subjectModify() {
  cout << THE_SUBJECT_MODIFY_MENU << endl;
  cout << setw(50) << setfill('=') << "" << endl;
  cout << setfill(' ') << endl;
  cout << SELECTIONS;
}
void modify(Subject *s) {
  string name;
  string id;
  Departments department;
  int choice;
  do {
    subjectModify();
    choice = nInput();
    switch (choice) {
      case 1:
        while (true) {
          cout << SUBJECT_NAME_ANNOUNCEMENT << endl;
          name = sInput(SUBJECT_NAME_INPUT);
          if (!name.empty() && checkName(name, true))
            break;
          else
            cout << SYSTEM_NOTICE << WRONG_FORMAT << endl;
        }
        s->setName(name);
        break;
      case 2:
        while (true) {
          id = sInput(SUBJECT_ID_INPUT);
          if (!id.empty())
            break;
          else
            cout << SYSTEM_NOTICE << "The default value of id was used" << endl;
        }
        s->setId(id);
        break;
      case 3:
        while (true) {
          cout << DEPARTMENT_ANNOUNCE;
          cout << DEPARTMENT_INPUT;
          department = static_cast<Departments>(nInput());
          if (isValidDepartment(department)) {
            break;
          } else {
            cout << SYSTEM_NOTICE << WRONG_FORMAT << endl;
          }
        }
        s->setDepartment(department);
        break;
      case 4:cout << SYSTEM_NOTICE << QUIT_SYSTEM << endl;
        break;
      default:cout << SYSTEM_NOTICE << WRONG_FORMAT << endl;
        break;
    }
  } while (choice != 3);
}