#include<iostream>
using namespace std;
void sayHello(){    // function declaration 
    cout<<"Hello!"<<endl;
}
int sayHi(string name){
    cout<<"Hi,"<< name <<endl;
}
int greet(string fname,string lname ,int age){
    cout<<"Hi,"<< fname <<"  "<<lname<<",age: "<<age<<endl;
}
int main(){
    string firstname,lastname,friendname;
    int age;
    cout<<"Enter the first name : ";
    cin>>firstname;
    cout<<"Enter the last name: ";
    cin>>lastname;
     cout<<"Enter the age: ";
    cin>>age;
    cout<<"Enter the friend's name : ";
    cin>>friendname;
    sayHello();  // function call
    sayHi(firstname);
    sayHi(friendname);
    greet(firstname,lastname,age);
}