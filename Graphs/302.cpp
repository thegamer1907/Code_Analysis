#include <iostream>

using namespace std;

main()
{
    int a;
    cin>>a;
    int t;
    cin>>t;
    string s;
    cin>>s;
    while (t!=0){
        for (int i=1;i<s.length();i++){
            if (s[i]=='G' && s[i-1]=='B') {
                swap(s[i],s[i-1]);
                i++;
            }
        }
        t--;
    }
    cout<<s;
}
