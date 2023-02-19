//
// Created by AnDTN on 2/15/2023.
//

#ifndef STUDENT_MANAGEMENT_SYSTEM_EX3_SUBJECT_REGISTER_H_
#define STUDENT_MANAGEMENT_SYSTEM_EX3_SUBJECT_REGISTER_H_

class SubjectRegister {
  friend ostream &operator<<(ostream &os, const SubjectRegister &rhs);
 private:
  Subject subject;
  vector<Student>vec;
  string code;
  string date;
 public:
  SubjectRegister();
  SubjectRegister(Subject subject, vector<Student>vec,string code, string date);
  ~SubjectRegister() = default;

  void setDate (string date);
  vector<Student> getVec();
  void setVec(vector<Student>vec);
};

#endif //STUDENT_MANAGEMENT_SYSTEM_EX3_SUBJECT_REGISTER_H_
