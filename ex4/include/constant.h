//
// Created by AnDTN on 2/21/2023.
//

#ifndef STUDENT_MANAGEMENT_SYSTEM_EX4_INCLUDE_CONSTANT_H_
#define STUDENT_MANAGEMENT_SYSTEM_EX4_INCLUDE_CONSTANT_H_
#define INVALID_INPUT "User input is not a valid department!"
#define ICT_DEPARTMENT "ICT"
#define FST_DEPARTMENT "FST"
#define CS_DEPARTMENT "CS"
#define MST_DEPARTMENT "MST"
#define CHEM_DEPARTMENT "CHEM"
#define AE_DEPARTMENT "AE"
#define NANO_DEPARTMENT "NANO"
#define MATH_DEPARTMENT "MATH"
#define WEO_DEPARTMENT "WEO"
#define SPACE_DEPARTMENT "SPACE"

#define THE_SYSTEM_MENU "The system menu\n  1. CRUD admins \n 2. CRUD subjects\n 3. CRUD students\n 4. CRUD subject register\n 5.CRUD teacher\n 6.Sort data\n 7. Quit\n "


#define SELECTIONS "Enter your selection: "
#define UNKNOWN_SELECTION "Unknown selection, please try again!"
#define QUIT_SYSTEM "Goodbye!"
#define SUCCESS "Successful!"
#define SYSTEM_NOTICE "[#]~"

#define THE_CRUD_MENU "The management menu\n 1. Create\n 2. Display\n 3. Update or Modify\n 4. Delete\n 5. Quit\n"

#define LOGIN_ANNOUNCEMENT "Please enter correct user name and password. Wrong password more the 3 times, the system will close."
#define USER_NAME_ANNOUNCEMENT "Enter user name to login system: "
#define PASS_WORD_ANNOUNCEMENT "Enter password to login system: "
#define USER_NAME "Anhtuan@1308"
#define PASS_WORD "123456"
#define CANNOT_LOGIN "The user name or pass word is not correct. Please try again!"
#define LOGOUT_ANNOUNCEMENT "Do you want to logout the system ? Enter yes or no (Y/N).\n Enter 1 = Y, you will quit the system.\n Enter 0 = N, the system will be continue.\n Enter your choice (1=Y/0=N): "
#define SYSTEM_CONTINUE "The system still continue."
#define SUCCESSFUL_LOGOUT "See you later!"
#define SUCCESSFUL_LOGIN "Successful login!"


#define STUDENT_ID_ANNOUNCEMENT "The Student ID have the format (BA9-XXX). You just need to enter the numeric part of ID."
#define TEACHER_ID_ANNOUNCEMENT "The Teacher ID have the format (TC-XXX). You just need to enter the numeric part of ID."
#define NUMERIC "Enter the numeric part of ID (XXX): "
#define DT_ANNOUNCEMENT "Date is requireable and, the length of string need to be equal to 10."
#define PRESENT_YEAR_INPUT "Enter the present years: "
#define DOB_INPUT "Enter the date of birth (follow date/month/years): "
#define DAY_ERROR "Day is not larger than 31."
#define MOTH_ERROR  "Moth is not larger than 12."
#define FN_ANNOUNCEMENT "First name  is alphabet and requireable , preventing enter number, empty string and space."
#define FN_INPUT "Enter the first name of Student: "
#define LN_ANNOUNCEMENT "Last name is alphabet and requireable , preventing enter number, empty string and space."
#define LN_INPUT "Enter the last name of Student: "
#define ADDRESS_INPUT "Enter the address of Student: "
#define PHONE_ANNOUNCEMENT "Phone number is digit and the phone number need have 10 nums."
#define PHONE_INPUT "Enter the phone number of Student: "
#define DEPARTMENT_ANNOUNCE "There are 10 department that you can enter.\n ICT = 0\n FST = 1\n CS = 2\n MST = 3\n CHEM = 4\n AE = 5\n NANO = 6\n MATH = 7\n WEO = 8\n SPACE = 9\n"
#define DEPARTMENT_INPUT "Enter the department (number from 0->9):"
#define NUM_DEPARTMENT "How many num of department that teacher have? "

