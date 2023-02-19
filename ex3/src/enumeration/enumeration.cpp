//
// Created by AnDTN on 2/14/2023.
//
//enum Departments {ICT, FST, CS, MST, CHEM, AE, NANO, MATH, WEO, SPACE};
using namespace std;
bool isValidDepartment(Departments department) {
  switch (department) {
    case ICT:
    case FST:
    case CS:
    case MST:
    case CHEM:
    case AE:
    case NANO:
    case MATH:
    case WEO:
    case SPACE:return true;
    default:return false;
  }
}
istream &operator>>(istream &is, Departments &department) {
  underlying_type_t<Departments> user_input;
  is >> user_input;
  switch (user_input) {
    case ICT:
    case FST:
    case CS:
    case MST:
    case CHEM:
    case AE:
    case NANO:
    case MATH:
    case WEO:
    case SPACE:department = Departments(user_input);
      break;
    default:cout << INVALID_INPUT << endl;
  }
  return is;
}
ostream &operator<<(ostream &os, const Departments &department) {
  switch (department) {
    case ICT:os << ICT_DEPARTMENT;
      break;
    case FST:os << FST_DEPARTMENT;
      break;
    case CS:os << CS_DEPARTMENT;
      break;
    case MST:os << MST_DEPARTMENT;
      break;
    case CHEM:os << CHEM_DEPARTMENT;
      break;
    case AE:os << AE_DEPARTMENT;
      break;
    case NANO:os << NANO_DEPARTMENT;
      break;
    case MATH:os << MATH_DEPARTMENT;
      break;
    case WEO:os << WEO_DEPARTMENT;
      break;
    case SPACE:os << SPACE_DEPARTMENT;
      break;
  }
  return os;
}
