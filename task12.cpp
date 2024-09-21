#include<iostream>
using namespace std;
main()
{
int n;
int width;
int height;
int wallpaint;
cout<<"Number of square meters you can print: ";
cin >> n;
cout<<"Width of the single wall (in meters): ";
cin >> width;
cout<<"Height of the single wall(in meters): ";
cin >>height;
wallpaint=n/(width*height);
cout<<"Number of walls you can paint: " << wallpaint;
}