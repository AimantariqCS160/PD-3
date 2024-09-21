#include<iostream>
using namespace std;
main()
{
float vegprice;
float fruitprice;
int totalveg;
int totalfruit;
int earning;
float vegrp;
float fruitrp;
cout<<"Enter vegetable price per kilogram(in coins): ";
cin >> vegprice;
cout<<"Enter fruit price per kilogram(in coins): ";
cin >> fruitprice;
cout<<"Enter total kilograms of vegetables: ";
cin >> totalveg;
cout<<"Enter total kilograms of fruit: ";
cin >> totalfruit;
vegrp=vegprice/1.94;
fruitrp=fruitprice/1.94;
earning=(vegrp*totalveg)+(fruitrp*totalfruit);
cout<<"Total earning in rupees(Rps): " << earning;
}
