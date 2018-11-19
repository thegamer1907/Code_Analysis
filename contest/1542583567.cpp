
#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;


int main(int argc, char* argv[])
{
    std::ios::sync_with_stdio(false);
    cin.tie(nullptr);


    double h, m, s;
    int t1, t2;
    cin >> h >> m >> s >> t1 >> t2;

    h = (h + (m/60.0) + (s/3600.0));
    if(h > 12)
        h = h - 12;

    m = m + (s/60.0);
    m = (m * 12.0 / 60.0);

    s = s * 12.0 / 60.0;

    bool top = true;
    bool bot = true;

    auto temp = min(t1,t2);
    t2 = max(t1,t2);
    t1 = temp;

    vector<double> hands{h, m, s};
    for(auto each : hands)
    {
        if(t1 < each && each < t2)
            bot = false;
        else
            top = false;
    }

    cout << ((top || bot) ? "YES" : "NO") << endl;



    return 0;
}

