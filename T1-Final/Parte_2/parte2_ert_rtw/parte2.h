/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: parte2.h
 *
 * Code generated for Simulink model 'parte2'.
 *
 * Model version                  : 14.7
 * Simulink Coder version         : 9.6 (R2021b) 14-May-2021
 * C/C++ source code generated on : Sat Mar 26 14:38:13 2022
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_parte2_h_
#define RTW_HEADER_parte2_h_
#include <math.h>
#include <stddef.h>
#ifndef parte2_COMMON_INCLUDES_
#define parte2_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "MW_PWM.h"
#include "encoder_arduino.h"
#endif                                 /* parte2_COMMON_INCLUDES_ */

#include "parte2_types.h"
#include "MW_target_hardware_resources.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

/* Block signals (default storage) */
typedef struct {
  real_T FValue60;                     /* '<Root>/FValue = -60' */
} BlockIO_parte2;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  codertarget_arduinobase_interna obj; /* '<S3>/PWM1' */
  codertarget_arduinobase_interna obj_n;/* '<S3>/PWM' */
  Encoder_arduino_parte2 obj_d;        /* '<S1>/M1 Right Connector 2, 3' */
  real_T DiscreteTimeIntegrator_DSTATE;/* '<Root>/Discrete-Time Integrator' */
  real_T USat70LSat70_DSTATE;          /* '<Root>/USat = 70 LSat = -70' */
  real_T UD_DSTATE;                    /* '<S2>/UD' */
} D_Work_parte2;

/* Parameters (default storage) */
struct Parameters_parte2_ {
  real_T EncCov;                       /* Variable: EncCov
                                        * Referenced by: '<S1>/Gain'
                                        */
  real_T Ki;                           /* Variable: Ki
                                        * Referenced by: '<Root>/Gain3'
                                        */
  real_T Kp;                           /* Variable: Kp
                                        * Referenced by: '<Root>/Gain2'
                                        */
  real_T DiscreteDerivative_ICPrevScaled;
                              /* Mask Parameter: DiscreteDerivative_ICPrevScaled
                               * Referenced by: '<S2>/UD'
                               */
  real_T LeftMotorDriverVoffsetPWM6PWM7_;
                              /* Mask Parameter: LeftMotorDriverVoffsetPWM6PWM7_
                               * Referenced by: '<S3>/Constant1'
                               */
  real_T LeftMotorDriverVoffsetPWM6PWM_a;
                              /* Mask Parameter: LeftMotorDriverVoffsetPWM6PWM_a
                               * Referenced by:
                               *   '<S3>/Constant1'
                               *   '<S3>/conversion to duty cycle (convert to int) denominator is motor driver voltage'
                               */
  real_T DiscreteTimeIntegrator_gainval;
                           /* Computed Parameter: DiscreteTimeIntegrator_gainval
                            * Referenced by: '<Root>/Discrete-Time Integrator'
                            */
  real_T DiscreteTimeIntegrator_IC;    /* Expression: 0
                                        * Referenced by: '<Root>/Discrete-Time Integrator'
                                        */
  real_T USat70LSat70_gainval;       /* Computed Parameter: USat70LSat70_gainval
                                      * Referenced by: '<Root>/USat = 70 LSat = -70'
                                      */
  real_T USat70LSat70_IC;              /* Expression: 0
                                        * Referenced by: '<Root>/USat = 70 LSat = -70'
                                        */
  real_T USat70LSat70_UpperSat;        /* Expression: 70
                                        * Referenced by: '<Root>/USat = 70 LSat = -70'
                                        */
  real_T USat70LSat70_LowerSat;        /* Expression: -70
                                        * Referenced by: '<Root>/USat = 70 LSat = -70'
                                        */
  real_T TSamp_WtEt;                   /* Computed Parameter: TSamp_WtEt
                                        * Referenced by: '<S2>/TSamp'
                                        */
  real_T UpL48LoL48_UpperSat;          /* Expression: 4.8
                                        * Referenced by: '<Root>/UpL= 4.8 LoL= -4.8'
                                        */
  real_T UpL48LoL48_LowerSat;          /* Expression: -4.8
                                        * Referenced by: '<Root>/UpL= 4.8 LoL= -4.8'
                                        */
  real_T p2_Time;                      /* Expression: 5
                                        * Referenced by: '<Root>/p = 2'
                                        */
  real_T p2_Y0;                        /* Expression: 0
                                        * Referenced by: '<Root>/p = 2'
                                        */
  real_T p2_YFinal;                    /* Expression: 2
                                        * Referenced by: '<Root>/p = 2'
                                        */
  real_T Constant4_Value;              /* Expression: 255
                                        * Referenced by: '<S3>/Constant4'
                                        */
  real_T Saturation0to255_UpperSat;    /* Expression: 255
                                        * Referenced by: '<S3>/Saturation 0 to 255'
                                        */
  real_T Saturation0to255_LowerSat;    /* Expression: 0
                                        * Referenced by: '<S3>/Saturation 0 to 255'
                                        */
  real_T FValue60_Time;                /* Expression: 1
                                        * Referenced by: '<Root>/FValue = -60'
                                        */
  real_T FValue60_Y0;                  /* Expression: 0
                                        * Referenced by: '<Root>/FValue = -60'
                                        */
  real_T FValue60_YFinal;              /* Expression: -60
                                        * Referenced by: '<Root>/FValue = -60'
                                        */
  int16_T Switch1_Threshold;           /* Computed Parameter: Switch1_Threshold
                                        * Referenced by: '<S3>/Switch1'
                                        */
  int16_T Switch2_Threshold;           /* Computed Parameter: Switch2_Threshold
                                        * Referenced by: '<S3>/Switch2'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_parte2 {
  const char_T *errorStatus;
  RTWSolverInfo solverInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    uint32_T clockTick0;
    time_T stepSize0;
    uint32_T clockTick1;
    SimTimeStep simTimeStep;
    time_T *t;
    time_T tArray[2];
  } Timing;
};

/* Block parameters (default storage) */
extern Parameters_parte2 parte2_P;

/* Block signals (default storage) */
extern BlockIO_parte2 parte2_B;

/* Block states (default storage) */
extern D_Work_parte2 parte2_DWork;

/* Model entry point functions */
extern void parte2_initialize(void);
extern void parte2_step(void);
extern void parte2_terminate(void);

/* Real-time Model object */
extern RT_MODEL_parte2 *const parte2_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S1>/Cast To Single1' : Unused code path elimination
 * Block '<S2>/Data Type Duplicate' : Unused code path elimination
 * Block '<S1>/Gain1' : Unused code path elimination
 * Block '<Root>/Scope' : Unused code path elimination
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
 * '<Root>' : 'parte2'
 * '<S1>'   : 'parte2/MotorDC Hardware'
 * '<S2>'   : 'parte2/MotorDC Hardware/Discrete Derivative'
 * '<S3>'   : 'parte2/MotorDC Hardware/Left Motor Driver Voffset PWM6, PWM7'
 */
#endif                                 /* RTW_HEADER_parte2_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
