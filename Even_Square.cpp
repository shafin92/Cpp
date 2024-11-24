#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
optimize();
int num,pow;
cin >> num;
for (int i = 2; i <= num; i+=2)
{
    pow = i * i;
  
    cout << i  << "^2 = " << pow << endl;
}
    return 0;
}