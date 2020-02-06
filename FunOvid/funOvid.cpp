#include <iostream>

using namespace std;

double area(double rad){
   return 3.1415927 * rad * rad;
}

double area(double len, double wid){
   return len * wid;
}

int main(){
   double length, width, radius;
   cout << "This program calculatest he area of a shape (rectangle/circle)" << endl;
   
   cout << "Please enter the length of the rectangle: ";
   cin >> length;
   
   cout << "\nPlease enter the width of the rectangle: ";
   cin >> width;
   
   cout <<"\nThe area of the rectangle is " << area(length, width) << " sq. inches.";
   
   cout << "\nPlease enter the radius of the circle: ";
   cin >> radius;
   cout <<"\nThe area of the circle is " << area(radius) << " sq. inches.";
   
   return 0;
}
