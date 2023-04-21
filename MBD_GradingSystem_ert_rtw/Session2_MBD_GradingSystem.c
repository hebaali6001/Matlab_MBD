/*
 * File: Session2_MBD_GradingSystem.c
 *
 * Code generated for Simulink model 'Session2_MBD_GradingSystem'.
 *
 * Model version                  : 1.0
 * Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
 * C/C++ source code generated on : Mon Jan  9 12:01:24 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 *    3. RAM efficiency
 * Validation result: Not run
 */

#include "Session2_MBD_GradingSystem.h"
#include "Session2_MBD_GradingSystem_private.h"

/* External inputs (root inport signals with auto storage) */
ExtU_Session2_MBD_GradingSyst_T Session2_MBD_GradingSystem_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_Session2_MBD_GradingSyst_T Session2_MBD_GradingSystem_Y;

/* Real-time model */
RT_MODEL_Session2_MBD_Grading_T Session2_MBD_GradingSystem_M_;
RT_MODEL_Session2_MBD_Grading_T *const Session2_MBD_GradingSystem_M =
  &Session2_MBD_GradingSystem_M_;

/* Model step function */
void Session2_MBD_GradingSystem_step(void)
{
  /* If: '<Root>/If' incorporates:
   *  Inport: '<Root>/In1'
   */
  if (Session2_MBD_GradingSystem_U.In1 >= 100.0) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem' incorporates:
     *  ActionPort: '<S1>/Action Port'
     */
    /* Outport: '<Root>/Out1' incorporates:
     *  SignalConversion: '<S1>/OutportBufferForOut1'
     */
    Session2_MBD_GradingSystem_Y.Out1 =
      Session2_MBD_GradingSyst_ConstB.Constant_g;

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem' */
  } else if (Session2_MBD_GradingSystem_U.In1 >= 70.0) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem1' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    /* Outport: '<Root>/Out2' incorporates:
     *  SignalConversion: '<S2>/OutportBufferForOut1'
     */
    Session2_MBD_GradingSystem_Y.Out2 =
      Session2_MBD_GradingSyst_ConstB.Constant_b;

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem1' */
  } else if (Session2_MBD_GradingSystem_U.In1 >= 50.0) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem2' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    /* Outport: '<Root>/Out3' incorporates:
     *  SignalConversion: '<S3>/OutportBufferForOut1'
     */
    Session2_MBD_GradingSystem_Y.Out3 =
      Session2_MBD_GradingSyst_ConstB.Constant_h;

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem2' */
  } else if (Session2_MBD_GradingSystem_U.In1 >= 30.0) {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S4>/Action Port'
     */
    /* Outport: '<Root>/Out4' incorporates:
     *  SignalConversion: '<S4>/OutportBufferForOut1'
     */
    Session2_MBD_GradingSystem_Y.Out4 =
      Session2_MBD_GradingSyst_ConstB.Constant_c;

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem3' */
  } else {
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem4' incorporates:
     *  ActionPort: '<S5>/Action Port'
     */
    /* Outport: '<Root>/Out5' incorporates:
     *  SignalConversion: '<S5>/OutportBufferForOut1'
     */
    Session2_MBD_GradingSystem_Y.Out5 = Session2_MBD_GradingSyst_ConstB.Constant;

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem4' */
  }

  /* End of If: '<Root>/If' */
}

/* Model initialize function */
void Session2_MBD_GradingSystem_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Session2_MBD_GradingSystem_M, (NULL));

  /* external inputs */
  Session2_MBD_GradingSystem_U.In1 = 0.0;

  /* external outputs */
  (void) memset((void *)&Session2_MBD_GradingSystem_Y, 0,
                sizeof(ExtY_Session2_MBD_GradingSyst_T));

  /* SystemInitialize for IfAction SubSystem: '<Root>/If Action Subsystem' */
  /* SystemInitialize for Outport: '<Root>/Out1' incorporates:
   *  SignalConversion: '<S1>/OutportBufferForOut1'
   */
  Session2_MBD_GradingSystem_Y.Out1 = Session2_MBD_GradingSyst_ConstB.Constant_g;

  /* End of SystemInitialize for SubSystem: '<Root>/If Action Subsystem' */

  /* SystemInitialize for IfAction SubSystem: '<Root>/If Action Subsystem1' */
  /* SystemInitialize for Outport: '<Root>/Out2' incorporates:
   *  SignalConversion: '<S2>/OutportBufferForOut1'
   */
  Session2_MBD_GradingSystem_Y.Out2 = Session2_MBD_GradingSyst_ConstB.Constant_b;

  /* End of SystemInitialize for SubSystem: '<Root>/If Action Subsystem1' */

  /* SystemInitialize for IfAction SubSystem: '<Root>/If Action Subsystem2' */
  /* SystemInitialize for Outport: '<Root>/Out3' incorporates:
   *  SignalConversion: '<S3>/OutportBufferForOut1'
   */
  Session2_MBD_GradingSystem_Y.Out3 = Session2_MBD_GradingSyst_ConstB.Constant_h;

  /* End of SystemInitialize for SubSystem: '<Root>/If Action Subsystem2' */

  /* SystemInitialize for IfAction SubSystem: '<Root>/If Action Subsystem3' */
  /* SystemInitialize for Outport: '<Root>/Out4' incorporates:
   *  SignalConversion: '<S4>/OutportBufferForOut1'
   */
  Session2_MBD_GradingSystem_Y.Out4 = Session2_MBD_GradingSyst_ConstB.Constant_c;

  /* End of SystemInitialize for SubSystem: '<Root>/If Action Subsystem3' */

  /* SystemInitialize for IfAction SubSystem: '<Root>/If Action Subsystem4' */
  /* SystemInitialize for Outport: '<Root>/Out5' incorporates:
   *  SignalConversion: '<S5>/OutportBufferForOut1'
   */
  Session2_MBD_GradingSystem_Y.Out5 = Session2_MBD_GradingSyst_ConstB.Constant;

  /* End of SystemInitialize for SubSystem: '<Root>/If Action Subsystem4' */
}

/* Model terminate function */
void Session2_MBD_GradingSystem_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
