#include <iostream>
using namespace std;

//*Task 2: While loop

int main(){

  //*Declaring Variables
  float acc_bal = 10000;
  float withdrawal_amount;
  float acc_balance;

  //*Project title
cout<<"\n\t________SAVINGS WITHDRAWAL SYSTEM_________\n"<<endl;

 //*Implementing While loop
  while (acc_balance != 0 )
  {

    cout<<"Account Balance: "<<acc_bal <<endl;
    cout<<"\n"<<endl;
    
    //* Prompting the user to enter tjhe amount to withdraw
    cout<<"Enter the amount to withdraw: "<<endl;
    cin>>withdrawal_amount;

    //* Using if to determine whethr the withdrawable amount entered by the user is greater than the account balance
    if (withdrawal_amount > acc_bal){

      //* Displays insufficient balance if the withdrawable is greater than the account balance 
      cout<<"\nInsufficient Balance......"<<endl;
      break;
    }
    else{

      //* Continue deducting if the account balance is enough
    acc_balance= acc_bal-withdrawal_amount;
    cout<<"\nRemaining Balance: "<<acc_balance<<endl;

    acc_bal = acc_balance;

    cout <<"\n"<<endl;
    }
  }
  
return 0;
}