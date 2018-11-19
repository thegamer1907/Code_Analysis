#include <iostream>

using namespace std;

int main()
{
    double t[5],t1,t2;
    cin>>t[0]>>t[1]>>t[2]>>t1>>t2;
	t[1]+=t[2]/60;
    t[2]/=5;
    t[1]/=5;
	if(t[1]||t[2])
		t[0]+=0.5;
    if(t1>t2)
        swap(t1,t2);
    int cnt=0;
    for(int i=0;i<3;i++)
    {
        if(t[i]>=t1&&t[i]<=t2)
        {
            cnt++;
        }
    }
    if(cnt==0||cnt==3)
    {
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
    return 0;
}
