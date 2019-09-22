int sheck_line(char *line, char check)
{
    int     i;
    
    i = 0;
    while (line[i]!='\0')
    {
        if (line[i] == check)
            return(0);
        i++;
    }
    return (1);
}
