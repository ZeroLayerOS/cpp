#include <bits/stdc++.h>

using namespace std;

void fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main()
{
    fast_io();

    char x;
    cin >> x;

    if (x >= 'a' && x <= 'z') 
    {
        x = x - 32; 
    }
    else 
    {
        x = x + 32; 
    }

    cout << x << "\n";

    return 0;
}
 
