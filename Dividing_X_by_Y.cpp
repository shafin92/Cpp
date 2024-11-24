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
        double x, y, div;
        cin >> x >> y;

        if (y == 0) 
        {
            cout << "divisao impossivel" << endl;
        }
        else
        {
            div = x / y;
            cout << fixed << setprecision(1) << div << endl;
        }
    }

    return 0;
}
