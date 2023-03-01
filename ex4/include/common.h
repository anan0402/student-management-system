//
// Created by AnDTN on 2/21/2023.
//

#ifndef STUDENT_MANAGEMENT_SYSTEM_EX4_COMMON_H_
#define STUDENT_MANAGEMENT_SYSTEM_EX4_COMMON_H_

using namespace std;
void displayMenu();
bool checkName(const string &name, bool is_multiple);
bool isNumber(const string &s);
string sInput(string &&prompt);
int nInput();

#endif //STUDENT_MANAGEMENT_SYSTEM_EX4_COMMON_H_
