#include <bits/stdc++.h>
using namespace std;

int main() {
    int numberOfChildren = 0, givenSeconds = 0;
    cin >> numberOfChildren >> givenSeconds;

    string queue;
    cin >> queue;

    for (int i = 0; i < givenSeconds; i++) {
        for (int j = 0; j < numberOfChildren-1; j++) {
            if (queue[j] == 'B' && queue[j+1] == 'G') {
                char temp = queue[j];
                queue[j] = queue[j+1];
                queue[j+1] = temp;
                j++;
            }
        }
    }
    cout << queue;
    return 0;
}
