#include <iostream>

using namespace std;

#define THE_A 65
#define THE_Z 90
#define the_a 97
#define the_z 122

void compare(int x);

void fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main(void)
{
    fast_io();

    char x;
    cin >> x;
    
    compare(x); 

    return 0;
}

void compare(int x)
{
    if (x >= 48 && x <= 57)
    {
        cout << "IS DIGIT" << "\n";
    }
    else if (x >= THE_A && x <= THE_Z)
    {
        cout << "ALPHA" << "\n" << "IS CAPITAL" << "\n";
    }
    else if (x >= the_a && x <= the_z)
    {
        cout << "ALPHA" << "\n" << "IS SMALL" << "\n";
    }
}

