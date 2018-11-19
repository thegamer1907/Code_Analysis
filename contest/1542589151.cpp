#include <iostream>
#include <string>
using namespace std;
int check1[255],check2[255];
int main()
{

    int dem=0,n;
    string s1,s2,s;
    cin>>s1;
    s[0]=s1[1];
    s[1]=s1[0];
    cin>>n;
    bool kq=false;
    for(int i=1;i<=n;i++)
    {
        dem++;
        cin>>s2;
        if(s2==s1||s2==s)
            kq=true;
        check1[s2[0]]=1;
        check2[s2[1]]=1;
    }
    if(check1[s1[1]]==1&&check2[s1[0]]==1)
        kq=true;
    if(kq==true)
        cout<<"YES";
    else cout<<"NO";
    return 0;

}
