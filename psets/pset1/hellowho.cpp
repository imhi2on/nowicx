/*
On my honor honor, I pledge that I have neither received nor provided improper assistance in the completion of this assignment.
서명: 전하연 학번: 22300661
*/

#include <iostream>
#include <string>

using namespace std ;

int main () {
    string input ;

    cout << "Enter a name: " ;
    getline(cin, input) ;
    if (input.empty()) {
        input = "World" ;
    }
    cout << "Hello " << input << "!" << endl ;

    return 0 ;
}