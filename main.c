#include <stdio.h>
#include <locale.h>

int main()
{
    	
setlocale(LC_ALL, "Ukr");
   int t1, t2, t3, t;
   printf ("Введiть три значення");
   scanf ("%d", &t1,&t2,&t3);
   if (t1 >= 10000 || t2 >= 10000 || t3 >= 10000){
       printf ("Error");
       return 0;
   }
   t = (t1 + t2 + t3) / 3;
   printf ("Час необхідний для з'їдання пригода: %d\n",t);
    return 0;
}
