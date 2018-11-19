#include<bits/stdc++.h>
using namespace std;

struct box{

string s;

}d[110];

int main()
{
    int a,b,i,z=0,k=0;

    string ans,check;

    cin>>ans>>a;

    for(i=0;i<a;i++)
    {
        cin>>d[i].s;
    }
    for(i=0;i<a;i++)
    {
        check=d[i].s;
        if(z==0){
            if(check[0]==ans[1]){
                z++;
            }
        }
        if(k==0){
            if(check[1]==ans[0]){
                k++;
            }
        }
        if(check.compare(ans)==0){
            z=1;
            k=1;
        }
    }

    if(z==1 && k==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
return 0;
}
