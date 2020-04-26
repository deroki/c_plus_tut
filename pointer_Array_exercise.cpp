#include <iostream>
#include <string>

using namespace std;

int *apply_all(int *array1, size_t s1, int *array2, size_t s2);
void print_array(int *array, size_t s);


int main(){
    int array1[] {1,2,3,4,5};
    int array2[] {1,2,3};
    int *array3; 
    array3 = apply_all(array1, 5, array2,3);
    print_array(array3, 15);
    delete[] array3;

    return 0;
}

int *apply_all(int *array1, size_t s1, int *array2, size_t s2)
{
    int *new_array {nullptr};
    size_t size_array = s1*s2;
    new_array = new int[size_array];
    int position = 0;

    for (int i{0}; i<s2; i++)
    {
        for (int j{0}; j<s1; j++)
        {
            new_array[position] = array2[i]*array1[j];
            position++;
        }
    }
    return new_array;
}

void print_array(int *array, size_t s)
{
    for(int i{0}; i<s; i++)
    {
        cout << array[i] << " ";
    }
    cout << endl;
}