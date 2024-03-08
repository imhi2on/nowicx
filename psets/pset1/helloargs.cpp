/*
On my honor honor, I pledge that I have neither received nor provided improper assistance in the completion of this assignment.
서명: 전하연 학번: 22300661
*/

#include <iostream>
#include <string>
#include <sstream>

using namespace std ;

int main (int argc, char *argv[]) {
    string input ;

    if (argc < 2) {
        cout << "Enter a name: " ;
        getline(cin, input) ;
        if (input.empty()) {
                input = "World" ;
        }
        cout << "Hello " << input << "!" << endl ;
    }
    else {
        for (int i = 1 ; i < argc ; i++) {
            // stringstream 
            cout << "Hello " << argv[i] << "!" << endl ;
        }
        cout << "Hello World!" << endl ;
    }

    return 0 ;
}