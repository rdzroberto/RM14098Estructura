#include <stdio.h>
#include <stdlib.h>
//Rodriguez Martinez, Roberto Jose-RM14098

int main() {
 int a,b,e,g,c,d,h,i,j,k, num, cont=0, suma=0;
int primero [10][10],segundo[10][10], multiplicar[10][10];

   printf("ingrese el numero de filas y columnas de la primera matriz\n");
   scanf("%d%d", &a,&b);
   printf("ingrese los elementos de la primera matriz \n");

   for ( c=0; c<a; c++)
   for ( d=0; d<b; d++)
   scanf("%d",&primero[c][d]);
   
     printf("ingrese el numero de filas y columnas de la segunda matriz\n");
     scanf("%d%d",&e,&g);


        if(b !=e) 
          printf("las matrices no se pueden multiplicar por no tener el mismo parametro\n");
           else{
       printf ("ingrese los elementos de la segunda matriz \n");

            for(c=0;c<e; c++)
            for(d=0; d<g; d++)
            scanf("%d",&segundo[c][d]);

               for(c=0; c<a; c++)
                 {
               for(d=0;d<g; d++)
                 {
               for( h=0; h<e; h++)
                 {
                suma=suma + primero[c][h]*segundo[h][d];
             }
           
          multiplicar[c][d]=suma;
          suma=0;
         }
        }

    printf ("resultados\n");
      for(c=0; c<a; c++)
      {
      for (d=0; d<g; d++)
        printf("%d\t", multiplicar[c][d]);

      printf("\n");
        
}

for(i=0; i<a; i++){
	for(j=0; j<a; j++){
		num=multiplicar [i][j];
		
		for(k=1; k<=num; k++){
			
			if((num%2)==0){
			
			cont=cont+1;
			
		}
				

            
			
		}
		
		if(cont<=2){
			
			printf("Es primo\n");
			
		}else{
			printf ("No Es Primo\n");
		}
		
		cont=0;
		k=0;
		num=0;
	}
	
	
}


}
 return 0;
 }  
