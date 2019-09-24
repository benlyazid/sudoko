#include <stdio.h>
#include <unistd.h>
int  find_empty(char **tab, int *i,  int *j)
{
    *i = 1;
    while (tab [*i])
   {
       *j = 0;  
        while (tab[*i][*j] != '\0')
        {
            if (tab[*i][*j] == '*')
                return 1;
        *j+=1;
        }
        *i+=1;

    }
    return (0);
}
