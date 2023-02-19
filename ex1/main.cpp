#include <iostream>
#include<ostream>
#include <string>
#include <list>
#include <iomanip>
#include <algorithm>
#include <iterator>
#include <limits>

using namespace std;
struct Subject{
	friend ostream &operator<< (ostream& os, const Subject& rhs);
	string name;
	string ID1;
    string department;
	Subject() :name{ "Unknown" }, ID1{ "Unknown" }, department {"Unk"}{}
	Subject(string name, string ID)
		:name{name}, ID1{ID}{}
	bool operator<(const Subject& rhs) {
		return this->name < rhs.name;
	}
	bool operator==(const Subject& rhs) const {
		return (this->name == rhs.name && this->ID1 == rhs.ID1);
	}
};
ostream& operator<<(ostream& os, const Subject& rhs) {
	os <<setw(10)<< left << rhs.ID1 <<setw(50)<< left << rhs.name;
	return os;
}
struct Student {
	friend ostream& operator<< (ostream& os, const Student& rhs);
	string first_name;
	string last_name;
	string date_of_birth;
	string ID;
	string address;
	string phone_num;

	Student():first_name{"Unknown"}, last_name{ "Unknown" }, date_of_birth{ "Unknown" },
		ID{ "Unknown"}, address{ "Unknown" }, phone_num{ "Unknown" }{}
	Student(string first_name, string last_name, string birth, string id, string address, string phone)
		:first_name{first_name}, last_name{last_name},date_of_birth{birth}, ID{id}, address{address}, phone_num{phone}{}
	bool operator<(const Student& rhs) {
		string temp1{ this->first_name + this->last_name };
		string temp2{ rhs.first_name + rhs.last_name };
		return (temp1 < temp2);
	}
	bool operator==(const Student& rhs)const {
		return(this->first_name == rhs.first_name && this->last_name == rhs.last_name && this->date_of_birth == rhs.date_of_birth &&
			this->ID == rhs.ID && this->address == rhs.address && this->phone_num == rhs.phone_num);
	}
};
ostream& operator<<(ostream& os, const Student& rhs) {
	os << rhs.first_name <<" " << setw(20) << left << rhs.last_name << setw(20) << left << rhs.date_of_birth 
		                       << setw(20) << left << rhs.ID << setw(20) << left << rhs.address << setw(20) << left << rhs.phone_num;
	return os;
}

void display_menu() {
	cout << "1. Add the subject to the list" << endl;
	cout << "2. Display the subject in the list" << endl;
	cout << "3. Delete the subject in the list" << endl;
	cout << "4. Add the student to the list" << endl;
	cout << "5. Display the student in the list" << endl;
	cout << "6. Delete the student in the list" << endl;
	cout << "7. Sort the subject by name (increasing)" << endl;
	cout << "8. Sort the student by name (increasing)" << endl;
	cout << "9. Quit" << endl;
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
			cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << "Adding a new subject" << endl;
			cout << "Enter the name of subject: ";
			getline(cin, name);
			cout << "Enter the ID of subject: ";
			getline(cin, ID1);
			subject_list.emplace_back(name, ID1);
			cout << "The new subject was added!" << endl;
			
			break;
		case 2:
			display(subject_list);
			break;
		case 3:
			cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			cout << "Delete the subject" << endl;
			cout << "Enter the name of subject: ";
			getline(cin, name);
			cout << "Enter the ID of subject: ";
			getline(cin, ID1);
		    it = find(subject_list.begin(), subject_list.end(), Subject{ name,ID1 });
			subject_list.erase(it);
			cout << "Successfully delete" << endl;
			
			break;
		case 4:
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
		case 5:
			display(student_list);
			break;
		case 6:
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
		case 7:
			subject_list.sort();
			break;
		case 8:
			student_list.sort();
			break;
		case 9:
			cout << "Goodbye" << endl;;
			break;
		default:
			cout << "Unkown sellection, please try again" << endl;
			break;
		}

	} while (choices != 9);
	return 0;

}
