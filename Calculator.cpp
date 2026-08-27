#include <bits/stdc++.h>
using namespace std;

int calc (int a, char s, int b);
void fast_io(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main (void)
{
    fast_io();

    int a, b ;
    char s ;

    cin >> a >> s >> b;
   
    int result = calc(a, s, b);
    cout << result << "\n";
    return 0;
}

int calc (int a, char s, int b)
{
    if (s == '+')
    {
        return a + b;
    }
    else if (s == '-')
    {
        return a - b;
    }
    else if (s == '*')
    {
        return a * b;
    }
    else
    {
        return a / b;
    }
}


