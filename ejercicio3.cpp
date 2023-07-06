//devuelve los valores que se ingresan previamente, pero de forma vertical y horizontal//
#include <stdio.h>
void carga (int n, int Vector[]);
void imprimir (int n, int Vector[]);
 
int main()
{
			int n=5;															//indica un entero de valor de N 5
           	int V[n]; 															//crea un vector con la cantidad de N
			carga (n,V);														//mueve los valores a la funcion CARGA
	       	imprimir (n,V);														//mueve los valores a la funcion IMPRIMIR
           	printf("\n");														//hace un salto de linea
           	for (int i=0; i<n; i++){											//ciclo for
    	        printf("%5d",V[i]);												//se crea el valor del vector sub "i"
	       	}
	       	return 0;
}
void carga (int n, int Vector[]){												//indica la funcion de "carga"
           	 int i;																//crea la variable "i"
           	 for (i=0; i<n; i++){												//ciclo for
    	                   	printf("ingrese el valor de la posicion %d: ",i);	//imprime el texto 
    	                   	scanf("%d",&Vector[i]);								//se lee el valor ingresado
           	  }
}
void imprimir (int n, int Vector[]){											//indica la funcion de "imprimir"
           	 for (int i=0; i<n; i++){											//ciclo for
  	                     	 printf("\n %5d",Vector[i]);						//imprime valor del vector sub "i"
	       	}
           	 printf("\n");														//hace un salto de linea
}