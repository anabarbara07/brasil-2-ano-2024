#include<stdio.h>

main(){

    int w;

    do{

    float regua,x,y,z;

   printf("\nEntre com o valor: ");
   scanf("%f",&regua);

   x = regua/1000;
   y = (x*2)/(9.81);
   z = sqrt(y);

   printf("O tempo de reacao e: %f",z);

   printf("\n\nDeseja tentar de novo? 1 - sim 2 - nao\n\nResposta: ");
   scanf("%d",&w);

      }while(w==1);
}
