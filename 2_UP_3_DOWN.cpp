#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();

    int X, Y;
    cin >> X >> Y;

    int difference = abs(X - Y);

    if ((X < Y && difference <= 2) || (X > Y && difference <= 3)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
