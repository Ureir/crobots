

/*****************************************************************************/
/*                                                                           */
/*  CROBOTS                                                                  */
/*                                                                           */
/*  (C) Copyright Tom Poindexter, 1985, all rights reserved.                 */
/*                                                                           */
/*                                                                           */
/*****************************************************************************/

/* screen.h - low level screen display routines */

void init_disp(void);
void end_disp(void);
void plot_robot(int n);
void plot_miss(int r, int n);
void plot_exp(int r, int n);
void robot_stat(int n);
void show_cycle(long l);
