#ifndef STU2_H
#define STU2_H
#include <iostream>
using namespace std;

class Stu1{
  
  public:
  Stu1();		//default constructor
  Stu1(string name, int id, int examPoints1, int examPoints2);		//overloaded constructor
  //~Stu1();
  void printDetails();		//member function
  //mutators
  void setName(string stName);
  void setId(int stId);
  void setExamPoints1(int stExamPoints1);
  void setExamPoints2(int stExamPoints2);
  //accessors
  string getName(){return name;};		//inline function
  int getId(){return id;};
  int getExamPoints1(){return examPoints1;};
  int getExamPoints2(){return examPoints2;};
  
  private:
  string name;		//data members of the class
  int id, examPoints1, examPoints2;
  int totalPoints(int exPts1, int exPts2);
};
#endif
