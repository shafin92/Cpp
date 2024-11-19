#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();

    int n;
    cin >> n;
    map<string, bool> vis;

    while (n--)
    {
        string s;
        cin >> s;

        if (vis[s])
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }

        vis[s] = true;
    }

    return 0;
}
