#include<iostream>
using namespace std;
class Parent{   // base class
     private:
        int net_worth=0;
    public:
        string family_name,family_head;
        int number_of_members;

        void setData(int worth,string familyName,string familyHead,int member_count){
            net_worth = worth;
            family_name = familyName;
            family_head = familyHead;
            number_of_members=member_count;
        }
        int showNetWorth(){  // getter
             return net_worth;
        }
        int getFamiyInfo(){  // getter
            cout<< "I'm from "<< family_name
            <<" Family , and my family head is " << family_head <<"  our family  networth  is "
            <<showNetWorth() << endl  ;

        }

};
// syntax foe declaring the derived class
// class-derived class_name : accessibility-mode base class_name
//1)By default derived class uses private accesibility mode
//2)if derived class uses private accesibility mode then public data & member functions of base class will become private
//2)if derived class uses public accesibility mode then public data & member functions of base class will remain public
//class child :Parent{   //Derived class by default private class(accessibility mode-private)
class child : public Parent{  // derived class (accesbility mode-public)
    public:
        string member_name;
        int age;

        void addDetails(string name,int person_age){
            member_name = name;
            age=person_age;
        
        }
        void getFamilyDetails(){  //Member function
            cout<<" My name is " << member_name << " and i'am " << age << " years old." ;
            getFamiyInfo();
       
        }
};
int main(){
    string fName, fHead , cName ;
    int childage ,fMembers, fWorth;
    cout<< "Enter your Family name , family head , number of members & networth : " ;
    cin>> fName >> fHead >> fMembers >> fWorth ;
    Parent p1;
    p1.setData(fWorth,fName,fHead,fMembers);
    p1.getFamiyInfo();

    cout<< "Enter your name & age : " ;
    cin>> cName >> childage ;

    child c1;
    //c1.family_head ; (as it is class derived with public accesbility )
    //we can directly access the public data of the base class 
    c1.setData(fWorth,fName,fHead,fMembers);
    c1.addDetails(cName,childage);
    c1.getFamilyDetails();
}
