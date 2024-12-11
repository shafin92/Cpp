#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
optimize();

int tc;
cin >> tc;

string target = "codeforces";
while (tc--)
{
    string s;
    cin >> s;
    int diff_count = 0;
    for (int i = 0; i < 10; i++)
    {
        if (s[i]!= target[i])
        {
            diff_count++;
        }
        
    }
 cout << diff_count << endl;   
}


    return 0;
}