//
// Created by AnDTN on 2/21/2023.
//

#ifndef STUDENT_MANAGEMENT_SYSTEM_EX4_STUDENT_H_
#define STUDENT_MANAGEMENT_SYSTEM_EX4_STUDENT_H_

using namespace std;
class Student {
  friend ostream &operator<<(ostream &os, const Student &rhs);
  friend istream &operator>>(istream &is, const Student &rhs);
 private:
  string firstName;
  string lastName;
  string dob;
  string id;
  string address;
  string phoneNumber;
  Departments department;
 public:
  Student();
  Student(string firstName,
          string lastName,
          string dob,
          string id,
          string address,
          string phoneNumber,
          Departments department);
  ~Student() = default;
  bool operator<(const Student &rhs);
  bool operator==(const Student &rhs) const;

  void setFirstName(string first_name) noexcept;

  void setLastName(string last_name) noexcept;

  void setDateOfBirth(string dob) noexcept;

  void setID(string id) noexcept;
  string getID()const;

  void setAddress(string address) noexcept;

  void setPhoneNum(string phone_num) noexcept;

  void setDepartment(Departments department) noexcept;
  Departments getDepartment()const;

};

#endif //STUDENT_MANAGEMENT_SYSTEM_EX4_STUDENT_H_
