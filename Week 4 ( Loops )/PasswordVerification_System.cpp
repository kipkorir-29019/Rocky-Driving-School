#include <iostream>
using namespace std;
//* Week 4 Task 3

//* What the program should do:
// 1. Store a predefined username and password.
// 2. Ask the user to enter their username and password.
// 3. Check whether both credentials are correct.
// 4. If correct, display Access Granted and stop.
// 5. If incorrect, display `Incorrect credentials, try again

int main(){
  //* Project title
  cout <<"\n_________PASSWORD VERIFICATION SYSTEM_________\n"<<endl;
  
  //Declaring the variables
  string username;
  int password;
 
  //* Setting a the correct password and username
  int correctPassword = 1234;
  string correctUsername = "John , Amos , Evans";

  //* Prompting the user to enter the username and password
   cout <<"Enter the your details below.......\n" <<endl;

   //* Implementing  the do while loop
  do
  {
    cout <<"Username: "<<endl;
    cin >>username;

    cout <<"\nPassword: "<<endl;
    cin >>password;

    //* Using the if else loop too determine if the username and the password entered is correct
    if (username == correctUsername && password == correctPassword){
      cout <<"\n Access Granted......."<<endl;
    }
    else{
      cout<<"\nIncorrect Credentials, try Again!!!\n"<<endl;
    }

    //* Using while to repeate prompting the user if the username or password is incorrect
  } while (password != correctPassword || username != correctUsername);


  return 0;
}