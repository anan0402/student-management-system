//
// Created by AnDTN on 2/7/2023.
//
#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>
#include <iomanip>
#include <limits>
#include "src/Subject.cpp"
#include "src/Student.cpp"

using namespace std;

void display_menu() {
    cout << "1. Add the subject to the list" << endl;
    cout << "2. Modify the variables in a subject" << endl;
    cout << "3. Display the subject in the list" << endl;
    cout << "4. Delete the subject in the list" << endl;
    cout << "5. Add the student to the list" << endl;
    cout << "6. Modify the variables in a student" << endl;
    cout << "7. Display the student in the list" << endl;
    cout << "8. Delete the student in the list" << endl;
    cout << "9. Sort the subject by name (increasing)" << endl;
    cout << "10. Sort the student by name (increasing)" << endl;
    cout << "11. Quit" << endl;
    cout << setw(50) << setfill('=') << "" << endl;
    cout << setfill(' ') << endl;
    cout << "Enter a selection: ";
}
void display(const list<Subject>& l) {
    cout << setw(10) << left << "ID" << setw(50) << left << "Name of subject" << endl;
    cout << setw(60) << setfill('-') << "" << endl;
    cout << setfill(' ') << endl;
    for (const auto& elem : l) {
        cout << elem << endl;
    }
    cout << endl;
}
void display(const list<Student>& l) {
    cout << setw(20) << left << "Name of student" << setw(20) << left << "Date of birth"
         << setw(20) << left << "ID" << setw(20) << left << "Address"
         << setw(20) << left << "Phone number" << endl;
    cout << setw(100) << setfill('-') << "" << endl;
    cout << setfill(' ') << endl;
    for (const auto& elem : l) {
        cout << elem << endl;
    }
    cout << endl;

}
void GetSubjectInfor(Subject* s) {
    string name;
    string ID1;
    cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cout << "Enter the name of subject: ";
    getline(cin, name);
    cout << "Enter the ID of subject: ";
    getline(cin, ID1);

    Subject s1(name, ID1);
    *s = s1;
}
int main() {
    list<Student> student_list{
            {"An", "Do Thi", "04/02/2000", "BA9001", "Thai Binh", "0968916202"},
            {"Tu", "Le Anh", "13/08/2000", "BA9067","Thanh Hoa","0336407556"}
    };
    auto it1 = student_list.begin();
    list<Subject> subject_list{
            {"Math", "00m"},
            {"English", "00e"}
    };
    auto it = subject_list.begin();

    int choices;
    //subject
    string name;
    string ID1;
    Subject* usth_Subject{ nullptr };
    usth_Subject = new Subject();

    //student
    string first_name;
    string last_name;
    string date_of_birth;
    string ID;
    string address;
    string phone_num;

    do {
        display_menu();
        cin >> choices;
        switch (choices)
        {
            case 1:
                cout << "Adding a new subject" << endl;
                GetSubjectInfor(usth_Subject);
                subject_list.emplace_back(*usth_Subject);
                cout << "The new subject was added!" << endl;

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
                subject_list.erase(it);
                cout << "Successfully delete" << endl;

                break;
            case 5:
                cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                cout << "Adding a new student" << endl;
                cout << "Enter the first name of student: ";
                getline(cin, first_name);
                cout << "Enter the last name of student: ";
                getline(cin, last_name);
                cout << "Enter the date of birth of student: ";
                getline(cin, date_of_birth);
                cout << "Enter the ID of student: ";
                getline(cin, ID);
                cout << "Enter the address of student: ";
                getline(cin, address);
                cout << "Enter the phone number of student: ";
                getline(cin, phone_num);
                student_list.emplace_back(first_name, last_name, date_of_birth, ID, address, phone_num);
                cout << "The new student was added" << endl;

                break;
            case 6:
                cout << "Modify" << endl;
                break;
            case 7:
                display(student_list);
                break;
            case 8:
                cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                cout << "Adding a new student" << endl;
                cout << "Enter the first name of student: ";
                getline(cin, first_name);
                cout << "Enter the last name of student: ";
                getline(cin, last_name);
                cout << "Enter the date of birth of student: ";
                getline(cin, date_of_birth);
                cout << "Enter the ID of student: ";
                getline(cin, ID);
                cout << "Enter the address of student: ";
                getline(cin, address);
                cout << "Enter the phone number of student: ";
                getline(cin, phone_num);
                it1 = find(student_list.begin(), student_list.end(), Student{ first_name, last_name, date_of_birth, ID, address, phone_num });
                student_list.erase(it1);
                cout << "Successfully delete" << endl;

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

    } while (choices != 9);
    return 0;

}