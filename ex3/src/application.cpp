//
// Created by AnDTN on 2/15/2023.
//

using namespace std;
void Application::main(){
  int choices;
  do {
    disPlayMenu();
    choices = nInput();
    switch (choices) {
      case 1:
        break;
      case 2:
        break;
      case 3:
        break;
      case 4:
        break;
      case 5:
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
