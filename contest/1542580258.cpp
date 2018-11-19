#include<iostream>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int n;
    cin>>n;
    bool k=false;
    bool f=false,se=false;
    while(n--)
    {
        string s;
        cin>>s;
        //cout<<s<<endl;
        if(s==a)
        {
            k=true;
        }
        else if(s[0]==a[1]&&s[1]==a[0])
        {
            k=true;
        }
        else if(s[0]==a[1]){
          //  cout<<s<<endl;
        se=true;
        }
        else if(s[1]==a[0]){
        f=true;
        //cout<<s<<endl;
        }
    }
    //cout<<f<<" "<<s<<endl;
    if((f==true&&se==true)||k)
    cout<<"YES";
    else 
    cout<<"NO";
    return 0;
}