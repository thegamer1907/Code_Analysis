#include<iostream>
#include<vector>
#include<algorithm>
#include<utility>
#include<cstdio>

int main(){
    int h, m, s, t1, t2;
    std::cin >> h >> m >> s >> t1 >> t2;

    std::vector<std::pair<double, std::string> > v;
    double hr, mn, sc, x, y;
    hr = 360. * ((h * 3600 + m * 60 + s) % 43200) / 43200;//write
    v.push_back(std::make_pair(hr, "hr"));
    mn = 360. * ((m * 60 + s) % 3600) / 3600;
    v.push_back(std::make_pair(mn, "mn"));
    sc = 360. * s / 60;
    v.push_back(std::make_pair(sc, "sc"));
    x = 360. * (t1 % 12) / 12;
    v.push_back(std::make_pair(x, "x"));
    y = 360. * (t2 % 12) / 12;
    v.push_back(std::make_pair(y, "y"));
    //printf("%.10f %.10f %.10f %.10f %.10f\n", hr, mn, sc, x, y);

    std::sort(v.begin(), v.end());

    for(int i = 0; i < 5; i++){
        if(v[i].first == x){
            if(v[i].second != "x")v.erase(v.begin() + i);
        }
        if(v[i].first == y){
            if(v[i].second != "y")v.erase(v.begin() + i);
        }
    }
    

    bool ans = false;
    for(int i = 0; i < v.size(); i++){
        if(v[i].second == "x" || v[i].second == "y"){
            if(v[(i + 1) % v.size()].second == "x" || v[(i + 1) % v.size()].second == "y")ans = true;
        }
    }


    std::cout << (ans ? "YES" : "NO") << std::endl;
}
