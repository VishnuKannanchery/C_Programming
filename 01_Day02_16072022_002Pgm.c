/*
===============================================================================
 Name        : 01_Day02_16072022_002Pgm.c
 Date	     : 16-07-2022
 Author      : Vishnu_Kannanchery
 Version     :
 Description : Demonstration of constants and format string specifiers.

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
	char a = 'A';    // This is the character representation of A
	char b = 65;     // This is the decimal representation of A
	char c = '\065'; // This is the octal representation of 5
	char d = '\x65'; // This is the hexadecimal representation of e
	char e = '\013'; // This is the octal representation of Vertical tab
	char f = '\011'; // This is the octal representation of Horizontal tab

	
	printf("value of a=%c\r\n",a);
	printf("value of a=%d\r\n",a);
	printf("value of a=%o\r\n",a);
	//printf("value of b=%c",b);
	printf("value of a=%x\r\n",a);
  /* USER CODE END  */

  /* End of Application entry point */
}






