//
// Created by AnDTN on 2/13/2023.
//

using namespace std;
Subject::Subject() {}
Subject::Subject(string name, string id, Departments department)
    : name{name}, id{id}, department{department} {}

bool Subject::operator<(const Subject &rhs) {
  return this->name < rhs.name;
}
bool Subject::operator==(const Subject &rhs) const {
  return (this->id == rhs.id);
}
void Subject::setName(string name)noexcept {
  this->name = name;
}
void Subject::setId(string id) noexcept {
  this->id = id;
}
void Subject::setDepartment(Departments department) noexcept {
  this->department = department;
}

ostream &operator<<(ostream &os, const Subject &rhs) {
  os << setw(10) << left << rhs.id << setw(50) << left << rhs.name << setw(10)
     << left << rhs.department;
  return os;
}