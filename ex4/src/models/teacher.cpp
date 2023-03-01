//
// Created by AnDTN on 2/21/2023.
//




using namespace std;
Teacher::Teacher() {}
Teacher::Teacher(string firstName,
                 string lastName,
                 string dob,
                 string id,
                 string address,
                 string phoneNumber,
                 vector<Departments> departmentVec)
    : firstName{firstName},
      lastName{lastName},
      dob{dob},
      id{id},
      address{address},
      phoneNumber{phoneNumber},
      departmentVec{departmentVec}{}

bool Teacher::operator<(const Teacher &rhs) {
  string temp1{this->firstName + this->lastName};
  string temp2{rhs.firstName + rhs.lastName};
  return (temp1 < temp2);
}
bool Teacher::operator==(const Teacher &rhs) const {
  return (this->id == rhs.id);
}

void Teacher::setFirstName(string first_name) noexcept {
  this->firstName = first_name;
}
void Teacher::setLastName(string last_name) noexcept {
  this->lastName = last_name;
}
void Teacher::setDateOfBirth(string dob) noexcept {
  this->dob = dob;
}
void Teacher::setID(string id) noexcept {
  this->id = id;
}
string Teacher::getID()const{
  return id;
}
void Teacher::setAddress(string address) noexcept {
  this->address = address;
}
void Teacher::setPhoneNum(string phone_num) noexcept {
  this->phoneNumber = phone_num;
}
void Teacher::setDepartment( vector<Departments> departmentVec) noexcept {
  this->departmentVec = departmentVec;
}
vector<Departments> Teacher::getVec() const{
  return departmentVec;
}
istream &operator>>(istream &is, const Teacher &rhs){
  is>>rhs;
  return is;
}
ostream &operator<<(ostream &os, const Teacher &rhs) {
  os << rhs.firstName << " " << setw(20) << left << rhs.lastName << setw(20)
     << left << rhs.dob
     << setw(20) << left << rhs.id << setw(20) << left << rhs.address
     << setw(20) << left << rhs.phoneNumber;
  for(auto const &elem: rhs.departmentVec)
    os<<elem<<" ";
  return os;
}
