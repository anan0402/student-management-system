//
// Created by AnDTN on 2/9/2023.
//
using namespace std;

void display(const list<Student> &l) {
    cout << setw(20) << left << "Name of student" << setw(20) << left << "Date of birth"
         << setw(20) << left << "ID" << setw(20) << left << "Address"
         << setw(20) << left << "Phone number" << endl;
    cout << setw(100) << setfill('-') << "" << endl;
    cout << setfill(' ') << endl;
    for (const auto &elem: l) {
        cout << elem << endl;
    }
    cout << endl;

}
string identify() {
    string temp{};
    string id{};
    cin.ignore();
    while (true) {
        cout<<"The student ID have the format (BA9-XXX). You just need to enter the numeric part of ID."<<endl;
        cout << "Enter the numeric part of ID (XXX): ";
        getline(cin, id);
        if (is_number(id) && id.length() == 3) {
            break;
        } else {
            cout << "Wrong format of numeric part of ID. Please try again!" << endl;
            break;
        }
    }
    temp = "BA9-" + id;
    return temp;
}
bool check_date_of_birth(const string &s){
    if(s.length() != 10){
        cout<<"The length of string need to be equal to 10"<<endl;
        return false;
    }
    for (char c: s)
        if(!isdigit(c) && c != '/' || c== ' ')
            return false;
    if(stoi(s.substr(0,2))<0 || stoi(s.substr(0,2)) >31){
        cout<<"Day is not larger than 31"<<endl;
        return false;
    }
    if(stoi(s.substr(3,2))<0 || stoi(s.substr(3,2)) >12){
        cout<<"Moth is not larger than 12"<<endl;
        return false;
    }
    return true;
}

void GetStudentInfor(Student *s) {
    string first_name;
    string last_name;
    string date_of_birth;
    string ID;
    string address;
    string phone_num;
    cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    while (true){
        cout << "Enter the first name of student: ";
        getline(cin, first_name);
        if (checkName(first_name, false)) {
            break;
        } else {
            cout << "First name  is not alphabet. Please try again!" << endl;
        }
    }
    while (true) {
        cout << "Enter the last name of student: ";
        getline(cin, last_name);
        if (checkName(last_name, true)) {
            break;
        } else {
            cout << "Last name is not alphabet. Please try again!" << endl;
        }
    }
    while (true){
        cout << "Enter the date of birth of student (follow date/month/years): ";
        getline(cin,date_of_birth);
        if(check_date_of_birth(date_of_birth)){
            break;
        }else{
            cout<<"Uncorrected format of date of birth. Please try again!"<<endl;
        }
    }
    cout << "Enter the ID of Student (format of BA-XXX) " << endl;
    ID = identify();
    cout << "Enter the address of student: ";
    getline(cin, address);
    while (true){
        cout << "Enter the phone number of student: ";
        getline(cin, phone_num);
        if(is_number(phone_num) && phone_num.length() == 10)
            break;
        else
            cout<<"Phone number is digit and the phone number need have 10 nums."<<endl;
    }
    Student st1(first_name, last_name, date_of_birth, ID, address, phone_num);
    *s = st1;
}

void GetIDofStudent(Student *s) {
    string first_name;
    string last_name;
    string date_of_birth;
    string ID;
    string address;
    string phone_num;
    ID = identify();
    Student st1(first_name, last_name, date_of_birth, ID, address, phone_num);
    *s = st1;
}