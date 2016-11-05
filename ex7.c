/* ************************************************************************ *
 *    CALCULADOR DE PIZZA                                                   *
 *    calcula o preço por centimetro quadrado da pizza e informa qual eh    *
 *    a melhor para se comprar no momento.                                  *
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

#define PI 3.14

int main(void)
{
    float p1,p2,p3,r1,r2,r3,pa1,pa2,pa3;

    printf("Insira o raio da pizza menor:\n");
    scanf("%f",&r1);
    printf("Insira o preco da pizza menor:\n");
    scanf("%f",&p1);
    printf("Insira o raio da pizza media:\n");
    scanf("%f",&r2);
    printf("Insira o preco da pizza media:\n");
    scanf("%f",&p2);
    printf("Insira o raio da pizza grande:\n");
    scanf("%f",&r3);
    printf("Insira o preco da pizza grande:\n");
    scanf("%f",&p3);

    pa1 = p1/((r1*r1)*PI);
    pa2 = p2/((r2*r2)*PI);
    pa3 = p3/((r3*r3)*PI);

    if(pa1 < pa2 && pa1 < pa3)
        printf("A pizza menor tem o melhor custo beneficio\n");
    if(pa2 < pa1 && pa2 < pa3)
        printf("A pizza media tem o melhor custo beneficio\n");
    if(pa3 < pa1 && pa3 < pa2)
        printf("A pizza grande tem o melhor custo beneficio\n");
    
    return 0;
}
