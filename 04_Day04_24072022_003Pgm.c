/*
===============================================================================
 Name        : 04_Day04_24072022_003Pgm.c
 Date	     : 24-07-2022
 Author      : Vishnu_Kannanchery
 Version     :
 Description : Program to check whether given a year is leap year or not
		 Try years 1996, 1998, 2000, 2100, 2200, 2400 and check


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

	int year;
	printf("Enter the year to check for leap year");
	scanf("%d",&year);

	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) 
		printf("%d is a leap year\n", year); 
	else 
		printf("%d is not a leap year\n", year);



return 0;
  /* USER CODE END  */

  /* End of Application entry point */
}






