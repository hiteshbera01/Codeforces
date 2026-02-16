#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int ans = 0;
        bool notprinted = true;
        if (b > d)
        {
            cout << -1 << endl;
            notprinted = false;
        }
        else
        {
            ans += (d - b);
            a += (d - b);
        }

        if (a < c)
        {
            if (notprinted)
            {
                cout << -1 << endl;
                notprinted = false;
            }
            else
                continue;
        }
        else
        {
            ans += (a - c);
        }

        if (notprinted)
            cout << ans << endl;
    }
    return 0;
}