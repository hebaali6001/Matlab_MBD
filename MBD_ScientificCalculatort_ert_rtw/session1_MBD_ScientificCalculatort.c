/*
 * File: session1_MBD_ScientificCalculatort.c
 *
 * Code generated for Simulink model 'session1_MBD_ScientificCalculatort'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
 * C/C++ source code generated on : Mon Jan  9 10:56:34 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 *    3. RAM efficiency
 * Validation result: Not run
 */

#include "session1_MBD_ScientificCalculatort.h"
#include "session1_MBD_ScientificCalculatort_private.h"

/* External inputs (root inport signals with auto storage) */
ExtU_session1_MBD_ScientificC_T session1_MBD_ScientificCalcul_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_session1_MBD_ScientificC_T session1_MBD_ScientificCalcul_Y;

/* Real-time model */
RT_MODEL_session1_MBD_Scienti_T session1_MBD_ScientificCalcu_M_;
RT_MODEL_session1_MBD_Scienti_T *const session1_MBD_ScientificCalcu_M =
  &session1_MBD_ScientificCalcu_M_;

/* Model step function */
void session1_MBD_ScientificCalculatort_step(void)
{
  /* Outport: '<Root>/Out SUM' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Logic: '<Root>/Logical Operator'
   */
  session1_MBD_ScientificCalcul_Y.OutSUM = (session1_MBD_ScientificCalcul_U.In1 &&
    session1_MBD_ScientificCalcul_U.In2);

  /* Outport: '<Root>/Out SUB' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Logic: '<Root>/Logical Operator2'
   */
  session1_MBD_ScientificCalcul_Y.OutSUB = (session1_MBD_ScientificCalcul_U.In1 ||
    session1_MBD_ScientificCalcul_U.In2);

  /* Outport: '<Root>/Out MUL' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   *  Logic: '<Root>/Logical Operator3'
   */
  session1_MBD_ScientificCalcul_Y.OutMUL = session1_MBD_ScientificCalcul_U.In1 ^
    session1_MBD_ScientificCalcul_U.In2;

  /* Outport: '<Root>/Out DIV ' incorporates:
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   */
  session1_MBD_ScientificCalcul_Y.OutDIV = (session1_MBD_ScientificCalcul_U.In1 ==
    session1_MBD_ScientificCalcul_U.In2);
}

/* Model initialize function */
void session1_MBD_ScientificCalculatort_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(session1_MBD_ScientificCalcu_M, (NULL));

  /* external inputs */
  (void)memset((void *)&session1_MBD_ScientificCalcul_U, 0, sizeof
               (ExtU_session1_MBD_ScientificC_T));

  /* external outputs */
  (void) memset((void *)&session1_MBD_ScientificCalcul_Y, 0,
                sizeof(ExtY_session1_MBD_ScientificC_T));
}

/* Model terminate function */
void session1_MBD_ScientificCalculatort_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
