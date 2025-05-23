#include<iostream>
using namespace std;

class Customer{
    public:
         string firstName,lastName;
         int age,Rating;

         //initialize the constructor
         Customer(){
            firstName="varsha";
            lastName="L";
            age=10;
            Rating=3;
         }
         void showDetails(){
            cout<<"Customer Name  : "<<firstName<<" "<<lastName<<endl;
            cout<<"Customer age : "<<age<<endl;
         }
         void giveRating(int Rating);
         void showRating(){
            cout<<"You've given "<<Rating<<"  star Rating . Thank you "<<endl;
         }
         

};
void Customer::giveRating(int rating){
    Rating=rating;
}
int main(){
    Customer cust1;//invoke the customer to assign different value
    cust1.showDetails();
    cust1.showRating();
     
    Customer cust2;
    cust2.firstName="varsha";
    cust2.lastName="itha";
    cust2.age=19;

    

     
    int starRating;
    cout<<"Give your Rating(0 to 5) :";
    cin>>starRating;
    cust2.showDetails();
    cust2.giveRating(starRating);
    cust2.showRating();

}