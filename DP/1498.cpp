#include<bits/stdc++.h>

using namespace std;

int countones( vector <int> &v, int i, int j)
{
    int k,count=0;
    for(k=i; k<j; k++)
    {
        if(v[k]==1)
        count++;
    }
    return count;
}

int countzero( vector <int> &v, int i, int j)
{
    int k,count=0;
    for(k=i; k<=j; k++)
    {
        if(v[k]==0)
        count++;
    }
    return count;
}
int maxones( vector <int> &v,int n)
{
    int l[n][n],maxi=INT_MIN;
    int i,j;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(i>j)
            l[i][j]=INT_MIN;
            else 
            l[i][j]=countones(v,0,i)+countones(v,j+1,n)+countzero(v,i,j);
            if(l[i][j]>maxi)
            maxi=l[i][j];
        }
    }
    return maxi;
}

int main()
{
int n;
cin>>n;
vector <int> v;
int i;
for(i=0; i<n; i++)
{
    int x;
    cin>>x;
    v.push_back(x);
}
cout<<maxones(v,n);
}