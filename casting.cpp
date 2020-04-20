#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    int total {13};
    int numerof {5};

    double average {};
    //esta parte es la que importa
    average = static_cast<double>(total)/numerof;

    cout << average << endl;


}