
#include <stdio.h>  // To Use Standard Input, OutPut Function, which was made library inadvance.
#include <stdlib.h> // To Use Standard Funcion Like srandom(), random()...
#include <time.h>   // To Use Standard Seed Number For random(), so import library like this...


int main()
{
	// Set the Seed_Number with a srandom() function, 
	// to use in random() function as a seed Number.
	
	srandom((unsigned int) time(NULL)); 
	// This returns Positive Integer Number From OS Time Information To Give random() as a seed.
       	
	// Making A Random Integer Numbers....
	
	long random_integer = random();

	printf("\n Current Random Integer Is : %ld \n ", random_integer);
	printf(" \n ------------------------ \n ");


	int int_lotto_num_1_65 = 1 + (random_integer % 65);
	// this saves the remainder number + 1,  of the result right side expression.
	// so it' will have the number from 1 to 65, as if lotto number is. 

	printf("\n Current, int_lotto_num_1_65 is : %d \n ", int_lotto_num_1_65 );

	printf(" \n ------------------------ \n ");



	// Below, Making a point_decimal float number so called dot_decimal, dot_point number
	// between 0 ~ 1,  like this,  0.0~~~00~~~0~~~01  ~ 0.99~~~99~~~~999~~~~
	 
	float random_float_num = (float) random_integer / (float)RAND_MAX;

	printf("Current Random_Integer : %ld \n ", random_integer );

	printf("Current Random_Float : %lf \n ", random_float_num);




	printf(" \n --------------------------------------- \n ");

/*
	printf(" \n Please Select Your Lotto Number 6 \n ");

	
	float your_num01, your_num02, your_num03, your_num04, your_num05, your_num06;



	printf(" \n Please Select Your Number 6 EA. \n");


	scanf("%2.0lf %2.0lf %2.0lf %2.0lf %2.0lf %2.0lf", &your_num01, &your_num02, &your_num03, &your_num04, &your_num05, &your_num06);


	printf("\n You Selected %2.0lf %2.0lf %2.0lf %2.0lf %2.0lf %2.0lf \n \n ", your_num01, your_num02, your_num03, your_num04, your_num05, your_num06 );

        printf(" \n Now, Computer Processing And Compare Your Number And Lotto Number...\n ");

*/


	

	return 0;
}


