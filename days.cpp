#include <iostream>
using namespace std;

//DEFINE Mod_Int Class
class Date
{
 private:
   int days; // PRIVATE DATA
 public:
   Date(int d, int w, int y) { days = d*1 + w*7 + y*365; }
   int getDays() { return days; }
   int getWeeks() { return days/7; }
   int getYears() { return days/365; }
};
main()
{
   int days;
   int weeks;
   int years;
   cout<<"Enter number of days\n";
   cin>>days;
   cout<<"Enter number of weeks\n";
   cin>>weeks;
   cout<<"Enter number of years\n";
   cin>>years;
   Date date = Date(days, weeks, years);

   cout<<date.getDays()<<" days = "<<date.getWeeks()<<" weeks = "<<date.getYears()<<" years\n";
}
