/*
 * File: Session3_MBD_CalculatorGraficalFunction.h
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

#ifndef RTW_HEADER_Session3_MBD_CalculatorGraficalFunction_h_
#define RTW_HEADER_Session3_MBD_CalculatorGraficalFunction_h_
#include <string.h>
#include <stddef.h>
#ifndef Session3_MBD_CalculatorGraficalFunction_COMMON_INCLUDES_
# define Session3_MBD_CalculatorGraficalFunction_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif                                 /* Session3_MBD_CalculatorGraficalFunction_COMMON_INCLUDES_ */

#include "Session3_MBD_CalculatorGraficalFunction_types.h"

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
} ExtU_Session3_MBD_CalculatorG_T;

/* External outputs (root outports fed by signals with auto storage) */
typedef struct {
  real_T Out1;                         /* '<Root>/Out1' */
  real_T Out2;                         /* '<Root>/Out2' */
  real_T Out3;                         /* '<Root>/Out3' */
  real_T Out4;                         /* '<Root>/Out4' */
} ExtY_Session3_MBD_CalculatorG_T;

/* Real-time Model Data Structure */
struct tag_RTM_Session3_MBD_Calculat_T {
  const char_T * volatile errorStatus;
};

/* External inputs (root inport signals with auto storage) */
extern ExtU_Session3_MBD_CalculatorG_T Session3_MBD_CalculatorGrafic_U;

/* External outputs (root outports fed by signals with auto storage) */
extern ExtY_Session3_MBD_CalculatorG_T Session3_MBD_CalculatorGrafic_Y;

/* Model entry point functions */
extern void Session3_MBD_CalculatorGraficalFunction_initialize(void);
extern void Session3_MBD_CalculatorGraficalFunction_step(void);
extern void Session3_MBD_CalculatorGraficalFunction_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Session3_MBD_Calcula_T *const Session3_MBD_CalculatorGrafi_M;

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
 * '<Root>' : 'Session3_MBD_CalculatorGraficalFunction'
 * '<S1>'   : 'Session3_MBD_CalculatorGraficalFunction/Chart1'
 */
#endif                                 /* RTW_HEADER_Session3_MBD_CalculatorGraficalFunction_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
