/*
 * newtons.c
 *
 * Implementation of single variable newtons method.
 *
 * In order to use this with different functions simply replace
 * f and f_prime as appropriate.
 *
 * The current setup is the first example using newton's method from
 * Timothy Sauer's Numerical Analysis section 1.4
 *
 * This could be made more flexible by allowing f and f_prime to be
 * passed in as function pointers, however then it would not benefit
 * from functions being inlined by the compiler.
 *
 * Author: Jeffrey Picard
 */
static double
f( double x )
{
  return x*x*x + x - 1;
}

static double
f_prime( double x )
{
  return 3*x*x + 1;
}

static double
next_guess_nm( double x_i  )
{
  return x_i - ( f(x_i) / f_prime(x_i) );
}

double
newtons_method( double guess, int num_iters )
{
  int i;
  double root = guess;

  for ( i = 0; i < num_iters; i++ )
    root = next_guess_nm( root );

  return root;
}
