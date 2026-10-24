#include <iostream>
#include <string>
using namespace std;

//* week 7 task one 

//* Implementing a class 
class BankAccount{
  private:
  //* Variable declaration
  string accHolderName;
  int accNumber;
  float accBalance;

  public:
  //*Constructor
  BankAccount(string name,int acccountNo, float Balance){
    accHolderName = name;
    accNumber = acccountNo;
    accBalance = Balance;


    cout <<"\tAccount Successfully Created "<<endl;

  }
  //* Function for displaying the account details
  void displayAccount(){
    cout << "\n=======================================\n"<<endl;
    cout << "BANK ACCOUNT DETAILS\n"<<endl;
    cout << "Account Holder Name: " << accHolderName << endl;
    cout << "     Account Number: " << accNumber << endl;
    cout << "    Account Balance: " << accBalance << endl;
    cout << "\n======================================="<<endl;
}
  //* Destructor
  ~BankAccount(){

    cout << "\n\tAccount closed successfully" << endl;
  }

};

//* Main function
 int main(){
  cout<<"\n_________BANK ACCOUNT SYSTEM_________\n"<<endl;

  BankAccount acc1("Amos", 1234, 120000.00);

  acc1.displayAccount();
  
  return 0;
 }