#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,n,k=2,t;
    bool exist;
    cin>>t;
    while(t)
    {
        t--;
        cin>>n;
        exist=false;
        for(k=2; ;k++)
        {
            int value=pow(2,k)-1;
            if(n%value==0)
            {
                x=n/value;
                cout<<x<<endl;
                exist=true;
            }
            if(exist)
                break;
        }

    }
    return 0;
}
