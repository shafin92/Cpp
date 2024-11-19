#include <bits\stdc++.h>
using namespace std;

int main() {
    double x , p;
    cin >> x >> p;
    double dis = x/100;
    
  double originalPrice;

  originalPrice = p / (1 - dis);

  cout << fixed << setprecision(2) << originalPrice << endl;

  return 0;
}