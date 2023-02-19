//
// Created by AnDTN on 2/13/2023.
//

#ifndef STUDENT_MANAGEMENT_SYSTEM_EX3_SUBJECT_H_
#define STUDENT_MANAGEMENT_SYSTEM_EX3_SUBJECT_H_

class Subject {
  friend ostream &operator<<(ostream &os, const Subject &rhs);
 private:
  string name;
  string id;
  Departments department;
 public:
  Subject();
  Subject(string name, string id, Departments department);
  Subject(const Subject &src);
  ~Subject()=default;

  bool operator<(const Subject &rhs);
  bool operator==(const Subject &rhs) const;
  bool empty ()const;

  void setName(string name) noexcept;
  void setId(string ID1) noexcept;
  string getID()const;
  void setDepartment(Departments department) noexcept;

};

#endif //STUDENT_MANAGEMENT_SYSTEM_EX3_SUBJECT_H_
