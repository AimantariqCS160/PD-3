#include<iostream>
using namespace std;
main()
{
int sides;
int sum;
cout<<"Enter the number of sides of polygon: ";
cin >> sides;
sum=(sides-2)*180;
cout<<"The sum of integral angles of a " << sides <<"-sides polygon is: " << sum << " degrees";
}