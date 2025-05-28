#include<iostream>
using namespace std;

class  Animal{ 
    public:
        string name;
        void setName(string animalName){   //Base class
             name=animalName;
        }
        void showAnimal(){
            cout<< " Name of the animal : "<<name<<endl;
        }
};
//animal class i deriving the carnivour class
// animal -> Carnivore (symbolic representation)
class Carnivore : public Animal{  //Derived class-Base class level1
    string vegetation;
    public:
         void setFood(string food){
            vegetation=food;
         }
        void showFood(){
            cout<<" Type of the animal : " << vegetation << endl;
         }

};class Mammal : public Carnivore {   //Derived class-Base class level2
    string habitat;
    public:
    void setHabitat(string place){
        habitat=place;
    }
    int showHabitat(){
        cout<<" Living place : "<< habitat<< endl;
    }
    

};
int main(){
    string animal_name,food_type,place_of_living;
    cout<< "Enter the name of the animal & its food type & living place : ";
    cin>> animal_name>> food_type>> place_of_living;
    Animal a1;
    a1.setName(animal_name);
    Carnivore c1;
    c1.setName(animal_name);
    c1.setFood(food_type);
    Mammal m1;
    m1.setName(animal_name);
    m1.setFood(food_type);
    m1.setHabitat(place_of_living);
    m1.showAnimal();
    m1.showFood();
    m1.showHabitat();
}