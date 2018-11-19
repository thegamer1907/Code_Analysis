#include<bits/stdc++.h>
using namespace std;
int N;
char a,b,c,d,ad,bc;
int main(){
for(cin>>a>>b>>N;N--;){
	cin>>c>>d;
	if(a==c&&b==d)return cout<<"YES",0;
	ad|=a==d;
	bc|=b==c;
}
cout<<(ad&&bc?"YES":"NO");
}