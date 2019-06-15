#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,k,d,m;
    cin>>n>>k;
    if(n%2==0)
    {
        m=n/2;
        if(k<=m)
            d=(k*2)-1;
        else
            d=(k-m)*2;
    }

    else
    {
        m=n/2;
        m++;
        if(k<=m)
            d=(k*2)-1;
        else
            d=(k-m)*2;
    }

    cout<<d<<endl;
}
