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
        int n; 
        cin >> n;
        int result = 0;
        for (int i = 0; i < n; i++) 
        {
            int a;
            cin >> a;
            if (i % 2 == 0) 
            {
                result += a;  
            } 
            else 
            {
                result -= a; 
            }
        }

        cout << result << endl; 
    }

    return 0;
}
