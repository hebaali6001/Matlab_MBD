/*
 * File: stdtypesUsage.c
 *
 * Code generated for Simulink model 'stdtypesUsage'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
 * C/C++ source code generated on : Sun Jan  1 19:16:54 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 *    3. RAM efficiency
 * Validation result: Not run
 */

#include "stdtypesUsage.h"
#include "stdtypesUsage_private.h"

/* External inputs (root inport signals with auto storage) */
ExtU_stdtypesUsage_T stdtypesUsage_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_stdtypesUsage_T stdtypesUsage_Y;

/* Real-time model */
RT_MODEL_stdtypesUsage_T stdtypesUsage_M_;
RT_MODEL_stdtypesUsage_T *const stdtypesUsage_M = &stdtypesUsage_M_;

/* Model step function */
void stdtypesUsage_step(void)
{
  /* Chart: '<Root>/Chart' incorporates:
   *  Inport: '<Root>/In1'
   */
  /*  check condithion */
  if (stdtypesUsage_U.In1 == ((boolean_T)std_false)) {
    /* Outport: '<Root>/Out1' */
    stdtypesUsage_Y.Out1 = 5.0;
  }

  /* End of Chart: '<Root>/Chart' */
}

/* Model initialize function */
void stdtypesUsage_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(stdtypesUsage_M, (NULL));

  /* external inputs */
  stdtypesUsage_U.In1 = 0.0;

  /* external outputs */
  stdtypesUsage_Y.Out1 = 0.0;

  /* SystemInitialize for Outport: '<Root>/Out1' incorporates:
   *  Chart: '<Root>/Chart'
   */
  stdtypesUsage_Y.Out1 = 0.0;
}

/* Model terminate function */
void stdtypesUsage_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
