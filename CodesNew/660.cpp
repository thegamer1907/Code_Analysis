#include <iostream>
#include <map>
#include <cmath>
using namespace std;
map<string,int>FamiliarBoth;
int main()
{
        int Poland,Enmy,del=0;
        cin>>Poland>>Enmy;
        for(int i=0;i<Poland;i++)
        {
                string x; cin>>x; FamiliarBoth[x]++;
        }
                for(int i=0;i<Enmy;i++)
        {
                string x; cin>>x; 
                if(FamiliarBoth[x])del++;
        }
        Poland-=del/2,Enmy-=(del/2+del%2);
        if(Poland>Enmy||(Poland==Enmy&&Poland%2&&!(Enmy%2))) puts("YES");
        else puts("NO");
}