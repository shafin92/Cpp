#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
optimize();
int a,b;
while (true)
{
    cin >> a >> b;
     if( a > b) swap(a , b);

     if (a <= 0 || b <=0)
     {
        break;
     }
     int sum = 0;
     for (int i = a; i <= b; i++)
     {
        cout << i << " ";
        sum += i;
     }
   cout << "sum =" << sum << endl;  
}

    return 0;
}