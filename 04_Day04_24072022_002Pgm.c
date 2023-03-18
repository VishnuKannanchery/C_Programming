/*
===============================================================================
 Name        : 04_Day04_24072022_002Pgm.c.c
 Date	     : 24-07-2022
 Author      : Vishnu_Kannanchery
 Version     :
 Description : Program to demonstrate logical operators
       

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
	char a=5,b=6,c=8,d=7,x=0,y=2,z=3;
	char p=0,q=0,r=0;

	p= (a=7) && (b=8);
	q= (x=2) && (y=0);
	r= (z=0) && (c=4);

	printf("a=%d,b=%d,c=%d,d=%d,x=%d,y=%d,z=%d,p=%d,q=%d,r=%d\n",a,b,c,d,x,y,z,p,q,r);


	/* Grace :- a=
	   Robin :- a=7,b=8,c=4,d=7,x=2,y=0,z=0,p=1,q=0,r=0	  
	   Vibin :- a=5,b=6,c=8,d=7,x=0,y=2,z=3,p=6,q=2,r=0
	   Orvin :- a=5,b=6,c=8,d=7,x=0,y=2,z=3,p=1,q=0,r=0
           Transiot :- a=7,b=8,c=8,d=7,x=2,y=0,z=0,p=1,q=0,r=0 

	*/
	

return 0;
  /* USER CODE END  */

  /* End of Application entry point */
}






