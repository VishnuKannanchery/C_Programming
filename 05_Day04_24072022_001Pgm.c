/*
===============================================================================
 Name        : 05_Day04_24072022_001Pgm.c
 Date	     : 24-07-2022
 Author      : Vishnu_Kannanchery
 Version     :
 Description : Program to demonstrate proper logical connectors using &&

===============================================================================
*/

/* Includes ------------------------------------------------------------------*/
#include <stdio.h>
#include <unistd.h>
/* Private includes ----------------------------------------------------------*/

/* Private typedef -----------------------------------------------------------*/

/* Private define ------------------------------------------------------------*/

/* Private macro -------------------------------------------------------------*/

/* Private variables ---------------------------------------------------------*/

/* Private function prototypes -----------------------------------------------*/

/* Private user code ---------------------------------------------------------*/

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{

  /* USER CODE BEGIN  */
	/* Variable declarations and intializations */
	int i=0,limit=20;
	char s[20],c;

	printf("Enter the string: ");
	for (i=0; i < limit-1 && (c=getchar()) != '\n' && c != EOF; ++i) 	 
	s[i] = c; 

	 s[i] = '\0';
	printf("Entered string is %s\n",s);


	/* Assume the loop to be like this 
	for (i=0; (c=getchar()) != '\n' &&  i < limit-1 && c != EOF; ++i) 
	 s[i] = c;

		OR 
	for (i=0; c != EOF && (c=getchar()) != '\n' &&  i < limit-1; ++i) 
	 s[i] = c;
	
	*/

	

return 0;
  /* USER CODE END  */

  /* End of Application entry point */
}






