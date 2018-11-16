#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
int n,count=0,max=0,c_1=0;
cin>>n;
int a[n]; 
    for(int i=0;i<n;i++){
        cin >>a[i];
        if(a[i]==1)
            ++c_1;
    }
    if(n==1)
    {   if(a[0]==0)
        cout<<"1";
        else
            cout<<"0";
    }
    else if(c_1 !=n)
        {   
        for(int i=0;i<n;i++)
                for(int j=i+1;j<n;j++)
                {   count=0;
                     for(int k=0;k<i;k++)
                        if(a[k]==1)
                            ++count;
                     for(int k=i;k<=j;k++)
                         if(a[k]==0)
                             ++count;
                     for(int k=j+1;k<n;k++)
                        if(a[k]==1)
                            ++count;

                    if(count >max)
                        max=count;


                }
            cout<<max;
        }
    else
        cout<< n-1;
}