#include<bits/stdc++.h>
using namespace std;

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
//ifstream cin ("input.txt");
//ofstream cout ("output.txt");
int n,p1=0,p2=0;
char c1,c2,h1,h2;
cin>>c1>>c2;
cin>>n;
for(int i=0;i<n;i++){
    cin>>h1>>h2;
    if((h1==c1) && (h2==c2)) {cout<<"YES";return 0;}
if (h1==c2) p1=1;
if (h2==c1) p2=1;

}
if(p1+p2==2) cout<<"YES";
else cout<<"NO";
}






