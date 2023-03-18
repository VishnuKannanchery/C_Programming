/*
===============================================================================
 Name        : 03_Day02_16072022_001Pgm
 Date	     : 16-07-2022
 Author      : Vishnu_Kannanchery
 Version     :
 Description : Program to demonstrate arithematic operators
       

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
	int fahr=20, celsius=0;

	celsius = 5*(fahr-32)/9; 
	/* Check the below code by commenting the above line and uncommenting the below line */
	//celsius = (fahr-32)*5/9;
	printf("%d\t%d\n", fahr,celsius);
	
	
	/* Pitfall */
	celsius = 5/9*(fahr-32);
	printf("%d\t%d\n", fahr,celsius);

	

/* Method to over come pitfall */
	celsius = 5.0/9*(fahr-32);
	printf("%d\t%d\n", fahr,celsius);


  /* USER CODE END  */

  /* End of Application entry point */
return  0;
}






