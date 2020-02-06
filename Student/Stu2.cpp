#include <iostream>
using namespace std;

#include "Stu2.h"

//constructors
Stu1::Stu1(){		// default constructor assignment
  name = "NoName";
  id = 10000000;
  examPoints1 = 0;
  examPoints2 = 0;
}
/*
Stu1::Stu1(string stNm, int stId1, int stExPts1, int stExPts2){      //overloaded constructor assignment
  name = stNm;
  id = stId1;
  examPoints1 = stExPts1;
  examPoints2 = stExPts2;
}
*/
Stu1::Stu1(string name, int id, int examPoints1, int examPoints2){      //overloaded constructor assignment
  this->name = name;
  this->id = id;
  this->examPoints1 = examPoints1;
  this->examPoints2 = examPoints2;
}

/*
//Destructor
Stu1::~Stu1();
cout << "Object Destroyed" << endl;

*/

//mutators

void Stu1::setName(string stName){
  name = stName;
}

void Stu1::setId(int stId){
  id = stId;
}

void Stu1::setExamPoints1(int stExamPoints1){
  examPoints1 = stExamPoints1;
}

void Stu1::setExamPoints2(int stExamPoints2){
  examPoints2 = stExamPoints2;
}

/*
//accessors

string Stu1::getName(){	//remove for inline function
  return name;
}


int Stu1::getId(){
  return id;
}

int Stu1::getExamPoints1(){
  return examPoints1;
}

int Stu1::getExamPoints2(){
  return examPoints2;
}
*/

int Stu1::totalPoints(int exPts1, int exPts2){
   return exPts1 + exPts2;
}

void Stu1::printDetails(){
  
  int sum = totalPoints(examPoints1, examPoints2);
  cout << endl << "Name" << "\t" << "ID" << "\t" << "\t" << "Exam 1" << "\t" << "Exam 2"<< endl;
  cout << name << "\t" << id << "\t" <<  examPoints1 << "\t" << examPoints2 << sum <<endl <<endl;

}
