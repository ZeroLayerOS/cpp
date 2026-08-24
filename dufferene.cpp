#include <bits/stdc++.h>
#define LL long long
using namespace std;

void fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main (void)
{
    fast_io();

    LL A, B, C, D;

    cin >> A >> B >> C >> D;

    LL X = (A * B) - (C * D);

    cout << "Difference" << " = " << X << "\n";

    return 0;

    
}
