#include <iostream>

int main() {
    int t;
    std::cin >> t;

    while (t--) {
        int n;
        std::cin >> n;

        // Ensure n is a two-digit number
        if (n < 10 || n > 99) {
            continue;
        }

        // Calculate sum of the digits
        int sum = (n / 10) + (n % 10);

        // Output the result for this test case
        std::cout << sum << std::endl;
    }

    return 0;
}
