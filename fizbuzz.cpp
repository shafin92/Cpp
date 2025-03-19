#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
optimize();
int n;
 cin >> n;
for (int i = 1; i <= n; i++)
{
   if (i % 3 == 0 && i % 5 == 0)
   {
     cout << "Fizzbuzz" << endl;
   }
   else if ( i % 3 == 0)
   {
    cout << "Fizz" << endl;
   }
   else if (i % 5 == 0)
   {
       cout << "Buzz" << endl;
   }
   else
   {
    cout << i << endl;
   }
}
    return 0;
}