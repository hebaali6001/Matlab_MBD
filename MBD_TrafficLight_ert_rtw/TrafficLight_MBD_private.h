/*
 * File: TrafficLight_MBD_private.h
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

#ifndef RTW_HEADER_TrafficLight_MBD_private_h_
#define RTW_HEADER_TrafficLight_MBD_private_h_
#include "rtwtypes.h"
#include "TrafficLight_MBD.h"

extern void TrafficLight_MBD_Chart_Init(real_T *rty_out_Red, real_T
  *rty_out_Yellow, real_T *rty_out_Green, DW_Chart_TrafficLight_MBD_T *localDW);
extern void TrafficLight_MBD_Chart(real_T *rty_out_Red, real_T *rty_out_Yellow,
  real_T *rty_out_Green, DW_Chart_TrafficLight_MBD_T *localDW);

#endif                                 /* RTW_HEADER_TrafficLight_MBD_private_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
