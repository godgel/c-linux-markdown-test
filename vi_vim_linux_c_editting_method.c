#include <stdio.h>

int main(void)
{
	printf(" \n Hi, This is a Test C_Linux_Vi_Vim_MarkDown_Document. \n ");
	printf(" \n Give it a try,...!!! \n ");

	for(int i=0; i<5; i++)
	{
	
		printf(" \n For an iteration Num is: %d \n ", i);

		printf(" \n Finished For an iteration \n ");
	}


	return 0;
}

	// yy is yank(==jerk) which means drag and copy one line to the other,
	// yw is yank word which meanse cpoy one word to the next.
	// p means paste(== v) like ctrl+c , and ctrl+v in the Window System.
	// 
	// In the Command Mode, if you type yy, then current line coppied in the Buffer,
	// And if you type p, then it coppied to the next line.
	//
	// And if you type yw in the some word, then it coppied in the Buffer,
	// if you type p, then it coppied that word to the next.

		
		 /* Vi(==Vim) Editting Method.
		 * There are Two Mode, in the Vi, Vim. 
		 * 1. Command Mode.
		 * 2. Insert Mode.
		 * So, in the Command Mode, when you type O , 
		 * then you can insert code at the next line from current Line.
		 * And if you type A, you can append code at the next from current cursor.
		 * if you type I, then you can insert code right away, at the current cursor.
		 *
		 * In the Command Mode,
		 * And there are Four moving method instead of mouse.
		 *
		 * H --> Moving Left, L --> Moving Right
		 * J --> Moving Down, K --> Moving Up.
		 *
		 * After Editting, To save and exit, Press [ESC] Key to change Command Mode, 
		 * And Tpye Colon(:), And type q which meanse quit, w which meanse Save,
		 * And Type !(Acclamation Mark) which meanse Forcely, at the same time.
		 *
		 */

