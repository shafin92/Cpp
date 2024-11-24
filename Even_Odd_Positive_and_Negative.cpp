#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main()
{
optimize();
int num;
int even_count= 0, odd_count = 0, pos_count = 0, neg_count=0;
for (int i = 0; i <5; i++)
{
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
    else if(num < 0)
    {
        neg_count++;
    }
}
    cout << even_count << " valor(es) par(es)" << endl;
    cout << odd_count << " valor(es) impar(es)" << endl;
    cout << pos_count << " valor(es) positivo(s)" << endl;
    cout << neg_count << " valor(es) negativo(s)" << endl; 
    return 0;
}