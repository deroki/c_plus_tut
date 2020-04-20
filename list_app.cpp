#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector <int> list_num {1, 3, 5, 78};
    char selection {};
    while(true)
    {
        cout << "----------------------" << endl;
        cout << "P - Print numbers" << endl;
        cout << "A - Add numbers" << endl;
        cout << "M - Display Mean numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display de largest number" << endl;
        cout << "Q - Quit" << endl;
        cin >> selection;

        switch (selection)
        {
        case 'P':
            for (auto num : list_num)
            {
                cout << num << " " << endl;
            }
            break;
        
        case 'A':
            {
            cout << "add a number" << endl;
            int new_num {0};
            cin >> new_num;
            list_num.push_back(new_num);
            break;
            }

        case 'M':
            {
            int sum {0};
            for (auto num : list_num)
            {
                sum += num;
            }
            cout << static_cast<float>(sum)/list_num.size() << endl;
            break;
            }

        case 'S':
            {
            if (list_num.size() == 0)
                {
                    cout << "no numbers in vector" << endl;    break;
                }
            
            int smallest {0};
            smallest = list_num[0];
            for (auto num : list_num)
            {
                if (num < smallest)
                    smallest = num;    
            }
            cout << "the smallest number is " << smallest << endl;
            break;
            }

        case 'L':
            {
            if (list_num.size() == 0)
            {
                cout << "no numbers in vector" << endl;    break;
            }
            
            int largest {0};
            largest = list_num[0];
            for (auto num : list_num)
            {
                if (num > largest)
                    largest = num;    
            }

            cout << "the smallest number is " << largest << endl;
            break;
            }
        
        case 'Q':
            cout << "Terminando..." << endl;
            exit(0);




        default:
            break;
        }

    }
}