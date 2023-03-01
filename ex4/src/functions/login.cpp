//
// Created by AnDTN on 2/21/2023.
//

using namespace std;
void loginSystem(){
  string username {};
  string password {};
  int count;
  for (int i = 0; i < 3; ++i) {
    cout<<LOGIN_ANNOUNCEMENT<<endl;
    username = sInput(USER_NAME_ANNOUNCEMENT);
    password = sInput(PASS_WORD_ANNOUNCEMENT);
    for(const auto &elem : admin_vec){
      if(username == elem.getUserName()&& password == elem.getPassWord()){
        cout<<SYSTEM_NOTICE<<SUCCESSFUL_LOGIN<<endl;
        break;
      }
    }
    cout<<SYSTEM_NOTICE<<CANNOT_LOGIN<<endl;
    count++;
    if (count == 3){
      cout<<SYSTEM_NOTICE<<CANNOT_LOGIN<<endl;
      exit(0);
    }
  }
}