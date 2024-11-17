#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to calculate the maximum product with at most 5 increments
int maxBananas(int a, int b, int c) {
    vector<int> v = {a, b, c};
    int maxProduct = 0;

    // Try all combinations of distributing 5 increments among a, b, and c
    for (int i = 0; i <= 5; ++i) {
        for (int j = 0; j <= 5 - i; ++j) {
            int k = 5 - i - j;
            int newA = a + i;
            int newB = b + j;
            int newC = c + k;
            maxProduct = max(maxProduct, newA * newB * newC);
        }
    }

    return maxProduct;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        cout << maxBananas(a, b, c) << endl;
    }
    
    return 0;
}
