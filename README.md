```markdown
# Практична 1
Виконав Бурмака Ігор.

## Код

```c
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Ukr");
    int t1, t2, t3;
    printf("Введiть три значення: ");
    scanf("%d %d %d", &t1, &t2, &t3);

    if (t1 >= 10000 || t2 >= 10000 || t3 >= 10000){
        printf("Error\n");
        return 0;
    }

    double total_time = 1.0 / ((1.0 / t1) + (1.0 / t2) + (1.0 / t3));
    printf("Час необхідний для з'їдання пирога: %.2f годин\n", total_time);

    return 0;
}
