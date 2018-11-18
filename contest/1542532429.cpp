#include <iostream>
#include <utility>
#include <vector>
using namespace std;
int main()
{
    bool flag1 = false;
    bool flag2 = false;
    pair<char,char> passward;
    pair<char,char> p;
    typedef vector< pair<char,char> > VP;
    VP vp;
    cin>>passward.first>>passward.second;
    //cout<<passward.first<<passward.second<<endl;
    int n;
    cin>>n;
    for(int i=0; i<n; ++i)
    {
        cin>>p.first>>p.second;
        vp.push_back(make_pair(p.first,p.second));
    }
    VP::iterator it;
    for(it=vp.begin(); it!=vp.end(); it++)
    {
        //cout<<it->first<<","<<it->second<<endl;
        if(passward.first==it->first&&passward.second==it->second)
            {
                flag1=true;
                flag2=true;
                break;
            }
        if(passward.second==it->first)
        {
            flag1=true;
        }
        if(passward.first==it->second)
        {
            flag2=true;
        }
        if(flag1==true && flag2==true)
        {
            break;
        }
    }
    if(flag1==true && flag2==true)
    {
        cout << "YES" <<endl;
    }
    else
    {
        cout <<"NO"<<endl;
    }

    return 0;
}
