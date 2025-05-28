#include<iostream>
using namespace std;

class  Base{
    public:
         void showBase(){
            cout<<" Base member function has been called !" <<endl;
         }
};
class Derived : public Base{
    public:
        void showBase(){
            cout<<" Derived member function has been called !"<<endl;
            Base::showBase();  //calling the member function of base class  //syntax:base_class_name ::member_function
        }
};
// example 2
class Animal{  //Base class
    public:
        void makeSound(){
            cout<<" Animal makes a sound "<< endl;
        }
};
class Dog : public Animal{  //Derived class(Animal->Dog)
    public:
        void makeSound(){  // function overriding(same memeber function name)
            Animal::makeSound();
            cout<<" Dog barks!! "<< endl;
        }
    };
class Cat : public Animal{  
    public:
         void makeSound(){ // function overriding(same memeber function name)
            cout<<" Cat meows!! "<<endl;
         }
        };
int main(){
    //Base b1;
    //b1.showBase();
    Derived d1;
    d1.showBase();
    Dog dog1;
    dog1.makeSound();
    Cat cat1;
    cat1.makeSound();
}