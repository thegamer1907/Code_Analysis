#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n,t;
    string s;
    cin>>n>>t>>s;
    for(int i=0;i<t;i++){
        for(int j=1;j<n;j++){
            if(s[j]=='G' && s[j-1]=='B'){
                swap(s[j],s[j-1]);
                j++;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<s[i];
    }
    return 0;
}
