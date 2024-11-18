#include <iostream>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    optimize();
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        if (n == 3) {
            cout << 3 << endl;
        }
         else {
            cout << 2 << endl;
        }
    }
    
    return 0;
}
