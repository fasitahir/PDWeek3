#include <iostream>
using namespace std;
main(){
float vegkg;
float fruitkg;
float vegcoin;
float fruitcoin;
float total;
float totalinrps;

cout<<"Vegitable sell in kg: ";
cin>> vegkg;

cout<<"Fruit sell in kg: ";
cin>> fruitkg;

cout<<"Vegitable cost coin per kg: ";
cin>>vegcoin;

cout<<"fruit cost coin per kg: ";
cin>>fruitcoin;

total=vegcoin + fruitcoin;
totalinrps=total/1.94;
cout<<"Total in rps: "<<totalinrps;
}


