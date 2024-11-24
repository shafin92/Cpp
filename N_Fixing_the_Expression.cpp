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
    int n1,n2;
    char c;
    cin >> n1 >> c >> n2;
    if (n1 < n2)
    {
        cout << n1 << "<" << n2 << endl;
    }
    else if (n1 > n2)
    {
        cout << n1 << ">" << n2 << endl;
    }
    else cout << n1 << "=" << n2 << endl;
    
    
}


    return 0;
}