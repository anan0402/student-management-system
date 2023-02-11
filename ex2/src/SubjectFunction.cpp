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
void display( const Department &l) {
  cout<<l.name<<endl;
  cout << setw(10) << left << "ID" << setw(50) << left << "Name of subject"
       << endl;
  cout << setw(60) << setfill('-') << "" << endl;
  cout << setfill(' ') << endl;
  for (const auto &list : l.department)
    for(const auto &elem: list)
      cout << elem << endl;
  cout<<endl;

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
void subject_display(){
  cout<<"1. Modify name"<<endl;
  cout<<"2. Modify ID"<<endl;
  cout<<"3. Quit"<<endl;
  cout<<"==============="<<endl;
  cout<<"Enter your choice: ";
}
void modify(Subject*s){
  string name;
  string ID1;
  int choice;
  do{
    subject_display();
    choice = ninput();
    switch (choice) {
      case 1:while (true){
          name = sinput("Enter the name of subject: ");
          if(!name.empty() && checkName(name, true))
            break;
          else
            cout<<SUBJECT_NAME_ERROR<<endl;
        }
        s->set_name(name);
        break;
      case 2:while (true){
          ID1 = sinput("Enter the ID of subject: ");
          if(!ID1.empty())
            break;
          else
            cout <<SYSTEM_NOTICE <<"The default value of ID1 was used" << endl;
        }
        s->set_id(ID1);
        break;
      case 3:cout<<SYSTEM_NOTICE <<"Goodbye"<<endl;
        break;
      default:cout<<SYSTEM_NOTICE <<"Wrong selection. Please try again"<<endl;
        break;
    }
  } while (choice != 3);
}