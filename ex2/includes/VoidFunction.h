//
// Created by AnDTN on 2/8/2023.
//

#ifndef STUDENT_MANAGEMENT_SYSTEM_VOIDFUNCTION_H
#define STUDENT_MANAGEMENT_SYSTEM_VOIDFUNCTION_H
#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>
#include <iomanip>
#include <limits>
#include "../includes/Subject.h"
#include "../includes/Student.h"
#include "../includes/Returnvaluefunction.h"

void display_menu();
void display(const list<Subject>& l);
void display(const list<Student>& l);
void GetSubjectInfor(Subject* s);
void GetStudentInfor(Student*s);
bool is_alphabet (const string &s);
string get_Date_ofBirth();
void GetIDofStudent(Student*s);
bool is_number(const string &s);

#endif //STUDENT_MANAGEMENT_SYSTEM_VOIDFUNCTION_H
