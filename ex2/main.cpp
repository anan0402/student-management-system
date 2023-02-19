//
// Created by AnDTN on 2/7/2023.
//
#include "includes/main.h"
#include "src/shared/common.cpp"
#include "src/models/subject.cpp"
#include "src/models/student.cpp"
#include "src/subject_function.cpp"
#include "src/student_function.cpp"
#include "data/fake_data.cpp"

using namespace std;

int main() {
  int choices;
  auto it1 = student_list.begin();
  auto it = subject_list.begin();
  Subject *fSubject{nullptr};
  fSubject = new Subject();
  Student *fStudent{nullptr};
  fStudent = new Student();
  do {
    displayMenu();
    choices = ninput();
    switch (choices) {
      case 1:cout << SYSTEM_NOTICE << "Adding a new Subject" << endl;
        getSubjectInfor(fSubject);
        it = find(subject_list.begin(), subject_list.end(), *fSubject);
        if (it == subject_list.end()) {
          subject_list.emplace_back(*fSubject);
          cout << SYSTEM_NOTICE << "The new Subject was added!" << endl;
        } else {
          cout << SYSTEM_NOTICE << "The Subject already exist" << endl;
        }
        break;
      case 2:cout << SYSTEM_NOTICE << "Modify" << endl;
        getSubjectID(fSubject);
        it = find(subject_list.begin(), subject_list.end(), *fSubject);
        if (it != subject_list.end()) {
          modify(&*it);
          cout << SYSTEM_NOTICE << "The Subject was modified" << endl;
        }
        break;
      case 3:display(subject_list);
        break;
      case 4:cout << SYSTEM_NOTICE << "Delete the Subject" << endl;
        getSubjectID(fSubject);
        it = find(subject_list.begin(), subject_list.end(), *fSubject);
        if (it != subject_list.end()) {
          subject_list.erase(it);
          cout << SYSTEM_NOTICE << "Successfully delete" << endl;
        } else {
          cout << SYSTEM_NOTICE << "The Subject dont exist!" << endl;
        }
        break;
      case 5:cout << SYSTEM_NOTICE << "Adding a new Student" << endl;
        getStudentInfor(fStudent);
        it1 = find(student_list.begin(), student_list.end(), *fStudent);
        if (it1 == student_list.end()) {
          student_list.emplace_back(*fStudent);
          cout << SYSTEM_NOTICE << "The new Student was added" << endl;
        } else {
          cout << SYSTEM_NOTICE
               << "The ID of Student already exist. Please try again!" << endl;
        }
        break;
      case 6:cout << "Modify" << endl;
        getStudentID(fStudent);
        it1 = find(student_list.begin(), student_list.end(), *fStudent);
        if (it1 != student_list.end()) {
          modify(&*it1);
          cout << SYSTEM_NOTICE << "The Student was modified" << endl;
        } else {
          cout << SYSTEM_NOTICE << "The Student dont exist!" << endl;
        }
        break;
      case 7:display(student_list);
        break;
      case 8:cout << SYSTEM_NOTICE << "Delete a new Student" << endl;
        getStudentID(fStudent);
        it1 = find(student_list.begin(), student_list.end(), *fStudent);
        if (it1 != student_list.end()) {
          student_list.erase(it1);
          cout << SYSTEM_NOTICE << "Successfully delete" << endl;
        } else {
          cout << SYSTEM_NOTICE << "Student dont exist" << endl;
        }
        break;
      case 9:subject_list.sort();
        break;
      case 10:student_list.sort();
        break;
      case 11:cout << SYSTEM_NOTICE << "Goodbye" << endl;
        break;
      default:
        cout << SYSTEM_NOTICE << "Unknown selection, please try again" << endl;
        break;
    }

  } while (choices != 11);
  delete fSubject;
  delete fStudent;
  return 0;

}