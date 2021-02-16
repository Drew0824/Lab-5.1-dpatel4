#include <iostream>
using namespace std;

int main() {
  
  double hours;
  double mins;
  double secs;
  double time;
  
  cout << "Enter the hour of the day:\n" << endl;
  cin >> hours;

  cout << "Enter the minutes of the hour:\n" <<endl;
  cin >> mins;

  cout << "Enter the seconds passed in the current minute\n" <<endl;
  cin >> secs;

  
  time = secs + mins * 60 + hours * 3600;
  cout << "The time in seconds since midnight is:\n" << time <<endl;







  
}