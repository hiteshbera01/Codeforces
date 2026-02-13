#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n;i++)
            cin >> arr[i];
        int parity=arr[0]%2;

        int i = 0,ans=0;
        while (i < n)
        {
            int cnt = 0;
            while(i<n && arr[i]%2==parity)
            {
                cnt++;
                i++;
            }
            ans += cnt - 1;
            parity = 1 - parity;
        }
        cout << ans << endl;
    }
}