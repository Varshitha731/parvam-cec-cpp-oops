#include<iostream>
using namespace std;

class Calculate{
    public:
    // member data
        int num1,num2;
        float result;
    //constructor 
    //default (no -arameters)
     Calculate(){
        num1=5;
        num2=15;
    }
    

    void showOutput(){
        cout<<"Addition : "<< num1+num2 <<endl;
        cout<<"Difference : "<< num1-num2 <<endl;
        cout<<"Product : "<< num1*num2 <<endl;
        cout<<"Quotient: "<< num2/num1 <<endl;
        cout<<"Remainder : "<< num2%num1 <<endl;
    }
};
int main(){
    //initiaizing the value using constructor
    Calculate c1;
      // cal1 is obeject
    Calculate c2;
    c2.num1=25;
    c2.num2=30;
    c1.showOutput();
    c2.showOutput();


}