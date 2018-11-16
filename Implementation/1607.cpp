#include <iostream>

using namespace std;

int main()
{
    bool v=0;
    int y=0,m=0;
        string a;
    cin>>a;
    for(int i=0;i<a.size();i++){
    if(a[i]=='1'){
    y++;
    m=0;
    }
    else{
        m++;
    y=0;
    }
    if(y>=7||m>=7)
        v=1;

}
if(v==0)
    cout<<"NO";
else
    cout<<"YES";

    return 0;
}