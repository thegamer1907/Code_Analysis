#include<bits/stdc++.h>

using namespace std;

string s;
int max1=0,z[1000005],l,r,used[1000005],used1[1000005];
vector<int> ans;
int main(){
    cin>>s;
    l=r=0;
    z[0]=s.length();
    for(int i=1;i<s.length();i++){
        if(i>r){
            l=r=i;
            while(r<s.length()&&s[r-l]==s[r])r++;
            z[i]=r-l;
            r--;
        }
        else{
            int k=i-l;
            if(z[k]<r-i+1){
                z[i]=z[k];
            }
            else{
                l=i;
                while(r<s.length()&&s[r-l]==s[r])r++;
                z[i]=r-l;
                r--;
            }
        }
    }
    memset(used,0,sizeof(used));
    for(int i=s.length()-1;i>=0;i--){
        if(z[i]==s.length()-i){
            ans.push_back(z[i]);
        }
    }
    int officalmax1=0;
    sort(ans.begin(),ans.end());
    for(int i=1;i<s.length()-1;i++){
            int dk;
            if(z[i]!=0){
                if(i+z[i]==s.length())
                    dk=z[i]-1;
                else
                    dk=z[i];
                int mid,l=0,r=ans.size()-1;
                while(l<r){
                    mid=(l+r)/2;
                    if(ans[mid]>dk){
                        r=mid;
                    }
                    else
                        l=mid+1;
                }
                while(i+ans[l]>=s.length()&&l!=0)
                    l--;
                if(i+ans[l]<s.length()&&ans[l]<=dk){
                officalmax1=max(officalmax1,ans[l]);
                }
            }
    }
    if(officalmax1==0)
        cout<<"Just a legend";
    else{
        for(int i=0;i<s.length();i++){
            if(i<officalmax1)
                cout<<s[i];
            else
                break;
        }
    }
}
