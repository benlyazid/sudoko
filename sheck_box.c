#include <stdio.h>
int sheck_box(char **tab, char check, int i, int j)
{
    int svi;
    int svj;

    if (i <= 3)
        i =1;
    else if (i <= 6)
        i =4;
    else if (i <= 9)
        i =7;
    if (j <= 2)
        j =0;
    else if (j <= 5)
        j =3;
    else if (j <= 8)
        j =6;
    svi = i + 3;
    svj = j + 3;
        while (svi > i)
        {
            j = svj - 3;
            while(svj > j)
            {
                if (tab[i][j] == check)
                    return (0);
                j++;
            }
            i++;
        }
    return 1;
} 