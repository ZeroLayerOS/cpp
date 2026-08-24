#include <bits/stdc++.h>
using namespace std;
#define LL long long
void fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
int main (void)
{
    fast_io();
    long long n0, n1;
    
    cin >> n0 >> n1;

    cout << n0 << " + " << n1 << " = " << n0+n1 << "\n";  
    cout << n0 << " * " << n1 << " = " << n0*n1 << "\n"; 
    cout << n0 << " - " << n1 << " = " << n0-n1 << "\n";  

    return 0;
}
