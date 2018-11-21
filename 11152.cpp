//for in-circle area = rs
//for out circle area = a*b*c/4R

#include <iostream>
#include <cstdio>
#include <math.h>
using namespace std;
#define PI  acos(-1)

double ans[3];

int main()
{
    int a, b, c;
    while(scanf("%d %d %d", &a, &b, &c) == 3){
    double s = (double)(a + b + c) / 2;
    double area = sqrt(s * (s - a) * (s - b) * (s - c));
    double r =  (a * b * c) / (4 * area);
    ans[0] = PI * r *r;
    ans[1] = area;
    r = area / s;
    ans[2] = PI * r * r;
    printf("%.4lf %.4lf %.4lf\n", ans[0] - ans[1], ans[1] - ans[2], ans[2]);
    }

    return 0;
}
