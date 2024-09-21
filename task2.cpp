#include<iostream>
using namespace std;
main()
{
int minutes;
int frames;
int total;
cout<<"Number of minutes: ";
cin >> minutes;
cout<<"Frames per second: ";
cin >> frames;
total=minutes*60*frames;
cout<<"Total number of frames: " << total;
}