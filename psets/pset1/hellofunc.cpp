/*
On my honor honor, I pledge that I have neither received nor provided improper assistance in the completion of this assignment.
서명: 전하연 학번: 22300661
*/
#include <iostream>

void printfunc(int n, char *names[]) {

    if (n < 2) {
        std::string name ;
        std::cout << "Enter a name: " ;
        getline(std::cin, name) ;
        if (name.empty()) {
                name = "World" ;
        }
        std::cout << "Hello " << name << "!" << std::endl ;
    }

    else {
        for(int i=0 ; i<n ;i++) {
            std::cout << "Hello " << names[i] << "!" << std::endl ;
        }
        std::cout << "Hello World!" << std::endl ;
    }

}

int main (int argc, char *argv[]) { 
    char *name[100] ;
    for(int i=0 ; i<argc ;i++) {
        name[i] = argv[i];
    }
    printfunc(argc, name) ;
 
    return 0 ;
}