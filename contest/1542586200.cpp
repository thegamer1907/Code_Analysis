/**OOO**/
#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);
    string pas;cin>>pas;
    int n;cin>>n;

    vector<string>bark_word;

    for(int i=0;i<n;i++)
    {
        string z;
        cin>>z;
        bark_word.push_back(z);
    }

    //main part
    int f=0;
    for(int i=0;i<n;i++)
    {
        if(pas.compare(bark_word[i])==0)
        {
            f=1;
            break;
        }
    }


    if(f==1)cout<<"yes"<<endl;
    else{
         int flag1=0,flag2=0;

        for(int i=0;i<n;i++)
        {   string temp=bark_word[i];

            if(pas[0]==temp[1])flag1=1;
            if(pas[1]==temp[0])flag2=1;
        }

        if(flag1==1 && flag2==1)cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }


return 0;
}
