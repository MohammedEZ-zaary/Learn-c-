#include <iostream>   // Preprocessor direrctory
#include <string>
#include <vector>
#include <algorithm>

using namespace std ;
class ListProto {
    private:
    // you can access it just from the original class which is ListProto.
    protected:
    // you can access those from inherted classes and belongs to class.
    public:
        // you can access it from  any where.

        // constructor 
        ListProto(){
            // constructor
        }
        ~ListProto(){
            // destructor when your program close the object you can clean garbge
        }
        // Global Varibles //
        vector<string> list ;
        string  name ;


        // INTERFACES_PROTOTYPE 
        void print_menu() ;
        void print_list() ;
        void add_item();
        void delet_item() ;
} ;