//#include<bits/stdc++.h>
//using namespace std;
//int mat[100005][5];
//int cnt[100005];
//int main(){
//
//int n , k;
//cin>>n>>k;
//for(int i= 0 ; i <n ; i++){
//    for(int j = 0 ; j<k; j ++){
//        cin>>mat[i][j];
//
//    }
//}
//for(int i= 0 ; i <k ; i++){
//    for(int j = 0 ; j<n; j ++){
//            if(mat[j][i]){
//       cnt[i]++;
//        ceil(n/2)<cnt
//            }
//        }
//}
//
//}
#include <bits/stdc++.h>
using namespace std;

//double ara[1000007];
//double cum[1000007];
//int findDigits(int n,int base)
//{
//    if (n < 0)
//        return 0;
//
//    // base case
//    if (n <= 1)
//        return 1;
//
//    double digits = 0;
//    for (int i=2; i<=n; i++)
//        digits += log10(i);
//digits/=log10(base);
//    return floor(digits) + 1;
//}
//
//int main(){
//int t;
//cin>>t;
//
//cum[0]=0;
//for(int i= 1 ; i<=1000004; i ++){
//        ara[i]=log10(i);
//
//cum[i]=ara[i]+cum[i-1];
////cout<<cum[i];
//}
//
//int  n, base;
//for(int i = 1 ; i<=t ; i++){
//
//cin>>n;
//
//cin>>base;
//cout<<"Case "<<i<<": "<<findDigits(n,base)<<endl;
//}
//}

int main(){
string s ;
cin>>s;
int n ;
cin>>n;
int cnt = 0 ;
int cnt1 = 0 ;
int ans = 0 ;
int ok = 0;
for(int i= 0 ; i< n ; i++){
    string t;
        cin>>t;
    if(t[0]==s[0]  &&  t[1]==s[1]  ){

      ok = 1;

    }
    if(s[0]==t[1]){
       cnt1 = 1;
    }
    if(s[1]==t[0]){
        cnt=1;
    }

}
if((cnt1 && cnt) || ok )
cout<<"YES\n";
else
    cout<<"NO\n";
}
