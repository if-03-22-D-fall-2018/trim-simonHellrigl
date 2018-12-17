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

 void trim(const char* source, char* trimmed_string)
 {
   


 }

 static void get_start(const char* source, int *begin)
 {
   while (source[*begin] == ' ')
   {
     *begin = *begin+1;
   }

 }
 static void get_end(const char* source, int *end, int *begin)
 {
   while (*end>=*begin && source[*end]==' ')
   {
     *end = *end-1;
   }

 }
