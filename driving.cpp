//Driving Result
#include <iostream>
#include <string>
using namespace std;
int main(){
  cout<<"\n___________DRIVING TEST RESULT__________\n"<<endl;
  string Student_name;
  int Theory_marks;
  int Practical_marks;
  float Average_marks;

  cout << "Enter The Student Name: " << endl;
  cin >> Student_name;
  cout << "Enter The Theory Marks: " << endl; 
  cin >> Theory_marks;
  cout << "Enter The Practical Marks: " << endl;
  cin >> Practical_marks;

  Average_marks = (Theory_marks + Practical_marks) / 2.0;
  
  cout<<"DRIVING TEST RESULT"<<endl;
  cout<<"===================="<<endl;
  cout<<"Student Name: " << Student_name << endl;
  cout<<"Theory Marks: " << Theory_marks << endl;
  cout<<"Practical Marks: " << Practical_marks << endl;
  cout<<"Average Marks: " << Average_marks << endl;
}