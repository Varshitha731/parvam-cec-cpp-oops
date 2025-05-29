#include <iostream>
using namespace std;
class Employee //base class
{
private:
    string employeeID, emplyoeeName;
    int expeiance;
    float salary;
    string skills;

public:
    void addDetails(string id, string name, int exp, float salary)
    {
        employeeID = id;
        emplyoeeName = name;
        expeiance = exp;
        this->salary = salary;
    }
    void showDetails()
    {
        cout << " The employee name " << emplyoeeName << " bearing " << employeeID << "  have "
             << expeiance << " years of experience and receives a salary of Rs. " << salary << "/-";
    }
};
class Skill : public Employee  //  derived class (single inheritance)
{
private:
    int skillCount;
     string *skills; //pointer array
public:
    Skill(){};
    Skill(int count){
    skillCount = count;
    skills= new string[skillCount]; //dynamically alocating memory for pointer array(skills)
        cout << "Enter the " << count << " technologies you're familiar with : " << endl;
        for (int i = 0; i < count; i++) //array initializatin
        {
            cout << " skill " << i + 1 << ":";
            cin >> skills[i];
        }
    }
    void showSkills()
    {
        cout << "Skills known : " << endl;
        for (int i = 0; i < skillCount; i++)
        {
            cout << " i+1 " << " . "<< skills[i] << endl;
        }
    }
    ~Skill(){  //destructor
        delete[] skills;
        cout<<" Memory has been cleared by the destructor!!";
    }
};
int main()
{
    string emp_name, emp_id;
    int emp_exp, skill_count;
    float emp_salary;
    cout << " Enter the following details of the employee : " << endl;
    cout << " Employee ID , Name , Years of experiance , salary " << endl;
    cin >> emp_id >> emp_name >> emp_exp >> emp_salary;
    Skill s1;
    // pointer refering to the object s1 of skill class which can also inherit the properties of employee class
    Skill *emp1 = &s1;
    s1.addDetails(emp_id, emp_name, emp_exp, emp_salary);
    s1.showDetails();
    cout << "Enter the number of technologies you know : " << endl;
    cin >> skill_count;
    Skill s2(skill_count);
    emp1->showDetails();
    s2.showSkills();
}
