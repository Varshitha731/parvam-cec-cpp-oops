#include<iostream>
using namespace std;

class Bike {
    public:
        string brand,model,engine_type;
        int year,price;

        void injectFuel(){
            cout<< " Injected the  fuel - petrol  "<<endl;
        }
        void igniteFuel(){
            cout<< " Ignite fuel ! "<<endl;

        }
        void start(string bikeModel){
            injectFuel();  //abstraction
            igniteFuel();  // abstraction
            cout<<model<<" Started , Happy journey!!"; 
        }
        void stopAcceleration(){  // internal data is hidden
            cout<<" Acceleration stopped "<< endl;
        }
        void stopFuelFlow(){  // internal data is hidden
            cout<<" Stopping the fuel" << endl;
        }       
        void stop(){
            stopAcceleration();  // abstraction
            stopFuelFlow();  // abstraction
            cout<<model<<" Stopped , lock the vehicle";
        }
};
int main(){
    Bike bike1;
    bike1.brand = "Honda";
    bike1.model = "CBR500R";
    bike1.engine_type = "Petrol";
    bike1.year = 2020;
    bike1.price = 50000;
    bike1.start( bike1.model);
    bike1.stop();
}