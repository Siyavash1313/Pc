#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
#include <iostream>

 using namespace std;	
 int main() {
int x,y,z;
  float ans;
  cout <<"enter x value:";
    cin >> x;
      cout << "\n enter y value:";
    cin >> y;
    cout <<"\n enter z value:";
    cin >> z;
    ans = (x-y)*(x+z)/(x+y+z)*(x+y+z)+1;
    cout << ans;
}



