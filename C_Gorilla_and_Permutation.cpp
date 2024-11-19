#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        
        vector<int> permutation;
        
        // Place numbers from k to n at the beginning
        for (int i = k; i <= n; ++i) {
            permutation.push_back(i);
        }
        
        // Place numbers from m+1 to k-1 in the middle
        for (int i = m + 1; i < k; ++i) {
            permutation.push_back(i);
        }
        
        // Place numbers from 1 to m at the end
        for (int i = 1; i <= m; ++i) {
            permutation.push_back(i);
        }
        
        // Output the permutation
        for (int i = 0; i < n; ++i) {
            cout << permutation[i] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
