#include <iostream>
#include <string>

using namespace std;

int main(){
    // cypher app that encryp a string using a key 

    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUWXYZ"};
    string key      {"1234567890qwertyuiopasdfghjklñzxcvbnmQWERTYUIOPASD"};

    string string_input {};
    string new_string {};
    cout << "introduce el string a cypherear" << endl ;
    getline(cin, string_input);

    for (char c : string_input)
    {
        int pos = alphabet.find(c);
        char cyphered_char;
        if (pos == string::npos)
        {
            cyphered_char = c;
        }
        else
        {
            cyphered_char = key[pos];
        }
        new_string.push_back(cyphered_char);
    }

    cout << "string cifrado" << endl;
    cout << new_string << endl;

    string original_string {};
    for (char c : new_string)
    {
        int pos = key.find(c);
        char decyphered_char = alphabet[pos];
        original_string.push_back(decyphered_char);
    }

    cout << "string descifrado" << endl;
    cout << original_string << endl;
}