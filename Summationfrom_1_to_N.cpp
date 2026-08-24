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
    ll n;

    cin >> n;
    
    ll sum = (n * (n + 1)) / 2;

    cout << sum << "\n";
    return 0;
}
