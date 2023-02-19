//
// Created by AnDTN on 2/15/2023.
//
using namespace std;
void CrudSubjectRegister::crudSubjectRegisterRun() {
  SubjectRegister *list_class{nullptr};
  list_class = new SubjectRegister();
  int choice;
  string student;
  auto it = list_class->getVec().begin();
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
      case 4:
        student = sInput("Enter the id of student that you want to delete: ");
        for (auto const &elem: list_class->getVec()) {
          if(student == elem.getID()){
            it = find(list_class->getVec().begin(), list_class->getVec().end(),elem);
            list_class->getVec().erase(it);
          }
        }
        break;
      case 5:cout << SYSTEM_NOTICE << QUIT_SYSTEM << endl;
        break;
      default:cout << SYSTEM_NOTICE << UNKNOWN_SELECTION << endl;
    }
  } while (choice != 5);
  delete list_class;
}