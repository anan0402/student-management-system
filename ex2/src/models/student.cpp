//
// Created by AnDTN on 2/7/2023.
//

#include "../../../ex3/includes/student.h"

Student::Student() : firstName{"Unknown"},
                     lastName{"Unknown"},
                     dateOfBirth{"Unknown"},
                     ID{"Unknown"},
                     address{"Unknown"},
                     phoneNum{"Unknown"} {}

Student::Student(string firstName,
                 string lasName,
                 string dob,
                 string id,
                 string address,
                 string phoneNum)
    : firstName{firstName},
      lastName{lasName},
      dateOfBirth{dob},
      ID{id},
      address{address},
      phoneNum{phoneNum} {}

bool Student::operator<(const Student &rhs) {
  string temp1{this->firstName + this->lastName};
  string temp2{rhs.firstName + rhs.lastName};
  return (temp1 < temp2);
}
bool Student::operator==(const Student &rhs) const {
  return (this->ID == rhs.ID);
}

void Student::setFirstName(string first_name) noexcept {
  this->firstName = first_name;
}
string Student::getFirstName() const {
  return firstName;
}

void Student::setLastName(string last_name) noexcept {
  this->lastName = last_name;
}
string Student::getLastName() const {
  return lastName;
}

void Student::setDateOfBirth(string date_of_birth) noexcept {
  this->dateOfBirth = date_of_birth;
}
string Student::getDateOfBirth() const {
  return dateOfBirth;
}

void Student::setID(string ID) noexcept {
  this->ID = ID;
}
string Student::getID() const {
  return ID;
}

void Student::setAddress(string address) noexcept {
  this->address = address;
}
string Student::getAddress() const {
  return address;
}

void Student::setPhoneNum(string phone_num) noexcept {
  this->phoneNum = phone_num;
}

string Student::getPhoneNum() const {
  return phoneNum;
}

ostream &operator<<(ostream &os, const Student &rhs) {
  os << rhs.firstName << " " << setw(20) << left << rhs.lastName << setw(20)
     << left << rhs.dateOfBirth
     << setw(20) << left << rhs.ID << setw(20) << left << rhs.address
     << setw(20) << left << rhs.phoneNum;
  return os;
}