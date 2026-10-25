#include <iostream>
using namespace std;

//* Week 7 task two

//creating a class
class RoomBooking{
  private:
  //* Declaring the variables
  string GuestName;
  int RoomNo;
  int No_Of_Days_Booked;

 //* Constructor
  public:
  RoomBooking(string name, int RoomNumber, int DaysBooked ){
    GuestName = name;
    RoomNo = RoomNumber;
    No_Of_Days_Booked = DaysBooked;

    cout<<"\n\tRoom Booking Confirmed"<<endl;
  }
  //* Creating a function inside a class "RoomBooking"
  void displayBooking(){
    cout<<"\n=================================\n"<<endl;
    cout <<"Guest Name: " <<GuestName <<endl;
    cout <<"Room Number: " <<RoomNo <<endl;
    cout <<"Number Of Days Booked: " <<No_Of_Days_Booked <<endl;
    cout<<"\n================================="<<endl;
  }
  
  //* Destructor
~ RoomBooking(){

  cout <<"\n\t Booking Ended, Room Released" <<endl;
}
};

//Main function
int main(){
 
  cout <<"\n\t____HOTEL ROOM BOOKING SYSTEM___\n"<<endl;

  //object creation called client1
  RoomBooking client1("john", 13, 05);

  // Displaying the object details
  client1.displayBooking();

  return 0;
}