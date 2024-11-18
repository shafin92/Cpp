#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        // Reading the amounts of water in the containers
        vector<int> containers(n);
        long long sum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> containers[i];
            sum += containers[i];
        }

        // If the total amount of water is not divisible by the number of containers, it's impossible to distribute equally
        if (sum % n != 0) {
            cout << "NO" << endl;
            continue;
        }

        // Calculating the target amount of water each container should have
        int target = sum / n;

        // Check if the amount of water in each container can be adjusted to the target amount
        bool possible = true;
        for (int i = 0; i < n; ++i) {
            // Calculate the excess or deficit of water in the current container
            int diff = containers[i] - target;
            
            // If the current container has more water than needed
            if (diff > 0) {
                // Distribute the excess water to the next containers
                if (i + 1 < n) {
                    containers[i + 1] += diff;
                } else {
                    // If there are no more containers, it's impossible to distribute equally
                    possible = false;
                    break;
                }
            } else if (diff < 0) {
                // If the current container has less water than needed, it's impossible to distribute equally
                possible = false;
                break;
            }
        }

        // Output the result
        if (possible) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
