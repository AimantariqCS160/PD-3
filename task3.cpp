#include<iostream>
using namespace std;
main()
{
int velocity;
int acceleration;
int time;
int final;
cout<<"Enter initial velocity(m/s): ";
cin >> velocity;
cout<<"Enter acceleration(m/s^2): ";
cin >> acceleration;
cout<<"Enter time(s): ";
cin >> time;
final=velocity+(acceleration*time);
cout<<"Final velocity(m/s): " <<final;
}