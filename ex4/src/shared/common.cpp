//
// Created by AnDTN on 2/21/2023.
//

using namespace std;
void displayCrudMenu(){
  cout<<THE_CRUD_MENU<<endl;
  cout << setw(50) << setfill('=') << "" << endl;
  cout << setfill(' ') << endl;
  cout << SELECTIONS;
}
void displayMenu() {
  cout << THE_SYSTEM_MENU << endl;
  cout << setw(50) << setfill('=') << "" << endl;
  cout << setfill(' ') << endl;
  cout << SELECTIONS;
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

string sInput(string &&prompt) {
  string value;
  cout << prompt;
  getline(cin, value);
  return value;
}
int nInput() {
  string value;
  getline(cin, value);
  return stoi(value);
}
bool checkDate(const string &s) {
  // 04/02/2000
  if (s.length() != 10) {
    cout << SYSTEM_NOTICE << WRONG_FORMAT << endl;
    return false;
  }
  for (char c : s)
    if (!isdigit(c) && c != '/' || c == ' ')
      return false;
  if(s[2] != '/' && s[5] != '/')
    return false;
  if (stoi(s.substr(0, 2)) < 1 || stoi(s.substr(0, 2)) > 31) {
    cout << SYSTEM_NOTICE << DAY_ERROR << endl;
    return false;
  }
  if (stoi(s.substr(3, 2)) < 1 || stoi(s.substr(3, 2)) > 12) {
    cout << SYSTEM_NOTICE << MOTH_ERROR << endl;
    return false;
  }
  if (isNumber(s.substr(0, 3)) && isNumber(s.substr(3, 3)))
    return false;
  return true;
}