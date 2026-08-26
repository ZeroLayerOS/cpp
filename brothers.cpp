#include <bits/stdc++.h>
using namespace std;
void compare (string s1, string s2);

void fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main (void)
{
    fast_io();

    string f1, s1, f2, s2 ;

    cin >> f1 >> s1 ;
    cin >> f2 >> s2 ;
    compare(s1, s2);

}

void compare (string s1, string s2)
{
    fast_io();

    if (s1 == s2)
    {
        cout << "ARE Brothers" << "\n" ;
    }
    else
    {
        cout << "NOT" << "\n";
    }
}
