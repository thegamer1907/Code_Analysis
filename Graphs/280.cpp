#include<iostream>
using namespace std;
string s;
int main()
{
    int a,b;
    cin>>a>>b;
    cin>>s;
    while (b--){
        for (int i=0;i<a-1;i++){
            if (s[i]=='B' && s[i+1]=='G'){
                swap(s[i],s[i+1]);
                i++;
            }
        }
    }
    cout<<s;
}
