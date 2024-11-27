#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();

    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n; // এখানে n ইনপুট নিতে হবে

        bool perfect = true;
        int curr, prev;

        cin >> prev; // প্রথম নোট ইনপুট
        for (int i = 1; i < n; i++) { // লুপ শুরু ১ থেকে, কারণ প্রথম নোট আগে নিয়েছি
            cin >> curr; // পরবর্তী নোট ইনপুট
            int interval = abs(curr - prev);

            if (interval != 5 && interval != 7) {
                perfect = false; // পার্থক্য ৫ বা ৭ না হলে পারফেক্ট নয়
            }
            prev = curr; // prev আপডেট
        }

        if (perfect) {
            cout << "YES" << endl; // পারফেক্ট হলে
        } else {
            cout << "NO" << endl; // পারফেক্ট না হলে
        }
    }

    return 0;
}
