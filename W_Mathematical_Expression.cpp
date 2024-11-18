#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
optimize();

int a , b , c;
char s , q;
cin >> a >> s >> b >> q >> c;

if ( s == '+')
{
    if ( a + b == c)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << a + b << endl;
    } 
}
else if ( s == '-')
{
    if ( a - b == c)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << a - b << endl;
    } 
}
 else if( s == '*')
{
    if ( a * b == c)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << a * b << endl;
    } 
}

    return 0;
}