#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
optimize();
string s;
vector<string> v;
while (cin >> s)
{
    reverse(s.begin() , s.end() );
    v.push_back(s);
}
for (int i = 0; i < v.size()-1; i++)
{
    cout << v[i] << " ";
}
cout << v[v.size()-1];
    return 0;
}