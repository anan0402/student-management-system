//
// Created by AnDTN on 2/7/2023.
//

#ifndef STUDENT_MANAGEMENT_SYSTEM_STUDENT_H
#define STUDENT_MANAGEMENT_SYSTEM_STUDENT_H

using namespace std;

struct Student {
  friend ostream &operator<<(ostream &os, const Student &rhs);
  string firstName;
  string lastName;
  string dateOfBirth;
  string ID;
  string address;
  string phoneNum;

  Student();
  Student(string firstName,
          string lastName,
          string dob,
          string id,
          string address,
          string phoneNum);
  bool operator<(const Student &rhs);
  bool operator==(const Student &rhs) const;

  void setFirstName(string first_name) noexcept;
  string getFirstName() const;

  void setLastName(string last_name) noexcept;
  string getLastName() const;

  void setDateOfBirth(string date_of_birth) noexcept;
  string getDateOfBirth() const;

  void setID(string ID) noexcept;
  string getID() const;

  void setAddress(string address) noexcept;
  string getAddress() const;

  void setPhoneNum(string phone_num) noexcept;
  string getPhoneNum() const;
};

#endif //STUDENT_MANAGEMENT_SYSTEM_STUDENT_H
