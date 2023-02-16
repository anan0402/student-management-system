//
// Created by AnDTN on 2/9/2023.
//
using namespace std;

void display(const list<Student> &l) {
  cout << setw(20) << left << "Name of Student" << setw(20) << left
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
      cout << SYSTEM_NOTICE << "The ID is requireable." << endl;
    } else {
      if (isNumber(id)) {
        break;
      } else {
        cout << SYSTEM_NOTICE
             << "Wrong format of numeric part of ID. Please try again!" << endl;
      }
    }
  }
  temp = "BA9-" + id;
  return temp;
}
bool checkDateOfBirth(const string &s) {
  // 04/02/2000

  if (s.length() != 10) {
    cout << DOB_ERROR << endl;
    return false;
  }
  for (char c : s)
    if (!isdigit(c) && c != '/' || c == ' ')
      return false;
  if (stoi(s.substr(0, 2)) < 1 || stoi(s.substr(0, 2)) > 31) {
    cout << SYSTEM_NOTICE << "Day is not larger than 31" << endl;
    return false;
  }
  if (stoi(s.substr(3, 2)) < 1 || stoi(s.substr(3, 2)) > 12) {
    cout << SYSTEM_NOTICE << "Moth is not larger than 12" << endl;
    return false;
  }
  if (isNumber(s.substr(0, 3)) && isNumber(s.substr(3, 3)))
    return false;
  return true;
}

void getStudentInfor(Student *s) {
  string first_name;
  string last_name;
  string date_of_birth;
  string ID;
  string address;
  string phone_num;
  while (true) {
    first_name = sinput("Enter the first name of Student: ");
    if (!first_name.empty() && checkName(first_name, false)) {
      break;
    } else {
      cout << FN_ERROR << endl;
    }
  }
  while (true) {
    last_name = sinput("Enter the last name of Student: ");
    if (!last_name.empty() && checkName(last_name, true)) {
      break;
    } else {
      cout << LN_ERROR << endl;
    }
  }
  while (true) {
    date_of_birth =
        sinput("Enter the date of birth of Student (follow date/month/years): ");
    if (checkDateOfBirth(date_of_birth)) {
      break;
    } else {
      cout << SYSTEM_NOTICE
           << "Uncorrected format of date of birth. Please try again!" << endl;
    }
  }
  ID = identify();
  address = sinput("Enter the address of Student: ");
  if (address.empty()) {
    cout << SYSTEM_NOTICE << "The address is empty." << endl;
  }
  while (true) {
    phone_num = sinput("Enter the phone number of Student: ");
    if (!phone_num.empty()) {
      if (isNumber(phone_num) && phone_num.length() == 10)
        break;
      else
        cout << PHONE_ERROR << endl;
    } else {
      cout << SYSTEM_NOTICE << "The phone number is empty." << endl;
      break;
    }
  }
  Student st1(first_name, last_name, date_of_birth, ID, address, phone_num);
  *s = st1;
}

void getStudentID(Student *s) {
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
void studentModify() {
  cout << "1. Modify first name" << endl;
  cout << "2. Modify last name" << endl;
  cout << "3. Modify date of birth" << endl;
  cout << "4. Modify the ID" << endl;
  cout << "5. Modify the address" << endl;
  cout << "6. Modify the phoneNum" << endl;
  cout << "7. Quit" << endl;
  cout << "========================" << endl;
  cout << "Enter your choices: ";
}
void modify(Student *s) {
  string first_name;
  string last_name;
  string date_of_birth;
  string ID;
  string address;
  string phone_num;
  int choice;
  do {
    studentModify();
    choice = ninput();
    switch (choice) {
      case 1:
        while (true) {
          first_name = sinput("Enter the first name of Student: ");
          if (!first_name.empty() && checkName(first_name, false)) {
            break;
          } else {
            cout << FN_ERROR << endl;
          }
        }
        s->setFirstName(first_name);
        break;
      case 2:
        while (true) {
          last_name = sinput("Enter the last name of Student: ");
          if (!last_name.empty() && checkName(last_name, true)) {
            break;
          } else {
            cout << LN_ERROR << endl;
          }
        }
        s->setLastName(last_name);
        break;
      case 3:
        while (true) {
          date_of_birth =
              sinput(
                  "Enter the date of birth of Student (follow date/month/years): ");
          if (checkDateOfBirth(date_of_birth)) {
            break;
          } else {
            cout << SYSTEM_NOTICE
                 << "Uncorrected format of date of birth. Please try again!"
                 << endl;
          }
        }
        s->setDateOfBirth(date_of_birth);
        break;
      case 4:ID = identify();
        s->setID(ID);
        break;
      case 5:address = sinput("Enter the address of Student: ");
        if (address.empty()) {
          cout << SYSTEM_NOTICE << "The address is empty." << endl;
        }
        s->setAddress(address);
        break;
      case 6:
        while (true) {
          phone_num = sinput("Enter the phone number of Student: ");
          if (!phone_num.empty()) {
            if (isNumber(phone_num) && phone_num.length() == 10)
              break;
            else
              cout << PHONE_ERROR << endl;
          } else {
            cout << SYSTEM_NOTICE << "The phone number is empty." << endl;
            break;
          }
        }
        s->setPhoneNum(phone_num);
        break;
      case 7:cout << SYSTEM_NOTICE << "Good bye" << endl;
        break;
      default:
        cout << SYSTEM_NOTICE
             << "The selection is not correct. Please try again." << endl;
        break;
    }
  } while (choice != 7);

}