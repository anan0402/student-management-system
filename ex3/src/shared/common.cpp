//
// Created by AnDTN on 2/13/2023.
//

using namespace std;
void disPlayMenu() {
  cout << THE_MENU << endl;
  cout << CHOICE_1 << endl;
  cout << CHOICE_2 << endl;
  cout << CHOICE_3 << endl;
  cout << CHOICE_4 << endl;
  cout << CHOICE_5 << endl;
  cout << CHOICE_6 << endl;
  cout << CHOICE_7 << endl;
  cout << CHOICE_8 << endl;
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