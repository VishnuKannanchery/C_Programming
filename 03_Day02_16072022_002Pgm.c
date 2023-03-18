/*
===============================================================================
 Name        : 03_Day02_16072022_002Pgm
 Date	     : 16-07-2022
 Author      : Vishnu_Kannanchery
 Version     :
 Description : Program to demonstrate overflow, 
		Give input number as 32767 and check for short variables
		Give input number as 125 and check for char variables
		

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
	//short a,b;  //2 bytes  1 bit for sign and 15 bit for data

	char a,b; // 1 byte  1 bit for sign and 7 bit for data


	printf("Enter a number:");
	//scanf("%hd",&a); //Used for short variables
	scanf("%hd",&a);
	
	b=a+10;

	printf("%d+10=%d\n",a,b);


return 0;
  /* USER CODE END  */

  /* End of Application entry point */
}






