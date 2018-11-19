#import <iostream>
#import <string>
using namespace std;

int main(int argc, const char * argv[]) {
    int h,m,s;
    int tt1,tt2;
    cin >> h >> m >> s >> tt1 >> tt2;
    if (h == 12)
        h = 0;
    double s1,s2,s3;
    s1 = (h*3600 + m*60 + s)*1.0/12/3600;
    s2 = (m*60 + s)*1.0/3600;
    s3 = s*1.0/60;
    double t1 = tt1*1.0 / 12;
    double t2 = tt2*1.0 / 12;
    if (t1 > t2) {
        double tmp = t1;
        t1 = t2;
        t2 = tmp;
    }
    if ((t1 < s1 && t2 < s1) || (t1 > s1 && t2 > s1))
        if ((t1 < s2 && t2 < s2 )|| (t1 > s2 && t2 > s2))
            if ((t1 < s3 && t2 < s3) || (t1 > s3 && t2 > s3)) {
                cout << "YES";
                return 0;
            }
    if (t1 < s1 && t1 < s2 && t1 < s3 && t2 > s1 && t2 > s2 && t2 > s3) {
                    cout << "YES";
                    return 0;
    }
    cout << "NO";
    /*int n,k;
    cin >> n >> k;
    long* a = new long*[k];
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < k; ++j) {
            
        }
    }*/
    return 0;
}
