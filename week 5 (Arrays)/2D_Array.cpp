#include <iostream>
using namespace std;

int main(){

  // Variable declaration
  int occupancy[5][10];

  //* Project title
  cout <<"\n\t______HOTEL MANAGEMENT SYSTEM______\n"<<endl;

  //* Task title
  cout<<"\n\t ______Room Occupancy__________\n"<<endl;
  cout <<"\nEnter 1 if the room is occupied and 0 if it's vaccant\n"<<endl;;

  for (int i = 0; i < 5; i++) {  //using i to represent the floors
     cout << "\t\tFloor " << i + 1 << endl;
    
    for (int j = 0; j < 10; j++) { // Using j to represent rooms
        cout << "Room " << j + 1 << " : ";
        cin >> occupancy[i][j];
    }
  }
  //*for loop for checking the occupied and the vaccant rooms
  for (int i = 0; i < 2; i++) {
    int occupied = 0;
    int vacant = 0;

    for (int j = 0; j < 5; j++) {
        if (occupancy[i][j] == 1) {
            occupied++;
        } else {
            vacant++;
        }
    }

  //* Display to output the number of occupied rooms and vaccant rooms
    cout<<"\n"<<endl;
    cout << "Floor " << i + 1 << endl;
    cout<<"\n"<<endl;
    cout << "Occupied Rooms: " << occupied << endl;
    cout << "  Vacant Rooms: " << vacant << endl;
  }


  return 0;
}