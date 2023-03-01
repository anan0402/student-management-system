//
// Created by AnDTN on 2/21/2023.
//

#ifndef STUDENT_MANAGEMENT_SYSTEM_EX4_INCLUDE_SUBJECT_REGISTER_H_
#define STUDENT_MANAGEMENT_SYSTEM_EX4_INCLUDE_SUBJECT_REGISTER_H_

class SubjectRegister {
  friend istream &operator>>(istream &is, const SubjectRegister &rhs);
  friend ostream &operator<<(ostream &os, const SubjectRegister &rhs);
 private:
  Subject subject;
  vector<Student>vec;
  string code;
  string date;
  Teacher teacher;
 public:
  SubjectRegister();
  SubjectRegister(Subject subject, vector<Student>vec,string code, string date, Teacher teacher);
  ~SubjectRegister() = default;
  bool operator<(const SubjectRegister &rhs);
  bool operator==(const SubjectRegister &rhs);

  void setDate (string date);
  vector<Student> getVec();
  void setVec(vector<Student>vec);
  void setTeacher(Teacher teacher);
  Subject getSubject()const;

};


#endif //STUDENT_MANAGEMENT_SYSTEM_EX4_INCLUDE_SUBJECT_REGISTER_H_
