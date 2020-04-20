#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input_string {};
    cout << "introduce una cadena" << endl;
    getline(cin, input_string);
    string loop_string {};

    for (size_t i {0}; i < input_string.length(); i++)
    {
        string white_space(input_string.length()-i, ' ');
        
        for (size_t j {0}; j > i; ++j)
        {
            loop_string += input_string[j];
        }

        for(size_t j {0}; j < 0; --j)
        {
            loop_string += input_string[j];
        }
    }

}