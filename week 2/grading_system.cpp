#include <iostream>

//* todo:  thought process

//  step1: declare variables to store the user(student)input(s). **studetn name and marks**
//  step2: prompt user to enter the details(marks)
// step3: implement an if-else ladder to determine the student's grade
// step4: output the user's grade.

using namespace std;

int main(){
  string studentName;
  int studentMarks;

  // * name and marks input

  cout<< "\n\tSTUDENT GRADING SYSTEM\n" <<endl;
  cout<<"Enter Student Name: "<<endl;
  cin >>studentName;
  cout<<"Enter Student Marks: "<<endl;
  cin >>studentMarks;

  // * if-else ladder to determine the student's grade

  char grade;
  if (studentMarks >= 70 && studentMarks <= 100) {
    grade = 'A';
  } else if (studentMarks >= 60 && studentMarks < 70) {
    grade = 'B';
  } else if (studentMarks >= 50 && studentMarks < 60) {
    grade = 'C';
  } else if (studentMarks >= 40 && studentMarks < 50) {
    grade = 'D';
  } else if (studentMarks < 40) {
    grade = 'E';
  } else {
    cout << "Invalid marks entered." << endl;
    return 1; // Exit the program with an error code
  }

  // * Output produced

  cout << "\n==================================\n" << endl;
  cout << "\tSTUDENT GRADE REPORT\n" << endl;
  cout << "Student Name: " << studentName << endl;
  cout << "Student Marks: " << studentMarks << endl;
  cout << "Grade: " << grade << endl;
  cout << "\n==================================\n" << endl;

}

