/* Martynas Sudintas KTU marsud */
/* Failas: marsud__testlib02a.c */

#include <stdio.h>
#include "marsud_testlib02.h"

double marsud_libvar02;

int marsud_libfunc02( const char *s ){
    printf( "Dynamic library for testing, %s\n", __FILE__ );
    printf( "\tparameter: \"%s\"\n", s );
    printf( "\tlib variable = %f\n", marsud_libvar01 );
    return 0;
}
