#include<iostream>
using namespace std;

class Intrest{
    private:
         int principal,term,rate,totalIntrest;
         float rateInPercent;
     public:
          int simpleIntrest=0;
          Intrest(){
            principal=0;
            term=0;
            rate=0;
            rateInPercent=0;
            totalIntrest=0;
            cout<<" Total Intrest Earned : "<< totalIntrest<< endl;
          }
          void setValues(int a,int y){
            principal=a;
            term=y;
          }
          void setRateValueInteger(int rateInInteger){
            rate=rateInInteger;
          }
          void setRateValuefloat(float rateInfloat){
            rateInPercent=rateInfloat;
          }
          Intrest(int p,int t,int r){
            setValues(p,t);
            setRateValueInteger(r);
            simpleIntrest=(principal*term*rate)/100;
            cout<<"Simple intrest for the following details : " <<endl;
            cout<<" Principal amount :" <<principal<<endl;
            cout<<"No of years (term) :" <<term<<endl;
            cout<<" Rate of intrest(in integerl) :" <<rate<<endl;
            totalIntrest=principal + simpleIntrest;
            cout<<" Total Intrest Earned : "<< totalIntrest<< endl;

          }
           Intrest(int p,int t,float rateInDecimal){
             setValues(p,t);
            setRateValuefloat(rateInDecimal);
            simpleIntrest=(principal*term*rateInPercent);
            cout<<"Simple intrest for the following details : " <<endl;
            cout<<" Principal amount :" <<principal<<endl;
            cout<<"No of years (term) :" <<term<<endl;
            cout<<" Rate of intrest(in decimal) :" <<rateInPercent<<endl;
            totalIntrest=principal + simpleIntrest;
            cout<<" Total Intrest Earned : "<< totalIntrest<< endl;
           }
           ~Intrest(){// automatically called to free up memory used by constructor  when object has ben lost
            cout<<"Destructor has been called to destroy or free up the memory used by constructor " << endl;
           };
      
           
           
};
int main(){
    int amount,year,rateOfIntrest;
    float intrestRate;

    Intrest int1;
    Intrest int4;

    cout<<" Enter the principal amount,no of years & rate of intrest(eg:5) : ";
    cin>> amount>> year>> rateOfIntrest;
    Intrest int2(amount,year,rateOfIntrest);
    cout<<" Enter the principal amount,no of years & rate of intrest(eg:0.05) : ";
    cin>> amount>> year>> rateOfIntrest;
    Intrest int3(amount,year,rateOfIntrest);


}
