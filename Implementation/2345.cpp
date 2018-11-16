#include<bits/stdc++.h>
using namespace std;

int main(){
string c;
int count=0;
cin>>c;
for(int i=0;i<c.size();i++){
    if(c[i]=='4'||c[i]=='7'){
        count++;
    }
}
if(count==4||count==7){
    cout<<"YES"<<endl;
}
else
    cout<<"NO"<<endl;
return 0;
}
