#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main(){

string x;
cin>>x;
ll n;
cin>>n;
bool ans=false;
bool start=false;
bool end=false;
while(n--){

    string y;
    cin>>y;

    if(y==x)
    {
        ans=true;
    }

    if(y[1]==x[0])
        start=true;

    if(y[0]==x[1])
        end=true;


}

if(ans || (start && end))
    cout<<"YES";
else
    cout<<"NO";


return 0;
}
