#include <bits/stdc++.h>

using namespace std;

int main()
{
    string x;
    cin>>x;
    int n;
    scanf("%d",&n);
    string a[n];
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            string str1,str2;
            str1=a[i]+a[j];
            str2=a[j]+a[j];
            if(str1.find(x)!=-1||str2.find(x)!=-1){
                    cout<<"YES"<<endl;
                    return 0;
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
