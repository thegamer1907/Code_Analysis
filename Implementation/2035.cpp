#include <iostream>

using namespace std;
int theNum;
int X,Y,Z,Xs,Ys,Zs;
int main()
{

    cin>>theNum;

    for (int i = 0 ; i < theNum ; i++){
    cin>>X>>Y>>Z;
    Xs = Xs + X;
    Ys = Ys + Y;
    Zs = Zs + Z;
    }


    if ((Xs == 0)&&(Ys == 0)&&(Zs == 0)){
    cout<<"YES";
    }
    else{
    cout<<"NO";
    }
    return 0;
}
