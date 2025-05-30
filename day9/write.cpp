#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream write("a.txt");  //we have defined the right object from the ofstream class
    write<<"Good morning Students ,"<< endl;
    write<<"we shall work on file handeling! "<< endl;  
    write.close();  //closing the file after writing 
    ofstream fout("b.txt");
    fout<<" Written in the file using another user defined object: fout";
    fout.close();

    //we can use any word to make an object Ex: write , fout , file , file1 , file2 , etc.
}

