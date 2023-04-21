/*
 * File: session2_MBD_SubsystemCalcuator.h
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

#ifndef RTW_HEADER_session2_MBD_SubsystemCalcuator_h_
#define RTW_HEADER_session2_MBD_SubsystemCalcuator_h_
#include <string.h>
#include <stddef.h>
#ifndef session2_MBD_SubsystemCalcuator_COMMON_INCLUDES_
# define session2_MBD_SubsystemCalcuator_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* session2_MBD_SubsystemCalcuator_COMMON_INCLUDES_ */

#include "session2_MBD_SubsystemCalcuator_types.h"

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
  real_T In2;                          /* '<Root>/In2' */
} ExtU_session2_MBD_SubsystemCa_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  real_T outSUM;                       /* '<Root>/out SUM' */
  real_T outSUB;                       /* '<Root>/out SUB ' */
  real_T outMUL;                       /* '<Root>/out MUL ' */
  real_T OutDIV;                       /* '<Root>/Out DIV ' */
} ExtY_session2_MBD_SubsystemCa_T;

/* Real-time Model Data Structure */
struct tag_RTM_session2_MBD_Subsyste_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with auto storage) */
extern ExtU_session2_MBD_SubsystemCa_T session2_MBD_SubsystemCalcuat_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_session2_MBD_SubsystemCa_T session2_MBD_SubsystemCalcuat_Y;

/* Model entry point functions */
extern void session2_MBD_SubsystemCalcuator_initialize(void);
extern void session2_MBD_SubsystemCalcuator_step(void);
extern void session2_MBD_SubsystemCalcuator_terminate(void);

/* Real-time Model object */
extern RT_MODEL_session2_MBD_Subsyst_T *const session2_MBD_SubsystemCalcua_M;

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
 * '<Root>' : 'session2_MBD_SubsystemCalcuator'
 * '<S1>'   : 'session2_MBD_SubsystemCalcuator/Subsystem1'
 */
#endif                                 /* RTW_HEADER_session2_MBD_SubsystemCalcuator_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
