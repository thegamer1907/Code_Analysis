#include <bits/stdc++.h>

using namespace std;
int n,x,y,z,inp;
int main()
{
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>inp;
        x+=inp;
        cin>>inp;
        y+=inp;
        cin>>inp;
        z+=inp;

    }
if (x==0&& y==0&&z==0){
    cout<<"YES";
}
else cout<<"NO";
    return 0;
}
