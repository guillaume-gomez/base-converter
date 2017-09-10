#include <stdio.h>
#include <stdlib.h>

int main()
{
	long nombre=0;
	long diviseur=0;
	long tableau[100];
	long tableauH[100];
	long reste=0;
   long i=0;
   long compteur=0;
   long menu=0;


   printf("Choississez en quelle base vous voulez convertir votre nombre\n");
   printf("2 base de 2\n8 base de 8\n16 base de 16\n4 base de 4\n5 base de votre choix\n");
   printf("choix:");
   scanf("%ld",&menu);

   switch(menu)
   {
       case 2:

   diviseur=2;
   printf("entrer un nombre\n");
	scanf("%ld",&nombre);

while(nombre>0)
	{
        tableau[i]=nombre%diviseur;
	    nombre=nombre/diviseur;
	    i++;
	    compteur++;
	    }
printf("le nombre binaire est :");
while(i>=compteur || i>0)
{
    printf("%d",tableau[i-1]);
    i--;

}
printf("\n");
break;
case 8:
diviseur=8;
printf("entrer un nombre\n");
	scanf("%ld",&nombre);

while(nombre>0)
	{
        tableau[i]=nombre%diviseur;
	    nombre=nombre/diviseur;
	    i++;
	    compteur++;
	    }
printf("le nombre octale est :");
while(i>=compteur || i>0)
{
    printf("%d",tableau[i-1]);
    i--;

}
printf("\n");
   break;
   case 16:
    diviseur=16;
   printf("entrer un nombre\n");
	scanf("%ld",&nombre);

while(nombre>0)
	{
        tableau[i]=nombre%diviseur;
        nombre=nombre/diviseur;

	    i++;
	    compteur++;
}
printf("le nombre hexadecimal est :");
while(i>=compteur || i>0)
{
if(tableau[i-1]<=10)
{
 printf("%ld",tableau[i-1]);
}
else
{
    switch(tableau[i-1])
        {
            case 10:tableau[i-1]='A';
            break;
            case 11:tableau[i-1]='B';
            break;
            case 12:tableau[i-1]='C';
            break;
            case 13:tableau[i-1]='D';
            break;
            case 14:tableau[i-1]='E';
            break;
            case 15:tableau[i-1]='F';
            break;
        }
 printf("%c",tableau[i-1]);
}
i--;
}
printf("\n");
break;
case 4:
diviseur=4;
printf("entrer un nombre\n");
	scanf("%ld",&nombre);

while(nombre>0)
	{
        tableau[i]=nombre%diviseur;
	    nombre=nombre/diviseur;
	    i++;
	    compteur++;
	    }
printf("le nombre en base de 4 est :");
while(i>=compteur || i>0)
{
    printf("%d",tableau[i-1]);
    i--;

}
printf("\n");
break;
case 5:

printf("entrer la base sous lequel le nombre sera convertie:");
do
{
scanf("%ld",&diviseur);
}while(diviseur>10);
printf("\n");
printf("entrer un nombre(en base de 10) :");
	scanf("%ld",&nombre);

while(nombre>0)
	{
        tableau[i]=nombre%diviseur;
	    nombre=nombre/diviseur;
	    i++;
	    compteur++;
	    }
printf("le nombre convertie en base de %ld est :",diviseur);
while(i>=compteur || i>0)
{
    printf("%d",tableau[i-1]);
    i--;

}
printf("\n");
break;
}
	system("PAUSE");
	return 0;
}
