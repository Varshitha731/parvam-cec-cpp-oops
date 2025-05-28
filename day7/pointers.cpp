#include<iostream>
using namespace std;

int main(){
    int a;
    //syntax for declaring the pointer
    // data_type * pointer_name;
    // Assign the adress of a to the pointer
    // datatype of pointer should be same as the datatype of the variable
    //* refers to the pointer variable
    //& refers to the address of the variable
    // ptr refers to the adress of the pointer
    //*ptr refers to the value at the pointer
    int *ptr=&a;
    float decimal;
    float *f=&decimal;
    cout<<" Enter the value of a: ";
    cin>> a;
    cout<<" Enter any decimal value : ";
    cin>> decimal;
    cout<<" Value of a: "<< a << endl;
    cout<<" Address of a: "<< &a << endl;
    cout<<" Value of pointer(ptr): "<< ptr << endl;
    cout<<" Address of ptr: "<< &ptr << endl;
    cout<<" Value printed by ptr : "<< *ptr << endl;

    cout<<" Value of decimal: "<< decimal << endl;
    cout<<" Address of decimal: "<< &decimal << endl;
    cout<<" Value of pointer(f): "<<f<< endl;
    cout<<" Address of ptr: "<< &f << endl;
    cout<<" Value printed by ptr : "<< *f << endl;
}