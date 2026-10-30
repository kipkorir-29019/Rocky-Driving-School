#include <iostream>
using namespace std;

//week 9 task one(Polymorphism - the ability of one function to have different behaviours)

//Class creation
class payment{
  //Constructor
  public:
  //*Overloaded Functions
  
  //Function 1(one) for cash payment
  void processPayment(int amount){
    cout << "\nCash Payment" << endl;
    cout << "Final Payment Amount: Ksh. " << amount << endl;
  }
  //Function 2(two) for card payment
  void processPayment(int amount,int fee){

    float total = amount + fee; //Finding the total amount to pay

    cout << "\nCard Payment" << endl;
    cout << "Final Payment Amount: Ksh. " << total << endl;
  }
  //Function 3(three) for mobile payment
  void processPayment(int amount,int fee, float discount){
    int total = amount + fee - discount;

    cout << "\nMobile Payment" << endl;
    cout << "Final Payment Amount: Ksh. " << total << endl;
  }

};

//main function
int main(){
  cout <<"\n\t PAYMENT SYSTEM\n"<<endl;
  
  // Creating an object of the Payment class
    payment payment;

    //*Output produced

    // using object "payment" for cash payment
    payment.processPayment(10000);

    // using object "payment" for card payment
    payment.processPayment(10000, 520);

    // using object "payment" for mobile payment
    payment.processPayment(10000, 680, 220);

  return 0;
}