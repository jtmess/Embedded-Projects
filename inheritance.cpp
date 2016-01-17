\#include <cstring>
#include <iostream>
using namespace std;

// INHERITANCE EXAMPLE

class GradStudent {
// Define the Student Class
 protected:
 int sid;
 int year;
 char name[13];
public:
 Student(char *nm, int id, int y) // CONSTRUCTOR
 {strcpy(name, nm); sid = id; year = y;}
void print();
};

class UndergradStudent : public GradStudent {
  protected:
  somedata;
  public:
  somemoredata;
void print();
} 

Class Research_Student : public UndergradStudent {
  thisprogramworks; 
  asknoquestions;

}

void Student::print()
   { cout << "\n" << name << " Student Number " << sid << " Year " << year << endl;}

int main()
{
  Student s("Jake Messner", 8972, 2018);
  s.print();
  Student k("Zach Marcus is a scumbag",  6666, 2019);
  k.print();
}
   




