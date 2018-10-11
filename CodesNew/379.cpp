#include <iostream>
#include<bits/stdc++.h>
using namespace std;
# define lli long long int
int binarySearch(long long int arr[], int l, int r, int x)
{
    int last=r;
   if (r >= l)
   {
        int mid = l + (r - l)/2;
       //cout<<arr[mid]<<endl;
      /*if(mid==0 && x>=arr[mid]){
    return mid;
      }else if(mid==last && x<arr[mid] && arr[mid-1]<=x){
      return mid;
      }
        else*/ if (x<arr[mid] && x>=arr[mid-1]){
            return mid;
        }

        if (arr[mid] > x)
            return binarySearch(arr, l, mid-1, x);
        return binarySearch(arr, mid+1, r, x);
   }
   return -1;
}
int quadratic(int a,int b,int c) {

    int x1, x2, discriminant;
    discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);
        if(x1>0) return x1;
        else return x2;
    }
}
void print_arr(long long int arr[],long long int n){
long long int i;
for(i=0;i<n;i++){
    cout<<arr[i]<<' ';
}
cout<<endl;
}
lli bsearch(lli prefixsum[], lli n,lli k)
{
    lli ans = -1;
    lli left = 1, right = n;
    while (left <= right)
    {
        lli mid = (left + right) / 2;
        lli i,s=0,dd;
        for (i = mid; i <= n; i++)
        {
            dd=prefixsum[i] - prefixsum[i - mid];
            if (dd <= k){
                s=1;
                break;
            }
        }
        if (s)
        {
            left = mid + 1;
            ans = max(mid,ans);
            s=0;
        }
        else
            right = mid - 1;
    }
    if(ans==-1)ans++;
    return ans;
}
void scn_arr(long long int arr[],long long int n){
long long int i;
for(i=0;i<n;i++){
    cin>>arr[i];
}
}
lli maxSize(lli arr[], lli n, lli k)
{
    lli prefixsum[n + 1],i;
    memset(prefixsum, 0, sizeof(prefixsum));
    for ( i = 0; i < n; i++)
        prefixsum[i + 1] = prefixsum[i] +
                           arr[i];

    return bsearch(prefixsum, n, k);
}
/*int main()
{
    list<lli>boxes;
    list<lli>::iterator it;
    lli i ,j,n,counter=1,l=0,t=0;
    cin>>n;
    lli arr[n];
    scn_arr(arr,n);
       sort(arr,arr+n);
       print_arr(arr,n);
       for(i=n-1;i>=0;i--){
        if(boxes.empty() && !arr[i])counter++;
        else if(boxes.empty() && arr[i]){
            boxes.push_back(arr[i]);
        }
        else if(!boxes.empty() && arr[i]){
            for(it=boxes.begin();it!=boxes.end();it++){
                (*it)--;
                if(*it==0){
                    l=1;
                        break;
                }
            }
            if(l){
                    counter++;
                    l=0;
                    boxes.clear();
            }else boxes.push_back(arr[i]);
        }
        else if(!boxes.empty() && !arr[i]){
            boxes.clear();
        }
       }
       for(i=0;i<n;i++){
        if(arr[i])t=1;break;
       }
       if(t)
       cout<<counter;
else cout<<counter-1;
    return 0;
}*/

int main()
{
  lli i,n,k,maxl;
  cin>>n>>k;
  lli arr[n];
  for(i=0;i<n;i++){
    cin>>arr[i];
  }
  maxl=maxSize(arr,n,k);
cout<<maxl;
return 0;
}
