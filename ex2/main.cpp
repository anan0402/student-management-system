//
// Created by AnDTN on 2/7/2023.
//
#include "includes/main.h"
#include "src/shared/common.cpp"
#include "src/models/Subject.cpp"
#include "src/models/Student.cpp"
#include "src/SubjectFunction.cpp"
#include "src/StudentFunction.cpp"

using namespace std;

int main() {
    list<Student> student_list{
            {"An", "Do Thi", "04/02/2000", "BA9-001", "Thai Binh", "0968916202"},
            {"Tu", "Le Anh", "13/08/2000", "BA9-067", "Thanh Hoa", "0336407556"}
    };
    auto it1 = student_list.begin();
    list<Subject> subject_list{
            {"Math",    "00m"},
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
    do {
        display_menu();
        cin >> choices;
        switch (choices) {
            case 1:
                    cout << "Adding a new subject" << endl;
                    GetSubjectInfor(usth_Subject);
                    it = find(subject_list.begin(), subject_list.end(), *usth_Subject);
                    if (it == subject_list.end()) {
                        subject_list.emplace_back(*usth_Subject);
                        cout << "The new subject was added!" << endl;
                    } else {
                        cout << "The subject already exist" << endl;
                    }
                break;
            case 2:
                cout << "Modify" << endl;
                break;
            case 3:
                display(subject_list);
                break;
            case 4:
                    cout << "Delete the subject" << endl;
                    GetSubjectInfor(usth_Subject);
                    it = find(subject_list.begin(), subject_list.end(), *usth_Subject);
                    if (it != subject_list.end()) {
                        subject_list.erase(it);
                        cout << "Successfully delete" << endl;
                    } else {
                        cout << "The subject dont exist!" << endl;
                    }
                break;
            case 5:
                    cout << "Adding a new student" << endl;
                    GetStudentInfor(usth_Student);
                    it1 = find(student_list.begin(), student_list.end(), *usth_Student);
                    if (it1 == student_list.end()) {
                        student_list.emplace_back(*usth_Student);
                        cout << "The new student was added" << endl;
                    } else {
                        cout << "The ID of student already exist. Please try again!" << endl;
                    }
                break;
            case 6:
                cout << "Modify" << endl;
                break;
            case 7:
                display(student_list);
                break;
            case 8:
                    cout << "Delete a new student" << endl;
                    GetIDofStudent(usth_Student);
                    it1 = find(student_list.begin(), student_list.end(), *usth_Student);
                    if (it1 != student_list.end()) {
                        student_list.erase(it1);
                        cout << "Successfully delete" << endl;
                    } else {
                        cout << "Student dont exist" << endl;
                    }
                break;
            case 9:
                subject_list.sort();
                break;
            case 10:
                student_list.sort();
                break;
            case 11:
                cout << "Goodbye" << endl;;
                break;
            default:
                cout << "Unkown sellection, please try again" << endl;
                break;
        }

    } while (choices != 11);
    return 0;

}