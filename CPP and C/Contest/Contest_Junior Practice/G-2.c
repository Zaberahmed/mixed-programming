#include <stdio.h>
int main()
{
    double x1,y1,x2,y2, x3, y3, x4, y4, m1, m2;
    double l;
    int c = 0;
    while(scanf("%lf%lf%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4)!= EOF){
        m1 = (y2-y1)/(x2-x1);
        m2 = (y4-y3)/(x4-x3);
        l = -(1.0/m2);
        if(m1 == m2) printf("Case $%d: yes no no\n", c);
        else if(m1 == l) printf("Case $%d: no yes yes\n", c);
        else printf("Case $%d: no yes no\n", c);
        c++;

    }
    return 0;
}
