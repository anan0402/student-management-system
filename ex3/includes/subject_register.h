//
// Created by AnDTN on 2/15/2023.
//

#ifndef STUDENT_MANAGEMENT_SYSTEM_EX3_SUBJECT_REGISTER_H_
#define STUDENT_MANAGEMENT_SYSTEM_EX3_SUBJECT_REGISTER_H_

class SubjectRegister {
 private:
  Subject subject;
  vector<Student>vec;
  string code;
  string date;
 public:
  SubjectRegister();
  SubjectRegister(Subject subject, vector<Student>vec,string code, string date);
  ~SubjectRegister() = default;

};

#endif //STUDENT_MANAGEMENT_SYSTEM_EX3_SUBJECT_REGISTER_H_
