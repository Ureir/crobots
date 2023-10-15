

/*****************************************************************************/
/*                                                                           */
/*  CROBOTS                                                                  */
/*                                                                           */
/*  (C) Copyright Tom Poindexter, 1985, all rights reserved.                 */
/*                                                                           */
/*                                                                           */
/*****************************************************************************/

/* cpu.c - the routines to execute crobot instructions */

/* push - basic stack push mechanism */
/*         depends on cur_robot, set r_flag on overflow */

long push(long k);

/* pop - basic stack pop mechanism */
/*         depends on cur_robot, set r_flag on overflow */

long pop(void);


/* cycle - interpret one instruction for current robot */
/*         depends on cur_robot and cur_instr */

/* any errors (stack collision, missing functions, etc) cause the 'main' */
/* function to be restarted, with a clean stack; signal by r_flag = 1 */

void cycle(void);


/* robot_go - start the robot pointed to by r */

void robot_go(struct robot *r);
