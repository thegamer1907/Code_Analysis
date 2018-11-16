
#include<iostream>
#include<cstdlib>
#include<cstring>
#include<map>
#include<vector>
using namespace std;
int main(){
//    vector x,y,z;
    long n,i,s=0,s1=0,s2=0,s3=0,a1,a2,a3;
    vector<long>x;
    vector<long>y;
    vector<long>z;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a1; x.push_back(a1);
        cin>>a2; y.push_back(a2);
        cin>>a3; z.push_back(a3);
    }
    for(i=0;i<n;i++)
    {
        s1=s1+x.back();
        x.pop_back();
        s2=s2+y.back();
        y.pop_back();
        s3=s3+z.back();
        z.pop_back();
    }
    if(s1==0&&s2==0&&s3==0)
        cout<<"YES";
      // cout<<s1;
    else
        cout<<"NO";


return 0;
}
