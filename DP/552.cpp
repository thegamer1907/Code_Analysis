#include <iostream>

using namespace std;

int a[100010];

int main()
{
    string s;
    cin>>s;
    for(int i=1 ;i< s.length() ;i++){
       if(s[i]==s[i-1]){
            a[i]=a[i-1]+1;
       } else{
            a[i]=a[i-1];
       }
    }
    int q ,l , r;
    cin>>q;
    for(int i =0 ;i<q ; i++){
        cin>>l>>r;
        cout<<a[r-1]-a[l-1]<<endl;
    }
    return 0;
}
