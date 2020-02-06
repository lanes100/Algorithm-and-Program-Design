#include <iostream>
using namespace std;
double avg(int arr[], int sz){
   double av = 0.0, sum = 0.0;
   for (int i = 0; i < sz; ++i){
      sum = sum + arr[i];
   }
   av = sum / 10.0;
   return av;
}
int main(){
    int arr1[]={15,27,9,5};
             // 0  1  2 3
    cout << arr1[0] << endl; //output would be 15
    
    int size = 10;
    int arr2[size];
   
    /*how to assign to arrays?
    arr2[0] = 0
    arr2[1] = 0
    */
    //or use a for loop
    for (int i=0 ; i <= 9; ++i){
       arr2[i]= i;
      cout << arr2[i] << "\t";
    }
    
    cout << endl;
    
    for(int j = 0; j < 10 ; j++){
       cout << arr2[j] << "\t";
    }
    
    cout << endl;
    
    for(int i = 0; i < 10; ++i){
       cout << i << "\t";
    }

    //make a call to avg and get the average of values returned
    
    

    double avg1 = avg(arr2, size);
    cout << endl << "The average of elements in arr2 is: " << avg1 << endl;
    
    
    return 0;
}
