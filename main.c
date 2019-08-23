#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include"goods.h"

int main()
{
    Goods g;

    GetGoods(&g);
    PutGoods(g);

    return 0;
}
