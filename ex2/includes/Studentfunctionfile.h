//
// Created by AnDTN on 2/9/2023.
//

#ifndef STUDENT_MANAGEMENT_SYSTEM_STUDENTFUNCTIONFILE_H
#define STUDENT_MANAGEMENT_SYSTEM_STUDENTFUNCTIONFILE_H

using namespace std;
bool check_date_of_birth(const string &s);
string identify();
void GetStudentInfor(Student *s);
void display(const list<Student> &l);
void GetIDofStudent(Student *s);
void modify(Student*s);
void student_display();

#endif //STUDENT_MANAGEMENT_SYSTEM_STUDENTFUNCTIONFILE_H
