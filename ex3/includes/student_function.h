//
// Created by AnDTN on 2/13/2023.
//

#ifndef STUDENT_MANAGEMENT_SYSTEM_EX3_SRC_STUDENT_FUNCTION_H_
#define STUDENT_MANAGEMENT_SYSTEM_EX3_SRC_STUDENT_FUNCTION_H_
void displayStudent(const vector<Student> &vec);
string identify();
bool checkDate(const string &s);
void getStudentInfor(Student *s);
void getStudentID(Student *s);
void studentModify();
void modify(Student *s);

#endif //STUDENT_MANAGEMENT_SYSTEM_EX3_SRC_STUDENT_FUNCTION_H_
