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
      case 1:loginSystem();
        break;
      case 2:
        break;
      case 3:CrudSubject::crudSubjectRun();
        break;
      case 4:CrudStudent::crudStudentRun();
        break;
      case 5:CrudSubjectRegister::crudSubjectRegisterRun();
        break;
      case 6:sort(subject_vec.begin(), subject_vec.end());
        break;
      case 7:sort(student_vec.begin(), student_vec.end());
        break;
      case 8:cout<<SYSTEM_NOTICE<<QUIT_SYSTEM<<endl;
        break;
      default:
        cout << SYSTEM_NOTICE << UNKNOWN_SELECTION << endl;
        break;
    }
  } while (choices != 8);
}
