#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int arr[10];
    while(t--)
    {
        string n;
        cin>>n;
        int i,j,k=0;
        int length=n.length();
        if(length==1)
        {
            cout<<"1"<<endl;
            cout<<n<<endl;
        }
        else
        {

            for(i=length-1,j=1; i>=0; i--,j*=10)
            {
                int out=n[i]-'0';
                out=j*out;
                if(out!=0)
                {
                    arr[k]=out;
                    k++;
                }
            }

            cout<<k<<endl;
            for(i=0; i<k; i++)
                cout<<arr[i]<<" ";

            cout<<endl;

        }



    }
}
