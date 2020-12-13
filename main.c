
#include<stdio.h>

int main()
{
	int cos[100];
	
	int n;
	
	printf( "Introduceti numarul de mere in cos: ");
	scanf("%d", &n); 
    printf("\nIntroduceti pe rand culorile pentru fiecare mar in cos (1 - Galben, 0 - Rosu)\n");
	for (int i = 0; i < n; i++)
	    scanf("%d", &cos[i]);
	

	int rosii = 0, galbene = 0, i = 0;

	for (i = 0; i < n; i++) 
		if (cos[i] == 0) 
			rosii++;
		
		else
		
			if (cos[i] == 1) 
				galbene++;
			
		
	

	printf("Mere rosii: %d\n" , rosii);
	printf("Mere Galbene %d: ", galbene);

}



