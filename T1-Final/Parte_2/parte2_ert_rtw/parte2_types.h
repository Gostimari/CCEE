/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: parte2_types.h
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

#ifndef RTW_HEADER_parte2_types_h_
#define RTW_HEADER_parte2_types_h_
#include "rtwtypes.h"

/* Model Code Variants */

/* Custom Type definition for MATLABSystem: '<S3>/PWM1' */
#include "MW_SVD.h"
#ifndef struct_tag_g1WX34VPn8QzVKQriB4HN
#define struct_tag_g1WX34VPn8QzVKQriB4HN

struct tag_g1WX34VPn8QzVKQriB4HN
{
  MW_Handle_Type MW_PWM_HANDLE;
};

#endif                                 /* struct_tag_g1WX34VPn8QzVKQriB4HN */

#ifndef typedef_g_matlabshared_ioclient_periphe
#define typedef_g_matlabshared_ioclient_periphe

typedef struct tag_g1WX34VPn8QzVKQriB4HN g_matlabshared_ioclient_periphe;

#endif                             /* typedef_g_matlabshared_ioclient_periphe */

#ifndef struct_tag_4eDVzK5FiryyCjvjjvrZGB
#define struct_tag_4eDVzK5FiryyCjvjjvrZGB

struct tag_4eDVzK5FiryyCjvjjvrZGB
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  g_matlabshared_ioclient_periphe PWMDriverObj;
};

#endif                                 /* struct_tag_4eDVzK5FiryyCjvjjvrZGB */

#ifndef typedef_codertarget_arduinobase_interna
#define typedef_codertarget_arduinobase_interna

typedef struct tag_4eDVzK5FiryyCjvjjvrZGB codertarget_arduinobase_interna;

#endif                             /* typedef_codertarget_arduinobase_interna */

#ifndef struct_tag_LZATNKaowXRlwzpKcQ6wRE
#define struct_tag_LZATNKaowXRlwzpKcQ6wRE

struct tag_LZATNKaowXRlwzpKcQ6wRE
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
};

#endif                                 /* struct_tag_LZATNKaowXRlwzpKcQ6wRE */

#ifndef typedef_Encoder_arduino_parte2
#define typedef_Encoder_arduino_parte2

typedef struct tag_LZATNKaowXRlwzpKcQ6wRE Encoder_arduino_parte2;

#endif                                 /* typedef_Encoder_arduino_parte2 */

/* Parameters (default storage) */
typedef struct Parameters_parte2_ Parameters_parte2;

/* Forward declaration for rtModel */
typedef struct tag_RTM_parte2 RT_MODEL_parte2;

#endif                                 /* RTW_HEADER_parte2_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
