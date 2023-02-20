//
// Created by AnDTN on 2/15/2023.
//
using namespace std;
void logoutSystem() {
  cout << LOGOUT_ANNOUNCEMENT;
  int choice;
  do {
    choice = nInput();
    switch (choice) {
      case 0:cout << SYSTEM_NOTICE << SYSTEM_CONTINUE << endl;
        break;
      case 1:cout << SYSTEM_NOTICE << SUCCESSFUL_LOGOUT << endl;
        exit(0);
      default:cout << SYSTEM_NOTICE << UNKNOWN_SELECTION << endl;
    }
  } while (choice != 0);
}