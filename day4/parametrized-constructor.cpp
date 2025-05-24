
#include<iostream>
using namespace std;

class Area {
    private:
    int length,breadth;
    public:
    int result;
    Area(){   //default constructor(no parameter)
        length=0;
        breadth=0;
    }
    Area(int a,int b){  // Parametrized constructor
        length=a;
        breadth=b;

    }
    void calculateArea(){
        result = length * breadth;
        cout<<"Area of Rectangle with length  " << length <<"  and breadth : " <<breadth<<"  is equal to " << result << endl;

    }
};
int main(){
    int len,width;
    Area rect1;
    rect1.calculateArea();
    cout<<"Enter the length and breadth for finding the area of rectangle : ";
    cin>> len >> width ;
    Area rect2(len,width);  // object created
    rect2.calculateArea();
}