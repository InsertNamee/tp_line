/*
 * E89 Pedagogical & Technical Lab
 * project:     test
 * created on:  2022-11-16 - 09:30 +0100
 * 1st author:  nolan.vollet - nolan.vollet
 * description: main of get_ratio
 */

#include <stdio.h>
float get_ratio(int a, int b,int x);


int main (void){

    float d = get_ratio(100,500,100);
    printf ("%f \n", d);
    d = get_ratio(100,500,1);
    printf ("%f \n", d);
    d = get_ratio(100,500,40);
    printf ("%f \n", d);
    d = get_ratio(100,500,500);

    printf ("%f \n", d);
}
