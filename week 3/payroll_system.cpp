#include <iostream>
#include <string>
using namespace std;

//* Declaring the variables
//* Why do i declare the variables outside the function: 
//* REASON: To allow access by different functions avoiding repetition 
string employeeName;
double basicSalary, overtimeHours;
double overtimePay, netSalary;

//* Function for storing the employees details
void getEmployeeDetails()
{
    cout << "Enter employee name: ";
    getline(cin, employeeName);

    cout << "Enter basic salary: ";
    cin >> basicSalary;

    cout << "Enter overtime hours: ";
    cin >> overtimeHours;
}

//* Function for calculating the overtime pay
double calculateOvertimePay()
{
  //* setting the rate per hour to be constant 200 per hour
    double ratePerHour = 200;

    overtimePay = overtimeHours * ratePerHour;

    return overtimePay;
}

//* A function for calculating the net salary
double calculateNetSalary()
{
    netSalary = basicSalary + overtimePay;

    return netSalary;
}

//* Display Produced by the system
void displayPayslip()
{
    cout << "\n________EMPLOYEE PAYSLIP________\n" << endl;
    cout << "Employee Name: " << employeeName << endl;
    cout << "Basic Salary: KSh " << basicSalary << endl;
    cout << "Overtime Hours: " << overtimeHours << endl;
    cout << "Overtime Pay: KSh " << overtimePay << endl;
    cout << "\n\tNET SALARY: KSh " << netSalary << endl;
}

// Main function
int main()
{
  cout<<"\n\t___________COMPANY'S PAYROLL SYSTEM_____________\n"<<endl;

  //*System accessing the functions
    getEmployeeDetails();

    calculateOvertimePay();

    calculateNetSalary();

    displayPayslip();

    return 0;
}