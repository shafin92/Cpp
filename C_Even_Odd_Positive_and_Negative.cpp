#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    optimize();

    int tc;
    cin >> tc;
    int even_count = 0, odd_count = 0, pos_count = 0, neg_count = 0;
    while (tc--)
    {
        int num;
        cin >> num;
   
        if (num % 2 == 0)
        {
            even_count++;   
        }
        else
        {
            odd_count++;
        }

        if (num > 0)
        {
            pos_count++;
        }
        else if (num < 0)
        {
            neg_count++;
        }
    }

    cout << "Even: " << even_count << endl;
    cout << "Odd: " << odd_count << endl;
    cout << "Positive: " << pos_count << endl;
    cout << "Negative: " << neg_count << endl;
    
    return 0;
}
