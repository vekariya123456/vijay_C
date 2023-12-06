#include<stdio.h>

int main()
{
    FILE *fp;

    fp=fopen("abc.txt","w+");
    fprintf(fp,"wellcome to skill code,decode your skil...\n");
    fputs("you are learnin c..\n",fp);
    fputs("what is you name...\n",fp);
    fclose(fp);

    return 0;

}