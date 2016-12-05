/* ************************************************************************ *
 *    Uns                                                                   *
 *    Programa que dado um numero descobre o seu menor multiplo que contem  *
 *    apenas o numero 1.                                                    *
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
#include <math.h>

#define NCAR 50  /* numero maximo de digitos dos numeros */

int main(void)
{
    int x; /* variavel que armazena o valor do numero testado */
    int a; /* variavel auxiliar */
    int n = 1; /* variavel que armazena o numero de digitos do numero atual */
    int z[NCAR+1]; /* vetor que armazena os digitos do numero testado */
    int y;        /*                       */
    int i = 0;    /* Variaveis de controle */ 
    int h;        /*                       */ 

    scanf("%d", &x);
    
    a = x;
    
    while(i != n) /* checa se so existem numeros 1 na variavel x atual */
    {        
        i = 0;
        n = ceil(log10(x+1)); /* calcula o numero de digitos da variavel x */
        y = x;

        for(h=0; h<n; h++) /* separa os digitos de x em um vetor z */
        {
            if(h==(n-1))
            {
                z[h] = y;
                break;
            }
            else
            {
                z[h] = y%10;
                y = y/10;
            }
        }

        for(h=0; h<n; h++) /* checa se existem numeros 1 no inteiro e incrementa i se houver */
        {
            if(z[h]== 1)
                i++;
        }

        x+=a;
    }
    
    printf("%d\n", n); /* imprime o numero de digitos 1 existentes no numero achado */

    return 0;
}
