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
        string s;
        cin >> s;
        string a[9] = {"YES", "yES", "YeS", "YEs", "yeS", "Yes", "yEs" , "yes" };
        
        bool found = false;
        for (int i = 0; i < 9; ++i)
        {
            if (s == a[i])
            {
                found = true;
                break;
            }
        }
        
        if (found)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}
