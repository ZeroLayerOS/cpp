#include <bits/stdc++.h>
#define ll long long 
using namespace std;
void compare (ll a , ll b, ll c );

void fast_io(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main (void)
{
    fast_io();
    ll a, b, c; 
    cin >> a >> b >> c;
    compare(a, b, c);
    return 0;

}
void compare (ll a , ll b, ll c )
{
    cout << min({a, b, c}) << " " << max({a, b, c}) << "\n";
}
