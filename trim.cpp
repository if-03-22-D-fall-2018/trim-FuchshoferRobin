/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: <your class>
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			trim.cpp
 * Author:			P. Bauer
 * Due Date:		March 14, 2015
 * ----------------------------------------------------------
 * Description:
 * Test functions for trim.h
 * ----------------------------------------------------------
 */
#include "trim.h"
#include <string.h>
#include "stdio.h"

void 	trim (const char *source, char *trimmed_string)
{
  if(strcmp(source,"") == 0)
  {
    strcpy(trimmed_string,"");
  }
  else
  {
    int minFree = 0;
    int maxFree = strlen(source)-1;
    int counter = 0;
    while(source[minFree] == ' ')
    {
      minFree+=1;
    }
    while (maxFree >= minFree && source[maxFree] == ' ') {
      maxFree-=1;
    }


    for (int i = minFree; i < maxFree+1; i++) {
      trimmed_string[counter] = source[i];
      counter+=1;
    }


  }




}
