#include <cstdio>
#include <cmath>

double calculateArea(double x1, double y1, double x2, double y2, double x3, double y3) {

    double a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    double b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    double c = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));

    double s = (a + b + c) / 2;

    double area = sqrt(s * (s - a) * (s - b) * (s - c));
    
    return area;
}

int main() {

    double x1, y1, x2, y2, x3, y3;


    printf("Введите координаты первой вершины (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);
    
    printf("Введите координаты второй вершины (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);
    
    printf("Введите координаты третьей вершины (x3 y3): ");
    scanf("%lf %lf", &x3, &y3);

    double area = calculateArea(x1, y1, x2, y2, x3, y3);

    printf("Площадь треугольника: %.2lf\n", area);

    return 0;
}
