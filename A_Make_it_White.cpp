#include <iostream>
#include <string>
using namespace std;

int minSegmentLength(string s) {
    int n = s.length();
    int first_black = -1, last_black = -1;

    for (int i = 0; i < n; ++i) {
        if (s[i] == 'B') {
            if (first_black == -1)
                first_black = i;
            last_black = i;
        }
    }

    if (first_black == -1) 
        return 0;

    return last_black - first_black + 1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        cout << minSegmentLength(s) << endl;
    }
    return 0;
}
