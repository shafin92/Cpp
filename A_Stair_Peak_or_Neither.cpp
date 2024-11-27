#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
optimize();

int tc;
cin >> tc;
while (tc--)
{
    int a ,b,c;
    cin >> a >> b >> c;
    if (a<b && b < c)
    {
       cout << "STAIR" << endl;
    }
    else if (a < b &&  b > c)
    {
       cout << "PEAK" << endl;
    }
    else
    {
        cout << "NONE" << endl;
    }
    
    
    
}

    return 0;
}