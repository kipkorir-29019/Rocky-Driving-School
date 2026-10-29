#include <iostream>
#include <string>
using namespace std;

// Task 2: Vehicle System

// Parent class
class Vehicle {
private:
//Parent class variables
    string Brand;
    int year;

public:
    // Constructor
    Vehicle(string brand, int year_of_manufacture) {
        Brand = brand;
        year = year_of_manufacture;
    }

    // Function to display vehicle details
    void displayVehicle() {
        cout << "\n===========================" << endl;
        cout << "\n\tVEHICLE DETAILS\n" << endl;
        cout << "Vehicle Brand: " << Brand << endl;
        cout << "Year of Manufacture: " << year << endl;
    }
};

// Derived class
class Car : public Vehicle {
private:
//Child Class variables
    int no_of_doors;
    int capacity;

public:
    // Constructor
    Car(int doors, int size, string brand, int year_of_manufacture)
        : Vehicle(brand, year_of_manufacture) {
        no_of_doors = doors;
        capacity = size;
    }

    // Function to display car details
    void displayCar() {
        cout << "Number of Doors: " << no_of_doors<<" Doors" << endl;
        cout << "Capacity: " << capacity<<" seats" << endl;
        cout << "\n===========================" << endl;
    }
};

// Main function
int main() {
    cout << "\n\tVEHICLE SYSTEM\n" << endl;

    //Object creations
    Car car1(4, 4, "Toyota", 2015);

    //Displaying object details
    car1.displayVehicle();
    car1.displayCar();

    return 0;
}