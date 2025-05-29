#include<iostream>
#include<fstream>  // header files for handeling the phone (REad/Write)
using namespace std;
int main(){
    ofstream out("sample.txt");  // file object
    string name;
    int age;
    cout<<"Enter  your name & age :";
    cin>>name>>age;
    out<<"Hello "<<name <<"!"<<endl;
    out<<"You're  " <<age <<"  years old."<<endl;
    out.close();


    ifstream read("abd.txt");
    string line;
    cout<<"File contains : "<<line<<endl;
    while (getline(read,line)){
        cout<<"line"<<endl;
    }
    read.close();
    
   
}

