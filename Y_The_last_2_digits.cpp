#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
optimize();
const long long  MOD=100; 
long long a , b , c , d , multi;
cin >> a >> b >>  c >> d;
a%=MOD;
b%=MOD;
c%=MOD;
d%=MOD;
multi = (a*b)%100;
multi=(multi*c)%100;
multi=(multi*d)%100;
if (multi<10) cout <<0;
cout << multi % 100 << endl;

}