/* r is used to read only so since the file not exist it will be return null*/
/* w is used to write and read so if a file exist it will open it or it will create one and open it*/
/* a is used to append */
#include<stdio.h>
int main()
{
    FILE *ftpr;
    ftpr = fopen("filname.txt","r");     
    if (ftpr==NULL)
    {
        printf("Unalble to get the file");
    }
    else{
        printf("found");
    }
    fclose(ftpr);
    return 0;
}