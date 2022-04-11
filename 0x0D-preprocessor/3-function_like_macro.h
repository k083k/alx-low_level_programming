#ifndef FUNCTION_LIKE_MACRO_H
#define FUNCTION_LIKE_MACRO_H
/**
 * ABS - function macro
 * @X: Argument to be passed
 *
 * Desc: Header file that defines a funtion-like macro ABS(X)
 *		that computes the absolute value of the number x.
 */

#define ABS(X) ((X) < 0 ? (X) * (-1) : (X))

#endif
