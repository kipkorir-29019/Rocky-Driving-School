#include <iostream>
using namespace std;
//* Week 6 task 1

//*Implementing the class
class Book{
  public:

  //*variable declaration
  string book_title;
  string author;
  int availableCopies;
  int new_copies;
  int borrowCopies;

  //* Functions inside the class Book
  void inputDetails(){
  	
    //* Prompting the user to enter the details
    cout <<"Enter the Book Title: "<<endl;
    cin >>book_title;

    cout <<"Enter the Authors Name: "<<endl;
    cin >>author;

  }

  //* Implementing the borrow book function
  void borrowBook(){
  	cout <<"\nAvailable copies: "<<availableCopies <<"\n"<<endl;
    cout <<"Enter the number of copies to borrow: "<<endl;
    cin >>borrowCopies;
    
    new_copies = (availableCopies - borrowCopies);

  }

  //* Implementing the display Details funcion 
  void displayDetails(){
    cout <<"\n===========================================\n"<<endl;
    cout <<"            Book Title: "<< book_title <<endl;
    cout <<"                Author: " <<author <<endl;
    cout <<"       Copies Borrowed: " <<borrowCopies << " Copies" <<endl;
    cout <<"\nRemaining copies after borrow: " <<new_copies << " Copies" <<endl;
    cout <<"\n==========================================="<<endl;
  }


};

//* Main function
int main(){
	cout<<"\n\tLIBRARY MANAGEMENT SYSTEM\n"<<endl;
  
  //* Implementing the object
  Book book1;

  book1.availableCopies = 700;

  book1.inputDetails();
  book1.borrowBook();
  book1.displayDetails();
  
  return 0;
}