/*
===============================================================================
 Name        : 04_Day04_24072022_004Pgm.c
 Date	     : 24-07-2022
 Author      : Vishnu_Kannanchery
 Version     :
 Description : Program for using % modulus operator

===============================================================================
*/

/* Includes ------------------------------------------------------------------*/
#include <stdio.h>
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

	char i=0;
        unsigned char num=0;

	for(i=0;i<40;i++)
	{
	    num=i%8;
	    //printf("%d\t",num);
	}

	/* Grace 0  1  2  3  4  5  6  7  0  1  2  3  4  5  6  7  0  1  2  3  4  5  6  7  0  1  2  3  4  5  6  7 
		 0  1  2  3  4  5  6  7  0  1  2  3  4  5  6  7  */

	for(i=0;i<40;i++)
	{
	    num=i&7;
	    printf("%d\t",num);
	}
	/* what will be output ? */
	/* Grace 0  1  2  3  4  5  6  7  0  1  2  3  4  5  6  7 

	0000 0001 &
	0000 0111
	---------
        0000 0001
	
	0000 0010 &
	0000 0111
	---------
        0000 0010

	0000 1001 &
	0000 0111
	---------
        0000 0001
	 
  */
	



return 0;
  /* USER CODE END  */

  /* End of Application entry point */
}






