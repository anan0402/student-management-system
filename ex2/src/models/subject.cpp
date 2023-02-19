//
// Created by AnDTN on 2/7/2023.
//

Subject::Subject() : name{"Unknown"}, id{"Unknown"}, department{"Unknown"} {}
Subject::Subject(string name, string ID, string department)
    : name{name}, id{ID}, department{department} {}
bool Subject::operator<(const Subject &rhs) {
  return this->name < rhs.name;
}
bool Subject::operator==(const Subject &rhs) const {
  return (this->id == rhs.id);
}
void Subject::set_name(string name) {
  this->name = name;
}
string Subject::get_name() const {
  return name;
}
void Subject::set_id(string ID1) {
  this->id = ID1;
}
string Subject::get_id() const {
  return id;
}

ostream &operator<<(ostream &os, const Subject &rhs) {
  os << setw(10) << left << rhs.id << setw(50) << left << rhs.name << setw(10)
     << left << rhs.department;
  return os;
}