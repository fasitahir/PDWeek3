#include <iostream>
using namespace std;
main(){
string name;
int sub1;
int sub2;
int sub3;
int sub4;
int sub5;
int marksobtained;
int totalmarks=500;
float percentage;


cout<<"What is your name: ";
cin>> name;

cout<<"Marks in subject 1 are: ";
cin>> sub1;

cout<<"Marks in subject 2 are: ";
cin>> sub2;

cout<<"Marks in subject 3 are: ";
cin>> sub3;

cout<<"Marks in subject 4 are: ";
cin>> sub4;

cout<<"Marks in subject 5 are: ";
cin>> sub5;

marksobtained = sub1 + sub2 + sub3 + sub4 + sub5;
percentage=marksobtained/totalmarks *100;

cout << endl;
cout << "Your Name is: " <<name <<endl;
cout << "Your percentage  is: " << percentage;
}