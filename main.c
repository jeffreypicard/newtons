/*
 * main.c
 *
 * Main program to test newton's method implementation.
 *
 * Author: Jeffrey Picard
 */
#include <stdio.h>

#include "newtons.h"

int
main( void )
{
  const int ITERATIONS = 7;
  const double INITIAL_GUESS = -0.7;
  double root;

  root = newtons_method( INITIAL_GUESS, ITERATIONS );

  fprintf( stderr, "%.8f\n", root );
  
  return 0;
}
