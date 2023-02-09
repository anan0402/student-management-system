//
// Created by AnDTN on 2/7/2023.
//

Subject::Subject() :name{ "Unknown" }, ID1{ "Unknown" } {}
Subject::Subject(string name, string ID)
        :name{ name }, ID1{ ID } {}
bool Subject::operator<(const Subject& rhs) {
    return this->name < rhs.name;
}
bool Subject::operator==(const Subject& rhs) const {
    return (this->name == rhs.name && this->ID1 == rhs.ID1);
}
void Subject::set_name(string name) {
    this->name = name;
}
string Subject::get_name()const {
    return name;
}
void Subject::set_id(string ID1) {
    this->ID1 = ID1;
}
string Subject::get_id()const {
    return ID1;
}

ostream& operator<<(ostream& os, const Subject& rhs) {
    os << setw(10) << left << rhs.ID1 << setw(50) << left << rhs.name;
    return os;
}