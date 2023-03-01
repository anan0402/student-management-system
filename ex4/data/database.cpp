//
// Created by AnDTN on 2/22/2023.
//
vector<Student> student_vec;
vector<Subject> subject_vec;
vector<SubjectRegister> subject_register_vec;
vector<Teacher> teacher_vec;
vector<Admin> admin_vec{{"111","111","04/02/2023","TC-001"}};
template<typename T>
void readFile(string filename){
  T object;
  string temp = filename;
  vector<T> vec;
//  if (temp == "Student") {
//    vec = student_vec;
//  } else if (temp == "Subject") {
//    vec = subject_vec;
//  } else if (temp == "SubjectRegister") {
//    vec = subject_register_vec;
//  } else if (temp == "Teacher") {
//    vec = teacher_vec;
//  } else if (temp == "Admin") {
//    vec = admin_vec;
//  }
  ifstream in_file(temp);
  if(!in_file){
    cerr<<"Error opening file"<<endl;
  } else{
    while(in_file>>object){
      cout<<object<<endl;
      vec.push_back(object);
    }
  }
  in_file.close();
}