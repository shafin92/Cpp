#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
optimize();
int n;
cin >> n;
while (n--)
{
    int x;
    cin >> x;

    if ( x > 0)
    {
        if ( x % 2 == 0)
        {
            cout << "EVEN" ;
            cout << " POSITIVE" << endl;
        }
        else
        {
            cout << "ODD" ;
            cout << " POSITIVE" << endl;
        }   
    }
    else if ( x < 0)
    {
        if (x % 2 == 0)
        {
            cout << "EVEN" ;
            cout << " NEGATIVE" << endl; 
        }
        else
        {
           cout << "ODD" ;
           cout << " NEGATIVE" << endl; 
        }
        
    }
    else
    {
        cout << "NULL" << endl;
    }
    
    
   
}

    return 0;
}