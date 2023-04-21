/*
 * File: Session3_MBD_Factorial_Stateflow.h
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

#ifndef RTW_HEADER_Session3_MBD_Factorial_Stateflow_h_
#define RTW_HEADER_Session3_MBD_Factorial_Stateflow_h_
#include <stddef.h>
#ifndef Session3_MBD_Factorial_Stateflow_COMMON_INCLUDES_
# define Session3_MBD_Factorial_Stateflow_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Session3_MBD_Factorial_Stateflow_COMMON_INCLUDES_ */

#include "Session3_MBD_Factorial_Stateflow_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with auto storage) */
typedef struct {
  real_T In1;                          /* '<Root>/In1' */
} ExtU_Session3_MBD_Factorial_S_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  real_T Out1;                         /* '<Root>/Out1' */
} ExtY_Session3_MBD_Factorial_S_T;

/* Real-time Model Data Structure */
struct tag_RTM_Session3_MBD_Factoria_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with auto storage) */
extern ExtU_Session3_MBD_Factorial_S_T Session3_MBD_Factorial_Statef_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_Session3_MBD_Factorial_S_T Session3_MBD_Factorial_Statef_Y;

/* Model entry point functions */
extern void Session3_MBD_Factorial_Stateflow_initialize(void);
extern void Session3_MBD_Factorial_Stateflow_step(void);
extern void Session3_MBD_Factorial_Stateflow_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Session3_MBD_Factori_T *const Session3_MBD_Factorial_State_M;

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
 * '<Root>' : 'Session3_MBD_Factorial_Stateflow'
 * '<S1>'   : 'Session3_MBD_Factorial_Stateflow/Chart'
 */
#endif                                 /* RTW_HEADER_Session3_MBD_Factorial_Stateflow_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
