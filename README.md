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
    int t1, t2, t3, t;
    printf ("Введiть три значення: ");
    scanf ("%d %d %d", &t1, &t2, &t3);
    if (t1 >= 10000 || t2 >= 10000 || t3 >= 10000){
        printf ("Error\n");
        return 0;
    }
    double avg = ((t1 + t2 + t3)/3)/3;
    printf ("Час необхідний для з'їдання пригода: %.2f\n", avg );
    return 0;
}

