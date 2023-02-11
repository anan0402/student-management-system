//
// Created by AnDTN on 2/8/2023.
//

using namespace std;

void GetSubjectInfor(Subject *s) {
  string name;
  string ID1;
  while (true){
  name = sinput("Enter the name of subject: ");
  if(!name.empty() && checkName(name, true))
    break;
  else
    cout<<SUBJECT_NAME_ERROR<<endl;
  }
  while (true){
    ID1 = sinput("Enter the ID of subject: ");
    if(!ID1.empty())
      break;
    else
      cout <<SYSTEM_NOTICE <<"The default value of ID1 was used" << endl;
  }
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
void GetIDofSubject(Subject *s){
  string name;
  string ID1;
  while (true){
    ID1 = sinput("Enter the ID of subject: ");
    if(!ID1.empty())
      break;
    else
      cout <<SYSTEM_NOTICE <<"The ID1 is requireable." << endl;
  }
  Subject st1 (name, ID1);
  *s = st1;
}
