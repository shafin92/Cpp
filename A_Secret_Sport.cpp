#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        int A_wins = 0, B_wins = 0;
        int A_sets = 0, B_sets = 0;
        bool winner_determined = false;
        
        for (int i = 0; i < n; i++) {
            if (s[i] == 'A') {
                A_wins++;
            } else {
                B_wins++;
            }
            
            if (A_wins >= B_wins + 2) {
                A_sets++;
                A_wins = 0;
                B_wins = 0;
            } else if (B_wins >= A_wins + 2) {
                B_sets++;
                A_wins = 0;
                B_wins = 0;
            }
            
            if (A_sets == B_sets + 2) {
                winner_determined = true;
                cout << "A" << endl;
                break;
            } else if (B_sets == A_sets + 2) {
                winner_determined = true;
                cout << "B" << endl;
                break;
            }
        }
        
        if (!winner_determined) {
            cout << "?" << endl;
        }
    }
    return 0;
}
