/* ************************************************************************ *
 *    Programa de teste para a Func43                                       *
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
#include <stdlib.h>
#include <time.h>

#define NPART 10

int func43(int eu, int jadv);

int main(void)
{
    int a;
    int b;
    int ap = 0;
    int bp = 0;
    int i;

    srand(time(NULL));

    for(i = 0; i < NPART; i++)
    {
        a = 1;/*rand() % 2;*/
        b = func43(b, a);

        printf("A opcao de A eh: %d\nA opcao de B eh: %d\n", a , b);

        if(a == 0 && b == 0)
        {
            ap += 1;
            bp += 1;
        }
        if(a == 0 && b == 1)
            ap += 5;
        if(a == 1 && b == 0)
            bp += 5;
        if(a == 1 && b == 1)
        {
            ap += 3;
            bp += 3;
        }
    }

    printf("A pontuacao de A eh: %d\nA pontuacao de B eh: %d\n", ap, bp);

    return EXIT_SUCCESS;
}

int func43(int eu, int jadv)
{
    static int ja;
    static int j;

    j ++;
    printf("jogada %d\n", j);

    if(j == 8)
    {
        ja = jadv;
        return 1;
    }
    if(jadv == 0)
    {
        ja = jadv;
        return 0;
    }
    if(jadv == 1)
    {
        if(ja == 1)
        {
            ja = jadv;
            return 0;
        }
        else
        {
            ja = jadv;
            return 1;
        }
    }

    ja = jadv;

    return 0;
}



