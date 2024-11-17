#include <iostream>
#include <vector>
#include <tuple>

using namespace std;

// Function to sort the permutation with minimum cost
tuple<long long, vector<pair<int, int>>> sortPermutationWithMinimumCost(vector<int>& a) {
    int n = a.size();
    long long total_cost = 0;
    vector<pair<int, int>> operations;

    // We use a vector to store the positions of the elements in the original permutation.
    vector<int> pos(n + 1);
    for (int i = 0; i < n; ++i) {
        pos[a[i]] = i;
    }

    // Sort the array by placing each element in its correct position
    for (int i = 1; i <= n; ++i) {
        // Continue swapping until the current element is in its correct position
        while (a[i - 1] != i) {
            int j = pos[i];  // Position where 'i' is currently located
            int cost = (i & (j + 1));

            // Perform the swap and update the positions
            swap(a[i - 1], a[j]);
            operations.emplace_back(i, j + 1);
            total_cost += cost;

            // Update positions after the swap
            pos[a[j]] = j;
            pos[a[i - 1]] = i - 1;
        }
    }

    return make_tuple(total_cost, operations);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        auto [total_cost, operations] = sortPermutationWithMinimumCost(a);

        // Output the results
        cout << total_cost << "\n";
        cout << operations.size() << "\n";
        for (auto& [i, j] : operations) {
            cout << i << " " << j << "\n";
        }
    }

    return 0;
}
