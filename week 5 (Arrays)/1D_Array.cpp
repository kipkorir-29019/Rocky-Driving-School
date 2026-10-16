#include <iostream>
using namespace std;

int main(){

  //* Declaring the variables
  double revenue[3];
  double totalRevenue = 0;
  double averageRevenue = 0;

  //Project title
  cout <<"\n\t_______HOTEL MANAGEMENT SYSTEM_______\n"<<endl;

  //Task title
  cout <<"\t_______Weekly Revenue Tracker_______\n"<<endl;

  //* 1D Array for revenue
  for (int i = 0; i < 3; i++)
  {

    //Prompting the user to enter the daily revenue
    cout <<"Enter day " << i +1 << " Revenue  : Ksh " ;
    cin >> revenue[i];

    //Calculating the total revenue
    totalRevenue += revenue[i];
  
    cout<<"\n"<<endl;

  }
  averageRevenue = (totalRevenue/7);

  //Displaying the totoal weekly revenue and the average daily revenue
  cout<<"=============================================="<<endl;
  cout <<"\n\tTotal Weekly Revenue : Ksh " <<totalRevenue <<endl;
  cout <<"\n\tAverage Daily Revenue: Ksh " << averageRevenue <<endl; 
  cout<<"\n=============================================="<<endl;

  return 0;
}
