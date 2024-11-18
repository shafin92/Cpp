#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
optimize();

string s ;
cin >> s;
string number;
for (int i = 0; i < s.length(); i+=2)
{
    number += s[i];
}
sort(number.begin(),number.end());

for (int i = 0; i < number.length(); i++)
{
    if (i >0)
    {
        cout << "+";
    }
    cout << number[i] ;
}

    return 0;
}