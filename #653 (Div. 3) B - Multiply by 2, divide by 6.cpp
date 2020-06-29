#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;

        int i=0,j=0;
        while(1)
        {
            if(n%6==0)
            {
                j++;
                n/=6;
//                cout<<n<<endl;
            }
            else
            {
                if(n==1)//first checking if n equals 1 cause 1 is not divisible by 6
                    break;
                i++;
                n*=2;
//                cout<<n<<endl;
                if(n%6!=0)//after multiplying by two it is obvious that the value should be
                    //divided by 6;if not it is not possible to reduce to 1. Because if there is not prime factor
                    //3 in the n after multiplying by 2 it will not be divisible and never will be
                    break;
            }



        }
        if(n==1)
            cout<<i+j<<endl;
        else
            cout<<"-1"<<endl;
    }



    return 0;

}
