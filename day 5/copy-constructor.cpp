#include<iostream>
using namespace std;

class Teacher {
    //private: //by default it is private all the data members come under this category
    string branch;
    public:
    string name,qualification;
    int experiance;
    
    Teacher(){
        branch="AIML";
        name="Likiiii";
        qualification="M.Tech";
        experiance=5;
        cout<<"Welcome ,Likii "<<endl;
    }

   
    void setData(string Tname,string Tbranch,string Tqual,int Texp){ //setter
        name=Tname;
        branch=Tbranch;
        qualification=Tqual;
        experiance=Texp;


    }
    Teacher(string TeacherName ,string TeacherBranch,string TeacherQual,int TeacherExp){
        setData(TeacherName,TeacherBranch,TeacherQual,TeacherExp);
        cout<<"Welcome  ,"  <<name<<" to " <<branch<<" . "<<endl;
        cout<<"You're graduated with "<<qualification<<" degree . And you've "<<experiance<<" yeaes of experiance "<<endl;

    }
    // syntax for copy constructor: constructor(Reference constructor adrees of the object)
    Teacher(Teacher &t){   // copy constructor
        name=t.name;
        branch=t.branch;
        qualification=t.qualification;
        experiance=t.experiance;
    }
     void getData(){
        cout<<"Welcome  ,"  <<name<<" to " <<branch<<" . "<<endl;
        cout<<"You're graduated with "<<qualification<<" degree . And you've "<<experiance<<" yeaes of experiance "<<endl;
     }
     ~Teacher(){  //destructor
        cout<<"Object's work is done ,clearing the memory "<< endl;     }
        
};
int main(){
    string n,q,b;
    int e;
    Teacher teacher1;// object created & invoked the default constructor
    cout<< " Enter your name , qualification, branch & experiance"<< endl;
    cin >> n >> b >> q >> e; 
    Teacher teacher2(n,b,q,e); 
    Teacher teacher3=teacher2;
    teacher3.getData();
}  