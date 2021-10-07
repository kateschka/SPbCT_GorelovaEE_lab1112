/*Класс - одномерный массив. Дополнительно перегрузить следующие операции:
[] - доступ по индексу;
= = - проверка на равенство;
!= - проверка на неравенство.
*/
#include <iostream>
#include "Array.h"
using namespace std;

int main()
{
    int dataType = 0;
    int size1 = 0, size2 = 0;
    cout << "Enter first array size: ";
    cin >> size1;
    cout << "Enter second array size: ";
    cin >> size2;
    cout << "Choose data type: \n1) int \n2) double " << endl;
    cin >> dataType;
    if (dataType == 1) 
    { 
        Array<int> arr1(size1);
        cout << "Please fill in the values of the first array:" << endl;
        arr1.GenerateArray();
        Array<int> arr2(size2);
        cout << "Please fill in the values of the second array:" << endl;
        arr2.GenerateArray();
        bool equal = (arr1 == arr2);
        if (equal)
            cout << "Arrays are the same" << endl;
        else
            cout << "Arrays are not the same" << endl;
    }
    if (dataType == 2)
    {
        Array<double> arr1(size1);
        cout << "Please fill in the values of the first array:" << endl;
        arr1.GenerateArray();
        Array<double> arr2(size2);
        cout << "Please fill in the values of the second array:" << endl;
        arr2.GenerateArray();
        bool equal = (arr1 == arr2);
        if (equal)
            cout << "Arrays are the same" << endl;
        else
            cout << "Arrays are not the same" << endl;
    }
}

