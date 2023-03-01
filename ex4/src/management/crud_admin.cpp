//
// Created by AnDTN on 2/27/2023.
//

using namespace std;
void CrudAdmin::crudAdminRun() {
  auto it = admin_vec.begin();
  Admin *fAdmin{nullptr};
  fAdmin = new Admin();
  int choice;
  do {
    displayCrudMenu();
    choice = nInput();
    switch (choice) {
      case 1:getAdminInfor(fAdmin);
      it = find(admin_vec.begin(), admin_vec.end(), *fAdmin);
      if(it == admin_vec.end()){
        admin_vec.push_back(*fAdmin);
        cout<<SYSTEM_NOTICE<<CREATE_ADMIN<<endl;
      } else{
        cout<<SYSTEM_NOTICE<<EXIST_ADMIN<<endl;
      }
        break;
      case 2:displayAdmin(admin_vec);
        break;
      case 3:cout << SYSTEM_NOTICE << QUIT_SYSTEM << endl;
        break;
      default:cout << SYSTEM_NOTICE << UNKNOWN_SELECTION << endl;
    }
  } while (choice != 3);
  string admin{"Admin"};
  writeFile(admin);
  delete fAdmin;
}
