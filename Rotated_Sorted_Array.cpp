#include<bits/stdc++.h>
using namespace std;
#define int long long
int check(int mid,int l)
{
    if(mid<=l)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void solveac()
{
    int nn;
    cin>>nn;
    vector<int>v(nn);

    for(int i=0;i<nn;i++)
    {
        cin>>v[i];
    }

    int lo=0,hi=nn,ans=-1;


    while(lo<=hi)
    {
        int mid=(lo+hi)/2;
        if(check(v[mid],v[nn-1])==1)
        {
            ans=mid;
            hi=mid-1;
        }
        else
        {
            lo=mid+1;
        }
    }

    cout<<ans<<endl;

}
signed main()
{
    int tt;
    cin>>tt;
    while(tt--)
    {
        solveac();
    }
}