#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int i,n,k,value;
        cin>>n>>k;

        if(k%(n-1)==0)
        {
            int div=k/(n-1);
            value=div*(n-1);
            value=value+(div-1);
            cout<<value<<endl;
        }

        else
        {
            int stop=k/(n-1);
            stop=stop*(n-1);
            value=1;
            int interval=n-1;
            for(i=n; i<=stop+1; i+=interval)
            {
                value+=n;
                //cout<<i<<" "<<value<<endl;
            }
            i=i-interval;
            //cout<<i<<" "<<value<<endl;

            while(i!=k)
            {
                i++;
                value++;
            }

            cout<<value<<endl;
        }

    }


    return 0;
}



    /* another effective but wrong case solution
        while(1)
        {


        int n,k;
        cin>>n>>k;
        int d,r;

        d=k/(n-1);//divide result
        r=k%(n-1);
        int result=(n-1)*d+r+d;

        if(n>k)
            cout<<k<<endl;
        else if(k%n==0)
        {
            if(k==n)
                cout<<k+1<<endl;
            if(n<k)
                cout<<result-1<<endl;
        }
        else
            cout<<result<<endl;

        }
    */

    /*
    ineffective solution

    while(t--)
    {
        int i,n,k,coun=0;
        cin>>n>>k;
        for(i=1; ;i++)
        {
            if(i%n==0)
                continue;
            else
                coun++;
            if(coun==k)
                break;
        }

        cout<<i<<endl;

    }

    */

