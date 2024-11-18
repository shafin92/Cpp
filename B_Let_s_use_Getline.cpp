#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
optimize();

string s;
getline(cin , s);

for (int i = 0; i < s.length(); i++)
{
    if (s[i] == '\\')
    {
        break;
    }
    cout << s[i];
    
}
cout << endl;
    return 0;
}