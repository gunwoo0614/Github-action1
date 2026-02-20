#include <stdio.h>
#include "plus.h"

int main(void)
{
    int failed = 0;// 성공

    if (plus(3, 5) != 8)
    {
        printf("FAIL: plus(3,5)\n");
        failed = 1; // 실패
    }
    return failed; 
}
