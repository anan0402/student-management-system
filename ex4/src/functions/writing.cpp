//
// Created by AnDTN on 2/23/2023.
//
using namespace std;
template<typename T>
void writeFile(string filename) {
  string student{"Student"}, subject{"Subject"},
      subject_register{"SubjectRegister"}, teacher{"Teacher"}, admin{"Admin"};
  vector<T> vec;
  if (filename == student) {
    vec = student_vec;
  } else if (filename == subject) {
    vec = subject_vec;
  } else if (filename == subject_register) {
    vec = subject_register_vec;
  } else if (filename == teacher) {
    vec = teacher_vec;
  } else if (filename == admin) {
    vec = admin_vec;
  }
  ofstream out_file;
  out_file.open(filename, ios::trunc | ios::binary);
  if (out_file) {
    for (int i = 0; i < vec.size(); ++i) {
      out_file << vec[i] << endl;
    }
  } else {
    cerr << "Error creating file" << endl;
  }
  out_file.close();
}