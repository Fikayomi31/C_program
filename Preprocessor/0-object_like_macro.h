#ifndef OBJECT_LIKE_MACRO_H
#define OBJECT_LIKE_MACRO_H
#define SIZE 1024
#define BUFFER_SIZE 1000
#define NUMBERS 1,\
                2,\
                3,\
                4
/**
 * (X, y) define macro function called min
 * ? use to compare value of X and Y
 * < if X is less than Y return true otherwise false
 * : operator evaluate if it true to return value of X otherwise Y
*/
#define min(X, Y) ((X) < (Y) ? (X) : (Y))
#endif 