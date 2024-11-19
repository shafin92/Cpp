#include <iostream>
using namespace std;

int main() {
    int  N;
    cin >> N;

    long long sum = 0;
    for (long long i = 0; i < N; ++i) { 
        long long num;
        cin >> num;
        
            sum += num;
        
    }
    cout << abs(sum) << endl;
    return 0;
}
