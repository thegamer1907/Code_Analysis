#include <bits/stdc++.h>

using namespace std;
double eps =1e-9;


int main()
 {
int n,q;
cin>>n>>q;
long long arr[n],v[q];
for(int i=0 ; i<n ; i++) cin>>arr[i];
for (int i=0 ; i<q ; i++) cin>>v[i];
for (int i=1 ; i<n ; i++)
arr[i]+=arr[i-1];
long long  num=0,sum=0;
for (int i=0 ; i<q ; i++)
{  num+=v[i];
    int s=0,e=n-1,mid;
  int ind=-1;
while(s<=e)
{ mid=(s+e)/2;
 if (arr[mid]>num) e=mid-1;
  else if (arr[mid]<=num) {   sum=mid+1;   s=mid+1;
    }

}
if (sum==n) {num=0; sum=0;}
cout<<n-sum<<endl;


}




        return 0;
}
