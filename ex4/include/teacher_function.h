//
// Created by AnDTN on 2/21/2023.
//

#ifndef STUDENT_MANAGEMENT_SYSTEM_EX4_TEACHER_FUNCTION_H_
#define STUDENT_MANAGEMENT_SYSTEM_EX4_TEACHER_FUNCTION_H_

void displayTeacher(const vector<Teacher> &vec);
string identifyTeacherId();
bool checkDate(const string &s);
void getTeacherInfor(Teacher *s);
void getTeacherID(Teacher *s);
void teacherModify();
void modify(Teacher *s);
#endif //STUDENT_MANAGEMENT_SYSTEM_EX4_TEACHER_FUNCTION_H_
