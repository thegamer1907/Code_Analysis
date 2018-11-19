#include <bits/stdc++.h>

using namespace std;

int main()
{
    int h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    if(s>0)
        m++;
    int pt1=t1*5,pt2=t2*5,ph=h*5;
    if(m>0)
        ph++;
    if(pt1==pt2){
        cout<<"YES"<<endl;
        return 0;
    }
    if(ph==pt2&&s==0&&m==0){
        cout<<"NO"<<endl;
        return 0;
    }
    if(pt1<pt2)
    {
        int cnt=0;
        if(ph>pt1&&ph<=pt2)
            cnt++;
        if(m>pt1&&m<=pt2)
            cnt++;
        if(s>pt1&&s<=pt2)
            cnt++;
        if(cnt==0||cnt==3)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    else
    {
      //  cout<<pt1<<" "<<pt2<<endl;
        swap(pt1,pt2);
       // cout<<pt1<<" "<<pt2<<endl;
        int cnt=0;
        if(ph>pt1&&ph<=pt2)
            cnt++;
        if(m>pt1&&m<=pt2)
            cnt++;
        if(s>pt1&&s<=pt2)
            cnt++;
        if(cnt==0||cnt==3)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
