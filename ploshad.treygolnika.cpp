#include <stdio.h>
#include <math.h>

double Distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

double AreaTriniagle(double a, double b, double c) {
    double p = (a + b + c) / 2.0;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main() {
    double x1, y1, x2, y2, x3, y3;
    
    printf("Введите (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);
    
    printf("Введите (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);
    
    printf("Введите (x3 y3): ");
    scanf("%lf %lf", &x3, &y3);
    
    double a =Distance(x1, y1, x2, y2);
    double b =Distance(x2, y2, x3, y3);
    double c =Distance(x3, y3, x1, y1);

    if (a + b <= c, a + c <= b, b + c <= a) {
        printf("Ошибка: \n");
        return 1;
    }
    
    double area =AreaTriniagle(a, b, c);
    
    printf("Площадь треугольника: %.2lf\n", area);
    
    return 0;
}
