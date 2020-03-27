#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int ans=INT_MIN;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(sum>=0)
        sum+=a[i];
        else
        {
            sum=0;
            sum+=a[i];
        }
        if(ans<sum)
        ans=sum;
    }    
   cout<<ans;
        return 0;
    }
    
