//
// Created by AnDTN on 2/21/2023.
//


using namespace std;
void CrudStudent::crudStudentRun() {
  int choice;
  auto it = student_vec.begin();
  Student *fStudent{nullptr};
  fStudent = new Student();
  do {
    displayCrudMenu();
    choice = nInput();
    switch (choice) {
      case 1:getStudentInfor(fStudent);
        it = find(student_vec.begin(), student_vec.end(), *fStudent);
        if (it == student_vec.end()) {
          student_vec.emplace_back(*fStudent);
          cout << SYSTEM_NOTICE << CREATE_STUDENT << endl;
        } else
          cout << SYSTEM_NOTICE << EXIST_STUDENT << endl;
        break;
      case 2:displayStudent(student_vec);
        break;
      case 3:getStudentID(fStudent);
        it = find(student_vec.begin(), student_vec.end(), *fStudent);
        if(it != student_vec.end()){
          modify(&*it);
          cout<<SYSTEM_NOTICE<<MODIFY_STUDENT<<endl;
        } else
          cout<<SYSTEM_NOTICE<<DONT_EXIST_STUDENT<<endl;
        break;
      case 4:getStudentID(fStudent);
        it = find(student_vec.begin(), student_vec.end(), *fStudent);
        if(it != student_vec.end()){
          student_vec.erase(it);
          cout<<SYSTEM_NOTICE<<SUCCESSFUL_DELETE<<endl;
        } else
          cout<<SYSTEM_NOTICE<<DONT_EXIST_STUDENT<<endl;
        break;
      case 5:cout << SYSTEM_NOTICE << QUIT_SYSTEM << endl;
        break;
      default:cout << SYSTEM_NOTICE << UNKNOWN_SELECTION << endl;
    }
  } while (choice != 5);
  string student{"Student"};
  writeFile(student);
  delete fStudent;
}

