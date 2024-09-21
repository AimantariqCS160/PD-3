#include<iostream>
using namespace std;
main()
{
float i;
float p;
float chances;
cout<<"Enter Imposter count: ";
cin >> i;
cout<<"Enter Player count: ";
cin >> p;
chances=100*(i/p);
cout<<"Chances of being an imposter: " << chances <<"%";
}