#include <iostream>
using namespace std;

//Task 1: For Loop

int main(){
  //* Declaring variables
  string employeeName;
  float basic_salary;
  int i;
  float bonus;
  float total_salary;

  //* Implementing for loop
  for (i=0; i < 5; i++ ){

    //* Prompting the user to enter the name and the basic salary
    cout<<" \nEnter Employee Name: "<<endl;
    cin>> employeeName;

    cout<<" Enter Employees Basic Salary: "<<endl;
    cin>>basic_salary;

    //* Calculating the bonus using the given formula
    bonus = (0.05 * basic_salary);

   //* Calculating the total salary using the given formula
    total_salary = (basic_salary + bonus);  
    
    // Printing a new line for clearity
    cout<<"\n" <<endl;

    //*Displaying the employees report
    cout<<"_____EMPLOYEE REPORT______"<<endl;
    cout<<"Employee Name: "<<employeeName<<endl;
    cout<<"Basic Salary: "<<basic_salary<<endl;
    cout<<"Bonus: "<<bonus<<endl;
    cout<<"Total Salary: "<<total_salary<<endl;

    cout<<"\n" <<endl;
  }

}