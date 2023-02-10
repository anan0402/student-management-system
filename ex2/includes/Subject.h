//
// Created by AnDTN on 2/7/2023.
//

#ifndef STUDENT_MANAGEMENT_SYSTEM_SUBJECT_H
#define STUDENT_MANAGEMENT_SYSTEM_SUBJECT_H

using namespace std;

struct Subject {
  friend ostream &operator<<(ostream &os, const Subject &rhs);
  string name;
  string ID1;
  Subject();
  Subject(string name, string ID);
  bool operator<(const Subject &rhs);
  bool operator==(const Subject &rhs) const;

  void set_name(string name);
  string get_name() const;
  void set_id(string ID1);
  string get_id() const;
};

#endif //STUDENT_MANAGEMENT_SYSTEM_SUBJECT_H
