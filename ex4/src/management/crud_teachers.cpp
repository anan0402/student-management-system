//
// Created by AnDTN on 2/21/2023.
//

//
// Created by AnDTN on 2/21/2023.
//

using namespace std;
void CrudTeachers::crudTeacherRun() {
  int choice;
  auto it = teacher_vec.begin();
  Teacher *fTeacher{nullptr};
  fTeacher = new Teacher();
  do {
    displayCrudMenu();
    choice = nInput();
    switch (choice) {
      case 1:getTeacherInfor(fTeacher);
        it = find(teacher_vec.begin(), teacher_vec.end(), *fTeacher);
        if (it == teacher_vec.end()) {
          teacher_vec.emplace_back(*fTeacher);
          cout << SYSTEM_NOTICE << CREATE_TEACHER << endl;
        } else
          cout << SYSTEM_NOTICE << EXIST_TEACHER << endl;
        break;
      case 2:displayTeacher(teacher_vec);
        break;
      case 3:getTeacherID(fTeacher);
        it = find(teacher_vec.begin(), teacher_vec.end(), *fTeacher);
        if (it != teacher_vec.end()) {
          modify(&*it);
          cout << SYSTEM_NOTICE << MODIFY_TEACHER << endl;
        } else
          cout << SYSTEM_NOTICE << DONT_EXIST_TEACHER << endl;
        break;
      case 4:getTeacherID(fTeacher);
        it = find(teacher_vec.begin(), teacher_vec.end(), *fTeacher);
        if (it != teacher_vec.end()) {
          teacher_vec.erase(it);
          cout << SYSTEM_NOTICE << SUCCESSFUL_DELETE << endl;
        } else
          cout << SYSTEM_NOTICE << DONT_EXIST_TEACHER << endl;
        break;
      case 5:cout << SYSTEM_NOTICE << QUIT_SYSTEM << endl;
        break;
      default:cout << SYSTEM_NOTICE << UNKNOWN_SELECTION << endl;
    }
  } while (choice != 5);
  string teacher{"Teacher"};
  writeFile(teacher);
  delete fTeacher;
}

