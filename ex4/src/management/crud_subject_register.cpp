//
// Created by AnDTN on 2/15/2023.
//
using namespace std;
void CrudSubjectRegister::crudSubjectRegisterRun() {
  auto it = subject_register_vec.begin();
  SubjectRegister *list_class{nullptr};
  list_class = new SubjectRegister();
  int choice;
  do {
    displayCrudMenu();
    choice = nInput();
    switch (choice) {
      case 1:*list_class = getSubjectRegisterInfor();
        it = find(subject_register_vec.begin(),
                  subject_register_vec.end(),
                  *list_class);
        if (it == subject_register_vec.end()) {
          subject_register_vec.emplace_back(*list_class);
          cout << SYSTEM_NOTICE << CREATE_SUBJECT_REGISTER << endl;
        } else {
          cout << SYSTEM_NOTICE << EXIST_SUBJECT_REGISTER << endl;
        }
        break;
      case 2:displaySubjectRegister(subject_register_vec);
        break;
      case 3:getClassCode(list_class);
        it = find(subject_register_vec.begin(),
                  subject_register_vec.end(),
                  *list_class);
        if(it != subject_register_vec.end()){
          updateSubjectRegisterInfor(&*it);
          cout << SYSTEM_NOTICE << MODIFY_SUBJECT_REGISTER << endl;
        }

        break;
      case 4:getClassCode(list_class);
        it = find(subject_register_vec.begin(),
                  subject_register_vec.end(),
                  *list_class);
        if (it != subject_register_vec.end()) {
          deleteStudent(list_class);
          cout << SYSTEM_NOTICE << SUCCESSFUL_DELETE << endl;
        } else {
          cout << SYSTEM_NOTICE << DONT_EXIST_SUBJECT_REGISTER << endl;
        }
        break;
      case 5:cout << SYSTEM_NOTICE << QUIT_SYSTEM << endl;
        break;
      default:cout << SYSTEM_NOTICE << UNKNOWN_SELECTION << endl;
    }
  } while (choice != 5);
  string subject_register{"SubjectRegister"};
  writeFile(subject_register);
  delete list_class;
}