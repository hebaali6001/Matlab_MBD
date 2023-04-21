/*
 * File: Session2_MBD_GradingSystem.h
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

#ifndef RTW_HEADER_Session2_MBD_GradingSystem_h_
#define RTW_HEADER_Session2_MBD_GradingSystem_h_
#include <stddef.h>
#include <string.h>
#ifndef Session2_MBD_GradingSystem_COMMON_INCLUDES_
# define Session2_MBD_GradingSystem_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Session2_MBD_GradingSystem_COMMON_INCLUDES_ */

#include "Session2_MBD_GradingSystem_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Invariant block signals (auto storage) */
typedef struct {
  const real_T Constant;               /* '<S5>/Constant' */
  const real_T Constant_c;             /* '<S4>/Constant' */
  const real_T Constant_h;             /* '<S3>/Constant' */
  const real_T Constant_b;             /* '<S2>/Constant' */
  const real_T Constant_g;             /* '<S1>/Constant' */
} ConstB_Session2_MBD_GradingSy_T;

/* External inputs (root inport signals with auto storage) */
typedef struct {
  real_T In1;                          /* '<Root>/In1' */
} ExtU_Session2_MBD_GradingSyst_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  real_T Out1;                         /* '<Root>/Out1' */
  real_T Out2;                         /* '<Root>/Out2' */
  real_T Out3;                         /* '<Root>/Out3' */
  real_T Out4;                         /* '<Root>/Out4' */
  real_T Out5;                         /* '<Root>/Out5' */
} ExtY_Session2_MBD_GradingSyst_T;

/* Real-time Model Data Structure */
struct tag_RTM_Session2_MBD_GradingS_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with auto storage) */
extern ExtU_Session2_MBD_GradingSyst_T Session2_MBD_GradingSystem_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_Session2_MBD_GradingSyst_T Session2_MBD_GradingSystem_Y;
extern const ConstB_Session2_MBD_GradingSy_T Session2_MBD_GradingSyst_ConstB;/* constant block i/o */

/* Model entry point functions */
extern void Session2_MBD_GradingSystem_initialize(void);
extern void Session2_MBD_GradingSystem_step(void);
extern void Session2_MBD_GradingSystem_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Session2_MBD_Grading_T *const Session2_MBD_GradingSystem_M;

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
 * '<Root>' : 'Session2_MBD_GradingSystem'
 * '<S1>'   : 'Session2_MBD_GradingSystem/If Action Subsystem'
 * '<S2>'   : 'Session2_MBD_GradingSystem/If Action Subsystem1'
 * '<S3>'   : 'Session2_MBD_GradingSystem/If Action Subsystem2'
 * '<S4>'   : 'Session2_MBD_GradingSystem/If Action Subsystem3'
 * '<S5>'   : 'Session2_MBD_GradingSystem/If Action Subsystem4'
 */
#endif                                 /* RTW_HEADER_Session2_MBD_GradingSystem_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
