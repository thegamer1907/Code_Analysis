#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define FIO ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define mod 1000000007

int main() 
{
    FIO;
    int t,n,k,i,j;
    
    cin >> n ;
    int a[n];
    
    int min=INT_MAX;
    for(i=0;i<n;i++){
        cin >> a[i];
        if(min>a[i])
            min=a[i];
    }
    
    min= (min/n)*n;
    
    for(i=0;i<n;i++)
        a[i]-=min;
    
    int steps=0;
    while(a[steps%n]!=0){
        steps++;
        if(a[steps%n]>=steps)
        a[steps%n]-=steps;
        else
        a[steps%n]=0;
    }
    
    cout << steps%n+1;
    
    return 0;
}
