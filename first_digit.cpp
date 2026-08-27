#include <bits/stdc++.h>
using namespace std;

int main (void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int x;
    cin >> x;
     x = x / 1000;

    if ( (x & 1 ) == 0 )
    {
        cout << "EVEN" << "\n";
    }
    else
    {
        cout << "ODD" << "\n";
    }  
    return 0;
}

