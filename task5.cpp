#include<iostream>
using namespace std;
main()
{
string name;
int weight;
int days;
cout<<"Enter the name of person: ";
cin >> name;
cout<<"Enter the target weight loss in kilogram: ";
cin >> weight;
days=weight*15;
cout<<name <<" will need " <<days <<" days to lose " <<weight <<" kg of weight by following doctor's suggestion";
}