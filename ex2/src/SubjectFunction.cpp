//
// Created by AnDTN on 2/8/2023.
//

using namespace std;

void GetSubjectInfor(Subject *s) {
  string name;
  string ID1;
  name = s_input("Enter the name of subject: ");
  ID1 = s_input("Enter the ID of subject: ");
  Subject s1(name, ID1);
  *s = s1;
}
void display(const list<Subject> &l) {
  cout << setw(10) << left << "ID" << setw(50) << left << "Name of subject"
       << endl;
  cout << setw(60) << setfill('-') << "" << endl;
  cout << setfill(' ') << endl;
  for (const auto &elem : l) {
    cout << elem << endl;
  }
  cout << endl;
}

