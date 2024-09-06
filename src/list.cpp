#include "include/list.h" 

void ListProto::print_menu() {

    int choice ;

    cout << "Hello " + name  << endl ; 
    cout << "******************" << endl ; 
    cout << "1 -  Print List" << endl;
    cout << "2 -  Add to List" << endl;
    cout << "3 -  Delet from List" << endl;
    cout << "4 -  Quit " << endl;
    cout << "Enter your choice and press Enter" << endl;
    cin >> choice ;

    if(choice == 1){
        print_list();
        print_menu();
    }

    if(choice == 2){
        add_item();
        print_menu();
    }
    if(choice == 3){
        delet_item();
        print_menu();
    }
    if(choice == 4){
        exit(0);
    }
    else {
        cout << "The choice that have you entered is not on the list" << endl;
    }

}


void ListProto::print_list() {
    if(list.size() > 1) {
        for(int unsigned i = 0 ; i < list.size() ; i++){
            cout << list[i] + " " << endl;
        }
    }else{
        cout << "list is Empty " << endl ;
    }
    
}

void ListProto::add_item() {
    cout << "Enter the Name : " << endl ;
    cin >> name ;
    if(true){

        list.push_back(name);
    }
    else {
        cout << "Please Enter the Nama :)";
    }
}

void ListProto::delet_item() {
    cout << "Enter the Name : " << endl ;
    cin >> name ;
    if(true){

       list.erase(remove(list.begin(), list.end() , name) , list.end()); 
       cout << "Item deleted Secussufliy" << endl ;
    }
    else {
        cout << "Please Enter the Nama :)";
    }
}