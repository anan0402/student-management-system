//
// Created by AnDTN on 2/21/2023.
//

using namespace std;
Student::Student() {}
Student::Student(string firstName,
                 string lastName,
                 string dob,
                 string id,
                 string address,
                 string phoneNumber,
                 Departments department)
    : firstName{firstName},
      lastName{lastName},
      dob{dob},
      id{id},
      address{address},
      phoneNumber{phoneNumber},
      department{department}{}

bool Student::operator<(const Student &rhs) {
  string temp1{this->firstName + this->lastName};
  string temp2{rhs.firstName + rhs.lastName};
  return (temp1 < temp2);
}
bool Student::operator==(const Student &rhs) const {
  return (this->id == rhs.id);
}
void Student::setFirstName(string first_name) noexcept {
  this->firstName = first_name;
}
void Student::setLastName(string last_name) noexcept {
  this->lastName = last_name;
}
void Student::setDateOfBirth(string dob) noexcept {
  this->dob = dob;
}
void Student::setID(string id) noexcept {
  this->id = id;
}
string Student::getID()const{
  return id;
}
void Student::setAddress(string address) noexcept {
  this->address = address;
}
void Student::setPhoneNum(string phone_num) noexcept {
  this->phoneNumber = phone_num;
}
void Student::setDepartment(Departments department) noexcept {
  this->department = department;
}
Departments Student::getDepartment() const {
  return department;
}
istream &operator>>(istream &is, const Student &rhs){
  is>>rhs;
  return is;
}
ostream &operator<<(ostream &os, const Student &rhs) {
  os << rhs.firstName << " " << setw(20) << left << rhs.lastName << setw(20)
     << left << rhs.dob
     << setw(20) << left << rhs.id << setw(20) << left << rhs.address
     << setw(20) << left << rhs.phoneNumber
     << setw(20) << left << rhs.department;
  return os;
}
