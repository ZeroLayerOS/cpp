#include <bits/stdc++.h>
using namespace std;

void fast_io (void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main (void)
{
    int a, b;

    cin >> a >> b;

    if (a >= b)
    {
        cout<<"Yes" << '\n' ;
    }
    else 
    {
        cout << "No" << '\n';
    }
    return 0;
}
