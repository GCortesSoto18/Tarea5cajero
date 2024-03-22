#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int dineroretirado, dineroabonado, opcion , saldo;
	saldo=3000;
	
	do { 
		
		printf ("\n### Menu principal###\n");
		printf ("1 : retiro de dinero\n");
		printf ("2 : abono de dinero \n");
		printf ("3 : salir del menu \n");
		printf ("######################\n");
		scanf  ("%d" ,&opcion);
		
		switch (opcion) {
		case 1:
			printf (" saldo actual %d \n", saldo);
			printf (" cantidad que desea retirar\n");
			scanf ("%d" , &dineroretirado);
		    saldo = saldo - dineroretirado;
			printf (" su saldo actual es  %d\n ", saldo);
			
			break;
			
		case 2:
			
			printf (" saldo actual %d\n" , saldo);
			printf (" cantidad que desea abonar\n");
			scanf  ("%d" , &dineroabonado);
			saldo = saldo + dineroabonado;
			printf (" su saldo actual es %d\n " , saldo);
			
			break;
			
		case 3:
			
			printf (" saliste del menu  ");
			break;
		   default:
			printf (" esa opcion no es valida");
			
			
			
			
			
			
			
			
			
		};
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	} while(opcion !=3);
	
	return 0;
}

