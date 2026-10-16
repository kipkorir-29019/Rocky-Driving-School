#include <iostream>
using namespace std;

int main(){

  cout<<"\n_______SIMPLE CALCULATOR_______"<<endl;

  //* Declaring the variables
  double Num1, Num2;
  char op;

  //* Prompting the user to enter the user inputs
  cout << "\nEnter the first number: ";
  cin >> Num1;

  cout << "\nEnter an operator (+, -, *, /): ";
  cin >> op;

  cout<<"\nEnter the second number: "<<endl;
  cin>>Num2;
   //*Implementing the switch case 
  switch (op) {
    case '+':
      cout << "\n\tResult: " << Num1 + Num2 << endl;
      break;

    case '-':
      cout << "\n\tResult: " << Num1 - Num2 << endl;
      break;

    case '*':
      cout << "\n\tResult: " << Num1 * Num2 << endl;
      break;

    case '/':
      //* Use of if to determine if num2 is equal to 0
      if (Num2 == 0) {
        cout << "\n\tError: cannot divide by zero." << endl;//Produces an error when a number is divided by 0
        return 1;
      }

      cout << "\n\tResult: " << Num1 / Num2 << endl;
      break;

    default:
    //*returns an error when a different operator is enter apart from the listed
      cout<< "\n\tInvalid operator. Use +, -, *, or /." << endl;
      return 1;
  }

  return 0;
}