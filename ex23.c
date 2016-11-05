/* ************************************************************************ *
 *    LABIRINTO RECURSIVO                                                   *
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
#include<math.h>

#define MAX 10
#define IY 1
#define IX 1
#define GY 8
#define GX 1

char m[MAX][MAX+1]=
{
    {"##########"},
    {"#        #"},
    {"#  #     #"},
    {"#  # ### #"},
    {"#  # #   #"},
    {"#  ### # #"},
    {"#    # # #"},
    {"###### # #"},
    {"#      # #"},
    {"##########"},
};   

int tenta(int l, int c);
void imprime(void);

int main(void)
{
    tenta(IY,IX);
    return 0;
}

void imprime(void)
{
    int l, c;

    for(l=0;l<MAX;l++)
    {
        for(c=0;c<MAX;c++)
            printf("%c",m[l][c]);
        printf("\n");
    }
}

int tenta(int l, int c)
{
    int dy, dx, t;

    if(m[l][c]==' ')
    {
        m[l][c]='x';
        printf("\nTentando l=%d, c=%d\n",l,c);
        imprime();
        if(l==GY && c==GX)
        {
            printf("\nConsegui\n");
            imprime();
            return 1;
        }
        else
            for(dy=1;dy>=-1;dy--)
                for(dx=1;dx>=-1;dx--)
                    if(abs(dy)==abs(dx))
                        continue;
                    else
                    {
                        t=tenta(1+dy,1+dx);
                        if(t==1)
                            return 1;
                    }
        m[l][c]=' ';
    }
    return 0;
}
