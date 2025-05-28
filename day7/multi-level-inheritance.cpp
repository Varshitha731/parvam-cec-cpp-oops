#include<iostream>
using namespace std;

class  Person{
    private:
        string name;
        int age;
    public:
        void setPersonDetails(string n, int a){
            name=n;
            age=a;
        }
        void showPersonDetails(){
            cout<<" Myself " <<name<<", and I'm "<<age <<"years old ."<<endl;
        }

};
class Employee:public Person{  // person is deriving employee
    private:
        string company_name ,emp_id;
    public:
        void setEmployeeDetails(string compName, string empid){
            company_name=compName;
            emp_id=empid;
        }
        void showEmployeeDetails(){
            cout<<" I'am working in " << company_name <<" . My Employee id is :  "<<emp_id<<endl;   
       }      
};
class Developer:public Employee{  // employee is deriving developer
    private:
        string deptName;
        int experiance;
    public:
        void setDeveloperDetails(string dept,int exp){
            deptName=dept;
            experiance=exp;
        }
        void showDeveloperDetails(){
            cout<<" I'll be working in "<<deptName<<" department. I've  "<< experiance <<" years of experiance ."<<endl;
        }
};
int main(){
    string personName,companyName,dept_name,employee_id;
    int personAge,devExperiance;
    cout<<"Enter your Name & age : ";
    cin>>personName>>personAge;
    cout<< "Enter your Company name & Employee id : ";
    cin>>companyName>>employee_id;
    cout<< "Enter your Department year of experiance : ";
    cin>>dept_name>>devExperiance;

    Developer dev1;  //object of developer class
    //dev1.name cannpot  access private members out of the class(person)
    //dev1.companyname cannpot  access private members out of the class(employee)
    //dev1.deptname cannpot  access private members out of the class(developer)
    dev1.setPersonDetails(personName,personAge);
    dev1.setEmployeeDetails(companyName,employee_id);
    dev1.setDeveloperDetails(dept_name,devExperiance);
    dev1.showPersonDetails();
    dev1.showEmployeeDetails();
    dev1.showDeveloperDetails();
   
}
