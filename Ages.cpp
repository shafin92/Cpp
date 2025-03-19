#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
optimize();
int n ;
double sum = 0,count_num=0;
while (1)
{
    cin >> n;
    if (n < 0)
    {
        break;
    }
     sum+=n;
     count_num++;
}
if (count_num > 0)
{
    double avg = sum / count_num;
    cout << fixed << setprecision(2) << avg << endl;
}

    return 0;
}