#include<iostream>
using namespace std;
long long n,k,masiv[32],a,b,c,s[8]={1,2,4,8},otg=0,masiv2[1000001][5],kyde[100001];
long long dali(long long ch1,long long ch2){
   // cout<<"tuk";
    for(long long i=0;i<k;i++){
            //cout<<masiv2[ch1][i]<<" "<<masiv2[ch2][i]<<"\n";
        if(masiv2[ch1][i]==masiv2[ch2][i] and masiv2[ch1][i]==1){
            return 0;
        }
    }
  // cout<<ch1<<" "<<ch2;
    return 1;
}
int main(){
    cin>>n>>k;
    b=1;
    for(long long i=0;i<k;i++){
        b*=2;
    }
    for(long long i=0;i<n;i++){
        for(long long r=0;r<k;r++){
            cin>>a;
            c+=s[r]*a;
            masiv2[i][r]=a;
        }
        //cout<<c<<" ";
        masiv[c]=1;
        kyde[c]=i;
        c=0;
    }
    if(masiv[0]==1){
otg=1;
    }else{
    for(long long i=0;i<b and otg==0;i++){
            if(masiv[i]==1){
        for(long long r=0;r<b and otg==0;r++){
                //cout<<masiv[i]<<" "<<masiv[r]<<" "<<(masiv[i]^masiv[r])<<"\n";
            if(masiv[r]==1 and dali(kyde[i],kyde[r])==1){
                   // cout<<i<<" "<<r;
                otg=1;
                i=b;
                r=b;
            }
        }
            }
    }
    }
if(otg==1){
cout<<"YES\n";
}else{
cout<<"NO\n";
}
return 0;
}