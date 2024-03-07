#include <iostream>
#include <string>

using namespace std ;

int main () {
    string input ;

    cout << "Your Name: " ;
    getline(cin, input) ;
    cout << "Your name is " + input << endl ;

    return 0 ;
}