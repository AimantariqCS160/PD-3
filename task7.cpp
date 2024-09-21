#include<iostream>
using namespace std;
main()
{
string name;
int adultprice;
int childprice;
int adultsold;
int childsold;
float charity;
int salesamount;
double donation;
int remaining;
cout<<"Enter the movie name: ";
cin >> name;
cout<<"Enter the adult ticket price: $";
cin >> adultprice;
cout<<"Enter the child ticket price: $";
cin >> childprice;
cout<<"Enter the number of adult ticket sold: ";
cin >> adultsold;
cout<<"Enter the number of chlid ticket sold: ";
cin >> childsold;
cout<<"Enter the percentage of the amount to be donates to charity: ";
cin >> charity;
cout<<endl;
cout<<"Movie: ";
cin >> name;
salesamount=(adultprice*adultsold)+(childprice*childsold);
donation=(salesamount*10)/100;
remaining=salesamount-donation;
cout<<"Total namount generared from ticket sales: $" <<salesamount <<endl;
cout<<"Donation to charity: $" <<donation <<endl;
cout<<"Remaining amount after donation: $" <<remaining;
}