#include<iostream>
using namespace std;
main(){
float velocityi;
float accerleration;
float time;
float velocityf;

cout<<"Enter the initial velocity of object: ";
cin>> velocityi;

cout<<"Enter the accerleration of object: ";
cin>> accerleration;

cout<<"Enter the time taken by the object: ";
cin>> time;

velocityf=(time*accerleration)+velocityi;
cout<<"Final velocity of object is: "<<velocityf;
}

