//
// Created by AnDTN on 2/8/2023.
//

using namespace std;

void GetSubjectInfor(Subject *s) {
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
void display(const list<Subject> &l) {
    cout << setw(10) << left << "ID" << setw(50) << left << "Name of subject" << endl;
    cout << setw(60) << setfill('-') << "" << endl;
    cout << setfill(' ') << endl;
    for (const auto &elem: l) {
        cout << elem << endl;
    }
    cout << endl;
}

