//
// Created by AnDTN on 2/15/2023.
//
using namespace std;
void CrudSubjectRegister::crudSubjectRegisterRun(){
  SubjectRegister list_class{};
  int choice;
  do{
    displayCrudMenu();
    choice = nInput();
    switch (choice) {
      case 1:getSubjectRegisterInfor();
        break;
      case 2:cout<<list_class<<endl;
        break;
      case 3:
        break;
      case 4:break;
      case 5:cout<<SYSTEM_NOTICE<<QUIT_SYSTEM<<endl;
        break;
      default:
        cout<<SYSTEM_NOTICE<<UNKNOWN_SELECTION<<endl;
    }
  } while (choice != 5);
}