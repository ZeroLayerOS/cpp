#include <bits/stdc++.h>
using namespace std;

void fast_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main(void)
{
    fast_io();
    double a, b;
    cin >> a >> b;

    double n1 = floor(a/b) ;
    double n2 =  ceil(a/b) ;
    double n3 = round(a/b) ; 

    cout << "floor"  << " " << a << " / " << b << " = " <<  n1 << "\n";  
    cout << "ceil"   << " " << a << " / " << b << " = " <<  n2 << "\n"; 
    cout << "round"  << " " << a << " / " << b << " = " <<  n3 << "\n"; 

}

