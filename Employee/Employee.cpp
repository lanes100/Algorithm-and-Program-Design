#include <iostream>
using namespace std;
class emp{
   
   private:
   string name;
   int hsalary, hours, age, wsalary;
   int weeklySalaryCalc(int hours, int hsalary);
   
   public:
   emp();
   emp(string name, int age, int hsalary, int wsalary, int hours);
   void printPayslip(); //member function
   //mutators
   void setName(string name);
   void setAge(int age);
   void setHsalary(int hsalary);
   void setHours(int hours);
   
   //accessors
   string getName(string name){return name;};
   int getAge(int age){return age;};
   int getHsalary(int hsalary){return hsalary;};
   int getHours(int hours){return hours;};   
};

emp::emp(){  //default constructor
   this->name = "NoName";
   this->hsalary = 0;
   this->hours = 0;
   this->age = 0;
}

emp::emp(string name, int age, int hsalary, int wsalary, int hours){ //overloaded constructor
   this->name = name;
   this->age = age;
   this->hsalary = hsalary;
   this->hours = hours;
}

//mutators
void emp::setName(string name){
   this->name = name;
}

void emp::setAge(int age){
   this->age = age;
}

void emp::setHsalary(int hsalary){
   this->hsalary = hsalary;
}


void emp::setHours(int hours){
   this->hours = hours;
}

int emp::weeklySalaryCalc(int hours, int hsalary){
   return hours * hsalary;
}

void emp::printPayslip(){
  
  int calc = weeklySalaryCalc(hours, hsalary);
  cout << endl << "Name" << "\t" << "Age" << "\t" << "Hourly Salary" << "\t" << "Hours Worked" << "\t" << "Weekly Salary"<< endl;
  cout << name << "\t" << age << "\t" <<  hsalary << "\t" << "\t" << hours << "\t" << "\t" << calc << endl <<endl;
  cout << endl << getName(name) << "\t" << getAge(age)  << "\t" << getHsalary(hsalary) << "\t\t" <<getHours(hours) << endl;

}

int main(){
   emp emp1, emp2, emp3("Jack", 43, 50, 2000, 40); //overloaded constructor
   emp1.setName("Noah");
   emp1.setAge(21);
   emp1.setHsalary(25);
   emp1.setHours(20);
   
   emp1.printPayslip();
   emp2.printPayslip();
   emp3.printPayslip();
}
