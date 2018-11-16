#include<iostream>
using namespace std;
int main()
{
    int i,k=0;
    string n;
    cin>>n;
    for(i=0;i<n.size();i++){

        if(n[i]==n[i+1])
            k++;
        else
            k=0;
            if(k==6)
                break;
    }
    if(k==6)
        cout<<"YES";
    else
        cout<<"NO";
return 0;
}
