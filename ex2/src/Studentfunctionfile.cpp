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
    while (true) {
        cin.clear();
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
    // 04/02/2000
    if(!is_number(s.substr(0,1)) )
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

    cout << "Enter the date of birth of student (follow date/month/years): ";
    getline(cin,date_of_birth);
    cout << "Enter the ID of Student (format of BA-XXX) " << endl;
    ID = identify();
    cout << "Enter the address of student: ";
    getline(cin, address);
    cout << "Enter the phone number of student: ";
    getline(cin, phone_num);

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
    cout << "Enter the ID of Student (format of BA-XXX) " << endl;
    ID = identify();
    Student st1(first_name, last_name, date_of_birth, ID, address, phone_num);
    *s = st1;
}
