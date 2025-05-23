#include<iostream>
using namespace std;

class Company{
    private:
        string cin;  //cin=corporate identity number
        int totalworth=0;
    public:
        string gstNumber,location;
        int numofEmp;

        void setDetails(string cinNumber,int worth){
            cin=cinNumber;
            totalworth=worth;
        }
        //getter method
        void getDetails(string gstNumber){
            cout<<"Corporate identity number "<<cin<<endl;
            cout<<"Total worth of the company "<<totalworth<<endl;
        }

        void getBasisDetails();  //declare the mmber function


};

// function definition outside the class
//syntax:return_type class_name::member_funtion
void Company::getBasisDetails(){     // scope resolution perator
    cout<<"GST Number: "<<gstNumber<<endl;
    cout<<"Location :"<<location<<endl;
    cout<<"Number of employees :"<<numofEmp<<endl;

}
int main(){
    Company comp1;
    string cinNumber;
    comp1.gstNumber="1234567";
    comp1.location="bengaluru";
    comp1.numofEmp=50;
    comp1.getBasisDetails();


    int Companyworth;
    cinNumber="0987654";
    Companyworth=50000000;
    comp1.setDetails(cinNumber,Companyworth);
    comp1.getDetails(comp1.gstNumber);

}
