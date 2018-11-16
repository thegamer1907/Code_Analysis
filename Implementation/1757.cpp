#include <bits/stdc++.h>
using namespace std;

int main(){
string n;
int count=0;
cin>>n;
for(int i=0;i<n.size();i++){
    if(n[i]==n[i+1]&&n[i+1]==n[i+2]&&n[i+2]==n[i+3]&&n[i+3]==n[i+4]&&n[i+4]==n[i+5]&&n[i+5]==n[i+6])


count+=1;

}
if(count>=1)
cout<<"YES";
else
    cout<<"NO";
    }