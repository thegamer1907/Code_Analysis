#include<iostream>
using namespace std;
int a, b, c, t1, t2;
int main(){
    cin >> a >> b >> c >> t1 >> t2;
    a *= 5;
    t1 *= 5;
    t2 *= 5;
    a %= 60;
    b %= 60;
    t1 %= 60;
    t2 %= 60;
    a*=2;
    b*=2;
    c*=2;
    t1*=2;
    t2*=2;
    a++;
    if(c>0)b++;
    if(t2 > t1){
        if(!(a > t1 && a < t2))
        {
            if(!(b > t1 && b < t2))
                if(!(c > t1 && c < t2)){
                    cout << "YES\n";
                    return 0;
                }
        }
        if(!(a>t2 || a < t1))
        {
            if(!(b>t2 || b < t1))
                if(!(c>t2 || c < t1))
                {
                    cout << "YES\n";
                    return 0;
                }
        }
    }
    else{
        if(!(a > t2 && a < t1))
        {
            if(!(b > t2 && b < t1))
                if(!(c > t2 && c < t1)){
                    cout << "YES\n";
                    return 0;
                }
        }
        if(!(a>t1 || a < t2))
        {
            if(!(b>t1 || b < t2))
                if(!(c>t1 || c < t2))
                {
                    cout << "YES\n";
                    return 0;
                }
        }
    }
    cout << "NO\n";
    return 0;
}
