//AUTHOR::ASHUTOSH MOUDGIL
#include<iostream>
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#include<string>
bool isDangerous(string s){
if(s.size()==0){
    return false;
}
bool ans=isDangerous(s.substr(1));
if(ans==true)
    return true;
for(int i=1;s[0]==s[i];i++){
    if(i==6){
        return true;
    }
}
return false;
}

int main(){
IOS;
string s;
cin>>s;
bool ans=isDangerous(s);
if(ans)
    cout<<"YES"<<endl;
else
    cout<<"NO"<<endl;
return 0;
}
