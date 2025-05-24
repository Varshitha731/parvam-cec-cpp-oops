#include<iostream>
using namespace std;

class Area{
    private:
    int length,breadth,height;
    float radius;
    public:
    float result;
    Area(){  //default constructor
        length=0;
        breadth=0;
        radius=0;
        result=0;
        cout<<"Area is : "<<result<<endl;
    }
    Area(int a){  // parameterized constructor( 1 parameter)
        length=a;
        result=length * length;
        cout<<"Area of square is : "<<result<<endl;
    }
    Area(int c,int d){  // parameterized constructor( 2 parameters)                                                                                     

        length=c;
        breadth=d;
        result=length * breadth;
        cout<<"Area of rectangle is : "<<result<<endl;
    }
    Area(float r){ // parameterized constructor( 1 parameter different data type)
        radius=r;
        result=2 * 3.142 * radius;
        cout<<"Area of circle is : "<<result<<endl;

    }
     Area(int l,int b,int h){ // parameterized constructor( 3 parameters)
        length=l;
        breadth=b;
        height=h;
        result=length * breadth * height ;
        cout<<"Area of cube is : "<<result<<endl;

}

};
int main(){
    Area a1;
    int len,wid,hgt;
    float rad;
    cout<<"Enter the length of the square : ";
    cin>> len;
    Area a2(len);  // finding area of square ( 1 parameter integer)
    cout<<"Enter the length and breadth of the recatangle : ";
    cin>>len>>wid;
    Area a3(len,wid);  // finding area of rectangle ( 2 parameters integer)
    cout<<"Enter the length of the circle : ";
    cin>>rad;
    Area a4(rad); // finding area of circle ( 1 parameter float)
    cout<<"Enter the length,breadth and height of the cube : ";
    cin>>len>>wid>>hgt;
    Area a5(len,wid,hgt);


    


}