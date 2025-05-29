#include<iostream>
using namespace std;

int main(){
    int age;
    int *ptrAge=&age;
    string name;
    string *namePtr=&name;
    //*ptrAge & *namePtr - pointer differencing
    cout<< " Enter your name & age : ";
    cin>>name>>age;  // input name and age
    cout<<" Your Name is "<< (*namePtr) << " , Your "<< (*ptrAge) << " , years old."<<endl;
    cout<<" The adress of name is stored in pointer(namePtr) : "<<namePtr<<endl;
    cout<<" The adress of age is stored in pointer(ptrAge) : "<<ptrAge<<endl;

    int *num1 = new int(5); // Dynamically allocate memory for an integer
    //the reference variable is not needed foe assinging the adress to the pointer we can use new keyword
    cout<< "The value within the pointer num1 : "<<(*num1)<<endl;
    int size;
    int *arr = new int[size]; //Dynamic memory allocation for integer array(run-time)
    cout<<"Enter the size of the array : "<<endl;
    cin>> size;
    cout<<" Enter the "<<size<<" elements of the array : ";
    for(int i=0; i<size; i++){
        cin>> arr[i];
    }
    cout<<" The array contains "<<size<<"  elements , They are :"<<endl;
    for(int i=0; i<size; i++){
        cout<< arr[i]<<endl;
    }
}