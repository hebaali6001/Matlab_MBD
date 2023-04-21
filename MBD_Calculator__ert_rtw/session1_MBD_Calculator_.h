/*
 * File: session1_MBD_Calculator_.h
 *
 * Code generated for Simulink model 'session1_MBD_Calculator_'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
 * C/C++ source code generated on : Mon Jan  9 10:59:28 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 *    3. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_session1_MBD_Calculator__h_
#define RTW_HEADER_session1_MBD_Calculator__h_
#include <string.h>
#include <stddef.h>
#ifndef session1_MBD_Calculator__COMMON_INCLUDES_
# define session1_MBD_Calculator__COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* session1_MBD_Calculator__COMMON_INCLUDES_ */

#include "session1_MBD_Calculator__types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* External inputs (root inport signals with auto storage) */
typedef struct {
  real_T In2;                          /* '<Root>/In2' */
  real_T In3;                          /* '<Root>/In3' */
} ExtU_session1_MBD_Calculator__T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  real_T OutSUM;                       /* '<Root>/Out SUM' */
  real_T OutSUB;                       /* '<Root>/Out SUB' */
  real_T OutMUL;                       /* '<Root>/Out MUL' */
  real_T OutDIV;                       /* '<Root>/Out DIV ' */
} ExtY_session1_MBD_Calculator__T;

/* Real-time Model Data Structure */
struct tag_RTM_session1_MBD_Calculat_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with auto storage) */
extern ExtU_session1_MBD_Calculator__T session1_MBD_Calculator__U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_session1_MBD_Calculator__T session1_MBD_Calculator__Y;

/* Model entry point functions */
extern void session1_MBD_Calculator__initialize(void);
extern void session1_MBD_Calculator__step(void);
extern void session1_MBD_Calculator__terminate(void);

/* Real-time Model object */
extern RT_MODEL_session1_MBD_Calcula_T *const session1_MBD_Calculator__M;

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
 * '<Root>' : 'session1_MBD_Calculator_'
 */
#endif                                 /* RTW_HEADER_session1_MBD_Calculator__h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
