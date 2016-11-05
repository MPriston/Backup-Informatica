/* ************************************************************************ *
 *    CALCULADOR DE MEDIA V2                                                *
 *    calcula a media para dizer se voce foi aprovado ou nao e pergunta     *
 *    a nota final se necessario                                            *
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

#define MPASSA 7.0
#define MREPRO 3.0
#define MFINAL 5.0

int main(void)
{
    float n1,n2,n3,m,mf;

    printf("Por favor, digite as duas notas:\n");
    scanf("%f",&n1);
    scanf("%f",&n2);
    m = (n1+n2)/2.0;

    if(m > MREPRO && m < MPASSA)
       {
        printf("Por favor, digite a nota final:\n");
        scanf("%f",&n3);
        mf = (m+n3)/2.0;

        if(mf >= MFINAL)
            printf("Voce foi Aprovado\n");
        else
            printf("Voce foi Reprovado\n");
       }
    else
        if(m >= MPASSA)
            printf("Voce foi Aprovado\n");
        if(m <= MREPRO)
            printf("Voce foi Reprovado\n");
    return 0;
}
