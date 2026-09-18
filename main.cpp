// Автор: Мишустин В., группа ПИ-51, вариант 20.
#define _CRT_SECURE_NO_WARNINGS

//------
#include <stdio.h>
#include <math.h>
#include <locale.h>

// Объём пирамиды: V = a^2 * h / 3
double pyramidV(double a, double h)//функция

{
    return a * a * h / 3.0;
}

// Апофема: m = sqrt(h^2 + (a/2)^2)
double pyramidA(double a, double h)
{
    return sqrt(h * h + (a / 2.0) * (a / 2.0));
}

double pyramidSurface(double a, double h) {
    return a * a + 2.0 * a * pyramidA(a, h);
}

int main()
{
    setlocale(LC_ALL, "Russian");

    int choice;
    double a, h;

    do
    {
        printf("\n*** Калькулятор пирамиды. Вариант 20 ***\n");
        printf("1. Объём пирамиды\n");
        printf("2. Апофема пирамиды\n");
	printf("3. Площадь полной поверхности пирамиды\n");
        printf("0. Выход\n");

        
        do
        {
            printf("Выберите пункт: ");
            if (scanf("%d", &choice) != 1)   
            {
                while (getchar() != '\n');   
                choice = -1;                 
                continue;
            }
        } while (choice != 1 && choice != 2 && choice != 3 && choice != 0);

        switch (choice)
        {
        case 1:
            printf("Введите сторону основания a и высоту h: ");
            scanf("%lf%lf", &a, &h);        
            if (a <= 0 || h <= 0)
            {
                printf("Ошибка: a и h должны быть положительными.\n");
                break;
            }
            printf("Объём = %.4fм3\n", pyramidV(a, h));   // 
            break;

        case 2:
            printf("Введите сторону основания a и высоту h: ");
            scanf("%lf%lf", &a, &h);
            if (a <= 0 || h <= 0)
            {
                printf("Ошибка: a и h должны быть положительными.\n");
                break;
            }
            printf("Апофема = %.4fед \n", pyramidA(a, h));
            break;

	case 3:
            printf("Введите сторону основания a и высоту h: ");
            scanf("%lf%lf", &a, &h);
            if (a <= 0 || h <= 0)
            {
                printf("Ошибка: a и h должны быть положительными.\n");
                break;
            }
            printf("Площадь поверхности = %.4fм2 \n", pyramidSurface(a, h));
            break;

        case 0:
            printf("Работа завершена.\n");
            break;

        default:
            printf("Нет такого пункта.\n");
        }
    } while (choice != 0);

    return 0;
}