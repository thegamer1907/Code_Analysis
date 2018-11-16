#include<iostream>
using namespace std;
main()
{
    string s;
    long long m,n,x=0,i,dem;
    cin>>s;
    for(i=0;i<s.length();i++){
        dem=0;
        if(s[i]=='0'){
            while(s[i]=='0'){
                dem++;
                i++;
            }
            i--;
        }
        if(s[i]=='1'){
            while(s[i]=='1'){
                dem++;
                i++;
            }
            i--;
        }
        if(dem>=7) break;
    }
    if(dem>=7) cout<<"YES";
    else cout<<"NO";
}

