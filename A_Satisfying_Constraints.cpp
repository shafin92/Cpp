#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int lower_bound = 1, upper_bound = 1e9;
        int count = 0;

        for (int i = 0; i < n; ++i) {
            int a, x;
            cin >> a >> x;

            if (a == 1) {
                lower_bound = max(lower_bound, x);
            } else if (a == 2) {
                upper_bound = min(upper_bound, x - 1);
            } else if (a == 3) {
                // Ignore not equal constraint
            }
        }

        count = max(0, upper_bound - lower_bound + 1);
        cout << count << endl;
    }

    return 0;
}
