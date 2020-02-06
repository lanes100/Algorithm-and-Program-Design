#include <iostream>
using namespace std;

void ConvMilesFtIn(int steps, int &miles, int &feet){
   
   miles = steps * 2/5200;
   feet = steps * 2%5200;
   cout << "Inside ConvMilesFtIn: miles = " << miles << ", feet = " << feet << "\n\n" <<endl;
   
}

int main(){
   int totSteps = 11035;
   int miles = 0; 
   int feet = 0;
   
   ConvMilesFtIn(totSteps, miles, feet);
   
   cout << "Inside main, " <<totSteps << " steps equal: ";
   cout << miles << " miles and ";
   cout << feet << " feet. " << endl;
   
   
   return 0;
}
