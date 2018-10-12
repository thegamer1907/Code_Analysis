#include <bits/stdc++.h>
using namespace std;

#define ii pair<int,int>
#define Max 500005

main(){

    int n; cin>>n;

    string s[n+7];

    cin>>s[0];

    if(!(n-1))
        return cout<<s[0],0;

    for(int i=1; i<n; i++)
        cin>>s[i];

    int len1,len2;

    for(int i=n-1; i>0; i--){

        len1=s[i].size();
        len2=s[i-1].size();

        if(len1<len2){

            if(s[i]>s[i-1].substr(0,len1)){
                continue;
            }else if(s[i]==s[i-1].substr(0,len1)){
                s[i-1]=s[i];
            }else{
                int Count=1;

                while(Count++)
                    if(s[i]<s[i-1].substr(0,Count))
                        break;

                s[i-1]=s[i-1].substr(0,Count-1);

            }

        }else if(len1==len2){
            if(s[i]>=s[i-1]){
                continue;
            }else{
                int Count=1;

                while(Count++)
                    if(s[i]<s[i-1].substr(0,Count))
                        break;

                s[i-1]=s[i-1].substr(0,Count-1);

            }
        }else{
            if(s[i]>=s[i-1].substr(0,len2)){
                continue;
            }else{
                int Count=1;

                while(Count++)
                    if(s[i]<s[i-1].substr(0,Count))
                        break;

                s[i-1]=s[i-1].substr(0,Count-1);

            }
        }

    }

    for(int i=0; i<n; i++)
        cout<<s[i]<<endl;

}

