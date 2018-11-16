#include <iostream>

using namespace std;

int main()
{

    int a,b;
    string c;
    cin>>a>>b;
    cin>>c;
    for(int x=0;x<b;x++){
        for(int y=0;y<a;y++){
            if(c[y]=='G' && c[y-1]=='B' )
            {
                c[y]='b';
                c[y-1]='g';
            }
        }
        for(int z=0;z<a;z++){
            if(c[z]=='b'){
                c[z]='B';
            }
            if(c[z]=='g'){
                c[z]='G';
            }
        }
    }
    cout<<c<<endl;
    return 0;
}
