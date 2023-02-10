#include "includes/main.h"
#include "src/shared/common.cpp"
using namespace std;

int main(){
    string phone_num;
    while (true){
        cout << "Enter the phone number of student: ";
        getline(cin, phone_num);
        if(is_number(phone_num) && phone_num.length() == 10)
            break;
        else
            cout<<"Phone number is digit and the phone number need have 10 nums."<<endl;
    }
}