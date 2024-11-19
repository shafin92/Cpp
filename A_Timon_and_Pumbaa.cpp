#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
optimize();

long long a , b , ans;
cin >> a >> b;
if (a - b >= 0)
{
    ans = a - b;
    cout << ans;
}
else
{
    cout << "0" << endl;
}


    return 0;
}