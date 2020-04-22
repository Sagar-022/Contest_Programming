#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,t,i;
    cin>>t;

    while(t)
    {
        t--;
        cin>>n;
        int arr[n];

        for(i=1;i<=n-2;i++)
        {
            arr[i-1]=i;
        }

        arr[n-2]=i+n/2;
        arr[n-1]=i+1;
        if(arr[n-2]%2==0)
        {
            cout<<"NO";
        }
        else
        {
            cout<<"YES"<<endl;
            for(i=1;i<n;i+=2)
            {
                cout<<arr[i]<<" ";
            }

            for(i=0;i<n;i+=2)
            {
                cout<<arr[i]<<" ";
            }
        }
        cout<<endl;

    }

    return 0;

}