#define USERNAME_INPUT "Enter new username: "
#define PASSWORD_INPUT "Enter new password: "
#define DATE_INPUT "Enter the date: "


#define SUBJECT_NAME_ANNOUNCEMENT "Name  is alphabet and requireable , preventing enter number, empty string and space."
#define SUBJECT_NAME_INPUT "Enter the name of Subject: "
#define SUBJECT_ID_INPUT "Enter the ID of Subject: "
#define THE_SUBJECT_MODIFY_MENU "The modify menu\n 1. Modify name\n 2. Modify ID\n 3. Modify the department\n 4. Quit\n"

#define DISALLOW_EMPTY "Empty is not allow."
#define EMPTY "Empty"
#define WRONG_FORMAT "Wrong format. Please try again!"

#define THE_MODIFY_MENU "The modify menu\n 1. Modify first name\n 2. Modify last name\n 3. Modify date of birth\n 4. Modify the ID\n 5. Modify the address\n 6. Modify the phoneNum\n 7. Modify the department\n 8. Quit\n"

#define CREATE_STUDENT "The new student was added."
#define EXIST_STUDENT "The student already exist."
#define MODIFY_STUDENT "The student was modified."
#define DONT_EXIST_STUDENT "The student dont exist."

#define CREATE_TEACHER "The new teacher was added."
#define EXIST_TEACHER "The teacher already exist."
#define MODIFY_TEACHER "The teacher was modified."
#define DONT_EXIST_TEACHER "The teacher dont exist."

#define CREATE_SUBJECT "The new subject was added."
#define EXIST_SUBJECT "The subject already exist."
#define MODIFY_SUBJECT "The subject was modified."
#define DONT_EXIST_SUBJECT "The subject dont exist."


#define CREATE_SUBJECT_REGISTER "The new subject register was added."
#define EXIST_SUBJECT_REGISTER "The subject register already exist."
#define MODIFY_SUBJECT_REGISTER "The subject register was modified"
#define DONT_EXIST_SUBJECT_REGISTER "The subject register dont exist."


#define CREATE_ADMIN "The new admin was added."
#define EXIST_ADMIN "The admin already exist."


#define SUBJECT_REGISTER "The student list of subject: "
#define CLASS_CODE "The code: "

#define GET_SUBJECT_ID_ANNOUNCE "The subject id is requireable. If the subject id is empty, the loop is never end."
#define GET_SUBJECT_ID "Enter the subject id: "
#define GET_STUDENT_ID "Enter the student id: "
#define GET_CLASS_CODE_ANNOUNCE "The code is requireable. If the code is empty, the loop is never end."
#define GET_CLASS_CODE "Enter the class code: "
#define GET_DATE "Enter the date: "

#define SORT_DATE_MENU "The sort menu\n 1. Sort the student_vec\n 2. Sort the subject_vec\n 3. Sort the teacher_vec\n 4. Sort the subject_register_Vec\n 5.Quit\n"

#define THE_SUBJECT_REGISTER_MENU "The modify menu\n 1.Modify the date\n 2.Add new student\n 3.Modify the teacher 4.Quit\n"

#define THE_EMPTY_VECTOR "The vector is empty"

#define SUCCESSFUL_DELETE "Successfully delete"

#define STUDENT_FILE_NAME "student_vec.txt"
#define SUBJECT_FILE_NAME "subject_vec.txt"
#define TEACHER_FILE_NAME "teacher_vec.txt"
#define ADMIN_FILE_NAME "admin_vec.txt"
#define SUBJECT_REGISTER_FILE_NAME "subject_register_vec.txt"
#endif //STUDENT_MANAGEMENT_SYSTEM_EX4_INCLUDE_CONSTANT_H_
