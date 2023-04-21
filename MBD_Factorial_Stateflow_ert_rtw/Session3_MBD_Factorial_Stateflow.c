/*
 * File: Session3_MBD_Factorial_Stateflow.c
 *
 * Code generated for Simulink model 'Session3_MBD_Factorial_Stateflow'.
 *
 * Model version                  : 1.0
 * Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
 * C/C++ source code generated on : Mon Jan  9 13:23:01 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 *    3. RAM efficiency
 * Validation result: Not run
 */

#include "Session3_MBD_Factorial_Stateflow.h"
#include "Session3_MBD_Factorial_Stateflow_private.h"

/* External inputs (root inport signals with auto storage) */
ExtU_Session3_MBD_Factorial_S_T Session3_MBD_Factorial_Statef_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_Session3_MBD_Factorial_S_T Session3_MBD_Factorial_Statef_Y;

/* Real-time model */
RT_MODEL_Session3_MBD_Factori_T Session3_MBD_Factorial_State_M_;
RT_MODEL_Session3_MBD_Factori_T *const Session3_MBD_Factorial_State_M =
  &Session3_MBD_Factorial_State_M_;

/* Model step function */
void Session3_MBD_Factorial_Stateflow_step(void)
{
  real_T i;

  /* Chart: '<Root>/Chart' incorporates:
   *  Inport: '<Root>/In1'
   */
  /*  Factorial  */
  for (i = Session3_MBD_Factorial_Statef_U.In1; i > 1.0; i--) {
    /* Outport: '<Root>/Out1' */
    Session3_MBD_Factorial_Statef_Y.Out1 *= i;
  }

  /* End of Chart: '<Root>/Chart' */
}

/* Model initialize function */
void Session3_MBD_Factorial_Stateflow_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Session3_MBD_Factorial_State_M, (NULL));

  /* external inputs */
  Session3_MBD_Factorial_Statef_U.In1 = 0.0;

  /* external outputs */
  Session3_MBD_Factorial_Statef_Y.Out1 = 0.0;

  /* SystemInitialize for Outport: '<Root>/Out1' incorporates:
   *  Chart: '<Root>/Chart'
   */
  Session3_MBD_Factorial_Statef_Y.Out1 = 0.0;
}

/* Model terminate function */
void Session3_MBD_Factorial_Stateflow_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
