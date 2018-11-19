//8 hours is not used?
//the speed is unknown, so return yes if there is non-hands path from t1 to t2?
//even if the length of the path > 8 clocks?
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char **argv)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0), cout.precision(15);
    int h, m, s, t1, t2; //h 1 12 m s 0 59 t1 t2 1 12 t1 != t2
    cin >> h >> m >> s >> t1 >> t2;
    h %= 12;
    t1 %= 12;
    t2 %= 12;
    //cw
    int f = 720; //720 = 3600/5. 720%60 == 0 
    int n = 5*12*f;
    vector<int> hands;
    hands.push_back((s*f)%n);
    hands.push_back((m*f + s*f/60)%n);
    hands.push_back((5*h*f + (s + 60*m)*f*5/3600)%n);
    sort(hands.begin(), hands.end());
    hands.push_back(hands[0] + n);
    // _0...1...2.._0(+n)
    // a   b   c  a
    t1 *= 5*f;
    t2 *= 5*f;
    //do not coincide
    int st1 = upper_bound(hands.begin(), hands.end(), t1) - hands.begin();
    int st2 = upper_bound(hands.begin(), hands.end(), t2) - hands.begin();
    if((st1)%3 == (st2)%3){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}
