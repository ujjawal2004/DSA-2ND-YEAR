#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,countt=0;
    cin >> n >> k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];

    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((arr[i]+arr[j])%k==0)
            {

                 countt++;
            }

        }
    }
    cout << countt;
    return 0;
}


https://www.hackerrank.com/challenges/divisible-sum-pairs/submissions/code/295529815
