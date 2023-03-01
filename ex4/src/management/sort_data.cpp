//
// Created by AnDTN on 2/25/2023.
//

using namespace std;
void sortMenu(){
  cout<<SORT_DATE_MENU<<endl;
  cout << setw(50) << setfill('=') << "" << endl;
  cout << setfill(' ') << endl;
  cout << SELECTIONS;
}
void SortData::sortDataRun() {
  int choice;
  do {
    sortMenu();
    choice = nInput();
    switch (choice) {
      case 1:sort(student_vec.begin(), student_vec.end());
        break;
      case 2:sort(subject_vec.begin(), subject_vec.end());
        break;
      case 3:sort(teacher_vec.begin(), teacher_vec.end());
        break;
      case 4:sort(subject_register_vec.begin(), subject_register_vec.end());
        break;
      case 5:cout << SYSTEM_NOTICE << QUIT_SYSTEM << endl;
        break;
      default:cout << SYSTEM_NOTICE << UNKNOWN_SELECTION << endl;
    }
  } while (choice != 5);
}
