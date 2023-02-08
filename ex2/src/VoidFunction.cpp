//
// Created by AnDTN on 2/8/2023.
//

#include "../includes/VoidFunction.h"
#include "../includes/Subject.h"
#include "../includes/Student.h"
#include <iostream>
#include <list>
#include <iterator>
#include <iomanip>
#include <limits>
#include <ctype.h>


using namespace std;
bool is_alphabet (const string &s){
    for(char c: s){
        if(isalpha(c) || c ==' ')
            return true;
    }
    return false;
}
bool is_number(const string &s){
    for(char c:s)
        if(isdigit(c))
            return true;
    return false;
}
string get_Date_ofBirth(){
    string date{};
    string month{};
    string year{};
    string date_of_birth{};
    bool done1{false}, done2 {false},done3 {false};;
    while (!done1){
        cout<<"Enter the date: ";
        getline(cin, date);
        if(date.length()==2 && is_number(date)){
            done1 = true;
        } else {
            cout << "The type of date is not correct. Please try again!" << endl;
            done1 = false;
        }
    }
    while (!done2){
        cout<<"Enter the moth: ";
        getline(cin,month);
        if( is_number(month) && month.length()==2 ){
            done2 = true;
        } else {
            cout << "The type of month is not correct. Please try again!" << endl;
            done2 = false;
        }
    }
    while(!done3){
        cout<<"Enter the year: ";
        getline(cin, year);
        if( is_number(year) && year.length()==4){
            done3 = true;
        } else {
            cout << "The type of year is not correct. Please try again!" << endl;
            done3 = false;
        }
    }
    date_of_birth = date +"/"+month+"/"+year;
    return date_of_birth;
}
string identify(){
    string temp{};
    string id{};
    bool done{false};
    while (!done){
        cout<<"Enter the numeric part of ID (XXX): ";
        getline(cin,id);
        if(is_number(id) && id.length() == 3){
            done = true;
        } else{
            cout<<"Wrong format of numeric part of ID. Please try again!"<<endl;
            done = false;
        }
    }
    temp = "BA9-" + id;
    return  temp;
}
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
void GetStudentInfor(Student*s){
    bool done{false};
    string first_name;
    string last_name;
    string date_of_birth;
    string ID;
    string address;
    string phone_num;
    cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    while(!done){
        cout << "Enter the first name of student: ";
        getline(cin, first_name);
        cout << "Enter the last name of student: ";
        getline(cin, last_name);
        if(is_alphabet(first_name) && is_alphabet(last_name)){
            done = true;
        } else{
            cout<<"First name or last name is not alphabet. Please try again!"<<endl;
            done = false;
        }
    }
    cout << "Enter the date of birth of student (follow date - month - years."<<endl;
    date_of_birth = get_Date_ofBirth();
    cout << "Enter the ID of student (format of BA-XXX): ";
    ID = identify();
    cout << "Enter the address of student: ";
    getline(cin, address);
    cout << "Enter the phone number of student: ";
    getline(cin, phone_num);

    Student st1 (first_name,last_name,date_of_birth, ID, address,phone_num);
    *s=st1;
}