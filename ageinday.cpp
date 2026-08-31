#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N;

    int years = N / 365;
    N %= 365;

    int months = N / 30;
    int days = N % 30;

    cout << years << " years\n"
         << months << " months\n"
         << days << " days\n";

    return 0;
}
