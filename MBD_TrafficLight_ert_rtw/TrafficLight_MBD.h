/*
 * File: TrafficLight_MBD.h
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

#ifndef RTW_HEADER_TrafficLight_MBD_h_
#define RTW_HEADER_TrafficLight_MBD_h_
#include <stddef.h>
#include <string.h>
#ifndef TrafficLight_MBD_COMMON_INCLUDES_
# define TrafficLight_MBD_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* TrafficLight_MBD_COMMON_INCLUDES_ */

#include "TrafficLight_MBD_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block states (auto storage) for system '<Root>/Chart' */
typedef struct {
  uint8_T is_active_c3_TrafficLight_MBD;/* '<Root>/Chart' */
  uint8_T is_c3_TrafficLight_MBD;      /* '<Root>/Chart' */
  uint8_T temporalCounter_i1;          /* '<Root>/Chart' */
  uint8_T temporalCounter_i2;          /* '<Root>/Chart' */
} DW_Chart_TrafficLight_MBD_T;

/* Block states (auto storage) for system '<Root>' */
typedef struct {
  DW_Chart_TrafficLight_MBD_T sf_Chart;/* '<Root>/Chart' */
} DW_TrafficLight_MBD_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  real_T Red;                          /* '<Root>/Red' */
  real_T Yellow;                       /* '<Root>/Yellow' */
  real_T Green;                        /* '<Root>/Green' */
} ExtY_TrafficLight_MBD_T;

/* Real-time Model Data Structure */
struct tag_RTM_TrafficLight_MBD_T {
  const char_T * volatile errorStatus;
};

/* Block states (auto storage) */
extern DW_TrafficLight_MBD_T TrafficLight_MBD_DW;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_TrafficLight_MBD_T TrafficLight_MBD_Y;

/* Model entry point functions */
extern void TrafficLight_MBD_initialize(void);
extern void TrafficLight_MBD_step(void);
extern void TrafficLight_MBD_terminate(void);

/* Real-time Model object */
extern RT_MODEL_TrafficLight_MBD_T *const TrafficLight_MBD_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'TrafficLight_MBD'
 * '<S1>'   : 'TrafficLight_MBD/Chart'
 */
#endif                                 /* RTW_HEADER_TrafficLight_MBD_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
