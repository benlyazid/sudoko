
//**43**2*9 **5**9**1 *7**6**43 **6**2*87 19***74** *5**83*** 6*****1*5 **35*869* *4291*3**
#include <stdio.h>
#include <unistd.h>

void show_table(char **tab);
int set_num(char **tab);
int find_empty(char **tab, int *i,  int *j);

int main(int argc,char **argv)
{
    int i ,j;
   if (set_num(argv) == 1)
        show_table(argv);
    else
        printf("error");
    return 0;
}


