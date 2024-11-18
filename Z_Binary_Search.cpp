#include <iostream>
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;
    
    int A[N];
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }
    for (int i = 0; i < Q; ++i) {
        int X;
        cin >> X;
        bool found = false;
        for (int j = 0; j < N; ++j) {
            if (A[j] == X) {
                found = true;
                break;
            }
        }
        
        if (found) {
            cout << "found" << endl;
        } else {
            cout << "not found" << endl;
        }
    }
    
    return 0;
}
