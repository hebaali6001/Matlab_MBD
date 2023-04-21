/*
 * File: Session2_MBD_Factorial.c
 *
 * Code generated for Simulink model 'Session2_MBD_Factorial'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
 * C/C++ source code generated on : Mon Jan  9 12:34:02 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 *    3. RAM efficiency
 * Validation result: Not run
 */

#include "Session2_MBD_Factorial.h"
#include "Session2_MBD_Factorial_private.h"

/* External inputs (root inport signals with auto storage) */
ExtU_Session2_MBD_Factorial_T Session2_MBD_Factorial_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_Session2_MBD_Factorial_T Session2_MBD_Factorial_Y;

/* Real-time model */
RT_MODEL_Session2_MBD_Factori_T Session2_MBD_Factorial_M_;
RT_MODEL_Session2_MBD_Factori_T *const Session2_MBD_Factorial_M =
  &Session2_MBD_Factorial_M_;

/* Model step function */
void Session2_MBD_Factorial_step(void)
{
  int32_T s1_iter;
  boolean_T loopCond;

  /* Outputs for Iterator SubSystem: '<Root>/While Iterator Subsystem' incorporates:
   *  WhileIterator: '<S1>/While Iterator'
   */
  s1_iter = 1;

  /* Inport: '<Root>/In2' */
  loopCond = (Session2_MBD_Factorial_U.In2 != 0);
  while (loopCond && (s1_iter <= 5)) {
    /* Outport: '<Root>/Out1' incorporates:
     *  Product: '<S1>/Product'
     *  UnitDelay: '<S1>/Unit Delay'
     */
    Session2_MBD_Factorial_Y.Out1 *= s1_iter;

    /* RelationalOperator: '<S1>/Relational Operator' incorporates:
     *  Inport: '<Root>/In1'
     *  Inport: '<Root>/In2'
     */
    loopCond = (Session2_MBD_Factorial_U.In1 > Session2_MBD_Factorial_U.In2);
    s1_iter++;
  }

  /* End of Outputs for SubSystem: '<Root>/While Iterator Subsystem' */
}

/* Model initialize function */
void Session2_MBD_Factorial_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Session2_MBD_Factorial_M, (NULL));

  /* external inputs */
  (void)memset((void *)&Session2_MBD_Factorial_U, 0, sizeof
               (ExtU_Session2_MBD_Factorial_T));

  /* external outputs */
  Session2_MBD_Factorial_Y.Out1 = 0;
}

/* Model terminate function */
void Session2_MBD_Factorial_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
