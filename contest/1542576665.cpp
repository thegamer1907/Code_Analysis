//8 hours is not used?
//the speed is unknown, so return yes if there is non-hands path from t1 to t2?
//even if the length of the path > 8 clocks?
#include <iostream>
#include <vector>
using namespace std;
int main(int argc, char **argv)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0), cout.precision(15);
    int h, m, s, t1, t2; //h 1 12 m s 0 59 t1 t2 1 12 t1 != t2
    cin >> h >> m >> s >> t1 >> t2;
    //cw
    int f = 720; //720 = 3600/5. 720%60 == 0 
    int n = 5*12*f;
    vector<bool> hands(n, false);
    hands[(s*f)%n] = true;
    hands[(m*f + s*f/60)%n] = true;
    hands[(5*h*f + (s + 60*m)*f*5/3600)%n] = true;

    t1 %= 12;
    t2 %= 12;

    t1 *= 5*f;
    t2 *= 5*f;
    for(int i = 0; i < n; i++){
        int t = (t1 + i)%n;
        //Misha's position and the target time do not coincide with the position of any hand.
        if(t == t2){
            cout << "YES" << endl;
            return 0;
        }else if(hands[t]){
            break;
        }
    }
    for(int i = 0; i < n; i++){
        int t = (t1 + n - i)%n;
        if(t == t2){
            cout << "YES" << endl;
            return 0;
        }else if(hands[t]){
            break;
        }
    }
    cout << "NO" << endl;

    return 0;
}
