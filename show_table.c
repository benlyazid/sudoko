#include <unistd.h>

void show_table (char **tab)
{
    int i;
    int j;

    i = 1;
    j = 0;
    while (*(tab + i))
    {
        write (1," ",1);
        while (tab[i][j] !='\0')
        {
            write (1,"|",1);
            write (1,&tab[i][j],1);
            j++;
        }
        write (1,"|",1);
        write (1,"\n",1);
        j = 0;
        i++;
    }

}
