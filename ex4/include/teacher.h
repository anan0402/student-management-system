//
// Created by AnDTN on 2/21/2023.
//

#ifndef STUDENT_MANAGEMENT_SYSTEM_EX4_TEACHER_H_
#define STUDENT_MANAGEMENT_SYSTEM_EX4_TEACHER_H_

class Teacher {
  friend ostream &operator<<(ostream &os, const Teacher &rhs);
  friend istream &operator>>(istream &is, const Teacher &rhs);
 private:
  string firstName;
  string lastName;
  string dob;
  string id;
  string address;
  string phoneNumber;
  vector<Departments> departmentVec;
 public:
  Teacher();
  Teacher(string firstName,
          string lastName,
          string dob,
          string id,
          string address,
          string phoneNumber,
          vector<Departments> departmentVec);
  ~Teacher() = default;
  bool operator<(const Teacher &rhs);
  bool operator==(const Teacher &rhs) const;

  void setFirstName(string first_name) noexcept;

  void setLastName(string last_name) noexcept;

  void setDateOfBirth(string dob) noexcept;

  void setID(string id) noexcept;
  string getID()const;

  void setAddress(string address) noexcept;

  void setPhoneNum(string phone_num) noexcept;

  void setDepartment( vector<Departments> departmentVec) noexcept;
  vector<Departments> getVec ()const;


};

#endif //STUDENT_MANAGEMENT_SYSTEM_EX4_TEACHER_H_
