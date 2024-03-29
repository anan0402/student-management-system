//
// Created by AnDTN on 2/15/2023.
//

#ifndef STUDENT_MANAGEMENT_SYSTEM_EX3_SRC_SUBJECT_REGISTER_FUNCTION_H_
#define STUDENT_MANAGEMENT_SYSTEM_EX3_SRC_SUBJECT_REGISTER_FUNCTION_H_

SubjectRegister getSubjectRegisterInfor(const vector<Subject> &subject_vec,
                                        const vector<Student> &student_vec);
void modifySubjectRegister();
void updateSubjectRegisterInfor(SubjectRegister *s,
                                const vector<Student> &student_vec);
void deleteStudent (SubjectRegister *s);

#endif //STUDENT_MANAGEMENT_SYSTEM_EX3_SRC_SUBJECT_REGISTER_FUNCTION_H_
