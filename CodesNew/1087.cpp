#include<iostream>
using namespace std;
bool predicate(long long int n,long long int k)
{
    long long int cv=0,temp=n;
    while(temp>0)
    {
        if(temp<k){cv+=temp;}
        else{cv+=k;}
        temp-=k;
        temp-=temp/10;

    }
   return cv*2>=n;
}
int main()
{
    long long int n;
    cin>>n;
    long long int low=1;
    long long int high=n;
    long long int mid;
    long long int ans=n;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(predicate(n,mid)==true)
        {
           ans=mid;
           high=mid-1;
        }
        else
            low=mid+1;
    }
cout<<ans<<endl;
return 0;
}
