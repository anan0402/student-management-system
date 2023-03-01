//
// Created by AnDTN on 2/23/2023.
//

using namespace std;
Admin::Admin(){}
Admin::Admin(string username, string password, string dt, string teacherID)
 :username{username}, password{password}, dt{dt}, teacherID{teacherID}{
}
bool Admin::operator==(const Admin &rhs) const {
  return this->username == rhs.username ;
}
void Admin::setUserName(string username) noexcept {
  this->username = username;
}
string Admin::getUserName() const {
  return username;
}

void Admin::setPassWord(string password) {
  this->password = password;
}
string Admin::getPassWord() const {
  return password;
}

void Admin::setDate(string dt) noexcept {
  this->dt = dt;
}
string Admin::getDate() const {
  return dt;
}

void Admin::setTeacherId(string teacherID) noexcept {
  this->teacherID = teacherID;
}
string Admin::getTeacherId() const {
  return teacherID;
}

istream &operator>>(istream &is, const Admin &rhs){
  is>>rhs;
  return is;
}

ostream &operator<<(ostream &os, const Admin &rhs){
  os<<"The admin username: "<<rhs.username<<endl;
  os<<"The admin password: "<<rhs.password<<endl;
  os<<"The admin date    : "<<rhs.dt<<endl;
  os<<"The teacherID     : "<<rhs.teacherID<<endl;
  return os;
}