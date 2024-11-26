#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
optimize();
long long n;
cin >> n;
int a[n];
   for (long long i = 0; i < n; i++)
   {
    cin >> a[i];
   }
   int f;
   cin >> f;
   int index=-1;
   for (long long i = 0; i < n; i++)
   {
      if (f == a[i])
      {
        index =i;
        break;
      }
   }
   
cout << index << endl;

    return 0;
}