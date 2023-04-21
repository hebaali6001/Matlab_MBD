/*
 * File: TrafficLight_MBD.c
 *
 * Code generated for Simulink model 'TrafficLight_MBD'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
 * C/C++ source code generated on : Tue Jan 10 15:31:32 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 *    3. RAM efficiency
 * Validation result: Not run
 */

#include "TrafficLight_MBD.h"
#include "TrafficLight_MBD_private.h"

/* Named constants for Chart: '<Root>/Chart' */
#define TrafficLight_IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define TrafficLight_MBD_IN_Green      ((uint8_T)1U)
#define TrafficLight_MBD_IN_Red        ((uint8_T)2U)
#define TrafficLight_MBD_IN_Yellow     ((uint8_T)3U)

/* Block states (auto storage) */
DW_TrafficLight_MBD_T TrafficLight_MBD_DW;

/* External outputs (root outports fed by signals with auto storage) */
ExtY_TrafficLight_MBD_T TrafficLight_MBD_Y;

/* Real-time model */
RT_MODEL_TrafficLight_MBD_T TrafficLight_MBD_M_;
RT_MODEL_TrafficLight_MBD_T *const TrafficLight_MBD_M = &TrafficLight_MBD_M_;

/* System initialize for atomic system: '<Root>/Chart' */
void TrafficLight_MBD_Chart_Init(real_T *rty_out_Red, real_T *rty_out_Yellow,
  real_T *rty_out_Green, DW_Chart_TrafficLight_MBD_T *localDW)
{
  localDW->temporalCounter_i1 = 0U;
  localDW->temporalCounter_i2 = 0U;
  localDW->is_active_c3_TrafficLight_MBD = 0U;
  localDW->is_c3_TrafficLight_MBD = TrafficLight_IN_NO_ACTIVE_CHILD;
  *rty_out_Red = 0.0;
  *rty_out_Yellow = 0.0;
  *rty_out_Green = 0.0;
}

/* Output and update for atomic system: '<Root>/Chart' */
void TrafficLight_MBD_Chart(real_T *rty_out_Red, real_T *rty_out_Yellow, real_T *
  rty_out_Green, DW_Chart_TrafficLight_MBD_T *localDW)
{
  /* Chart: '<Root>/Chart' */
  if (localDW->temporalCounter_i2 < 7U) {
    localDW->temporalCounter_i2++;
  }

  if (localDW->temporalCounter_i1 < 7U) {
    localDW->temporalCounter_i1++;
  }

  if (localDW->is_active_c3_TrafficLight_MBD == 0U) {
    localDW->is_active_c3_TrafficLight_MBD = 1U;
    localDW->is_c3_TrafficLight_MBD = TrafficLight_MBD_IN_Red;
    localDW->temporalCounter_i1 = 0U;
  } else {
    switch (localDW->is_c3_TrafficLight_MBD) {
     case TrafficLight_MBD_IN_Green:
      localDW->is_c3_TrafficLight_MBD = TrafficLight_MBD_IN_Red;
      localDW->temporalCounter_i1 = 0U;
      break;

     case TrafficLight_MBD_IN_Red:
      if (localDW->temporalCounter_i1 >= 5) {
        localDW->is_c3_TrafficLight_MBD = TrafficLight_MBD_IN_Yellow;
        localDW->temporalCounter_i2 = 0U;
      } else {
        *rty_out_Red = 1.0;
        *rty_out_Yellow = 0.0;
        *rty_out_Green = 0.0;
      }
      break;

     default:
      if (localDW->temporalCounter_i2 >= 3U) {
        localDW->is_c3_TrafficLight_MBD = TrafficLight_MBD_IN_Green;
      } else {
        *rty_out_Red = 0.0;
        *rty_out_Yellow = 1.0;
        *rty_out_Green = 0.0;
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Chart' */
}

/* Model step function */
void TrafficLight_MBD_step(void)
{
  real_T out_Red;
  real_T out_Yellow;
  real_T out_Green;

  /* Chart: '<Root>/Chart' */
  TrafficLight_MBD_Chart(&out_Red, &out_Yellow, &out_Green,
    &TrafficLight_MBD_DW.sf_Chart);
}

/* Model initialize function */
void TrafficLight_MBD_initialize(void)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatus(TrafficLight_MBD_M, (NULL));

  /* states (dwork) */
  (void) memset((void *)&TrafficLight_MBD_DW, 0,
                sizeof(DW_TrafficLight_MBD_T));

  /* external outputs */
  (void) memset((void *)&TrafficLight_MBD_Y, 0,
                sizeof(ExtY_TrafficLight_MBD_T));

  {
    real_T out_Red;
    real_T out_Yellow;
    real_T out_Green;

    /* ConstCode for Outport: '<Root>/Red' */
    TrafficLight_MBD_Y.Red = 0.0;

    /* ConstCode for Outport: '<Root>/Yellow' */
    TrafficLight_MBD_Y.Yellow = 0.0;

    /* ConstCode for Outport: '<Root>/Green' */
    TrafficLight_MBD_Y.Green = 0.0;

    /* SystemInitialize for Chart: '<Root>/Chart' */
    TrafficLight_MBD_Chart_Init(&out_Red, &out_Yellow, &out_Green,
      &TrafficLight_MBD_DW.sf_Chart);
  }
}

/* Model terminate function */
void TrafficLight_MBD_terminate(void)
{
  /* (no terminate code required) */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
