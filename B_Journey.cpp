#include <iostream>
#include <vector>
using namespace std;

int find_day_to_complete(int n, int a, int b, int c) {
    // Total distance covered in one full cycle of 3 days
    int total_cycle = a + b + c;

    // Check how many complete cycles are needed
    int complete_cycles = n / total_cycle;
    int remaining_distance = n % total_cycle;

    // Calculate total days needed
    int days = complete_cycles * 3;

    // If the remaining distance is greater than 0, calculate additional days
    if (remaining_distance > 0) {
        days++; // First day (a)
        remaining_distance -= a;
        if (remaining_distance > 0) {
            days++; // Second day (b)
            remaining_distance -= b;
            if (remaining_distance > 0) {
                days++; // Third day (c)
            }
        }
    }

    return days;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, a, b, c;
        cin >> n >> a >> b >> c;

        cout << find_day_to_complete(n, a, b, c) << endl;
    }

    return 0;
}
