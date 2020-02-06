#include <iostream>
using namespace std;

void swap(int& a, int& b){
   int temp = a; //copy of a in temp, temp = 5, a = 5
   a = b; 
   b = temp; //a = 6, b = 5, temp = 5
}

int main(){
   
   int a = 5, b = 6, temp;
   
   cout << "Before swap, a = " << a << " and b = " << b << endl;
   
   swap(a, b);
   
   cout << "After swap, a = " << a << " and b = " << b << endl;
   
   return 0;
}
