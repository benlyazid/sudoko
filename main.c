
//**43**2*9 **5**9**1 *7**6**43 **6**2*87 19***74** *5**83*** 6*****1*5 **35*869* *4291*3**
#include <stdio.h>
#include <unistd.h>

void show_table(char **tab);
void set_num(char **tab);

int main(int argc,char **argv)
{
    show_table(argv);
    set_num(argv);
    write(1,"\n",1);
    show_table(argv);
    return 0;
}


