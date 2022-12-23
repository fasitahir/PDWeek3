#include<iostream>
using namespace std;
main(){
string movie;
int adultticket;
int childticket;
int adultticketsold;
int childticketsold;
float charity;
float charityamount;
float total;
float remaining;


cout<<"Enter the name of movie: ";
cin>> movie;

cout<<"Enter the Price of ticket for adult: ";
cin>> adultticket;

cout<<"Enter the Price of ticket for child: ";
cin>> childticket;

cout<<"Enter the number of adult tickets sold: ";
cin>> adultticketsold;

cout<<"Enter the number of child tickets sold: ";
cin>> childticketsold;

cout<<"Enter the percentage of charity: ";
cin>> charity;

total=childticketsold * childticket + adultticketsold * adultticket;

charityamount=charity/100 * total;

remaining= total - charityamount;

cout<<endl;
cout<<"**************************************"<<endl;

cout<<"Total amount is: " <<total <<endl;
cout<<"Remaining after charity: " <<remaining <<endl;
} 