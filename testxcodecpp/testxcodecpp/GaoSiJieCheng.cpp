//
//  GaoSiJieCheng.cpp
//  testxcodecpp
//
//  Created by weikai on 2023/5/1.
//

#include "GaoSiJieCheng.hpp"

size_t strlen(const char *s) {
    const char *sc;

    for (sc = s; *sc != '\0'; ++sc)
        /* nothing */;
    return sc - s;
}

void JieCheng(int n)
{
    int i, sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("%d\n", sum);
}

void GaoSiJieCheng(int n)
{
    int sum = 0;
    sum = (1 + n) * n / 2;
    printf("%d\n", sum);
}
