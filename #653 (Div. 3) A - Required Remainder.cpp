#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k,x,y,n;
    int t;
    cin>>t;

    while(t--)
    {
        cin>>x>>y>>n;
        int p=(n-y)/x;// it is observed that k%x==y means the first value of k should be x+y-x ie. y
        //now we need to know how many times we should multiply y by x to reach the highest k within n.
        //that's why p came cause Y+p*x<=n
        k=y+p*x;
        cout<<k<<endl;
    }

    return 0;

}
