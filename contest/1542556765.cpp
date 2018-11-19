#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int main(){
    char a, b, c, d;
    cin>>a>>b;
    int n;
    cin>>n;

    int f=2, g=0, h=0;

    for(int i=0; i<n; ++i){
        cin>>c>>d;
       
        if(a==d) f= 1;
        if(b==c) g= 1;

        if(a==c && b==d) h=1;

    }


    puts(f==g || h?"YES":"NO");

}

// 1509242835905
