/*----------------------------------------------------------
 *				HTBLA-Leonding / Klasse: <your class>
 * ---------------------------------------------------------
 * Exercise Number: 0
 * Title:			trim.h
 * Author:			P. Bauer
 * Due Date:		March 14, 2015
 * ----------------------------------------------------------
 * Description:
 * Interface for trim
 * ----------------------------------------------------------
 */
 #ifndef ___TRIM_H
 #define ___TRIM_H
 #define STRLEN 16
 void trim(const char* source, char* trimmed_string);
 static void get_start(const char* source, int *begin);
 static void get_end(const char* source, int *end, int *begin);

 #endif
