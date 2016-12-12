/* ************************************************************************ *
 *    Maquina de criptografia                                               *
 *                                                                          *
 *                                                                          *
 *    Copyright (C) 2016 by Matheus Priston Carruthers Figueira             *
 *                                                                          *
 *    This program is free software; you can redistribute it and/or modify  *
 *    it under the terms of the GNU General Public License as published by  *
 *    the Free Software Foundation; either version 2 of the License, or     *
 *    (at your option) any later version.                                   *
 *                                                                          *
 *    This program is distributed in the hope that it will be useful,       *
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *    GNU General Public License for more details.                          *
 *                                                                          *
 *    You should have received a copy of the GNU General Public License     *
 *    along with this program; if not, write to the                         *
 *    Free Software Foundation, Inc.,                                       *
 *    59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 *                                                                          *
 *    To contact the author, please write to:                               *
 *    Matheus Priston Carruthers Figueira <matheuspriston@hotmail.com>      *
 *    Webpage: http://www.upe.com.br                                        *
 *    Phone: +55 (81) 98522-6966                                            *
 * ************************************************************************ *
 * 
 */

#include <stdio.h>
#include <string.h>

#define NCAR1 50
#define NCAR2 200
#define CHAVES 100

struct cripto
{
    char crip[NCAR2];
    char descrip[NCAR2];
    int tam;
    int find;
};

struct chave
{
    char chave[NCAR1];
    int tamanho;
};

int main(void)
{
    struct cripto x[CHAVES]; /* Criptografias suportadas */
    struct chave y[CHAVES]; /* Palavras chave suportadas */
    int p; /* Numero de palavras chave */
    int n; /* Numero de criptografia inicial */
    int d; /* Numero de deslocamento da criptografia */
    int i; /* Variavel de controle */
    int c = 0; /* Variavel de contagem */ 
    int m; /* Numero de criptografia atual */
    int t; /* Variavel de controle */
    int k; /* Variavel de controle */
    int ascii; /* Variavel que armazena o numero correspondente a letra na tabela ASCII */

    scanf("%d", &p); /* Le o numero de palavras chave */

    for(i=0; i<p; i++) /* Le as palavras chave */
    {
        scanf("%s", y[i].chave);
        y[i].tamanho = strlen(y[i].chave);
    }
    
    do /* Le as palavras criptografadas */
    {
        scanf("%s", x[c].crip);
        x[c].tam = strlen(x[c].crip);
        c++;
    }
    while(strcmp(x[c-1].crip, "fim_dos_dados") != 0);
    c--;

    for(i=0; i<c; i++) /* faz a descriptografacao, comparacao e imprime o resultado */
    {
        x[i].find = 0;

        for(n=1; n<26; n++)
        {
            for(d=0; d<=20; d++)
            {
                m = n;

                for(t=0; t<x[i].tam; t++)
                {
                    ascii = x[i].crip[t];
                    ascii-=m;
                    x[i].descrip[t] = ascii;

                    m+=d;
                }

                for(k=0; k<p; k++)
                {
                    if(strncmp(x[i].descrip, y[k].chave, y[k].tamanho) == 0)
                    {
                        printf("%d %d %s\n", n, d, x[i].descrip);
                        x[i].find = 1;
                        break;
                    }
                }
                if(x[i].find == 1)
                    break;
            }

            if(x[i].find == 1)
                break;
        }
        
        if(x[i].find == 0)
            printf("codigo nao encontradoo\n"); 
    }

    return 0;
}
