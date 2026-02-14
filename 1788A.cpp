#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        int n2 = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if(arr[i]==2)
                n2++;
        }
        if(n2%2==0)
        {
            int count = 0;
            for (int i = 0; i < n;i++)
            {
                if(arr[i]==2)
                {
                    count++;
                }
                if(count==n2/2)
                {
                    cout << i + 1 << endl;
                    break;
                }
            }
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}