#include<iostream>
using namespace std;

class Pizza {
     private:
          string secretIngredient;
     public:
          string pizzaType,size;
          int price;
          bool isPaymentDone;
          void orderPizza(){
            cout<<" order the pizza by selcting your favourite place "<< endl;
          }
          void bookPizza(){
            cout<<" Booking Pizza!!! "<< endl;
          }

          void bakePizza(string type,string pizzaSize){
            pizzaType=type;
            size=pizzaSize;
            cout<<"pizza type : "<<pizzaType<<" ,size : "<<size<< endl;

          }
          void addIngredient(string secret){
            secretIngredient = secret;
          }
          void confirmOrder(){
            cout<<" Order Confirmed"<<  endl;
          }
          bool checkPayment(int money,bool payment){
            price=money;
            isPaymentDone=payment;
            if(isPaymentDone==true){
            cout<<" Amount Paid: Rs "<<price <<" , Payment Succesfull "<< endl;
            confirmOrder();
            bookPizza();
            return true;
             }
              else{
                cout<<" Amount due: Rs "<< price <<" , Payment pending "<< endl;
                return false;

            }
          }
          void servePizza(int amount,bool paid,string typeOfPizza,string sizeOfPizza ,string secretItem){
          if(! checkPayment( amount,paid)){
              cout<<" order cancelled due to paymemt "<< endl;
              return ;
          }
            bakePizza(typeOfPizza,sizeOfPizza);
            addIngredient(secretItem);
            cout<<" Pizza Served !!,Enjoy your Pizza "<< endl;

          }
        
};
int main(){
    string  pizType,size,secretIng;
    int pizzaAmount;
    bool amountPaid;
    Pizza customer1;
    customer1.orderPizza();
    cout<< "Enter the pizza type (Veg/Non-veg),size(Regular/Medium/Large) : ";
    cin>>pizType>>size;
    pizzaAmount=799;
    cout<<"Did the pay the amount (Type '1' is paid/Type '0' if not paid )";
    cin>>amountPaid;

    customer1.servePizza(pizzaAmount,amountPaid,pizType,size,secretIng);


   

}



