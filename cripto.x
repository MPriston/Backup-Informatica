#include<stdio.h>
#include<string.h>

int main(void)
{
    int n;
    int i;
    int c;
    int d;
    int ascii;
    char cripto[100];
    char descrip[100];

    scanf("%d",&n);
    scanf("%d",&d);
    scanf("%s",cripto);

    c = strlen(cripto);
    for(i=0;i<c;i++)
    {
        ascii = cripto[i];
        ascii = ascii + n;
        descrip[i] = ascii;
        n+=d;
    }
    printf("%s\n",descrip);

    return 0;
}
