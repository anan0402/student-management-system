//
// Created by AnDTN on 2/15/2023.
//
using namespace std;
SubjectRegister::SubjectRegister() {}

SubjectRegister::SubjectRegister(Subject subject, vector<Student>vec,string code, string date)
 : subject {subject}, vec{vec}, code{code}, date{date}{}

void SubjectRegister::setDate (string date){
  this->date = date;
}

void SubjectRegister::setVec(vector<Student>vec){
  this->vec = vec;
}
vector<Student> SubjectRegister::getVec() {
  return vec;
}
ostream &operator<<(ostream &os, const SubjectRegister &rhs){
  os<<setw(30)<<left<<SUBJECT_REGISTER<<rhs.subject<<CLASS_CODE<<rhs.code<<setw(20)<<right<<rhs.date<<endl;
  for(const auto &elem: rhs.vec)
    os<<elem<<endl;
  return os;
}
