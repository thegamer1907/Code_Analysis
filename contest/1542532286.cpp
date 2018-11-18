#include<iostream>
#include<string>
#include<vector>

using namespace std;

vector <string> s1,s2;

int main()
{
    int n,i,j;
    bool f=false;
    string goal,temp;
    cin>>goal;
    cin>>n;
    for(i=0;i<n;++i)
    {
        cin>>temp;
        if(temp[0]==goal[1])
        {
            s1.push_back(temp);
        }
        if(temp[1]==goal[0])
        {
            s2.push_back(temp);
        }
        if(temp==goal)
        {
            f=true;
        }
    }
    if(f==true)cout<<"YES"<<endl;
    else
    {
        if(s1.size()>0&&s2.size()>0)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}