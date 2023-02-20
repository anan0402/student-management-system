//
// Created by AnDTN on 2/15/2023.
//
using namespace std;
void loginSystem(){
  string user_name {};
  string pass_word {};
  for (int i = 0; i < 3; ++i) {
    cout<<LOGIN_ANNOUNCEMENT<<endl;
    user_name = sInput(USER_NAME_ANNOUNCEMENT);
    pass_word = sInput(PASS_WORD_ANNOUNCEMENT);
    if(user_name == USER_NAME && pass_word == PASS_WORD){
      cout<<SYSTEM_NOTICE<<SUCCESSFUL_LOGIN<<endl;
      break;
    } else{
      cout<<SYSTEM_NOTICE<<CANNOT_LOGIN<<endl;
    }
  }
}