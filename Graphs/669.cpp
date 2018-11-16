//R<3S
#include <bits/stdc++.h>
typedef long long int var;
using namespace std;
void swap(char &a,char &b)
    {
        int c=a;
        a=b;
        b=c;
    }
int main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
int n,t;
cin>>n>>t;
char arr[n];
for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
for(int j=0;j<t;j++)
    {
for(int i=0;i<n;i++)
    {
        if(arr[i]=='B'&&arr[i+1]=='G')
            {
                swap(arr[i],arr[i+1]);
                i++;
            }
    }
    }
for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
return 0;
}
