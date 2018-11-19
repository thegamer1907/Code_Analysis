#include <iostream>
#include <vector>
#include <algorithm>

#define loop(i, num)  for (int i = 0; i < num; i++)

using namespace std;

int h, m, s, t1, t2;

int main() {
    
    cin >> h >> m >> s >> t1 >> t2;
    
    // 60 * 60 * 60;
    
    vector<pair<int, int>> b;
    
    int bs = 3600 * s, bm = 3600 * m + s * 60, bh = (18000 * h + bm / 12) % 216000;
    
    int p1 = 18000 * t1 % 216000, p2 = 18000 * t2 % 216000;
    
    b.push_back({bs, 0});
    
    b.push_back({bm, 0});
    
    b.push_back({bh, 0});
    
    b.push_back({p1, 1});
    
    b.push_back({p2, 1});
    
    sort(b.begin(), b.end());
    
    loop (i, 5) {
        
        if (b[i].second == 1) {
            
            if (b[(i - 1) == -1 ? 4 : (i - 1)].second == 1 || b[(i + 1) % 5].second == 1) {
                
                cout << "YES" << endl;
                
                return 0;
                
            }
            
        }
        
    }
    
//    cout << bs << ' ' << bm << ' ' << bh << ' ' << p1 << ' ' << p2 << endl;
    
    cout << "NO" << endl;
    
    return 0;
    
}




