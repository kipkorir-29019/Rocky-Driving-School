#include <iostream>
#include <string>
using namespace std;

// *Week 8 Task 1

// Implementing a parent class
class person{
  private:
  //Declaring private variables
  string name;
  int age;

  public:
  //Constructor
  person(string n, int a){
    name = n;
    age = a;
  }

  //Declaring a function for student
  void displayPerson(){
    cout<<"\n==========================" <<endl;
    cout <<"\tStudent Details"<<endl;
    cout<<"            Name: "<<name <<endl;
    cout<<"             Age: "<<age <<endl;
  }
};

//* Derived class
class student: public person{
  private:
  int admNo;
  int stream; //Use of stream to represent class bcoz class is a keyword in c++
  

  public:
  //Constructor
  student(string n, int a, int regNo, int year):person(n,a){
    admNo = regNo;
    stream = year;
  }
  //Declaring a function for student
  void displayStudent(){
    cout<<"Admission Number: "<<admNo <<endl;
    cout<<"           Class: "<<stream <<endl;
    cout<<"\n==========================" <<endl;
  }
};

//Main Function
int main(){

  cout<<"\n\tSCHOOL MANAGEMENT SYSTEM\n" <<endl;

  //Creating an object called student1
  student student1("Amos", 21, 4721, 8);
  student1.displayPerson();
  student1.displayStudent();
  
}