#include<bits/stdc++.h>

int main(){
    int N, L, i;
    //Leo N y L
    std::cin >> N >> L;
    std::vector<int> lanterns(N, 0);
    //Leo los N numeros
    for (i = 0; i < N; i++ ){
        std::cin >> lanterns[i];
    }
    std::sort(lanterns.begin(), lanterns.end());
    //Calculo la minima distancia
    double min_radius = 0.;
    double radius;
    min_radius = lanterns[0] - 0.;
    for (i=0;i< N-1;i++){
        radius = (lanterns[i+1]- lanterns[i]) / 2.;
        min_radius = min_radius < radius ? radius : min_radius;
    }
    radius = L - lanterns[N - 1];
    min_radius = min_radius < radius ? radius : min_radius;
    std::cout << std::fixed << std::setprecision(20) << min_radius << std::endl;
    return 0;
}
// 1538595288549
