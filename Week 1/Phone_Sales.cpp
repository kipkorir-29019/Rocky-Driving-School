//C++ PROGRAM TO CALCULATE THE TOTAL PRICE OF PHONES PURCHASED BY A CUSTOMER
#include <iostream>
 
using namespace std;
int main() {

  string Customer_name;
  string phone_model;
  int Quantity_bought;
  float Total_sales;
  int price_per_phone;
  

  
    cout << "\n_________RUIRU MOBILE PHONE SALES ____________\n" << endl; //program title to display on the output 
    
    // Prompting the user to enter the mobile details
     
    cout << "\nFills The Details Below.....\n" << endl;
    cout << "Customer Name: " << endl;
    cin >> Customer_name;
    
    
    //Listing the phone moddels available for purchase and their prices 
    cout << "Phone models \n" << endl;
    cout << " 1. Redmi \n 2. Sumsung \n 3. Tecno \n 4. iPhone \n 5. Other Phones " << endl;
    
    int choice;
    cout << "\nEnter the Option to Purchase: " << endl;
    cin >> choice;
    
    // if else loop for decision making on types of phones
    
    if (choice == 1) {
        price_per_phone = 15500;
        phone_model = "Redmi";
    } 
    else if (choice == 2) {
        price_per_phone = 27000;
        phone_model = "Samsung";
    }
    else if (choice == 3) {
        price_per_phone = 12500;
        phone_model = "Tecno";
    }
    else if (choice == 4) {
        price_per_phone = 54000;
        phone_model = "iPhone";
    }
    else if (choice == 5) {
      cout << "\nEnter the model of the phone purchased: " << endl;
        cin >> phone_model;
        cout << "\nEnter the price of the phone purchased: " << endl;
        cin >> price_per_phone;
        
    }
    else {
        cout << "\n\tInvalid choice!" << endl;
        return 1; // Exit program or handle error
    }
    cout << "Quantity purchased : \n" << endl;
    cin >> Quantity_bought;
    
    
    Total_sales = (Quantity_bought * price_per_phone);
    
  cout <<"================================="<<endl;
  cout << "______RUIRU SALES RECEIPT_______ "<< endl;
  cout << "Customer Name: " << Customer_name << endl;
  cout << "Phone Model Purchased: " << phone_model<< endl;
  cout << "Quantity Bought: " << Quantity_bought << endl;
  cout << "Price per Phone: " << price_per_phone << endl;
  cout << "\n================================" << endl;
  cout << "\tTotal Price: " <<Total_sales << endl;
  cout << "==================================" << endl;

  return 0;
 }
 