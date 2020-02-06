Source & Screens: Test.cpp
#include <iostream>
#include "UsedComputer.h"
#include "UsedFurniture.h"

using namespace std;
int main()
{
   // create instance of UsedComputer
   UsedComputer computer;
   //set attributes of used computer
   computer.setBrandNewPrice(200.00);
   computer.setCondition('B');
   computer.setAge(3);
   computer.setModel("ROG1");
   // display calculated price
   cout<<"Current price for computer : ";
   cout<<computer.CalculateCurrentPrice()<<endl;
   cout<<"Shipping cost at 100.24 miles : ";
   cout<<computer.CalculateShippingCost(100.24)<<endl;

   // create UsedFurniture instance
   UsedFurniture furniture;
   // set attributes of furniture
   furniture.setAge(5);
   furniture.setBrandNewPrice(100.25);
   furniture.setCondition('A');
   furniture.setDescription("Victorian Table");
   furniture.setSize(120);
   furniture.setWeight(80);
   // display calculated price
   cout<<"Current price for computer : ";
   cout<<furniture.CalculateCurrentPrice()<<endl;
   cout<<"Shipping cost at 100.24 miles : ";
   cout<<furniture.CalculateShippingCost(100.24)<<endl;

}
