#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
optimize();
int n=100;
vector<int>num(n);
int max_num = 0 , max_index = 0;
for (int i = 0; i < n; i++)
{
    cin >> num[i];
    if (num[i] > max_num)
    {
        max_num = num[i];
        max_index = i+1;
    }
}
    cout << max_num << endl;
    cout << max_index << endl;
    return 0;
}