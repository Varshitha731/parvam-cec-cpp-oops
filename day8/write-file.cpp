#include<iostream>
#include<fstream>
using namespace std;
class Teacher{
    private:
    string name,branch;
    int age,experiance;
    public:
    void setInfo( string n, string b, int a, int e){
        name = n;
        branch = b;
        age = a;
        experiance = e;
    }
    void writeToFile(){
        ofstream write("write.txt");
        write <<" Teacher Details as follows:"<<endl;
        write<<"Name : "<< name<< endl;
        write<<"Age : "<< age<< endl;
        write<<"branch : "<<branch<< endl;
        write<<"Experiance : "<<experiance<< endl;
    }
    };




int main(){
    string teacher_name, teacher_branch;
    int teacher_age, teacher_experiance;
    cout<<" Enter the name,branch,age & experiance of the teacher : ";
    cin>> teacher_name>> teacher_branch>> teacher_age>> teacher_experiance;
    Teacher t1;
    t1.setInfo(teacher_name, teacher_branch, teacher_age, teacher_experiance);
    t1.writeToFile();
}