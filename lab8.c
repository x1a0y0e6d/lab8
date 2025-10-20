#include <stdio.h>
#include <math.h>   
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "RUS");
    double a;    
    int n;      
    double sum = 0;   
    int i;      

    
    printf("¬ведите значение a: ");
    scanf("%lf", &a);

    printf("¬ведите значение n: ");
    scanf("%d", &n);

    
    if (a == 0) {
        printf("ќшибка: деление на ноль!\n");
        return 1;
    }

     
    for (i = 1; i <= n; i++) {
        sum += 1 / pow(a, 2 * i - (i == 1 ? 1 : 0));
        
    }

    
    sum = 0;
    for (i = 1; i <= n; i++) {
        sum += 1 / pow(a, 2 * i);  
    }

    
    printf("—умма р€да = %.6lf\n", sum);

    return 0;
}
