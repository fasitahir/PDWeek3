#include <iostream>
using namespace std;
main(){
float cost;
float area;
float weight;
float costpweight;
float costparea;

cout<<"The size of bag per pound is: ";
cin>> weight;

cout<<"The cost of bag is: ";
cin>> cost;

cout<<"The area of garden is(in sq foot): ";
cin>> area;

cout<<endl;

cout<<"***************************"<<endl;

costpweight=cost/weight;
costparea=cost/area; 

cout<<"The price per pound is: " <<costpweight <<endl;
cout<<"The price per area is: " <<costparea <<endl;
}