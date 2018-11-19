#include <iostream>
using namespace std;
int main()
{
    string password="";
    cin>>password;
    int n=0;
    cin>>n;
    string tab[n];
    for(int i=0;i<n;i++){
        cin>>tab[i];
    }
    bool a=false,b=false,c=false;
    for(int i=0;i<n;i++){
        if(tab[i]==password){
            c=true;
            break;
            }
        if(password[0]==tab[i][1])
            a=true;
        if(password[1]==tab[i][0])
            b=true;
    }
    if((a&&b)||c)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
