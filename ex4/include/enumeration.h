//
// Created by AnDTN on 2/21/2023.
//

#ifndef STUDENT_MANAGEMENT_SYSTEM_EX4_ENUMERATION_H_
#define STUDENT_MANAGEMENT_SYSTEM_EX4_ENUMERATION_H_

using namespace std;

enum Departments {ICT, FST, CS, MST, CHEM, AE, NANO, MATH, WEO, SPACE};
istream &operator>>(istream &is, Departments &department);
ostream &operator<<(ostream &os, const Departments &department);

#endif //STUDENT_MANAGEMENT_SYSTEM_EX4_ENUMERATION_H_
