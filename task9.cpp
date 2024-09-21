#include<iostream>
using namespace std;
main()
{
int number;
int n;
int m;
int x;
int y;
int z;
int u;
int t;
int sum;
cout<<"Enter a 4-digit number: ";
cin >> number;
n=number%10;
m=number/10;
x=m%10;
y=m/10;
z=y%10;
u=y/10;
t=u%10;
sum=n+x+z+t;
cout<<"Sum of individual digits = " <<sum;
}

