#include<iostream>
using namespace std;

class Vehicle{    // Base class
    private:
        string riding_mode;
    public:    
        void setMode(string mode){  //setmode=member function
        riding_mode=mode;
        }
        string useMode(){
            return riding_mode;
        }       
};
class Bike : public Vehicle{   //Derived class can access the data & member functions from the base class
    private:
        string brand;
    public:
        void setName(string name){
            brand=name;
        }
        string showName(){
            return brand;
        }
};
int main(){
    string mode_Of_Transport,brand_Name;
    cout<<"Enter the mode of transport & brand name of the bike : " ;
    cin>>mode_Of_Transport>>brand_Name;
    Bike bike1;  // object of derived class
    bike1.setMode(mode_Of_Transport);  //accesing the member function of the class(inheriting the properties)
    bike1.setName(brand_Name);
    cout<<" I've a " << bike1.showName()<<" bike ,I can travel to my native via "<<bike1.useMode();

}