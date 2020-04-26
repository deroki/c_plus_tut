#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input_string {};
    cout << "introduce una cadena" << endl;
    getline(cin, input_string);
    string loop_string {};

    for (int i {0}; i < input_string.length(); i++)
    {
        string white_space(input_string.length()-i, ' ');

        for (int j {0}; j <= i; j++)
        {
            loop_string += input_string[j];
        }
 
        for(int j {i - 1}; j >= 0; j--)
        {
            loop_string += input_string[j];
        }

        cout << white_space << loop_string << endl;
        loop_string.clear();
    }

    return 0;
}