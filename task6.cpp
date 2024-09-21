#include<iostream>
using namespace std;
main()
{
int size;
int bagcost;
int area;
int costperpound;
int costpersq;
cout<<"Enter the size of fertilizer bag: ";
cin >> size;
cout<<"Enter the cost of bag: $";
cin >> bagcost;
cout<<"Enter the area in square feer that can covered by bag: ";
cin >> area;
costperpound=bagcost/size;
costpersq=size*area;
cout<<"Cost of fertilizing per pound: $" << costperpound <<endl;
cout<<"Cost of fertilizing per square foot: $" << costpersq;
}