#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        int z = 0;
        int n = s.size();
        for (int i = 0; i < n;i++)
        {
            if(s[i]=='0')
                z++;
        }
        int m = min(z, n - z);
        (m % 2 == 0) ? cout << "NET" << endl : cout << "DA" << endl;
    }
    return 0;
}