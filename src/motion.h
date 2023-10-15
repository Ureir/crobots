

/*****************************************************************************/
/*                                                                           */
/*  CROBOTS                                                                  */
/*                                                                           */
/*  (C) Copyright Tom Poindexter, 1985, all rights reserved.                 */
/*                                                                           */
/*                                                                           */
/*****************************************************************************/

/* motion.c - routines to update robot & missiles positions */


/* sin look up */

long lsin(int deg);

/* cos look up */

long lcos(int deg);

/* move_robots - update the postion of all robots */
/*               parm 'displ' controls call to field display */

void move_robots(int displ);

/* move_miss - updates all missile positions */
/*             parm 'displ' control display */

void move_miss(int displ);
