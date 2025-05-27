#include<iostream>
using namespace std;
  
class Print{
    private:
        int number;
        float decimal;
        string word;

    public:
         void setInteger(int num);
         void setFloat(float dec);
         void setString(string str);
         void print(int n){
            cout<< "Printing the int value "<<number<<endl;
         }
         
         void print(float f){
            cout<< "Printing the int value "<<decimal<<endl;
         }
         void print(string w){
            cout<< "Printing the string value "<<word<<endl;
         }
};
void Print :: setInteger(int num){
    number=num;
}
void Print :: setFloat(float dec){
    decimal=dec;
}
void Print :: setString(string str){
    word=str;
}
int main(){
    int i;
    string w;
    float d;
    cout<< "Enter each of the following (1 integer,1float,1string) : ";
    cin>>i>>d>>w;
    Print p1;
    p1.setInteger(i);
    p1.setFloat(d);
    p1.setString(w);
    p1.print(i);
    p1.print(d);
    p1.print(w);

    
}