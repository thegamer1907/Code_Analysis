#include <bits/stdc++.h>

using namespace std;

int main()
{
int n ;
cin>>n;
long long ara[105][450];
long long  sum=0;
for(int i = 0 ; i<n ; i++){
        int s=0;
    for(int j = 0 ; j<3; j++){
            cin>>ara[i][j];

    }

}
for(int j = 0 ; j<3 ; j++){
        int s=0;
    for(int i = 0 ; i<n; i++){

        s+=ara[i][j];
    }
   // cout<<s<<endl;
    if(s!=0)sum=1;
}
if(sum)cout<<"NO";
else cout<<"YES";
}
