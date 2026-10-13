#include <iostream>
using namespace std;

int main(){
  //* Declaring the variables 
  string StudentName;
  int age;
  int exam_score;
  string decision;


  //* Institution Name
  cout<<"\n____________RUIRU COLLEGE____________" <<endl;

  // *Prompting the user to enter the user inputs
  cout<<"\n"<<endl;
  cout<<"Enter the Student Name: " <<endl;
  cin>> StudentName;

  cout<<"Enter the Student Age: " <<endl;
  cin>>age;

  cout<<"Enter the Student Exam Score: " <<endl;
  cin>>exam_score;

  //* if-else loop for checking the  and exam score
  if (age >= 18){
    if (exam_score >= 50){
      decision = "Admitted";

    }
    else{
      decision = "Not Admitted : Low Score";
    }
  }
  else{
    decision = "Not Admitted:Underage";
  }

  //* Output Produced
  cout<<"\n=================================\n"<<endl;
  cout<<"________ADMISSION DECISION_______"<<endl;
  cout<<"Student  Name: "<<StudentName <<endl;
  cout<<"Student  Age: "<<age <<endl;
  cout<<"Student Exam Score: "<<exam_score <<endl;
  cout<<"Decision: "<<decision<<endl;
  cout<<"\n=================================\n"<<endl;



   
}