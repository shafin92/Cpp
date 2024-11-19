#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
optimize();

string x , y;
cin >> x >> y;
if ( x == y)
{
    cout << x << endl;
}
else if ( x > y)
{
    cout << y << endl;
}
else
{
   cout << x << endl; 
}


    return 0;
}