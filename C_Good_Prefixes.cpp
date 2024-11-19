#include <bits\stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int main() {
    optimize();
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        int good_prefix_count = 0;
        long long prefix_sum = 0;
        
        for (int i = 0; i < n; ++i) {
            prefix_sum += a[i];
            
            for (int j = 0; j <= i; ++j) {
                if (a[j] == (prefix_sum - a[j])) {
                    good_prefix_count++;
                    break;
                }
            }
        }
        
        cout << good_prefix_count << endl;
    }
    
    return 0;
}
