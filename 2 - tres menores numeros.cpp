#include <stdio.h>
#include <math.h>

int main ()

{int num1, num2, num3, num4, soma, maior;

printf ("\nPrograma que le os tres menores numeros e realiza a soma deles:");
printf ("\n===============================================================");
printf ("\nInforme o primeiro numero: ");
scanf ("%d", &num1);
printf ("\nInforme o segundo numero: ");
scanf ("%d", &num2);
printf ("\nInforme o terceiro numero: ");
scanf ("%d", &num3);
printf ("\nInforme o quarto numero: ");
scanf ("%d", &num4);
 
if ( num1>num2 && num1>num3 && num1>num4 ) 

maior=num1;

else if (num2>num3 && num2>num4)

maior=num2;

else if (num3>num4)

maior=num3;

else 

maior=num4;

soma=num1+num2+num3+num4-maior;

printf ("O resultado dos tres menores numeros eh: %d\n", soma);

 

}

