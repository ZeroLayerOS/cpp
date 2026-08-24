#include <bits/stdc++.h>
using namespace std;
#define PI  3.141592653
void fast_io(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main (void)
{
    fast_io;
    cout << fixed << setprecision(9);

    double r;

    cin >> r;

    double area = PI * (r * r);

    cout << area << "\n";
}
