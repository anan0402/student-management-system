//
// Created by AnDTN on 2/21/2023.
//

#include "include/main.h"
#include "data/database.cpp"
#include "src/enumeration/enumeration.cpp"
#include "src/shared/common.cpp"
#include "src/models/student.cpp"
#include "src/models/subject.cpp"
#include "src/models/teacher.cpp"
#include "src/models/subject_register.cpp"
#include "src/models/admin.cpp"
#include "src/functions/student_functions.cpp"
#include "src/functions/subject_functions.cpp"
#include "src/functions/subject_register_function.cpp"
#include "src/functions/teacher_function.cpp"
#include "src/functions/login.cpp"
#include "src/functions/logout.cpp"
#include "src/functions/admin_functions.cpp"
#include "src/management/crud_students.cpp"
#include "src/management/crud_subjects.cpp"
#include "src/management/crud_subject_register.cpp"
#include "src/management/crud_admin.cpp"
#include "src/management/sort_data.cpp"
#include "src/management/crud_teachers.cpp"
#include "src/application.cpp"
#include "src/functions/writing.cpp"


int main (){
  loginSystem();
  Application::run();
  logoutSystem();
  return 0;
}
