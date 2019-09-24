#include <unistd.h>
#include <stdio.h>

int sheck_line(char *line, char check);

int sheck_vertical(char **tab, char check, int j);

int sheck_box(char **tab, char check, int i, int j);
int find_empty(char **tab,int *i,int *j);

int set_num(char **tab)
{
    int     i;
    int     j;
    char    check;

    check = '1';
    if (find_empty(tab,&i,&j) == 0)
        return (1);
    while (check <= '9')
    {
        if (sheck_line(tab[i], check) == 1  && sheck_vertical(tab, check, j) == 1 && sheck_box(tab, check, i, j) == 1)
        {
            tab[i][j] = check;
            if (set_num(tab) == 1)
                return (1);
            tab[i][j] = '*';
        }
        check++;
    }
    return (0);
}