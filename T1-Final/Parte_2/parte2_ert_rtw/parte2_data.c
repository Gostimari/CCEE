/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: parte2_data.c
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

#include "parte2.h"
#include "parte2_private.h"

/* Block parameters (default storage) */
Parameters_parte2 parte2_P = {
  /* Variable: EncCov
   * Referenced by: '<S1>/Gain'
   */
  0.0047029830143559773,

  /* Variable: Ki
   * Referenced by: '<Root>/Gain3'
   */
  1.0847798742138364,

  /* Variable: Kp
   * Referenced by: '<Root>/Gain2'
   */
  0.0706908893731044,

  /* Mask Parameter: DiscreteDerivative_ICPrevScaled
   * Referenced by: '<S2>/UD'
   */
  0.0,

  /* Mask Parameter: LeftMotorDriverVoffsetPWM6PWM7_
   * Referenced by: '<S3>/Constant1'
   */
  0.0,

  /* Mask Parameter: LeftMotorDriverVoffsetPWM6PWM_a
   * Referenced by:
   *   '<S3>/Constant1'
   *   '<S3>/conversion to duty cycle (convert to int) denominator is motor driver voltage'
   */
  4.8,

  /* Computed Parameter: DiscreteTimeIntegrator_gainval
   * Referenced by: '<Root>/Discrete-Time Integrator'
   */
  0.03,

  /* Expression: 0
   * Referenced by: '<Root>/Discrete-Time Integrator'
   */
  0.0,

  /* Computed Parameter: USat70LSat70_gainval
   * Referenced by: '<Root>/USat = 70 LSat = -70'
   */
  0.03,

  /* Expression: 0
   * Referenced by: '<Root>/USat = 70 LSat = -70'
   */
  0.0,

  /* Expression: 70
   * Referenced by: '<Root>/USat = 70 LSat = -70'
   */
  70.0,

  /* Expression: -70
   * Referenced by: '<Root>/USat = 70 LSat = -70'
   */
  -70.0,

  /* Computed Parameter: TSamp_WtEt
   * Referenced by: '<S2>/TSamp'
   */
  33.333333333333336,

  /* Expression: 4.8
   * Referenced by: '<Root>/UpL= 4.8 LoL= -4.8'
   */
  4.8,

  /* Expression: -4.8
   * Referenced by: '<Root>/UpL= 4.8 LoL= -4.8'
   */
  -4.8,

  /* Expression: 5
   * Referenced by: '<Root>/p = 2'
   */
  5.0,

  /* Expression: 0
   * Referenced by: '<Root>/p = 2'
   */
  0.0,

  /* Expression: 2
   * Referenced by: '<Root>/p = 2'
   */
  2.0,

  /* Expression: 255
   * Referenced by: '<S3>/Constant4'
   */
  255.0,

  /* Expression: 255
   * Referenced by: '<S3>/Saturation 0 to 255'
   */
  255.0,

  /* Expression: 0
   * Referenced by: '<S3>/Saturation 0 to 255'
   */
  0.0,

  /* Expression: 1
   * Referenced by: '<Root>/FValue = -60'
   */
  1.0,

  /* Expression: 0
   * Referenced by: '<Root>/FValue = -60'
   */
  0.0,

  /* Expression: -60
   * Referenced by: '<Root>/FValue = -60'
   */
  -60.0,

  /* Computed Parameter: Switch1_Threshold
   * Referenced by: '<S3>/Switch1'
   */
  0,

  /* Computed Parameter: Switch2_Threshold
   * Referenced by: '<S3>/Switch2'
   */
  0
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
