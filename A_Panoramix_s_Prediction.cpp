#include <iostream>
bool is_prime(int num) 
{
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) 
    {
        if (num % i == 0) return false;
    }
    return true;
    }

int find_next_prime(int start) 
{int num = start + 1;
    while (!is_prime(num)) {
        ++num;
    }
    return num;
}
int main() 
{
    int n, m;
    std::cin >> n >> m;

    if (find_next_prime(n) == m) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
