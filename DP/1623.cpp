#include<bits/stdc++.h>
using namespace std;
bool fun(string s){
    int n = s.length(),ab=0,i=0,ba=0,p_ab=INT_MAX,p_ba=INT_MIN,c=0;
    while(i<n){
        if(s[i]=='A'){
            if(i+1<n && s[i+1]=='B'){

               if(p_ba==i){
                   c++;
               }
                p_ab = i+1;
               ab++;
            }
        }
         if(s[i]=='B'){
            if(i+1<n && s[i+1]=='A'){
               if(p_ab==i){
                   c++;
               }
               p_ba = i+1;
               ba++;
            }
        }
        i++;
    }
    
   // cout<<"ab = "<<ab<<" ba = "<<ba<<" c = "<<c<<endl;
    if(ab>1 && ba>1 || ((ab>0 && ba>0 ) && (ab==1 || ba==1) && (ab>c || ba>c))){
        return false;
    }
    return true;
}
int main(){
	long long i,j,ans;
   // cin>>n;
    string s;
    cin>>s;
    if(fun(s)){
        cout<<"NO\n";
    }
    else{
        cout<<"YES\n";
    }
	return 0;
}