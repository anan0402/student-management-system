//
// Created by AnDTN on 2/27/2023.
//

using namespace std;
void displayAdmin(vector<Admin> &admin_vec) {
  for (const auto &elem : admin_vec) {
    cout << elem << "      ";
  }
  cout << endl;
}
void getAdminInfor(Admin *s) {
  string username;
  string password;
  string date;
  string teacherID;
  Teacher *fTeacher{nullptr};
  fTeacher = new Teacher();
  while (true) {
    username = sInput(USERNAME_INPUT);
    if (!username.empty()) {
      cout << SYSTEM_NOTICE << SUCCESS << endl;
      break;
    } else {
      cout << SYSTEM_NOTICE << WRONG_FORMAT << endl;
    }
  }
  while (true) {
    password = sInput(PASSWORD_INPUT);
    if (!password.empty()) {
      cout << SYSTEM_NOTICE << SUCCESS << endl;
      break;
    } else {
      cout << SYSTEM_NOTICE << WRONG_FORMAT << endl;
    }
  }
  while (true) {
    cout << DT_ANNOUNCEMENT << endl;
    date = sInput(DATE_INPUT);
    if (checkDate(date)) {
      cout << SYSTEM_NOTICE << SUCCESS << endl;
      break;
    } else {
      cout << SYSTEM_NOTICE
           << WRONG_FORMAT << endl;
    }
  }
  while (true) {
    getTeacherID(fTeacher);
    auto it = find(teacher_vec.begin(), teacher_vec.end(), *fTeacher);
    if (it != teacher_vec.end()) {
      teacherID = it->getID();
      cout << SYSTEM_NOTICE << SUCCESS << endl;
      break;
    } else {
      cout << SYSTEM_NOTICE << DONT_EXIST_TEACHER << endl;
    }
  }
  delete fTeacher;
  Admin st1(username, password, date, teacherID);
  *s = st1;
}

