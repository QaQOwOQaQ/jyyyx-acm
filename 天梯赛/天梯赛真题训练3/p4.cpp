#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

bool is_prime(int x)  // 判定质数
{
    if (x < 2) return false;
    for (int i = 2; i <= x / i; i ++ )
        if (x % i == 0)
            return false;
    return true;
}

void check(int x)
{
    if(is_prime(x)) puts("Yes");
    else    puts("No");
}

int main()
{
    int n;
    cin >> n;
    while (n -- )
    {
        int x;
        cin >> x;
        check(x);
    }
    return 0;
}