#include <iostream>
#include <vector>
#include <bitset>
#define NMAX 101

int n,m;
std::vector<int> gb[NMAX];
std::bitset<NMAX> viz;
int rightPair[NMAX], leftPair[NMAX];

void initData() {
    for(int i = 0; i < NMAX; i++)
        rightPair[i] = leftPair[i] = -1;
}

void readInput() {
    int boys[NMAX], girls[NMAX];
    std::cin >> n;
    for(int i = 0; i < n; i++)
        std::cin >> boys[i];
    std::cin >> m;
    for(int i = 0; i < m; i++)
        std::cin >> girls[i];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            if(abs(boys[i]-girls[j]) <= 1)
                gb[i].push_back(j);
}

bool pairUp(const int&node) {
    if(viz[node])
        return false;
    viz[node] = true;
    for(auto const& next: gb[node])
        if(leftPair[next] == -1) {
        leftPair[next] = node;
        rightPair[node] = next;
        return true;
        }
    for(auto const& next: gb[node])
        if(pairUp(leftPair[next])) {
            leftPair[next] = node;
            rightPair[node] = next;
            return true;
        }
    return false;
}

void coupleIt() {
    bool getBetter = true;
    while(getBetter) {
        getBetter = false;
        viz.reset();
        for(int i = 0; i < n; i++)
            if(rightPair[i] == -1)
                getBetter |= pairUp(i);
    }
}

void outputData() {
    int total = 0;
    for(int i = 0; i < n; i++)
        if(rightPair[i] != -1)
            total ++;
    std::cout << total << '\n';
}

int main() {
    initData();
    readInput();
    coupleIt();
    outputData();
    return 0;
}