/* ************************************************************************ *
 *    PROGRAMA DO ENIGMA                                                    *
 *    programa para descobrir o numero do enigma proposto                   *
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

#define NMAX 1000 // coloquei aqui o valor de 1000 apenas para testes, pois visto que com o valor de 1000000 o programa estava tomando demasiado tempo para rodar.// 

int main(void)
{
    int n[NMAX],
        indice;
    int x;
    int y;

    for(x=1;x < NMAX;x++)
    {
        for(indice=0;indice < NMAX;indice++)
        {
            while(y != 1)
            {
                y = x;   
                n[indice] = y;
            
                if(y%2==0)
                    y = y/2;
                else
                    y = 3*y+1;
            }
            break;
        }
    }
   
    printf("%d\n",x);
    
    return 0;
}
