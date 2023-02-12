//
// Created by AnDTN on 2/8/2023.
//

using namespace std;

void getSubjectInfor(Subject *s) {
  string name;
  string ID1;
  string department;
  while (true) {
    name = sinput("Enter the name of Subject: ");
    if (!name.empty() && checkName(name, true))
      break;
    else
      cout << SUBJECT_NAME_ERROR << endl;
  }
  while (true) {
    ID1 = sinput("Enter the ID of Subject: ");
    if (!ID1.empty())
      break;
    else
      cout << SYSTEM_NOTICE << "The default value of id was used" << endl;
  }
  while (true) {
    department = sinput("Enter the department name: ");
    if (!department.empty() && checkName(department, true)) {
      if (department == ICT_DEPARTMENT || department == FST_DEPARTMENT)
        break;
      else
        cout << SUBJECT_DEPARTMENT_ERROR << endl;
    } else {
      cout << SUBJECT_DEPARTMENT_ERROR << endl;
    }
  }
  Subject s1(name, ID1, department);
  *s = s1;
}
void display(const list<Subject> &l) {
  cout << setw(10) << left << "ID" << setw(50) << left << "Name of Subject"
       << endl;
  cout << setw(60) << setfill('-') << "" << endl;
  cout << setfill(' ') << endl;
  for (const auto &elem : l)
    cout << elem << endl;
  cout << endl;

}
void getSubjectID(Subject *s) {
  string name;
  string ID1;
  string department;
  while (true) {
    ID1 = sinput("Enter the ID of Subject: ");
    if (!ID1.empty())
      break;
    else
      cout << SYSTEM_NOTICE << "The id is requireable." << endl;
  }
  Subject st1(name, ID1, department);
  *s = st1;
}
void subjectDisplay() {
  cout << "1. Modify name" << endl;
  cout << "2. Modify ID" << endl;
  cout << "3. Quit" << endl;
  cout << "===============" << endl;
  cout << "Enter your choice: ";
}
void modify(Subject *s) {
  string name;
  string id;
  string department;
  int choice;
  do {
    subjectDisplay();
    choice = ninput();
    switch (choice) {
      case 1:
        while (true) {
          name = sinput("Enter the name of Subject: ");
          if (!name.empty() && checkName(name, true))
            break;
          else
            cout << SUBJECT_NAME_ERROR << endl;
        }
        s->set_name(name);
        break;
      case 2:
        while (true) {
          id = sinput("Enter the ID of Subject: ");
          if (!id.empty())
            break;
          else
            cout << SYSTEM_NOTICE << "The default value of id was used" << endl;
        }
        s->set_id(id);
        break;
      case 3:cout << SYSTEM_NOTICE << "Goodbye" << endl;
        break;
      default:
        cout << SYSTEM_NOTICE << "Wrong selection. Please try again" << endl;
        break;
    }
  } while (choice != 3);
}