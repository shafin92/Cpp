#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int countA = 0, countB = 0, countC = 0, countD = 0, countQ = 0;
        
        for (char ch : s) {
            if (ch == 'A') countA++;
            else if (ch == 'B') countB++;
            else if (ch == 'C') countC++;
            else if (ch == 'D') countD++;
            
        }
        int maxCorrect = 0;
        int maxOptionA = min(n, countA + countQ);
        int maxOptionB = min(n, countB + countQ);
        int maxOptionC = min(n, countC + countQ);
        int maxOptionD = min(n, countD + countQ);
        maxCorrect = maxOptionA + maxOptionB + maxOptionC + maxOptionD;
        
        cout << maxCorrect << endl;
    }
    
    return 0;
}
