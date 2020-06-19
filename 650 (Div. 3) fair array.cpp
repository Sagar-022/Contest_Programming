#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];


        int ow=0,ew=0;
        for(int i=0;i<n;i++)
        {

            if(i%2==0 && arr[i]%2==1)//for ex: i=0 & arr[i]=1
                ow++;
            if(i%2==1 && arr[i]%2==0)//for ex: i=1 & arr[i]=4
                ew++;
        }

        if(ow==ew)
            cout<<ow<<endl;//if equal we can swap them
        else
            cout<<"-1"<<endl;//else not possible
    }


    return 0;
}
