#include <bits/stdc++.h>

int main()
{
   int n;
   int sum = 0;
   std::cin >> n;
   for (int i = 1; i <= n; i++)
   {
      if (n % i == 0)
      {
         sum = sum + i;
      }
   }
   std::cout << sum;
}