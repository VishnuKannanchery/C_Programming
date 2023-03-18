/*
===============================================================================
 Name        : 02_Day02_16072022_001Pgm.c
 Date	     : 16-07-2022
 Author      : Vishnu_Kannanchery
 Version     :
 Description : Program to demonstrate variables, string constants

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
	const int a=5; //read only memory
	char *string1="Transiot"; // read only memory 
	char string2[]="Embedded System Professional Course";
	const char string3[]="Learning Deep C is fun"; // This is also read only memory

	printf("a=%d\n",a);
	printf("string1=%s\n",string1); //Grace string1= Transiot
	printf("string2=%s\n",string2); //Grace string2= Embedded System Professional Course
	printf("string3=%s\n",string3); //Grace string3= Learning Deep C is fun
	/* Uncomment below two lines and it will throw the error during compilation time: assignment of read-only variable ‘a */
	//a=6; 
	//printf("Modified a=%d\n",a);

	/* Uncomment below two lines and it will throw segmentation fault during run time*/
	//string1[0]='F';
	//printf("Modified string1=%s\n",string1);

	string2[0]='F';
	printf("Modified string2=%s\n",string2); //Grace Modified string2= Fmbedded System Professional Course

	string2[7]='T';
	printf("Modified string2=%s\n",string2); //Grace Modified string2= FmbeddeT System Professional Course

	/* Uncomment below two lines and it will throw the error during compilation time: assignment of read-only string */
	//string3[0]='F';
	//printf("Modified string3=%s\n",string3);

return 0;
  /* USER CODE END  */

  /* End of Application entry point */
return  0;
}






