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
    string a , b;
    cin >> a >> b;
    swap(a[0] , b[0]);
    cout << a << " " << b << endl;

}

    return 0;
}