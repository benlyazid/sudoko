#include <unistd.h>
#include <stdio.h>

int sheck_line(char *line, char check);

int sheck_vertical(char **tab, char check, int j);

int sheck_box(char **tab, char check, int i, int j);

void set_num(char **tab)
{
    int     i;
    char     check;
    int     j;
    char    set;

    i = 1;
    check = '1';
    j = 0;
    set = '0';
    while (tab [i])
    {
        j = 0;
        while (tab [i][j] != '\0')
        {
             check = '1';
            if(tab[i][j] == '*')
            {
                 while(check <= '9')
                 {
                   // printf("%i  %c\n",i, check);
                     if (sheck_line(tab[i], check) == 1  && sheck_vertical(tab, check, j) == 1 && sheck_box(tab, check, i, j) == 1)
                     {
                         tab[i][j] = check;
                         check = '1';
                         break;
                     }
                     check++;
                 }
            }
            j++;
        }
        i++;
    }
}