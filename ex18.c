/* ************************************************************************ *
 *    As tres portas                                                        *
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

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define NTEST 1000000

int random1(int x);
int random2(int x, int z);

int main(void)
{
    int i;
    int c; /* variavel que define a porta correta */
    int e; /* variavel que define a porta escolhida pelo participante */
    int a; /* variavel que define a porta que o apresentador ira abrir */
    float V; /* quantidade de vitorias computadas */

    srand(time(NULL));

    for(i=0;i<=NTEST;i++)
    {
        c=0;
        e=0;
        a=0;

        e=random2(c,a);
        c=random2(c,a);
        a=random2(e,c);

        e=random1(a);

        if(e==c)
            V++;
    }

    printf("a porcentagem de vitorias eh de %g\n",V/(NTEST/100.0)); /* imprime a porcentagem de vitorias */

    return EXIT_SUCCESS;
}

int random1(int x)
{
    int r;

    do
    {
        r=1+(rand()%3);
    }
    while(r==x);

    return r;
}

int random2(int x, int z)
{
    int r;

    do
    {
        r=1+(rand()%3);
    }
    while(r==x || r==z);

    return r;
}
