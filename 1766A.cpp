#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        int digits = 0;
        int r;
        while (n > 0)
        {
            digits++;
            r = n % 10;
            n = 1LL * n / 10;
        }
        cout << (9 * (digits - 1)) + r << endl;
    }
    return 0;
}