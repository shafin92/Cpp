#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
 {
    optimize();

    int x, y;
    
    while (1)
     {
        cin >> x >> y;

        if (x == y)
            break; 

        if (x < y) 
        {
            cout << "Crescente" << endl;
        } 
        else if (x > y)
        {
            cout << "Decrescente" << endl;
        }
    }

    return 0;
}
