#include <bits/stdc++.h>
using namespace std;

int main()
{
    int h,m,s,t1,t2;
    cin>>h>>m>>s>>t1>>t2;
    if(t1>t2)swap(t1,t2);
    if(h==12)h=0;
    float angh,angm,angs,angt1,angt2;
    angh = h*30+m/2.0+s/120.0;
    angm = m*6 + s/10.0;
    angs = s*6;
    angt1 = t1 * 30;
    angt2 = t2 * 30;
    //cout<<"angh = "<<angh<<" angm = "<<angm<<" angs = "<<angs<<" angt1 = "<<angt1<<" angt2 = "<<angt2<<endl;


    if((angt2>angh && angt2>angm && angt2>angs) && (angt1<angh && angt1<angm && angt1<angs))
    {
        cout<<"YES";
    }
    else if(angt2>angm && angm>angt1)
    {
        cout<<"NO";
    }
    else if(angt2>angs && angs>angt1)
    {
        cout<<"NO";
    }
    else if(angt2>angh && angh>angt1)
    {
        cout<<"NO";
    }
    else
    {
        cout<<"YES";
    }
    return 0;
}
