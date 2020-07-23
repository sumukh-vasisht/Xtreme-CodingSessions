#include <bits/stdc++.h>

using namespace std;

bool doTheyMeet(int x1, int x2, int v1, int v2)
{
    if(x1<x2 && v1<=v2)
    {
        return false;
    }
    if(x1>x2 && v1>=v2)
    {
        return false;
    }
    if(x1<x2)
    {
        swap(x1,x2);
        swap(v1,v2);
    }
    while(x1>=x2)
    {
        if(x1==x2)
        {
            return true;
        }
        x1=x1+v1;
        x2=x2+v2;
    }
    return false;
}

int main()
{
    int x1,x2,v1,v2;
    cin>>x1>>v1>>x2>>v2;
    if(doTheyMeet(x1,x2,v1,v2))
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
