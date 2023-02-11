//
// Created by AnDTN on 2/9/2023.
//
using namespace std;

void display(const list<Student> &l) {
  cout << setw(20) << left << "Name of student" << setw(20) << left
       << "Date of birth"
       << setw(20) << left << "ID" << setw(20) << left << "Address"
       << setw(20) << left << "Phone number" << endl;
  cout << setw(100) << setfill('-') << "" << endl;
  cout << setfill(' ') << endl;
  for (const auto &elem : l) {
    cout << elem << endl;
  }
  cout << endl;

}
string identify() {
  string temp{};
  string id{};
  while (true) {
    cout << STUDENT_ID_ERROR << endl;
    id = sinput("Enter the numeric part of ID (XXX): ");
    if (id.empty()) {
      cout <<SYSTEM_NOTICE << "The ID is requireable." << endl;
    } else {
      if (is_number(id)) {
        break;
      } else {
        cout<<SYSTEM_NOTICE  << "Wrong format of numeric part of ID. Please try again!" << endl;
      }
    }
  }
  temp = "BA9-" + id;
  return temp;
}
bool check_date_of_birth(const string &s) {
  if (s.length() != 10) {
    cout << DOB_ERROR << endl;
    return false;
  }
  for (char c : s)
    if (!isdigit(c) && c != '/' || c == ' ')
      return false;
  if (stoi(s.substr(0, 2)) < 0 || stoi(s.substr(0, 2)) > 31) {
    cout <<SYSTEM_NOTICE << "Day is not larger than 31" << endl;
    return false;
  }
  if (stoi(s.substr(3, 2)) < 0 || stoi(s.substr(3, 2)) > 12) {
    cout <<SYSTEM_NOTICE << "Moth is not larger than 12" << endl;
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
  while (true) {
    first_name = sinput("Enter the first name of student: ");
    if (!first_name.empty() && checkName(first_name, false)) {
      break;
    } else {
      cout << FN_ERROR << endl;
    }
  }
  while (true) {
    last_name= sinput("Enter the last name of student: ");
    if (!last_name.empty() && checkName(last_name, true)) {
      break;
    } else {
      cout << LN_ERROR << endl;
    }
  }
  while (true) {
    date_of_birth =
        sinput("Enter the date of birth of student (follow date/month/years): ");
    if (check_date_of_birth(date_of_birth)) {
      break;
    } else {
      cout <<SYSTEM_NOTICE <<"Uncorrected format of date of birth. Please try again!" << endl;
    }
  }
  ID = identify();
  address = sinput("Enter the address of student: ");
  if (address.empty()) {
    cout <<SYSTEM_NOTICE <<"The default value of address was used" << endl;
  }
  while (true) {
    phone_num= sinput("Enter the phone number of student: ");
    if (!phone_num.empty()) {
      if (is_number(phone_num) && phone_num.length() == 10)
        break;
      else
        cout <<PHONE_ERROR<< endl;
    } else {
      cout <<SYSTEM_NOTICE <<"The default value of address was used." << endl;
      break;
    }
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

void modify(Student*s){
 string first_name;
  first_name = sinput("Enter the modify name: ");
  s->set_FirstName(first_name);
  cout<<s->first_name<<endl;
}