#include<bits/stdc++.h>
using namespace std;
int main(){
string s,s2,s3;
cin>>s;
long n,flag=0,ind,i=0,j,k;
cin>>n;
pair<char,char>s4[200];
while(n--){
    cin>>s2;
if(s[0]==s2[0]){
    if(s[1]==s2[1]){
    flag=1;
    }
}
else if(s[0]==s2[1]){
    if(s[1]==s2[0]){
        flag=1;
    }
}

s4[i]=make_pair(s2[0],s2[1]);
i++;
}

for(j=0;j<i;j++){

    if(s4[j].first==s[1]){
        for(k=0;k<i;k++){
            if(s4[k].second==s[0]){
                flag=1;
                break;
            }
        }
    }
}




if(flag==1){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl;
}
}
