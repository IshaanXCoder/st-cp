#include <bits/stdc++.h>

void print1(int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

void print2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j == 0; j = j - 1)
        {
            std::cout << "@";
        }
        std::cout << std::endl;
    }
}

void print3(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }
}

void print4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            std::cout << i << " ";
        }
        std::cout << std::endl;
    }
}

void print5(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }
}

void print6(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }
}

void print7(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i; j++)
        {
            std::cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            std::cout << "*";
        }
        for (int j = 1; j <= n - i; j++)
        {
            std::cout << " ";
        }
        std::cout << std::endl;
    }
}

void print8(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            std::cout << " ";
        }

        for (int j = 1; j <= 2 * n - 2 * i + 1; j++)
        {
            std::cout << "*";
        }

        for (int j = 1; j <= i - 1; j++)
        {
            std::cout << " ";
        }
        std::cout << std::endl;  // Move to the next line after printing each row
    }
}

void print9(int n){
    print7(n);
    print8(n);

}

void print10(int n){
    for (int i=1; i<n; i++){
        for(int j=1;j<=i;j++){
            std::cout<<"*"<<"\n";

        }
    while(int i=n){
        for(int j=1;j<=n; j++){
            std::cout<<"*";
        }

    }

    }
}


int main()
{
    int n;
    std::cin >> n;
    print10(n);

    return 0;
}