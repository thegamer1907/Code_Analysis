#include <iostream>
#include <algorithm>
#include <iomanip>

int main()
{
  // ---------------------------------------
  // ---------------- Input ----------------

  // Obtener n y l
  int n, l;
  std::cin >> n;
  std::cin >> l;

  int lanterns[n];

  for (size_t i = 0; i < n; i++)
  {
    std::cin >> lanterns[i];
  }

  // -----------------------------------------------
  // ---------------- Ordenar Input ----------------

  std::sort(lanterns, lanterns + n);

  // --------------------------------------------
  // ---------------- Distancias ----------------

  // Encontrar la mayor distancia entre lamparas
  int maxDistance = 0;
  int distance = 0;
  for (size_t i = 0; i < n - 1; i++)
  {
    distance = lanterns[i + 1] - lanterns[i];
    if (distance >= maxDistance)
    {
      maxDistance = distance;
    }
  }
  // El radio sera la mayor distancia dividida en 2.
  float D = (float)maxDistance / 2;

  // Verificar Bordes e imprimir.
  std::cout << std::fixed << std::setprecision(10);
  float left = lanterns[0];
  float right = l - lanterns[n - 1];

  if (left >= D)
  {
    D = left;
  }
  if (right >= D)
  {
    D = right;
  }
  std::cout << D << std::endl;

  return 0;
}

// 1538772035759
