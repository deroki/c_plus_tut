#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    vector <int> vector1 {};
    vector <int> vector2 {};

    vector1.push_back(10);
    vector1.push_back(20);

    cout << vector1.at(0);
    cout << vector1.at(1);
    cout << vector1.size();

    vector2.push_back(100);
    vector2.push_back(200);

    cout << vector1.at(0);
    cout << vector1.at(1);
    cout << vector1.size();

    vector <vector<int>> vector_2d {};
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);

    vector1.at(0) = 1000;
    cout << "vector1 pos 0 " << vector_2d.at(0).at(0);


}