#include "include/list.h"


int main(int arg_count , char *args[]) {

    if(arg_count > 1){
        ListProto list ;
        list.name = args[1] ;
        list.print_menu();
    }
    else {
        cout << "there is no username supplied ..." << endl ; 
    }
    return 0 ;
}

 