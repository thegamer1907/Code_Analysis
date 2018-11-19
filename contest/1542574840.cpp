#include <iostream>

using namespace std;
int main()
{
string pw;
cin>>pw;
int n;
cin>>n;
int flag1=0,flag2=0,cnt=0,flag3=0;
string x;
for(int i=0;i<n;i++){
    cin>>x;
    if(x==pw)
        flag3=1;
    else{
    if(x[0]==pw[1] ){

        flag1=1;
        //cout<<x[0]<<endl;

    }
    if(x[1]==pw[0])
    {
//cout<<x[1]<<endl;
        cnt++;
        flag2=1;

    }
    }
}
if(flag3==1 || (flag1==1 && flag2==1))
cout<<"YES";
else
    cout<<"NO";

return 0;
}
