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
    int n,k;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        for (char i = 'a'; i < 'a' +k; i++)
        {
            cout << i;
        }
        
    }
    cout << endl;
}

    return 0;
}