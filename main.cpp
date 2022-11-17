#include <iostream>

using namespace std;

int main() {
	
  int sps;
 cout << "enter the sps:";
  cin >> sps;
  int texpercentage;
  if (sps >= 25000000)
  texpercentage = 35;
  else if (sps >= 18000000)
  texpercentage = 25;
  else if (sps >= 14000000)
  texpercentage = 20;
  else if (sps >= 10000000)
  texpercentage = 15;
  else if (sps >= 8000000)
  texpercentage = 10;
  else if (sps >= 6000000)
  texpercentage = 5;
  else texpercentage = 0;
  int spsAfterTask = (sps*(100-texpercentage))/100;
  cout << "sps after tax: \n" << spsAfterTask;
  return 0;

}


