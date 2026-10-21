#include <iostream>
using namespace std;
//* Week 6 Task 2

//* Implementing the class called student
class Student{
  public:

  //* Variable declaration
  string StudentName;
  int Adm_No;
  float fee;
  float payedFee;
  string option;
  string y;
  string n;

  //* Function to store student details
  void inputstudent(){
    cout <<"Enter Student Name: "<<endl;
    cin >>StudentName;

    cout <<"Enter the Admission Number: "<<endl;
    cin >>Adm_No;

    cout <<"Enter the Fee Balance: Ksh "<<endl;
    cin >>fee;

  }

  //* Function for making payments
  void makePayment( ){
    cout <<"Need to make payment (y/n): "<<endl;
    cin >>option;
    
    //* Use of if else to determine if the user wants to make payment
    if (option == "y" ){
      cout <<"Enter the Amount to pay: "<<endl;
      cin >>payedFee;
      
      fee = fee-payedFee;
    }else if (option == "n"){
      fee=fee;
    }
    else{
		cout <<"\n\tInvalid Input....Try Again Later..."<<endl;
	}

  }

  //* Function for displaying the student details and the fee balance
  void displayStatus(){
    cout <<"\n====================================\n"<<endl;
    cout <<"    Student Name: "<<StudentName <<endl;
    cout <<"Admission Number: "<<Adm_No <<endl;
    cout <<"\n\tFee Balance: Ksh "<<fee <<endl;
    cout <<"\n====================================\n"<<endl;
  }

};

//* Main function
int main(){
  cout <<"\n\tSTUDENT FEE MANAGEMENT SYSTEM\n"<<endl;

  //* Implementing the object 
  Student student1;

  student1.inputstudent();
  student1.makePayment();
  student1.displayStatus();

  return 0;
}