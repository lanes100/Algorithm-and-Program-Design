/*Write a C++ program rectangle01.cpp that calculates some parameters for a rectangle. 

Create a rectangle class and do all operations detailed subsequently on rectangle object/s.

The program prompts the user for length (inches) and breadth (inches) of a rectangle.

It then calls a function area( ) to calculate the area of the rectangular board 
(length x breadth, in square inches) and reports it.

It then calls another function perimeter( ) to calculate the perimeter of the 
rectangular board (sum of its four sides, in inches) and reports it.

It then calls a fourth function diagonal( ) that calculates the length of a 
diagonal of the rectangular board (√(length ^2 + breadth ^2), in inches) and reports it.

If the cost of painting the board is $2.09 per square inch, also call a cost( ) 
function that indicates the cost of painting (in US$) the board on one side. 

Make sure your painting cost has just two digits after the decimal point.
*/

#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

class rect{
   private:
   double length;
   double breadth;
   double price = 2.09;
   
   public:
   rect();
   rect(double length, double breadth);
   double area();
   double perimeter();
   double diagonal();
   double cost(double area);      
   void setLength(double length);
   void setBreadth(double breadth);
};

rect::rect(double length, double breadth){
   this->length = length;
   this->breadth = breadth;
}

void rect::setLength(double length){
   this->length = length;
}

void rect::setBreadth(double breadth){
   this->breadth = breadth; 
}

double rect::area(){
   return length * breadth;
}

double rect::perimeter(){
   return (length * 2) + (breadth * 2);
}

double rect::diagonal(){
   return sqrt((length * length) + (breadth * breadth));
}

double rect::cost(double area){
   return price * area;
}

int main(){
   rect rect1(10, 5);
   cout << "This program calculatest he area of a shape (rectangle/circle)" << endl;
   
   cout << "Please enter the length of the rectangle: ";
   double i;
   cin >> i;
   rect1.setLength(i);
   
   cout << "\nPlease enter the width of the rectangle: ";
   double k;
   cin >> k;
   rect1.setBreadth(k);
   
   cout << fixed << setprecision(2);
   cout << endl << "The area of the rectangle is: " << rect1.area() << endl;
   cout << "The perimeter of the rectangle is: " << rect1.perimeter() << endl;
   cout << "The diagonal of the rectangle is: " << rect1.diagonal() << endl;
   cout << "The price of the painting board is: $" << rect1.cost(rect1.area()) << endl;
}
