#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,sum=0,p,count=0,arr[101][101];
    cin >> n;

    for(i=0; i<n; i++)
    {
        for( j=0; j<3; j++)
        {
            cin >> arr[i] [j];
        }
    }
    for(j=0; j<3; j++)
    {
        for(i=0; i<n; i++)
        {
            sum+= arr[i][j];
        }
        if(sum == 0) count++;
        sum = 0;
    }
    if(count == 3) cout<<"YES"<<endl;
        else cout << "NO"<<endl;
    return 0;
}
