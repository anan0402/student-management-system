//
// Created by AnDTN on 2/13/2023.
//

using namespace std;
Subject::Subject() {}
Subject::Subject(string name, string id, Departments department)
    : name{name}, id{id}, department{department} {}
Subject::Subject(const Subject &src)
 :Subject{src.name, src.id, src.department}{
}
bool Subject::operator<(const Subject &rhs) {
  return this->name < rhs.name;
}
bool Subject::operator==(const Subject &rhs) const {
  return (this->id == rhs.id);
}
bool Subject::empty ()const{
  return name.empty();
}
void Subject::setName(string name)noexcept {
  this->name = name;
}
void Subject::setId(string id) noexcept {
  this->id = id;
}
string Subject::getID()const{
  return id;
}
void Subject::setDepartment(Departments department) noexcept {
  this->department = department;
}

ostream &operator<<(ostream &os, const Subject &rhs) {
  os << setw(15) << left << rhs.id << rhs.name << setw(30)
     << right << rhs.department;
  return os;
}