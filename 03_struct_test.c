

#include <stdio.h>
#include <string.h>


// Over the Function Name, Shift+K then you can see Unix Manual...

typedef struct 
{
	char name[20];
	char phone[30];
	int age; 
} person_data_t;

int main()
{
	person_data_t person;

	strcpy(person.name, "Seok, Jo");
	strcpy(person.phone, "010-3333-4545");
	
	int temp_age = 0;
	printf(" \n ------------------- Type Your Age : \n ");
	scanf("%d", &temp_age);

	person.age = temp_age;
	
	printf(" \n -------- Tell Me On Him -------- \n" );
	printf(" \n person.name %s \n", person.name);
	printf(" \n person.phone %s \n", person.phone);
	printf("\n person.age %d \n \n ", person.age);

	printf(" \n ----------------------------------- \n");


	return 0;
}


