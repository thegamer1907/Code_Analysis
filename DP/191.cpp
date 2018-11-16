#include <iostream>
#include <map>
#include <cstdlib>
#include <algorithm>
#include <list>

int main() {
    int noofboys;
    std::cin >> noofboys;
    std::list<int> boys;
    for (int i=0; i<noofboys; i++) {
        int x;
        std::cin >> x;
        boys.push_back(x);
    }


    int noofgirls;
    std::cin >> noofgirls;
    std::list<int> girls;
    for (int i=0; i<noofgirls; i++) {
        int x;
        std::cin >> x;
        girls.push_back(x);
    }

    boys.sort();
    girls.sort();

    int count = 0;
    bool changed = true;

    while(changed) {
        changed=false;
        for(auto it = boys.begin(); it!=boys.end(); it++)
            for(auto iu = girls.begin(); iu!=girls.end(); iu++)
                if (std::abs(*it-*iu)<=1) {
                    boys.erase(it);
                    girls.erase(iu);
                    changed=true;
                    count++;
                    goto out;
                }
    out:
        continue;
    }
/*
    int boyscount = 0;
    for(auto it=boysset.begin(); it!=boysset.end(); it++)
        boyscount+=boys[*it];

    int girlscount = 0;
    for(auto it=girlsset.begin(); it!=girlsset.end(); it++)
        girlscount+=girls[*it];
*/
    std::cout << count;

}
