/* ************************************************************************ *
 *    CALCULADOR DE MEDIA V1                                                *
 *    calcula a media entre duas notas e diz se voce foi                    *
 *    aprovado ou nao                                                       *
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

#define MPASSA  7.0  
#define MREPRO  3.0

int main(void)
{
    float n1,n2,m;

    printf("Por Favor,digite as duas notas:\n");
    scanf("%f",&n1);
    scanf("%f",&n2);

    m = (n1+n2)/2.0;

    if(m >= MPASSA)
        printf("Voce foi Aprovado\n");
    if(m <= MREPRO)
        printf("Voce foi Reprovado\n");
    if(m < MPASSA && m > MREPRO)
        printf("Voce precisara fazer a prova final\n");
    
    return 0;
}
