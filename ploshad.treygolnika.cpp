#include <stdio.h>
#include <math.h>

double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

double triangleArea(double a, double b, double c) {
    double p = (a + b + c) / 2.0;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}
int isValidTriangle(double a, double b, double c) {
    return (a + b > c) && (a + c > b) && (b + c > a);
}

int main() {
    double x1, y1, x2, y2, x3, y3;
    
    printf("Введите координаты первой точки (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);
    
    printf("Введите координаты второй точки (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);
    
    printf("Введите координаты третьей точки (x3 y3): ");
    scanf("%lf %lf", &x3, &y3);

    double a = distance(x1, y1, x2, y2);
    double b = distance(x2, y2, x3, y3);
    double c = distance(x3, y3, x1, y1);

    if (!isValidTriangle(a, b, c)) {
        printf("Ошибка: точки лежат на одной прямой или совпадают!\n");
        return 1;
    }

    double area = triangleArea(a, b, c);
    
    printf("Площадь треугольника: %.2lf\n", area);
    
    return 0;
}
