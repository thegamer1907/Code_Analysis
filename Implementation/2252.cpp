#include<bits/stdc++.h>

using namespace std;

int main(int args, char** argv)
{
    int k,n,num,cost= 0;
    cin>>k>>n>>num;

    while(num--)
    {
        cost += (k*(num+1));
        //cout<<cost<<"   "<<k*num<<"   "<<num<<endl;
    }

    if(cost < n)
        cout<<"0"<<endl;
    else
        cout<<cost-n<<endl;

    return 0;
}
