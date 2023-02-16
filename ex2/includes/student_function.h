//
// Created by AnDTN on 2/9/2023.
//

#ifndef STUDENT_MANAGEMENT_SYSTEM_STUDENTFUNCTIONFILE_H
#define STUDENT_MANAGEMENT_SYSTEM_STUDENTFUNCTIONFILE_H

using namespace std;
bool checkDateOfBirth(const string &s);
string identify();
void getStudentInfor(Student *s);
void display(const list<Student> &l);
void getStudentID(Student *s);
void modify(Student *s);
void studentModify();

#endif //STUDENT_MANAGEMENT_SYSTEM_STUDENTFUNCTIONFILE_H
