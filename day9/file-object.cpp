#include<iostream>
#include<fstream>
using namespace std;
class Car {
    private:
    string brand,model,varient,features[10];
    int year,price,featureCount;
    public:
        void addCarDetails(string carBrand, string carModel, string carVarient, int year, int price) {
            brand = carBrand;
            model = carModel;
            varient=carVarient;
            this->year=year;
            this->price=price;
        }
        void addCarFeatures(int count){
            featureCount=count;
            cin.ignore();
            cout<<" Enter the "<<count<<" features of the car";
            for ( int i=0; i<count; i++) {
                cin.ignore();
               getline(cin,features[i]); // can enter multiple words along with space
        }
        cout<< "Click enter botton for next input "<< endl;
    }
        void storeCarDetails(){
            ofstream store(" car_Details.txt",ios::app);
            store<<" The car details are as follows : "<< endl;
            store<<" Car Brand : "<< brand<< endl;
            store<<" Car Model : "<< model<< endl;
            store<<" Car varient : "<< varient<< endl;
            store<<" Launch year : "<< year<< endl;
            store<<"Offer price : Rs "<< price<< endl;
            store<<"Car has these features :  "<<  endl;
            for(int i=0;i<featureCount;i++){
                store<< "\t "<< i+1<<" . "<< features[i]<< endl;
            }
            store<<" ---------------------------";
        }
    };
int main() {
    string car_brand, car_model,car_varient,car_features[10];
    int feature_count,launch_year,launch_price;
    cout<<" Enter the car brand : "<< endl;
    cout<<" Brand,Model,Varient,launch Year , launch Price : "<< endl;
    cout<<" Ex: tata ,curv,(petrol/diesel/ev),2025,100000 : "<< endl;
    cin>> car_brand>>  car_model>> car_varient>> launch_year>> launch_price;
    cout<<" Enter the number of features : "<<endl;
    cin>> feature_count;
    Car car1;
    car1.addCarDetails(car_brand, car_model,car_varient,launch_year,launch_price);
    car1.addCarFeatures(feature_count);
    car1.storeCarDetails();
    Car car2;
    car2.addCarDetails( "tata", "curv", "petrol", 2025, 100000);
    car2.addCarFeatures(4);
    car2.storeCarDetails();

} 