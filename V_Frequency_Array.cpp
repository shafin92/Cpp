#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();

    int n, m;
    cin >> n >> m;

    // Initialize a frequency array of size m+1 with all elements 0
    int freq[m + 1] = {0};

    // Input the array elements and update the frequency array
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        freq[num]++;
    }

    // Output the frequency of each number from 1 to m
    for (int i = 1; i <= m; i++) {
        cout << freq[i] << endl;
    }

    return 0;
}
