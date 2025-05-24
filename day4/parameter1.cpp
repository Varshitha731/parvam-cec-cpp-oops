#include<iostream>
using namespace std;

class Wish{
    private:
    string name;
    int age;
    public:
    Wish(){
        name="kapi kannan";
        age=66;
    }
    Wish(string n,int a);  //parametrized constructor
    void birthdayWishes();  //declaring the member funtion inside the class
};
//defining therules of parameterized constructor outside the class using resolution operator
Wish :: Wish(string n,int a){    //syntax : classname::constructor(parameter) (no eturn type required)
    name=n;
    age=a;
}

 //defining the member function outside the clas //syntax: reurn_type classname :: member_function(parameter)  //return type is must
    void Wish:: birthdayWishes(){ 
        cout<< "Happy Birthday  " << name << " ! Now you're  " << age << " years old ."<< endl ;
    }




int main(){
    string personName;
    int personAge;

    Wish person1;  //obeject declaration
    person1.birthdayWishes();

    cout<<"Enter your name : " ;
    cin>> personName;
    cout<<"Enter your age : " ;
    cin>>personAge;
    Wish person2(personName,personAge);
    person2.birthdayWishes();

}