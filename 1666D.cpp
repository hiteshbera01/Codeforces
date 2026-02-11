#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string s, t;
        cin >> s >> t;
        int ns = s.size(), nt = t.size();
        int found = 0;
        bool first_time = true;
        for (int i = nt - 1; i > 0; i--)
        {
            int char_location = -1;
            for (int j = ns - 1; j > 0; j--)
            {
                if (s[j] == t[i])
                {
                    char_location = j;
                    s.erase(s[j]);
                    if (!first_time)
                    {
                        string temp = s.substr(j, ns - j);
                        if (find(temp.begin(), temp.end(), t[i]) == temp.end())
                        {
                            found++;
                        }
                    }
                    else
                    {
                        first_time = false;
                        found++;
                    }
                }
            }
        }
        if (found == nt)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}