#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    while (1)
    {
        int n;
        cin >> n;
        if (n == 0)
        {
            break;
        }
        for (int i = 1; i <= n; i++)
        {
            if (i > 1) 
                cout << " ";  // Print a space before numbers except the first one
            cout << i;
        }
        cout << "\n";
    }
    return 0;
}
