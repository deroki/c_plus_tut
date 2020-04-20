#include <iostream>
#include <string>

using namespace std;

int main(){
    string s1 {"Apple"};
    string s2 {s1,0,2};
    cout << s2 << endl; // Ap

    string largestring {"this is a test"};
    cout << largestring.substr(0,5) << endl;
    cout << largestring.find("this") << endl;

    string mystring;
    cout << "mete algo aqui" << endl;
    getline(cin, mystring);
    cout << mystring << endl;
    // methods:
    // .erase(start, numberchars)
    // .substr(start, numberchards)
    // .swap(anotherstring)         swap the string between the
    // order alphabeticallly < > 
}