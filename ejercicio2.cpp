// la variable 1 devuelve la posicion de la variable X, la 2 devuelve el valor de X, y la 3 devuelve la posicion de la variable Y
#include <stdio.h>
int main() {
	int x, *y; 							//se crean las 2 variables (la variable normal y el puntero)
	x=10; 								//declara el valor de X (10)
	y=&x; 								//la posicion de memoria de Y es igual a la de X
    printf("%d %d %d",y,*y,&y ); 		//imprime los valores
	return 0;
}

