//
// Created by AnDTN on 2/21/2023.
//

using namespace std;
SubjectRegister::SubjectRegister() {}

SubjectRegister::SubjectRegister(Subject subject, vector<Student>vec,string code, string date,Teacher teacher)
    : subject {subject}, vec{vec}, code{code}, date{date}, teacher{teacher}{}

void SubjectRegister::setDate (string code){
  this->code = code;
}
bool SubjectRegister::operator<(const SubjectRegister &rhs) {
  return (this->date < rhs.date);
}
bool SubjectRegister::operator==(const SubjectRegister &rhs) {
  return (this->code == rhs.code);
}
void SubjectRegister::setVec(vector<Student>vec){
  this->vec = vec;
}
vector<Student> SubjectRegister::getVec() {
  return vec;
}
void SubjectRegister::setTeacher(Teacher teacher) {
  this->teacher = teacher;
}
Subject SubjectRegister::getSubject() const {
  return subject;
}
istream &operator>>(istream &is, const SubjectRegister &rhs){
  is>>rhs;
  return is;
}
ostream &operator<<(ostream &os, const SubjectRegister &rhs){
  os<<"The teacher of the class: "<<rhs.teacher<<endl;
  os<<setw(30)<<left<<SUBJECT_REGISTER<<rhs.subject<<CLASS_CODE<<rhs.code<<setw(20)<<right<<rhs.date<<endl;
  for(const auto &elem: rhs.vec)
    os<<elem<<endl;
  return os;
}

