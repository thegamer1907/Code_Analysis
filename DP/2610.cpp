#include <iostream>

using namespace std;

int main()
{
    int a1, a2 ;
    cin >>a1 >>a2;
    if(a1==1 &&  a2==1){
        cout <<0;
        return 0;
    }
    if((a1-a2)%3 == 0)
        cout << a1+a2-3;
    else
        cout << a1+a2-2;
    return 0;
}