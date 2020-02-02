#include <stdio.h>

int     main()
{
    printf("%5d\n",44);
    printf("%.2d\n",44);
    printf("%05d\n",44);
    printf("%+05d\n",44);
    printf("%-05d\n",44);
    printf("%0-5d\n",44);
    printf("%0+5d\n",44);
    printf("%+-5d\n",44);
    printf("%-+5d\n",44);
    printf("%+-05d\n",44);
    printf("%-+05d\n",44);
    printf("%+-#5d\n",44);
    return 1;
}