/*
 * File: session1_MBD_Calculator_.c
 *
 * Code generated for Simulink model 'session1_MBD_Calculator_'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
 * C/C++ source code generated on : Mon Jan  9 10:59:28 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 *    3. RAM efficiency
 * Validation result: Not run
 */

#include "session1_MBD_Calculator_.h"
#include "session1_MBD_Calculator__private.h"

/* External inputs (root inport signals with auto storage) */
ExtU_session1_MBD_Calculator__T session1_MBD_Calculator__U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_session1_MBD_Calculator__T session1_MBD_Calculator__Y;

/* Real-time model */
RT_MODEL_session1_MBD_Calcula_T session1_MBD_Calculator__M_;
RT_MODEL_session1_MBD_Calcula_T *const session1_MBD_Calculator__M =
  &session1_MBD_Calculator__M_;

/* Model step function */
void session1_MBD_Calculator__step(void)
{
  /* Outport: '<Root>/Out SUM' incorporates:
   *  Inport: '<Root>/In2'
   *  Inport: '<Root>/In3'
   *  Sum: '<Root>/Add'
   */
  session1_MBD_Calculator__Y.OutSUM = session1_MBD_Calculator__U.In2 +
    session1_MBD_Calculator__U.In3;

  /* Outport: '<Root>/Out SUB' incorporates:
   *  Inport: '<Root>/In2'
   *  Inport: '<Root>/In3'
   *  Sum: '<Root>/Subtract'
   */
  session1_MBD_Calculator__Y.OutSUB = session1_MBD_Calculator__U.In2 -
    session1_MBD_Calculator__U.In3;

  /* Outport: '<Root>/Out MUL' incorporates:
   *  Inport: '<Root>/In2'
   *  Inport: '<Root>/In3'
   *  Product: '<Root>/Product'
   */
  session1_MBD_Calculator__Y.OutMUL = session1_MBD_Calculator__U.In2 *
    session1_MBD_Calculator__U.In3;

  /* Outport: '<Root>/Out DIV ' incorporates:
   *  Inport: '<Root>/In2'
   *  Inport: '<Root>/In3'
   *  Product: '<Root>/Divide'
   */
  session1_MBD_Calculator__Y.OutDIV = session1_MBD_Calculator__U.In2 /
    session1_MBD_Calculator__U.In3;
}

/* Model initialize function */
void session1_MBD_Calculator__initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(session1_MBD_Calculator__M, (NULL));

  /* external inputs */
  (void)memset((void *)&session1_MBD_Calculator__U, 0, sizeof
               (ExtU_session1_MBD_Calculator__T));

  /* external outputs */
  (void) memset((void *)&session1_MBD_Calculator__Y, 0,
                sizeof(ExtY_session1_MBD_Calculator__T));
}

/* Model terminate function */
void session1_MBD_Calculator__terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
