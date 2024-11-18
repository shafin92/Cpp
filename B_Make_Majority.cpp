#include <iostream>
#include <vector>
using namespace std;

string can_reduce_to_one(const string& sequence) {
    // If there's at least one '1' in the sequence, we can eventually reduce it to [1]
    for (char c : sequence) {
        if (c == '1') {
            return "YES";
        }
    }
    return "NO";
}

int main() {
    int t;
    cin >> t;
    vector<string> results(t);
    for (int i = 0; i < t; ++i) {
        int n;
        string sequence;
        cin >> n >> sequence;
        results[i] = can_reduce_to_one(sequence);
    }

    for (const string& result : results) {
        cout << result << endl;
    }

    return 0;
}
