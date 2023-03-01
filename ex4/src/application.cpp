//
// Created by AnDTN on 2/21/2023.
//

//
// Created by AnDTN on 2/15/2023.
//

using namespace std;
void Application::run(){
  int choices;
  do {
    displayMenu();
    choices = nInput();
    switch (choices) {
      case 1:CrudAdmin::crudAdminRun();
        break;
      case 2:CrudSubject::crudSubjectRun();
        break;
      case 3:CrudStudent::crudStudentRun();
        break;
      case 4:CrudSubjectRegister::crudSubjectRegisterRun();
        break;
      case 5:CrudTeachers::crudTeacherRun();
        break;
      case 6:SortData::sortDataRun();
        break;
      case 7:cout<<SYSTEM_NOTICE<<QUIT_SYSTEM<<endl;
        break;
      default:
        cout << SYSTEM_NOTICE << UNKNOWN_SELECTION << endl;
        break;
    }
  } while (choices != 7);
}
