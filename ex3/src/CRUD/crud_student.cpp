//
// Created by AnDTN on 2/15/2023.
//
using namespace std;
void CrudStudent::crudStudentRun(){
  int choice;
  auto it = student_vec.begin();
  Student *fStudent{nullptr};
  fStudent = new Student();
  do{
    displayCrudMenu();
    choice = nInput();
    switch (choice) {
      case 1:break;
      case 2:displayStudent(student_vec);
        break;
      case 3:break;
      case 4:
        break;
      case 5:cout<<SYSTEM_NOTICE<<QUIT_SYSTEM<<endl;
        break;
      default:
        cout<<SYSTEM_NOTICE<<UNKNOWN_SELECTION<<endl;
    }
  } while (choice != 5);
  delete fStudent;
}
