#include <iostream>

int main() {
    int lights[3][3];

    // Input
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cin >> lights[i][j];
        }
    }

    // Process and output
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            int total_presses = lights[i][j];

            // Toggle the light based on the number of presses
            if (total_presses % 2 == 1) {
                std::cout << "1";
            } else {
                std::cout << "0";
            }

            if (j < 2) {
                std::cout << " ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
