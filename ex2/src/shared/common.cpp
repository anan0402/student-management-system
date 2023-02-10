//
// Created by AnDTN on 2/9/2023.
//

using namespace std;

void display_menu() {
  cout << "1. Add the subject to the list" << endl;
  cout << "2. Modify the variables in a subject" << endl;
  cout << "3. Display the subject in the list" << endl;
  cout << "4. Delete the subject in the list" << endl;
  cout << "5. Add the student to the list" << endl;
  cout << "6. Modify the variables in a student" << endl;
  cout << "7. Display the student in the list" << endl;
  cout << "8. Delete the student in the list" << endl;
  cout << "9. Sort the subject by name (increasing)" << endl;
  cout << "10. Sort the student by name (increasing)" << endl;
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

bool is_number(const string &s) {
  for (char c : s)
    if (!isdigit(c) || c == ' ')
      return false;
  return true;
}

string s_input(string &&prompt) {
  string value;
  cout << prompt;
  getline(cin, value);
  return value;
}
int i_input (){
  string value ;
  getline(cin,value);
  return stoi(value);
}