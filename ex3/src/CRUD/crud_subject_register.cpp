//
// Created by AnDTN on 2/15/2023.
//
using namespace std;
void CrudSubjectRegister::crudSubjectRegisterRun() {
  SubjectRegister *list_class{nullptr};
  list_class = new SubjectRegister();
  int choice;
  do {
    displayCrudMenu();
    choice = nInput();
    switch (choice) {
      case 1:*list_class = getSubjectRegisterInfor(subject_vec, student_vec);
        break;
      case 2:cout << *list_class << endl;
        break;
      case 3:updateSubjectRegisterInfor(list_class, student_vec);
        break;
      case 4:deleteStudent(list_class);
        break;
      case 5:cout << SYSTEM_NOTICE << QUIT_SYSTEM << endl;
        break;
      default:cout << SYSTEM_NOTICE << UNKNOWN_SELECTION << endl;
    }
  } while (choice != 5);
  delete list_class;
}