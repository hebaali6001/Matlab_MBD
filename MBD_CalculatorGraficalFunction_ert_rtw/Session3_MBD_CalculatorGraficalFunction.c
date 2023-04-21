/*
 * File: Session3_MBD_CalculatorGraficalFunction.c
 *
 * Code generated for Simulink model 'Session3_MBD_CalculatorGraficalFunction'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
 * C/C++ source code generated on : Mon Jan  9 12:48:10 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 *    3. RAM efficiency
 * Validation result: Not run
 */

#include "Session3_MBD_CalculatorGraficalFunction.h"
#include "Session3_MBD_CalculatorGraficalFunction_private.h"

/* External inputs (root inport signals with auto storage) */
ExtU_Session3_MBD_CalculatorG_T Session3_MBD_CalculatorGrafic_U;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_Session3_MBD_CalculatorG_T Session3_MBD_CalculatorGrafic_Y;

/* Real-time model */
RT_MODEL_Session3_MBD_Calcula_T Session3_MBD_CalculatorGrafi_M_;
RT_MODEL_Session3_MBD_Calcula_T *const Session3_MBD_CalculatorGrafi_M =
  &Session3_MBD_CalculatorGrafi_M_;

/* Forward declaration for local functions */
static real_T Session3_MBD_CalculatorGraf_add(real_T r1, real_T r2);
static real_T Session3_MBD_CalculatorGraf_sub(real_T r1, real_T r2);
static real_T Session3_MBD_CalculatorGraf_mul(real_T r1, real_T r2);
static real_T Session3_MBD_CalculatorGraf_div(real_T r1, real_T r2);

/* Function for Chart: '<Root>/Chart1' */
static real_T Session3_MBD_CalculatorGraf_add(real_T r1, real_T r2)
{
  return r1 + r2;
}

/* Function for Chart: '<Root>/Chart1' */
static real_T Session3_MBD_CalculatorGraf_sub(real_T r1, real_T r2)
{
  return r1 - r2;
}

/* Function for Chart: '<Root>/Chart1' */
static real_T Session3_MBD_CalculatorGraf_mul(real_T r1, real_T r2)
{
  return r1 * r2;
}

/* Function for Chart: '<Root>/Chart1' */
static real_T Session3_MBD_CalculatorGraf_div(real_T r1, real_T r2)
{
  return r1 / r2;
}

/* Model step function */
void Session3_MBD_CalculatorGraficalFunction_step(void)
{
  /* Outport: '<Root>/Out1' incorporates:
   *  Chart: '<Root>/Chart1'
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   */
  Session3_MBD_CalculatorGrafic_Y.Out1 = Session3_MBD_CalculatorGraf_add
    (Session3_MBD_CalculatorGrafic_U.In1, Session3_MBD_CalculatorGrafic_U.In2);

  /* Outport: '<Root>/Out2' incorporates:
   *  Chart: '<Root>/Chart1'
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   */
  Session3_MBD_CalculatorGrafic_Y.Out2 = Session3_MBD_CalculatorGraf_sub
    (Session3_MBD_CalculatorGrafic_U.In1, Session3_MBD_CalculatorGrafic_U.In2);

  /* Outport: '<Root>/Out3' incorporates:
   *  Chart: '<Root>/Chart1'
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   */
  Session3_MBD_CalculatorGrafic_Y.Out3 = Session3_MBD_CalculatorGraf_mul
    (Session3_MBD_CalculatorGrafic_U.In1, Session3_MBD_CalculatorGrafic_U.In2);

  /* Outport: '<Root>/Out4' incorporates:
   *  Chart: '<Root>/Chart1'
   *  Inport: '<Root>/In1'
   *  Inport: '<Root>/In2'
   */
  Session3_MBD_CalculatorGrafic_Y.Out4 = Session3_MBD_CalculatorGraf_div
    (Session3_MBD_CalculatorGrafic_U.In1, Session3_MBD_CalculatorGrafic_U.In2);
}

/* Model initialize function */
void Session3_MBD_CalculatorGraficalFunction_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(Session3_MBD_CalculatorGrafi_M, (NULL));

  /* external inputs */
  (void)memset((void *)&Session3_MBD_CalculatorGrafic_U, 0, sizeof
               (ExtU_Session3_MBD_CalculatorG_T));

  /* external outputs */
  (void) memset((void *)&Session3_MBD_CalculatorGrafic_Y, 0,
                sizeof(ExtY_Session3_MBD_CalculatorG_T));
}

/* Model terminate function */
void Session3_MBD_CalculatorGraficalFunction_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
