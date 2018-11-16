#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
LL arr[2000005];
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    string str;
    cin>>str;
    
    while(k--)
    {
        for(int i=0;i<n-1;i++)
        {
            if(str[i]=='B' && str[i+1]=='G')
            {
                swap(str[i],str[i+1]);
                i++;
            }
        }
    }
    
    cout<<str<<"\n";
}