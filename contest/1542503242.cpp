#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<iomanip>
using namespace std;
int main() {
    int n,z=0,x=0;
    string s1,s2;
    cin>>s1>>n;

for(int i=1;i<=n;i++){
    cin>>s2;
    if(s2[1]==s1[0]){
        z++;
    }
    else if(s2[0]==s1[1]){
        x++;
    }
    if((s2[0]==s1[1]&&s2[1]==s1[0])||(s2[0]==s1[0]&&s2[1]==s1[1])){
        z++;
        x++;
    }
}
if(z>0&&x>0){
    cout<<"YES";
}
else{
    cout<<"NO";
}
	return 0;
}