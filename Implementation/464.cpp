#include <iostream>

using namespace std;


int main() {

    int a, b;
    scanf("%d %d", &a, &b);
    int counter = 1;
    int resultTotal = 0;
    int lastScore = 0;
    while(a--){
        int number;
        scanf("%d", &number);

        if(number >0 && counter <= b) {
           resultTotal += 1;
           if (counter == b) {
               lastScore = number;
           }
        }

        if (number > 0 && lastScore > 0 && number == lastScore && counter > b) {
            resultTotal += 1;
        }

        counter += 1;
    }

    printf("%d", resultTotal);
}
