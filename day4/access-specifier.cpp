#include<iostream>
using namespace std;

class Bank{
    private:
        int balance=0;
    public:
    //member data of the class
        string custName,custEmail;
        int acNumber;


         void createAccount(string cName,string cEmail){
            custName=cName;
            custEmail=cEmail;

        }
        void displayInfo(){
            cout<<"Customer Name : "<<custName<<endl;
            cout<<"Customer Email : "<<custEmail<<endl;
        }
        //sette
        void addBalance(int account,int amount){
            balance += amount;
            cout<<"The amount has been deposited succesfully" <<endl;
        }
        //setter
        void withdrawAmount(int account,int amount){
            if(amount<=balance){
                balance -= amount;
                cout<<"The amount has been withdrawn succesfully" <<endl;
            }
            else{
                cout<<"Insuficient balance cannot withdraw " << endl;
            
        }
    }
        //getter
        void checkBalance(){
            cout<<"Bank Balance : "<<balance<<endl;

        }


};

int main(){
    Bank cust1; //object declared or initialized
    string name,email;
    int acNumber,amount;
    //cust1,balance=8000
    //we cant assign the value to the private member
    //cust1.acNumber=12345
    //we can assign value to the public member
    cout<<"Bank of Maharashtra"<<endl; 
    cout<<"Enter your Name : " ;
    cin>>name;
    cout<<"Enter your email : " ;
    cin>>email;
    cout<<"Enter your account number : " ;
    cin>>acNumber;
    cout<<"Enter your amount to be deposited : " ;
    cin>>amount;
    cust1.createAccount(name,email);
    cust1.displayInfo();
    cust1.addBalance(acNumber,amount);
    cust1.checkBalance();
    cout<<"Enter your account number : " ;
    cin>>acNumber;
    cout<<"Enter your amount to be withdrawn : " ;
    cin>>amount;
    cust1.withdrawAmount(acNumber,amount);
    cust1.checkBalance();
    cout<<"----Thank you -----"<<endl;


}