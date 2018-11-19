#include <iostream>

using namespace std;

int control(int, int);

int time1[61];//from 1 to 60
int h,m,s;
int t1, t2;

int main(){
    cin>>h>>m>>s>>t1>>t2;

    time1[h*5] = 1;
    if(m==0) time1[60]=1; else time1[m] = 1;
    if(s==0) time1[60]=1; else time1[s] = 1;

    int ans;
    if(t1<t2)
        ans = control(t1, t2);
    else
        ans = control(t2, t1);

    if(ans)
        cout<<"YES";
    else
        cout<<"NO";
    cout<<endl;
}

int control(int a, int b){
    int ans=0;
    int i;
    for(i=a*5;i<b*5;i++)
        if(time1[i]==1) {
            ans++;
            break;
        }

    if(time1[60]==1) 
        ans++;
    else{
        int f=1;
        for(i=1;i<a*5;i++)
            if(time1[i]==1){
                ans++;
                f=0;
                break;
            }

        if(f)
            for(i=b*5;i<60;i++)
                if(time1[i]==1){
                    ans++;
                    break;
                }
    }

    if(ans>=2)
        return 0;
    else
        return 1;
}