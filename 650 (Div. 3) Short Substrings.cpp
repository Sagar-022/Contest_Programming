#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int l=s.length();
        char o[l];//output to keep the string
        int j=0,cnt=0;
        for(int i=0; i<l; i++)
        {
            if(i==l-1)//if the last character alone then break
            {
                o[j]=s[i];
                j++;
                break;
            }

            if(s[i]!=s[i+1])//if not same then just keep it
            {
                o[j]=s[i];
                j++;
            }

            if(s[i]==s[i+1])//if same keep only one remove duplicate
            {
                o[j]=s[i];
                j++;
                i++;
                cnt+=2;
            }
        }


        o[j]='\0';
        if(cnt==l)//this is for special case where all the characters are same
        {
            int i;
            int cntl=((l/2)+1);
            for(i=0;i<cntl;i++)
                o[i]=s[i];
            o[i]='\0';
        }

        cout<<o<<endl;
    }


    return 0;
}
