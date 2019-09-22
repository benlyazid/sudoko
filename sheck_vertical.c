int sheck_vertical(char **tab, char check, int j)
{
    int     i;

    i = 1;
    while (i <= 9)
    {
        if (tab[i][j] == check)
            return(0);
        i++;
    }
    return (1);
}
