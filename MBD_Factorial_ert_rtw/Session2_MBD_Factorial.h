/*
 * File: Session2_MBD_Factorial.h
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

#ifndef RTW_HEADER_Session2_MBD_Factorial_h_
#define RTW_HEADER_Session2_MBD_Factorial_h_
#include <string.h>
#include <stddef.h>
#ifndef Session2_MBD_Factorial_COMMON_INCLUDES_
# define Session2_MBD_Factorial_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Session2_MBD_Factorial_COMMON_INCLUDES_ */

#include "Session2_MBD_Factorial_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with auto storage) */
typedef struct {
  int32_T In1;                         /* '<Root>/In1' */
  int32_T In2;                         /* '<Root>/In2' */
} ExtU_Session2_MBD_Factorial_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  int32_T Out1;                        /* '<Root>/Out1' */
} ExtY_Session2_MBD_Factorial_T;

/* Real-time Model Data Structure */
struct tag_RTM_Session2_MBD_Factoria_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with auto storage) */
extern ExtU_Session2_MBD_Factorial_T Session2_MBD_Factorial_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_Session2_MBD_Factorial_T Session2_MBD_Factorial_Y;

/* Model entry point functions */
extern void Session2_MBD_Factorial_initialize(void);
extern void Session2_MBD_Factorial_step(void);
extern void Session2_MBD_Factorial_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Session2_MBD_Factori_T *const Session2_MBD_Factorial_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Display' : Unused code path elimination
 */

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
 * '<Root>' : 'Session2_MBD_Factorial'
 * '<S1>'   : 'Session2_MBD_Factorial/While Iterator Subsystem'
 */
#endif                                 /* RTW_HEADER_Session2_MBD_Factorial_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
