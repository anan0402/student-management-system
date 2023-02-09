//
// Created by AnDTN on 2/7/2023.
//

#include "../includes/Student.h"
Student::Student() :first_name{ "Unknown" }, last_name{ "Unknown" }, date_of_birth{ "Unknown" },
                    ID{ "Unknown" }, address{ "Unknown" }, phone_num{ "Unknown" } {}

Student::Student(string first_name, string last_name, string birth, string id, string address, string phone)
        :first_name{ first_name }, last_name{ last_name }, date_of_birth{ birth }, ID{ id }, address{ address }, phone_num{ phone } {}

bool Student::operator<(const Student& rhs) {
    string temp1{ this->first_name + this->last_name };
    string temp2{ rhs.first_name + rhs.last_name };
    return (temp1 < temp2);
}
bool Student::operator==(const Student& rhs)const {
    return(this->ID == rhs.ID );
}

void Student::set_FirstName(string first_name) {
    this->first_name = first_name;
}
string Student::get_FirstName()const {
    return first_name;
}

void Student::set_LastName(string last_name) {
    this->last_name = last_name;
}
string Student::get_LastName()const {
    return last_name;
}

void Student::set_DateOfBirth(string date_of_birth) {
    this->date_of_birth = date_of_birth;
}
string Student::get_DateOfBirth()const {
    return date_of_birth;
}

void Student::set_ID(string ID) {
    this->ID = ID;
}
string Student::get_ID()const {
    return ID;
}

void Student::set_address(string address) {
    this->address = address;
}
string Student::get_address()const {
    return address;
}

void Student::set_PhoneNum(string phone_num) {
    this->phone_num = phone_num;
}
string Student::get_PhoneNum()const {
    return phone_num;
}

ostream& operator<<(ostream& os, const Student& rhs) {
    os << rhs.first_name << " " << setw(20) << left << rhs.last_name << setw(20) << left << rhs.date_of_birth
       << setw(20) << left << rhs.ID << setw(20) << left << rhs.address << setw(20) << left << rhs.phone_num;
    return os;
}