// This File is a reproduced version of "The Developer who living in the country side of South Korea."
// I think he is a good programmer....
//


#include <stdio.h>

// This file is a test file of Call By Referance Swap Parameter Data Sending...
// Below swap() change two numbers, And return nothing, so it's void.


void swap(int * ptr_var_left, int * ptr_var_right)
{
	int temp_save_var = *ptr_var_left; 
	// ptr_var_left is point var, *ptr_var_left means the value of ptr_var_left (==Reverse Referance)
	
	*ptr_var_left = *ptr_var_right;

	*ptr_var_right = temp_save_var; 
	// temp_save_var itself have the value of the ptr_left_var, 'Cause it has * .....

	printf(" \n This prints ptr_var_left: %d, \t ptr_var_right: %d after swap( ) function \n ", *ptr_var_left, *ptr_var_right);

}

int main()
{	
	int left_num = 777;

	int right_num = 000;

	printf(" \n This prints Original left_num : %d, \t  right_num: %d \n ", left_num, right_num );

	
	printf(" \n ----------------------------------------------------------------- \n ");



	swap(&left_num, &right_num); 
	// This swap function throw memory address of each left_num, right_num variable, 
	// to the swap definition function(){...}
	//


	printf("\n Prints left_num is: %d, \t  right_num is  %d \n ", left_num, right_num);


	printf(" \n ----------------------------------------------------------------- \n ");

	return 0;

}



