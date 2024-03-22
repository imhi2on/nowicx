/*
On my honor, I pledge that I have neither received nor provided improper assistance in the 
completion of this assignment. 서명: 전하연 분반: 03 학번: 22300661
*/
#include <iostream>
#include <map>
using namespace std;

int main() {
    cout << "declare a map variable called table\n";
    map<string, int> table;

    cout << "initialize table using array[], insert(), pair<>, make_pair()\n";
    table["Paul"] = 15 ;
    table["Adam"] = 11 ;
    table.insert(pair<string,int>("Pete", 10)) ;
    table.insert(make_pair("John", 21)) ;

    cout << "print table using range-based for loop\n";
    for(auto x: table) {
        cout << "icon: " << x.first << "\t" ;
        cout << "number: " << x.second << endl ;
    }
    
    cout << "print table using iterator\n";
    for (auto x = table.begin() ; x != table.end() ; ++x) { 
        cout << "icon: " << x->first << "\t" ;
        cout << "number: " << x->second << endl ;
    }

    cout << "define and initialize chart using pair<> and make_pair() only" << endl ;
    map<char, int> chart {  pair<char, int>('C', 67),
                            pair<char, int>('A', 65),
                            make_pair('B', 66),
                            make_pair('D', 68)    } ;

    cout << "print chart using range-based for loop\n";
    for(auto x: chart) {
        cout << "ascii: " << x.first << "\t" ;
        cout << "number: " << x.second << endl ;
    }
    cout << chart['B'] << endl ;

    return 0;
}