#include<bits/stdc++.h>

using namespace std;

int main()
{
    string str1,str2;
    cin>>str1>>str2;
    int n1=str1.length();
    int n2=str2.length();
    if(n1!=n2)
    {
        cout<<"NO";
    }
    else
    {
        sort(str1.begin(),str1.end());
        sort(str2.begin(),str2.end());
        for(int i=0;i<n1;i++)
        {
            if(str1[i]!=str2[i])
            {
                cout<<"NO";
                exit(0);
            }
        }
        cout<<"YES";
    }
}