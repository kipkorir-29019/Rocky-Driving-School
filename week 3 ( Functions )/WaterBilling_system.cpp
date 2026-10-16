#include <iostream>
using namespace std;


//* Week 3 Task two


//* Declaring the variables
string customerName;
float unitsConsumed;
float WaterBill;
float rate_per_unit = 27.5;
float New_WaterBill;
float discount;

//* A function to store the customers details
void getCustomerDetails(){

  cout<<"Enter the Customer Name: "<<endl;
  cin >>customerName;

  cout <<"Enter the Units Consumed: "<<endl;
  cin >>unitsConsumed;

}

//* A function to calculate the water bill
void calculateBill(){
  WaterBill = (unitsConsumed * rate_per_unit);
}

//* Reduces the water bill by 10%
void applyDiscount(){

  //*Use of if else loop to apply the discount if the units consumed is greater or equal to 100
  if (unitsConsumed >= 100){
    discount = (0.10*WaterBill); 
    New_WaterBill = (WaterBill - discount);
  }
  else{
    New_WaterBill = WaterBill;
  }

}

//* Function to display the program output
void displayBill(){
  cout<<"\n============================================="<<endl;
  cout <<"\n_________WATER BILL__________"<<endl;
  cout<<"Customer Name: "<<customerName<<endl;
  cout<<"Units Consumed: "<<unitsConsumed<<endl;
  cout <<"Water Bill Before Discount: Ksh "<<WaterBill<<endl;
  cout <<"Discount: Ksh "<<discount<<endl;
  cout <<"\n\tAmout To Pay: ksh "<<New_WaterBill<<endl;
  cout<<"============================================="<<endl;
}

//* The main function
int main(){
  cout<<"\n_________WATER BILLING SYSTEM__________\n"<<endl;
  getCustomerDetails();
  calculateBill();
  applyDiscount();
  displayBill();

  return 0;
}