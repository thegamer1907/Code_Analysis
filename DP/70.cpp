#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<cstdio>
#define ll long long
#define PI 2*acos(0.0)
using namespace std;

int main()
{

    int i,j,k,m,n,val,t=0,test,arr[500],arr2[500];
    scanf("%d",&n);
    for(i=0;i<n;i++)scanf("%d",&arr[i]);
    sort(arr,arr+n);
    scanf("%d",&m);
    for(i=0;i<m;i++)scanf("%d",&arr2[i]);
    sort(arr2,arr2+m);
    for(i=0,j=0;j<m && i<n;){
        if(abs(arr[i]-arr2[j])<=1)t++,i++,j++;
        else if(arr[i]<arr2[j])i++;
        else j++;

    }
    printf("%d\n",t);

    //free();   //if pointer array
    return 0;
}
