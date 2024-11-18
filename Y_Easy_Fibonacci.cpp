#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int mx=100123;
int fib[mx];
int main()
{
optimize();

long long n;
cin >> n;
fib[0] = 0;
fib[1] = 1;

for (long long i = 2; i <=n; i++)
{
    fib[i] = fib[i - 1] + fib[i - 2];
}

for (long long i = 0; i < n; i++)
{
   cout << fib[i] << " ";
}


    return 0;
}