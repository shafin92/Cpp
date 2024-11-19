#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        for (int i = 0; i < m; ++i)
            cin >> b[i];

        unordered_set<int> set_a(a.begin(), a.end());
        unordered_set<int> set_b(b.begin(), b.end());

        bool possible = true;
        for (int i = 1; i <= k; ++i) {
            if (set_a.find(i) == set_a.end() && set_b.find(i) == set_b.end()) {
                possible = false;
                break;
            }
        }

        if (possible)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
