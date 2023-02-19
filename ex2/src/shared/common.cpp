//
// Created by AnDTN on 2/9/2023.
//

using namespace std;

void displayMenu() {
  cout << "1. Add the Subject to the list" << endl;
  cout << "2. Modify the variables in a Subject" << endl;
  cout << "3. Display the Subject in the list" << endl;
  cout << "4. Delete the Subject in the list" << endl;
  cout << "5. Add the Student to the list" << endl;
  cout << "6. Modify the variables in a Student" << endl;
  cout << "7. Display the Student in the list" << endl;
  cout << "8. Delete the Student in the list" << endl;
  cout << "9. Sort the Subject by name (increasing)" << endl;
  cout << "10. Sort the Student by name (increasing)" << endl;
  cout << "11. Quit" << endl;
  cout << setw(50) << setfill('=') << "" << endl;
  cout << setfill(' ') << endl;
  cout << "Enter a selection: ";
}

bool checkName(const string &name, bool is_multiple) {
  if (is_multiple && name.length() == 1)
    return false;
  for (char c : name) {
    if (is_multiple ? !isalpha(c) && c != ' ' : !isalpha(c) || c == ' ') {
      return false;
    }
  }
  return true;
}

bool isNumber(const string &s) {
  for (char c : s)
    if (!isdigit(c) || c == ' ')
      return false;
  return true;
}

string sinput(string &&prompt) {
  string value;
  cout << prompt;
  getline(cin, value);
  return value;
}
int ninput() {
  string value;
  getline(cin, value);
  return stoi(value);
}