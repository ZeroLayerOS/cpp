#include <bits/stdc++.h>
#define ll long long
using namespace std;

void fast_io(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main (void)
{
    fast_io();

    ll n, m;
    
    cin >> n >> m;
    
    n = n % 10;
    m = m % 10;

    cout << n + m << "\n";
    return 0;
}
