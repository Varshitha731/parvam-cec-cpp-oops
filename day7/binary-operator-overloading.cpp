#include<iostream>
using namespace std;
class Complex{
    int real,imaginary;  //private data
    public:
        Complex(){  //Default constructor
            real=0;
            imaginary=0;
        }
        Complex(int r,int i){  //parametrized constructo
            real=r;
            imaginary=i;
        }
        //binary operator overloading
        Complex operator +(const Complex &c){
            Complex temp;
            temp.real=real + c.real;
            temp.imaginary=imaginary + c.imaginary;
            return temp;
        }
        void showSum(){
            cout<<"Sum of two complex numbers : "<<real<<" + "<<imaginary<<" i "<<endl;
        }
};
int main(){
    int r1,r2,i1,i2;
    cout<<" Enter the first complex number(real number & imaginary number : eg. 5 + 3i ) :"<<endl;
    cin>>r1>>i1;
    cout<<" Enter the second complex number(real number & imaginary number : eg. 5 + 3i ) :"<<endl;
    cin>>r2>>i2;
    Complex comp1(r1,i1);
    Complex comp2(r2,i2);
    Complex sum=comp1 + comp2 ;
    cout<<" First complex number : "<<r1<<"+"<<i1<<"i"; 
    cout<<" Second complex number : "<<r2<<"+"<<i2<<"i"; 
    sum.showSum();

}
