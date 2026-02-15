#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        s.resize(n);
        int ans = n;
        int i = 0, j = n - 1;
        while (i < j)
        {
            if (s[i] != s[j])
            {
                ans -= 2;
                i++, j--;
            }else
                break;
        }
        cout << ans << endl;
    }
    return 0;
}