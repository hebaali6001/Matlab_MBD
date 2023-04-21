/*
 * File: session2_MBD_SubsystemCalcuator.c
 *
 * Code generated for Simulink model 'session2_MBD_SubsystemCalcuator'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
 * C/C++ source code generated on : Mon Jan  9 11:06:15 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 *    3. RAM efficiency
 * Validation result: Not run
 */

#include "session2_MBD_SubsystemCalcuator.h"
#include "session2_MBD_SubsystemCalcuator_private.h"

/* External inputs (root inport signals with auto storage) */
ExtU_session2_MBD_SubsystemCa_T session2_MBD_SubsystemCalcuat_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_session2_MBD_SubsystemCa_T session2_MBD_SubsystemCalcuat_Y;

/* Real-time model */
RT_MODEL_session2_MBD_Subsyst_T session2_MBD_SubsystemCalcua_M_;
RT_MODEL_session2_MBD_Subsyst_T *const session2_MBD_SubsystemCalcua_M =
  &session2_MBD_SubsystemCalcua_M_;

/* Output and update for atomic system: '<Root>/Subsystem1' */
void session2_MBD_Subsyst_Subsystem1(real_T rtu_In2, real_T rtu_In3, real_T
  *rty_Out1, real_T *rty_Out2, real_T *rty_Out3, real_T *rty_Out4)
{
  /* Sum: '<S1>/Add' */
  *rty_Out1 = rtu_In2 + rtu_In3;

  /* Product: '<S1>/Divide' */
  *rty_Out4 = rtu_In2 / rtu_In3;

  /* Product: '<S1>/Product' */
  *rty_Out3 = rtu_In2 * rtu_In3;

  /* Sum: '<S1>/Subtract' */
  *rty_Out2 = rtu_In2 - rtu_In3;
}

/* Model step function */
void session2_MBD_SubsystemCalcuator_step(void)
{
  /* Outputs for Atomic SubSystem: '<Root>/Subsystem1' */

  /* Inport: '<Root>/In1' incorporates:
   *  Inport: '<Root>/In2'
   *  Outport: '<Root>/Out DIV '
   *  Outport: '<Root>/out MUL '
   *  Outport: '<Root>/out SUB '
   *  Outport: '<Root>/out SUM'
   */
  session2_MBD_Subsyst_Subsystem1(session2_MBD_SubsystemCalcuat_U.In1,
    session2_MBD_SubsystemCalcuat_U.In2, &session2_MBD_SubsystemCalcuat_Y.outSUM,
    &session2_MBD_SubsystemCalcuat_Y.outSUB,
    &session2_MBD_SubsystemCalcuat_Y.outMUL,
    &session2_MBD_SubsystemCalcuat_Y.OutDIV);

  /* End of Outputs for SubSystem: '<Root>/Subsystem1' */
}

/* Model initialize function */
void session2_MBD_SubsystemCalcuator_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(session2_MBD_SubsystemCalcua_M, (NULL));

  /* external inputs */
  (void)memset((void *)&session2_MBD_SubsystemCalcuat_U, 0, sizeof
               (ExtU_session2_MBD_SubsystemCa_T));

  /* external outputs */
  (void) memset((void *)&session2_MBD_SubsystemCalcuat_Y, 0,
                sizeof(ExtY_session2_MBD_SubsystemCa_T));
}

/* Model terminate function */
void session2_MBD_SubsystemCalcuator_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
