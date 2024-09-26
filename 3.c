#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c;
    double s, area;

    printf("请输入三角形的三边长a b c（支持小数）: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // 计算半周长
    s = (a + b + c) / 2;

    // 判断是否能构成三角形
    if (a + b > c && a + c > b && b + c > a)
    {
        // 使用海伦公式计算面积
        area = sqrt(s * (s - a) * (s - b) * (s - c));
    }
    else
    {
        printf("输入的边长无法构成三角形。\n");
        return 1;
    }

    printf("三角形的面积是: %.2f\n", area); // 保留两位小数

    return 0;
}