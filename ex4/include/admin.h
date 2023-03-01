//
// Created by AnDTN on 2/23/2023.
//

#ifndef STUDENT_MANAGEMENT_SYSTEM_EX4_ADMIN_H_
#define STUDENT_MANAGEMENT_SYSTEM_EX4_ADMIN_H_
using namespace std;
class Admin {
  friend ostream &operator<<(ostream &os, const Admin &rhs);
  friend istream &operator>>(istream &is, const Admin &rhs);
 private:
  string username;
  string password;
  string dt;
  string teacherID;
 public:
  Admin();
  Admin(string username, string password, string dt, string teacherID);

  ~Admin() = default;

  bool operator== (const Admin &rhs)const;

  void setUserName(string username) noexcept;
  string getUserName()const;
  void setPassWord(string password);
  string getPassWord()const;
  void setDate(string dt)noexcept;
  string getDate() const;
  void setTeacherId(string teacherID)noexcept;
  string getTeacherId()const;


};

#endif //STUDENT_MANAGEMENT_SYSTEM_EX4_ADMIN_H_
