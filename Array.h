#include <iostream>
#include <typeinfo>
using namespace std;

template <typename T> 
//where T: int, double, Complex
class Array
{
public:
    T* arr; //��������� �� ������ ������� �������
    Array(int size); //����������� � �����������
    Array(); // ����������� ��� ����������
    ~Array(); // ����������
    bool operator ==(Array&);
    bool operator !=(Array&);
    T operator [](int index);
    void GenerateArray();

private:
    int size;
};

template <typename T>
Array<T>::Array(int size) //����������� � �����������
{
    this->size = size;
    arr = new T[size];
}
template <typename T>
Array<T>::Array() // ����������� ��� ����������
{
    this->size = 10;
    arr = new T[10];
}
template<typename T> //����������
Array<T>::~Array()
{
    delete[] arr;
}
template<typename T>
bool Array<T>::operator==(Array& arr2) //���������� ��������� ==
{
    if(this->size!=arr2.size) return false;
    for (int i = 0; i < size; i++)
    {
        if (this->arr[i] != arr2[i]) 
            return false;
        else return true;
    }
}
template<typename T>
bool Array<T>::operator!=(Array& arr2) //���������� �������� !=
{
    if (abs(this->size - arr2.size) > 0)
        return true;

    for (int i = 0; i < this->size; i++)
    {
        if (this->arr[i] != arr2[i]) return true;
        else return true;
    }
}
template <typename T> //���������� []
T Array<T>::operator[](int index)
{
    return arr[index];
}

template<typename T>
void Array<T>::GenerateArray() //���������� �������
{
    float input;
    for (int i = 0; i < this->size; i++)
    {
        cout << "Enter array[" << i << "] value: " << endl;
        cin >> input;
        this->arr[i] = (T)input;
    }
}

//template<typename T>
//void Array<T>::GenerateComplexArray()
//{
//    float inputReal;
//    float inputImage;
//    for (int i = 0; i < this->size; i++)
//    {
//        cout << "Enter real value of element[" << i << "]: " << endl;
//        cin >> inputReal;
//        cout << "Enter imaginary value of element[" << i << "]: " << endl;
//        cin >> inputImage;
//        arr[i].SetValue(inputReal, inputImage);
//    }
//}

