//
// Created by AnDTN on 2/21/2023.
//
//
// Created by AnDTN on 2/15/2023.
//
using namespace std;
void CrudSubject::crudSubjectRun(){
  int choice;
  auto it = subject_vec.begin();
  Subject *fSubject{nullptr};
  fSubject = new Subject();
  do{
    displayCrudMenu();
    choice = nInput();
    switch (choice) {
      case 1:getSubjectInfor(fSubject);
        it = find(subject_vec.begin(),subject_vec.end(),*fSubject);
        if(it == subject_vec.end()){
          subject_vec.emplace_back(*fSubject);
          cout<<SYSTEM_NOTICE<<CREATE_SUBJECT<<endl;
        } else
          cout<<SYSTEM_NOTICE<<EXIST_SUBJECT<<endl;
        break;
      case 2:displaySubject(subject_vec);
        break;
      case 3:getSubjectID(fSubject);
        it = find(subject_vec.begin(),subject_vec.end(),*fSubject);
        if(it != subject_vec.end()){
          modify(&*it);
          cout<<SYSTEM_NOTICE<<MODIFY_SUBJECT<<endl;
        } else
          cout<<SYSTEM_NOTICE<<DONT_EXIST_SUBJECT<<endl;
        break;
      case 4:getSubjectID(fSubject);
        it = find(subject_vec.begin(),subject_vec.end(),*fSubject);
        if(it != subject_vec.end()){
          subject_vec.erase(it);
          cout<<SYSTEM_NOTICE<<SUCCESSFUL_DELETE<<endl;
        } else
          cout<<SYSTEM_NOTICE<<DONT_EXIST_SUBJECT<<endl;
        break;
      case 5:cout<<SYSTEM_NOTICE<<QUIT_SYSTEM<<endl;
        break;
      default:
        cout<<SYSTEM_NOTICE<<UNKNOWN_SELECTION<<endl;
    }
  } while (choice != 5);
  string  subject{"Subject"};
  writeFile(subject);
  delete fSubject;
}