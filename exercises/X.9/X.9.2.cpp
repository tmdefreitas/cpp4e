#include <iostream>
using namespace std;

struct Month {
  string name;
  int days;
};

int main() {
  const char* months[]       {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
  int days_in_month[] {   31,    28,    31,    30,    31,    30,    31,    31,    30,    31,    30,    31};

  Month year[] {{"Jan", 31},
                {"Feb", 28}};
                /* ... continues ... */

  for (int i=0; i < 12; ++i){
    cout << months[i] << " " << days_in_month[i] << endl;
  }
  cout <<  "------" << endl;
  for (Month m: year){
    cout << m.name << " " << m.days << endl;
  }
}
