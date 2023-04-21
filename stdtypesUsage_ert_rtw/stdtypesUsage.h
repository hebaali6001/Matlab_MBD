/*
 * File: stdtypesUsage.h
 *
 * Code generated for Simulink model 'stdtypesUsage'.
 *
 * Model version                  : 1.4
 * Simulink Coder version         : 8.13 (R2017b) 24-Jul-2017
 * C/C++ source code generated on : Sun Jan  1 19:16:54 2023
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objectives:
 *    1. Execution efficiency
 *    2. ROM efficiency
 *    3. RAM efficiency
 * Validation result: Not run
 */

#ifndef RTW_HEADER_stdtypesUsage_h_
#define RTW_HEADER_stdtypesUsage_h_
#include <stddef.h>
#ifndef stdtypesUsage_COMMON_INCLUDES_
# define stdtypesUsage_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* stdtypesUsage_COMMON_INCLUDES_ */

#include "stdtypesUsage_types.h"

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
} ExtU_stdtypesUsage_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  real_T Out1;                         /* '<Root>/Out1' */
} ExtY_stdtypesUsage_T;

/* Real-time Model Data Structure */
struct tag_RTM_stdtypesUsage_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with auto storage) */
extern ExtU_stdtypesUsage_T stdtypesUsage_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_stdtypesUsage_T stdtypesUsage_Y;

/* Model entry point functions */
extern void stdtypesUsage_initialize(void);
extern void stdtypesUsage_step(void);
extern void stdtypesUsage_terminate(void);

/* Real-time Model object */
extern RT_MODEL_stdtypesUsage_T *const stdtypesUsage_M;

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
 * '<Root>' : 'stdtypesUsage'
 * '<S1>'   : 'stdtypesUsage/Chart'
 */
#endif                                 /* RTW_HEADER_stdtypesUsage_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
