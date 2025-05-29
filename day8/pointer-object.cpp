#include<iostream>
using namespace std;
  
class Employee{
    private:
       string employeeID,emplyoeeName;
       int expeiance;
       float salary;
    public:
        void addDetails( string id, string name, int exp, float salary){
            employeeID = id;
            emplyoeeName = name;
            expeiance = exp;
            this->salary=salary;
        }
        void showDetails(){
            cout<<" The employee name "<< emplyoeeName<< " bearing "<< employeeID <<"  have "
            << expeiance <<" years of experience and receives a salary of Rs. "<< salary<< "/-";
        }
};
int main(){
    string empName,empID;
    int empexp;
    float empsalary;
    cout<<"Enter your name,Emplyoee ID ,Years of experiance & salary : ";
    cin>> empName>> empID>> empexp>> empsalary;
    Employee emp1;  //object created
    Employee *empPtr= &emp1; // pointer created
    //using a pointer assingning the value to the object
    //using a pointer we are assigning the value to the object using pointer dereferencing & dot operator
    (*empPtr).addDetails( empID, empName, empexp, empsalary); 
    (*empPtr).showDetails();
    // using a pointer we are assigning the value to the object using pointer dereferencing & array operator
   // empPtr->addDetails( empID, empName, empexp, empsalary); 
    //empPtr->showDetails();
    Employee *ptrEmp = new Employee; 
    //Dynamically allocating memory for the pointer object(no object refered)
    ptrEmp->addDetails(" 12345","Rahul",5,50000);
    ptrEmp-> showDetails();
     //emp1.addDetails==(*empPtr).addDetails<==> empPtr->addDetails
}

