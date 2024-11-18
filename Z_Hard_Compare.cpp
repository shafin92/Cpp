#include <bits/stdc++.h>
#include <cmath> 
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main() 
{
    optimize();
ios_base::sync_with_stdio(0);cin.tie(0);
long long a,b,c,d;
cin>>a>>b>>c>>d;

if (b*log(a)>d*log(c))
cout <<"YES"<<endl;
else 
cout <<"NO"<<endl;
    return 0;
}
