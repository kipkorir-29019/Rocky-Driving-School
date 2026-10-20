#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    // Variable Declaration
    int chain[3][5][10];
    int occupied = 0;

     //Project title
    cout <<"\n\t_______HOTEL MANAGEMENT SYSTEM_______\n"<<endl;

    // Seed the random number generator
    srand(time(0));

    // Generate occupancy data for all branches
    for (int b = 0; b < 3; b++) {
        for (int f = 0; f < 5; f++) {
            for (int r = 0; r < 10; r++) {
                chain[b][f][r] = rand() % 2;
            }
        }
    }

    // Count occupied rooms across all branches
    for (int b = 0; b < 3; b++) {
        for (int f = 0; f < 5; f++) {
            for (int r = 0; r < 10; r++) {
                if (chain[b][f][r] == 1) {
                    occupied++;
                }
            }
        }
    }
// Display Produced
    cout << "\n\t_______Hotel Occupancy Report_______\n" << endl;
    cout << "Total branches: 3 Branches" << endl;
    cout << "Total rooms: 150" << endl;
    cout << "Occupied rooms: " << occupied << endl;
    cout << "Vacant rooms: " << 150 - occupied << endl;

    return 0;
}
