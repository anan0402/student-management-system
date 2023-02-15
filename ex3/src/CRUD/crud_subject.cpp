//
// Created by AnDTN on 2/15/2023.
//
using namespace std;
void CrudSubject::crudSubjectRun(){
  int choice;
  do{
    displayCrudMenu();
    choice = nInput();
    switch (choice) {
      case 1:break;
      case 2:break;
      case 3:break;
      case 4:break;
      case 5:cout<<SYSTEM_NOTICE<<QUIT_SYSTEM<<endl;
        break;
      default:
        cout<<SYSTEM_NOTICE<<UNKNOWN_SELECTION<<endl;
    }
  } while (choice != 5);
}