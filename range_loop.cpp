#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    vector <double> temps {12.5, 5.5, 3.45, 78.4};

    for (auto temp : temps)
    {
        cout << temp << endl;
    }

    cout << "ahora pongo el rango sin vector/array" << endl;
    for (auto temp : {12.5, 5.5, 3.45, 78.4})
    {
        cout << temp << endl;
    }

    cout << "tambien con strings\n" ;

    for (auto character : "MISTRING")
    {
        cout << character << endl;
    }

    //como cambiar la precision de cout
    //#include <iomanip>
    //cout << fixed << setprecision(1);   solo un decimal

}