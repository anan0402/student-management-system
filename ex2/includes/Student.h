//
// Created by AnDTN on 2/7/2023.
//

#ifndef STUDENT_MANAGEMENT_SYSTEM_STUDENT_H
#define STUDENT_MANAGEMENT_SYSTEM_STUDENT_H

using namespace std;

struct Student {
  friend ostream &operator<<(ostream &os, const Student &rhs);
  string first_name;
  string last_name;
  string date_of_birth;
  string ID;
  string address;
  string phone_num;

  Student();
  Student(string first_name,
          string last_name,
          string birth,
          string id,
          string address,
          string phone);
  bool operator<(const Student &rhs);
  bool operator==(const Student &rhs) const;

  void set_FirstName(string first_name);
  string get_FirstName() const;

  void set_LastName(string last_name);
  string get_LastName() const;

  void set_DateOfBirth(string date_of_birth);
  string get_DateOfBirth() const;

  void set_ID(string ID);
  string get_ID() const;

  void set_address(string address);
  string get_address() const;

  void set_PhoneNum(string phone_num);
  string get_PhoneNum() const;
};

#endif //STUDENT_MANAGEMENT_SYSTEM_STUDENT_H
