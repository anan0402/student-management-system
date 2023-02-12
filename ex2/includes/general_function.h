//
// Created by AnDTN on 2/9/2023.
//

#ifndef STUDENT_MANAGEMENT_SYSTEM_GENERALFUNCTION_H
#define STUDENT_MANAGEMENT_SYSTEM_GENERALFUNCTION_H

using namespace std;
void displayMenu();
bool checkName(const string &name, bool is_multiple);
bool isNumber(const string &s);
string sinput(string &&prompt);
int ninput();

#endif //STUDENT_MANAGEMENT_SYSTEM_GENERALFUNCTION_H
