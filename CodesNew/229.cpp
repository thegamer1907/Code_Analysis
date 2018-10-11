#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,t;
    int a;
    cin>>n>>t;
    vector <int > vect;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        vect.push_back(a);
    }
    long long int sum=0,i=0,q=-1,j=0,r=0,s=-1,count1=0,count2=0000000000;
    for(j=0;j<n;j++)
    {
            if(sum+vect[j]<=t)
            {
                    sum=sum+vect[j];
                    count1++;
            }
            else
            {
                sum=sum+vect[j]-vect[r];
                r++;
            }
    }

    cout<<count1;
    return 0;
}
