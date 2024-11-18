#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
    optimize();
    long long n;
    cin >> n;
    if (n <= 1) {
        cout << "NO" << endl;
        return 0;
    }
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;

    return 0;
}
