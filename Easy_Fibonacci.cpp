#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
optimize();

int n;
cin >> n;
int first = 0, second = 1 , fibo;
cout << first << " " << second;
if ( n == 1)
{
    cout << " " ;
}
 for (int i = 2; i < n; i++)
 {
    fibo = first + second ;
    first = second;
    second = fibo ;
    
    cout << " " << fibo ;
 }
 cout << "\n";
    return 0;
}