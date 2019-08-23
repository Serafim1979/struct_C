#ifndef GOODS_H_
#define GOODS_H_
#include <string.h>
/////////////////////////////////////////////////////
struct Data
{
    int yy;
    int mm;
    int dd;
};
/////////////////////////////////////////////////////
struct tagGoods
{
    double price;
    char name[50];
    char *prod;
    int weigth;
    struct Data data;
};
typedef struct tagGoods Goods;
/////////////////////////////////////////////////////
void GetGoods(Goods *pgoods)
{
    Goods tmp;
    char buff[255];

        printf("Input YYYY MM DD :\n");
        scanf("%d %d %d", &tmp.data.yy, &tmp.data.mm, &tmp.data.dd);
        fflush(stdin);

        printf("Enter the name: \n");
        gets(tmp.name);

        printf("Enter the price: \n");
        scanf("%lf", &tmp.price);

        printf("Enter the weight: \n");
        scanf("%d", &tmp.weigth);
        fflush(stdin);

        printf("Enter manufacturer: \n");
        gets(buff);

        tmp.prod = (char*)malloc(strlen(buff)+1);
        strcpy(tmp.prod, buff);

    *pgoods = tmp;
}
/////////////////////////////////////////////////////
void PutGoods(Goods g)
{
    printf("\n%s %s %g %d data = %d %d %d\n", g.name,
           g.prod, g.price, g.weigth, g.data.yy,
           g.data.mm, g.data.dd);
}

#endif // GOODS_H_
