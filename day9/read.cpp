#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ifstream read("a.txt");
    string file_content;
    // syntax for using the getline method
    //getline(object , string)
    getline(read, file_content);
    cout<<" The first line  contains : "<<endl;
    cout<<file_content<<endl;
    read.close();

    //to print all the lines ,we ned to use any od the loop
    ifstream show("a.txt");
    string all_lines;
    cout<<" The file contains : "<<endl;
    while ( getline(show,all_lines)) {
         cout<< all_lines<<endl;
    }
    read.close();
}