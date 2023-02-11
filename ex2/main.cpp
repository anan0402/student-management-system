//
// Created by AnDTN on 2/7/2023.
//
#include "includes/main.h"
#include "src/shared/common.cpp"
#include "src/models/Subject.cpp"
#include "src/models/Student.cpp"
#include "src/SubjectFunction.cpp"
#include "src/StudentFunction.cpp"
#include "src/models/Department.cpp"

using namespace std;

int main() {
  list<Student> student_list{
      {"An", "Do Thi", "04/02/2000", "BA9-001", "Thai Binh", "0968916202"},
      {"Tu", "Le Anh", "13/08/2000", "BA9-067", "Thanh Hoa", "0336407556"}
  };
  auto it1 = student_list.begin();
  list<Subject> subject_list{
      {"Math", "00m"},
      {"English", "00e"}
  };
  auto it = subject_list.begin();
  int choices;
  //subject
  Subject *usth_Subject{nullptr};
  usth_Subject = new Subject();
  //student
  Student *usth_Student{nullptr};
  usth_Student = new Student();
  Department fst {"FST Department", {subject_list}};
  Department ict {"ICT Department", {subject_list}};
  do {
    display_menu();
    choices = ninput();
    switch (choices) {
      case 1:cout << SYSTEM_NOTICE <<"Adding a new subject" << endl;
        GetSubjectInfor(usth_Subject);
        it = find(subject_list.begin(), subject_list.end(), *usth_Subject);
        if (it == subject_list.end()) {
          subject_list.emplace_back(*usth_Subject);
          cout << SYSTEM_NOTICE <<"The new subject was added!" << endl;
        } else {
          cout << SYSTEM_NOTICE <<"The subject already exist" << endl;
        }
        break;
      case 2:cout << SYSTEM_NOTICE <<"Modify" << endl;
        GetIDofSubject(usth_Subject);
        it = find(subject_list.begin(), subject_list.end(), *usth_Subject);
        if(it != subject_list.end()){
          modify(&*it);
          cout << SYSTEM_NOTICE << "The subject was modified" << endl;
        }
        break;
      case 3:
        display(fst);
        display(ict);
        break;
      case 4:cout << SYSTEM_NOTICE <<"Delete the subject" << endl;
        GetIDofSubject(usth_Subject);
        it = find(subject_list.begin(), subject_list.end(), *usth_Subject);
        if (it != subject_list.end()) {
          subject_list.erase(it);
          cout << SYSTEM_NOTICE <<"Successfully delete" << endl;
        } else {
          cout << SYSTEM_NOTICE <<"The subject dont exist!" << endl;
        }
        break;
      case 5:cout <<SYSTEM_NOTICE << "Adding a new student" << endl;
        GetStudentInfor(usth_Student);
        it1 = find(student_list.begin(), student_list.end(), *usth_Student);
        if (it1 == student_list.end()) {
          student_list.emplace_back(*usth_Student);
          cout << SYSTEM_NOTICE << "The new student was added" << endl;
        } else {
          cout << SYSTEM_NOTICE <<"The ID of student already exist. Please try again!" << endl;
        }
        break;
      case 6:cout << "Modify" << endl;
        GetIDofStudent(usth_Student);
        it1 = find(student_list.begin(), student_list.end(), *usth_Student);
        if (it1 != student_list.end()) {
          modify(&*it1);
          cout << SYSTEM_NOTICE << "The student was modified" << endl;
        } else {
          cout << SYSTEM_NOTICE <<"The student dont exist!" << endl;
        }
        break;
      case 7:display(student_list);
        break;
      case 8:cout << SYSTEM_NOTICE <<"Delete a new student" << endl;
        GetIDofStudent(usth_Student);
        it1 = find(student_list.begin(), student_list.end(), *usth_Student);
        if (it1 != student_list.end()) {
          student_list.erase(it1);
          cout << SYSTEM_NOTICE <<"Successfully delete" << endl;
        } else {
          cout <<SYSTEM_NOTICE << "Student dont exist" << endl;
        }
        break;
      case 9:subject_list.sort();
        break;
      case 10:student_list.sort();
        break;
      case 11:cout <<SYSTEM_NOTICE << "Goodbye" << endl;;
        break;
      default:cout << SYSTEM_NOTICE <<"Unknown selection, please try again" << endl;
        break;
    }

  } while (choices != 11);
  delete usth_Subject;
  delete usth_Student;
  return 0;

}