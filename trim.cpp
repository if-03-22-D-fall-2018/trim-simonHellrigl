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

 #include <string.h>
 #include "trim.h"

 bool is_string_empty(int end);
 void trim(const char* source, char* trimmed_string)
 {
   int start=0;
   int end=strlen(source)-1;

   get_text_parts(source, &end, &start, 0);   //Zero means that he uses the first part
   get_text_parts(source, &end, &start, 1);   //One means that he uses the end  of the string

   if (is_string_empty(end))
   {
     strcpy(trimmed_string, "");
   }

   int counter = 0;

   for (int i = start; i < end+1; i++)
   {
    trimmed_string[counter]=source[i];
    counter++;
   }






 }

 bool is_string_empty(int end)
 {
   return (end <= 0);
 }

 static void get_text_parts(const char* source, int *end, int *begin, int operationType)
 {
   if (operationType == 0)
   {
     while (source[*begin] == ' ')
     {
       *begin = *begin+1;
     }
   }
   else
   {
     while (*end>=*begin && source[*end]==' ')
     {
       *end = *end-1;
     }
   }

 }
