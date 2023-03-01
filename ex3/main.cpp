//
// Created by AnDTN on 2/13/2023.
//

#include "includes/main.h"
#include "src/enumeration/enumeration.cpp"
#include "src/shared/common.cpp"
#include "src/models/student.cpp"
#include "src/models/subject.cpp"
#include "src/models/subject_register.cpp"
#include "src/functions/student_function.cpp"
#include "src/functions/subject_function.cpp"
#include "src/functions/subject_register_function.cpp"
#include "data/fake_data.cpp"
#include "src/application.cpp"
#include "src/functions/login.cpp"
#include "src/functions/logout.cpp"
#include "src/CRUD/crud_student.cpp"
#include "src/CRUD/crud_subject.cpp"
#include "src/CRUD/crud_subject_register.cpp"
using namespace std;

int main() {

  Application::run();
  return 0;
}