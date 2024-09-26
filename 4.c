#include <stdio.h>
#define PI 3.1415926

int main() {
    double r;
    double circumference, area;

    // 输入圆的半径
    printf("请输入圆的半径r: ");
    scanf("%lf", &r);

    // 计算周长
    circumference = 2 * PI * r;

    // 计算面积
    area = PI * r * r;

    // 输出周长和面积
    printf("圆的周长是: %.2f\n", circumference);
    printf("圆的面积是: %.2f\n", area);

    return 0;
}