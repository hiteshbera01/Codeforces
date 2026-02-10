#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        bool winner = c%2; // true->first o.w. second
        if (a == b)
        {
            (winner) ? cout << "First" << endl : cout << "Second" << endl;
        }
        else
        {
            if(winner && b>=a+1)
            {
                winner = 0;
            }
            else if(!winner && a>=b+1)
            {
                winner = 1;
            }
            (winner) ? cout << "First" << endl : cout << "Second" << endl;
        }
    }
    return 0;
}