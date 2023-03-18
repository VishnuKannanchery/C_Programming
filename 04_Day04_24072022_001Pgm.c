/*
===============================================================================
 Name        : 04_Day04_24072022_001Pgm.c
 Date	     : 24-07-2022
 Author      : Vishnu_Kannanchery
 Version     :
 Description : Program to demonstrate litte endian and big endian
       

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
	int a =0x12345678; // 4byte 
	char *ptr =(char*)&a;
	
	printf(" 0th address of a =%p\n",ptr);
	printf(" value in 0th address of a =%x\n",*ptr);
 	ptr++;
	printf(" 1st address of a =%p\n",ptr);
	printf(" value in 1st address of a =%x\n",*ptr);
	ptr++;	
	printf(" 2nd address of a =%p\n",ptr);
	printf(" value in 2nd address of a =%x\n",*ptr);
	ptr++;
	printf(" 3rd address of a =%p\n",ptr);
	printf(" value in 3rd address of a =%x\n",*ptr);
	

return 0;
  /* USER CODE END  */

  /* End of Application entry point */
}






