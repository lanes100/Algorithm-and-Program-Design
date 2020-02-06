#include <iostream>
using namespace std;

#include "Stu2.h"

int main() {
  Stu1 st1, st2, st3("Jane", 369369369, 50, 49);           //st2 calling the default constructor
  st1.printDetails();
  st1.setName("John");
  st1.setId(12356789);
  st1.setExamPoints1(35);
  st1.setExamPoints2(54);
  
  cout << "The name data member of st1 object holds: " << st1.getName() << endl;
  cout << "The student ID data member of st1 object holds: " << st1.getId() <<endl;
  cout << "The exam points data member of st1 object holds: " << st1.getExamPoints1() <<endl;  
  cout << "The exam points 2 data member of st1 object holds: " << st1.getExamPoints2() << endl;
  st1.printDetails();
  st2.printDetails();
  st3.printDetails();
  cout << "Now ending the program" << endl;
  return 0;
}
