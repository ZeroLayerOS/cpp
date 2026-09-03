#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double n;
    cin >> n;

    int int_part = (int)n;

    double decimal_part = n - int_part;

    if (decimal_part == 0) {
        cout << "int " << int_part << "\n";
    } else {
        cout << "float " << int_part << " " << decimal_part << "\n";
    }

    return 0;
}

