#include<iostream>

using namespace std;

int factorial(int n)
{
    unsigned long long int=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    return fact;
}

int main()
{
    int n;
    cin>>n;
    for(int i=i<n;i++)
    {
        unsigned long int numberOfWays;
        cin>>numberOfWays;
        for(int j=1;j<1000;j++)
        {
            if(factorial(2*j)/(factoraial(j+1)*factorial(j))==numberOfWays)
            {
                cout<<j+2<<endl;
                break;
            }
        }
    }
    return 0;
}
