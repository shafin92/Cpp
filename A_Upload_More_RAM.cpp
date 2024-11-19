#include <iostream>

using namespace std;

int minSeconds(int n, int k) {
    // Handle edge cases: n <= k (can upload all in k seconds) and n == 1 (always 1 second)
    if (n <= k) {
        return n;
    } else if (n == 1) {
        return 1;
    }

    int minSecs = 0;
    int uploaded = 0;  // Track uploaded RAM

    // Upload 1 GB per second while considering both window limit and efficiency:
    while (uploaded < n) {
        // If uploading 1 GB fits within the window:
        if (uploaded + 1 <= k) {
            // Check if uploading 1 GB is efficient (doesn't leave unused capacity):
            if ((uploaded + 1) % k != 0) {
                uploaded++;  // Upload 1 GB if efficient
            } else {
                // Skip a second if uploading 1 GB wouldn't be efficient
                uploaded += 0;
            }
        } else {
            // Skip a second if window limit is reached
            uploaded += 0;
        }
        minSecs++;
    }

    return minSecs;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        cout << minSeconds(n, k) << endl;
    }

    return 0;
}