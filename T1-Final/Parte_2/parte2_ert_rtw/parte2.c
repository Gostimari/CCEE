/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: parte2.c
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

/* Block signals (default storage) */
BlockIO_parte2 parte2_B;

/* Block states (default storage) */
D_Work_parte2 parte2_DWork;

/* Real-time model */
static RT_MODEL_parte2 parte2_M_;
RT_MODEL_parte2 *const parte2_M = &parte2_M_;

/* Model step function */
void parte2_step(void)
{
  /* local block i/o variables */
  real_T rtb_TSamp;
  real_T rtb_Gain3;
  codertarget_arduinobase_interna *obj;
  real_T rtb_Sum3;
  real_T rtb_Switch2;
  real_T rtb_conversiontodutycycleconv_1;
  real_T tmp;
  int32_T rtb_M1RightConnector23_0;
  int16_T rtb_conversiontodutycycleconv_0;
  int16_T rtb_conversiontodutycycleconver;

  /* MATLABSystem: '<S1>/M1 Right Connector 2, 3' */
  /*         %% Define output properties */
  /*  Call: int enc_output(int enc) */
  rtb_M1RightConnector23_0 = enc_output(0.0);

  /* SampleTimeMath: '<S2>/TSamp' incorporates:
   *  DataTypeConversion: '<S1>/Cast To Double'
   *  MATLABSystem: '<S1>/M1 Right Connector 2, 3'
   *
   * About '<S2>/TSamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  rtb_TSamp = (real_T)rtb_M1RightConnector23_0 * parte2_P.TSamp_WtEt;

  /* Sum: '<Root>/Sum3' incorporates:
   *  DataTypeConversion: '<S1>/Cast To Single'
   *  DiscreteIntegrator: '<Root>/USat = 70 LSat = -70'
   *  Gain: '<S1>/Gain'
   *  Sum: '<S2>/Diff'
   *  UnitDelay: '<S2>/UD'
   *
   * Block description for '<S2>/Diff':
   *
   *  Add in CPU
   *
   * Block description for '<S2>/UD':
   *
   *  Store in Global RAM
   */
  rtb_Sum3 = parte2_DWork.USat70LSat70_DSTATE - (real32_T)((rtb_TSamp -
    parte2_DWork.UD_DSTATE) * parte2_P.EncCov);

  /* Sum: '<Root>/Sum2' incorporates:
   *  DiscreteIntegrator: '<Root>/Discrete-Time Integrator'
   *  Gain: '<Root>/Gain2'
   */
  rtb_Switch2 = parte2_P.Kp * rtb_Sum3 +
    parte2_DWork.DiscreteTimeIntegrator_DSTATE;

  /* Step: '<Root>/p = 2' incorporates:
   *  Step: '<Root>/FValue = -60'
   */
  tmp = parte2_M->Timing.t[0];
  if (tmp < parte2_P.p2_Time) {
    rtb_conversiontodutycycleconv_1 = parte2_P.p2_Y0;
  } else {
    rtb_conversiontodutycycleconv_1 = parte2_P.p2_YFinal;
  }

  /* End of Step: '<Root>/p = 2' */

  /* Saturate: '<Root>/UpL= 4.8 LoL= -4.8' */
  if (rtb_Switch2 > parte2_P.UpL48LoL48_UpperSat) {
    rtb_Switch2 = parte2_P.UpL48LoL48_UpperSat;
  } else if (rtb_Switch2 < parte2_P.UpL48LoL48_LowerSat) {
    rtb_Switch2 = parte2_P.UpL48LoL48_LowerSat;
  }

  /* End of Saturate: '<Root>/UpL= 4.8 LoL= -4.8' */

  /* Gain: '<S3>/conversion to duty cycle (convert to int) denominator is motor driver voltage' incorporates:
   *  Sum: '<Root>/Sum'
   */
  rtb_conversiontodutycycleconv_1 = floor(255.0 /
    parte2_P.LeftMotorDriverVoffsetPWM6PWM_a * (rtb_conversiontodutycycleconv_1
    + rtb_Switch2));
  if (rtIsNaN(rtb_conversiontodutycycleconv_1) || rtIsInf
      (rtb_conversiontodutycycleconv_1)) {
    rtb_conversiontodutycycleconv_1 = 0.0;
  } else {
    rtb_conversiontodutycycleconv_1 = fmod(rtb_conversiontodutycycleconv_1,
      65536.0);
  }

  rtb_conversiontodutycycleconver = rtb_conversiontodutycycleconv_1 < 0.0 ?
    -(int16_T)(uint16_T)-rtb_conversiontodutycycleconv_1 : (int16_T)(uint16_T)
    rtb_conversiontodutycycleconv_1;

  /* End of Gain: '<S3>/conversion to duty cycle (convert to int) denominator is motor driver voltage' */

  /* Abs: '<S3>/Abs1' */
  if (rtb_conversiontodutycycleconver < 0) {
    rtb_conversiontodutycycleconv_0 = -rtb_conversiontodutycycleconver;
  } else {
    rtb_conversiontodutycycleconv_0 = rtb_conversiontodutycycleconver;
  }

  /* End of Abs: '<S3>/Abs1' */

  /* Sum: '<S3>/Add3' incorporates:
   *  Constant: '<S3>/Constant1'
   */
  rtb_Switch2 = parte2_P.LeftMotorDriverVoffsetPWM6PWM7_ /
    parte2_P.LeftMotorDriverVoffsetPWM6PWM_a * 255.0 + (real_T)
    rtb_conversiontodutycycleconv_0;

  /* Saturate: '<S3>/Saturation 0 to 255' */
  if (rtb_Switch2 > parte2_P.Saturation0to255_UpperSat) {
    rtb_Switch2 = parte2_P.Saturation0to255_UpperSat;
  } else if (rtb_Switch2 < parte2_P.Saturation0to255_LowerSat) {
    rtb_Switch2 = parte2_P.Saturation0to255_LowerSat;
  }

  /* End of Saturate: '<S3>/Saturation 0 to 255' */

  /* Abs: '<S3>/Abs2' incorporates:
   *  Constant: '<S3>/Constant4'
   *  Sum: '<S3>/Add2'
   */
  rtb_Switch2 = fabs(parte2_P.Constant4_Value - rtb_Switch2);

  /* MATLABSystem: '<S3>/PWM' */
  obj = &parte2_DWork.obj_n;
  obj->PWMDriverObj.MW_PWM_HANDLE = MW_PWM_GetHandle(7UL);

  /* Switch: '<S3>/Switch1' incorporates:
   *  Constant: '<S3>/Constant4'
   */
  if (rtb_conversiontodutycycleconver >= parte2_P.Switch1_Threshold) {
    rtb_conversiontodutycycleconv_1 = rtb_Switch2;
  } else {
    rtb_conversiontodutycycleconv_1 = parte2_P.Constant4_Value;
  }

  /* End of Switch: '<S3>/Switch1' */

  /* DataTypeConversion: '<S3>/Data Type  Conversion1' */
  rtb_conversiontodutycycleconv_1 = floor(rtb_conversiontodutycycleconv_1);
  if (rtIsNaN(rtb_conversiontodutycycleconv_1) || rtIsInf
      (rtb_conversiontodutycycleconv_1)) {
    rtb_conversiontodutycycleconv_1 = 0.0;
  } else {
    rtb_conversiontodutycycleconv_1 = fmod(rtb_conversiontodutycycleconv_1,
      256.0);
  }

  /* MATLABSystem: '<S3>/PWM' incorporates:
   *  DataTypeConversion: '<S3>/Data Type  Conversion1'
   */
  MW_PWM_SetDutyCycle(parte2_DWork.obj_n.PWMDriverObj.MW_PWM_HANDLE, (real_T)
                      (rtb_conversiontodutycycleconv_1 < 0.0 ? (int16_T)(uint8_T)
                       -(int8_T)(uint8_T)-rtb_conversiontodutycycleconv_1 :
                       (int16_T)(uint8_T)rtb_conversiontodutycycleconv_1));

  /* MATLABSystem: '<S3>/PWM1' */
  obj = &parte2_DWork.obj;
  obj->PWMDriverObj.MW_PWM_HANDLE = MW_PWM_GetHandle(6UL);

  /* Switch: '<S3>/Switch2' incorporates:
   *  Constant: '<S3>/Constant4'
   */
  if (rtb_conversiontodutycycleconver >= parte2_P.Switch2_Threshold) {
    rtb_Switch2 = parte2_P.Constant4_Value;
  }

  /* End of Switch: '<S3>/Switch2' */

  /* DataTypeConversion: '<S3>/Data Type  Conversion5' */
  rtb_conversiontodutycycleconv_1 = floor(rtb_Switch2);
  if (rtIsNaN(rtb_conversiontodutycycleconv_1) || rtIsInf
      (rtb_conversiontodutycycleconv_1)) {
    rtb_conversiontodutycycleconv_1 = 0.0;
  } else {
    rtb_conversiontodutycycleconv_1 = fmod(rtb_conversiontodutycycleconv_1,
      256.0);
  }

  /* MATLABSystem: '<S3>/PWM1' incorporates:
   *  DataTypeConversion: '<S3>/Data Type  Conversion5'
   */
  MW_PWM_SetDutyCycle(parte2_DWork.obj.PWMDriverObj.MW_PWM_HANDLE, (real_T)
                      (rtb_conversiontodutycycleconv_1 < 0.0 ? (int16_T)(uint8_T)
                       -(int8_T)(uint8_T)-rtb_conversiontodutycycleconv_1 :
                       (int16_T)(uint8_T)rtb_conversiontodutycycleconv_1));

  /* Gain: '<Root>/Gain3' */
  rtb_Gain3 = parte2_P.Ki * rtb_Sum3;

  /* Step: '<Root>/FValue = -60' */
  if (tmp < parte2_P.FValue60_Time) {
    /* Step: '<Root>/FValue = -60' */
    parte2_B.FValue60 = parte2_P.FValue60_Y0;
  } else {
    /* Step: '<Root>/FValue = -60' */
    parte2_B.FValue60 = parte2_P.FValue60_YFinal;
  }

  /* Update for DiscreteIntegrator: '<Root>/Discrete-Time Integrator' */
  parte2_DWork.DiscreteTimeIntegrator_DSTATE +=
    parte2_P.DiscreteTimeIntegrator_gainval * rtb_Gain3;

  /* Update for DiscreteIntegrator: '<Root>/USat = 70 LSat = -70' */
  parte2_DWork.USat70LSat70_DSTATE += parte2_P.USat70LSat70_gainval *
    parte2_B.FValue60;
  if (parte2_DWork.USat70LSat70_DSTATE >= parte2_P.USat70LSat70_UpperSat) {
    parte2_DWork.USat70LSat70_DSTATE = parte2_P.USat70LSat70_UpperSat;
  } else if (parte2_DWork.USat70LSat70_DSTATE <= parte2_P.USat70LSat70_LowerSat)
  {
    parte2_DWork.USat70LSat70_DSTATE = parte2_P.USat70LSat70_LowerSat;
  }

  /* End of Update for DiscreteIntegrator: '<Root>/USat = 70 LSat = -70' */

  /* Update for UnitDelay: '<S2>/UD'
   *
   * Block description for '<S2>/UD':
   *
   *  Store in Global RAM
   */
  parte2_DWork.UD_DSTATE = rtb_TSamp;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  parte2_M->Timing.t[0] =
    ((time_T)(++parte2_M->Timing.clockTick0)) * parte2_M->Timing.stepSize0;

  {
    /* Update absolute timer for sample time: [0.03s, 0.0s] */
    /* The "clockTick1" counts the number of times the code of this task has
     * been executed. The resolution of this integer timer is 0.03, which is the step size
     * of the task. Size of "clockTick1" ensures timer will not overflow during the
     * application lifespan selected.
     */
    parte2_M->Timing.clockTick1++;
  }
}

/* Model initialize function */
void parte2_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  {
    /* Setup solver object */
    rtsiSetSimTimeStepPtr(&parte2_M->solverInfo, &parte2_M->Timing.simTimeStep);
    rtsiSetTPtr(&parte2_M->solverInfo, &rtmGetTPtr(parte2_M));
    rtsiSetStepSizePtr(&parte2_M->solverInfo, &parte2_M->Timing.stepSize0);
    rtsiSetErrorStatusPtr(&parte2_M->solverInfo, (&rtmGetErrorStatus(parte2_M)));
    rtsiSetRTModelPtr(&parte2_M->solverInfo, parte2_M);
  }

  rtsiSetSimTimeStep(&parte2_M->solverInfo, MAJOR_TIME_STEP);
  rtsiSetSolverName(&parte2_M->solverInfo,"FixedStepDiscrete");
  rtmSetTPtr(parte2_M, &parte2_M->Timing.tArray[0]);
  parte2_M->Timing.stepSize0 = 0.03;

  {
    codertarget_arduinobase_interna *obj;

    /* Start for MATLABSystem: '<S1>/M1 Right Connector 2, 3' */
    /*  Constructor */
    /*  Support name-value pair arguments when constructing the object. */
    parte2_DWork.obj_d.matlabCodegenIsDeleted = false;

    /*  Do not generate code for sprintf */
    parte2_DWork.obj_d.isInitialized = 1L;

    /*         %% Define output properties */
    /*    Call: void enc_init(int enc, int pinA, int pinB) */
    enc_init(0.0, 2.0, 3.0);

    /*                  if(obj.PWMTimer> 0) */
    /*                      coder.cinclude('PWMFSelect.h'); */
    /*                      coder.ceval('PWM_Select', obj.PWMFSelect, obj.PWMTimer); */
    /*                      disp('skipp!!!') */
    /*                  end */
    parte2_DWork.obj_d.isSetupComplete = true;

    /* Start for MATLABSystem: '<S3>/PWM' */
    parte2_DWork.obj_n.matlabCodegenIsDeleted = true;
    parte2_DWork.obj_n.isInitialized = 0L;
    parte2_DWork.obj_n.matlabCodegenIsDeleted = false;
    obj = &parte2_DWork.obj_n;
    parte2_DWork.obj_n.isSetupComplete = false;
    parte2_DWork.obj_n.isInitialized = 1L;
    obj->PWMDriverObj.MW_PWM_HANDLE = MW_PWM_Open(7UL, 0.0, 0.0);
    parte2_DWork.obj_n.isSetupComplete = true;

    /* Start for MATLABSystem: '<S3>/PWM1' */
    parte2_DWork.obj.matlabCodegenIsDeleted = true;
    parte2_DWork.obj.isInitialized = 0L;
    parte2_DWork.obj.matlabCodegenIsDeleted = false;
    obj = &parte2_DWork.obj;
    parte2_DWork.obj.isSetupComplete = false;
    parte2_DWork.obj.isInitialized = 1L;
    obj->PWMDriverObj.MW_PWM_HANDLE = MW_PWM_Open(6UL, 0.0, 0.0);
    parte2_DWork.obj.isSetupComplete = true;

    /* InitializeConditions for DiscreteIntegrator: '<Root>/Discrete-Time Integrator' */
    parte2_DWork.DiscreteTimeIntegrator_DSTATE =
      parte2_P.DiscreteTimeIntegrator_IC;

    /* InitializeConditions for DiscreteIntegrator: '<Root>/USat = 70 LSat = -70' */
    parte2_DWork.USat70LSat70_DSTATE = parte2_P.USat70LSat70_IC;

    /* InitializeConditions for UnitDelay: '<S2>/UD'
     *
     * Block description for '<S2>/UD':
     *
     *  Store in Global RAM
     */
    parte2_DWork.UD_DSTATE = parte2_P.DiscreteDerivative_ICPrevScaled;
  }
}

/* Model terminate function */
void parte2_terminate(void)
{
  codertarget_arduinobase_interna *obj;

  /* Terminate for MATLABSystem: '<S1>/M1 Right Connector 2, 3' */
  if (!parte2_DWork.obj_d.matlabCodegenIsDeleted) {
    parte2_DWork.obj_d.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<S1>/M1 Right Connector 2, 3' */

  /* Terminate for MATLABSystem: '<S3>/PWM' */
  obj = &parte2_DWork.obj_n;
  if (!parte2_DWork.obj_n.matlabCodegenIsDeleted) {
    parte2_DWork.obj_n.matlabCodegenIsDeleted = true;
    if ((parte2_DWork.obj_n.isInitialized == 1L) &&
        parte2_DWork.obj_n.isSetupComplete) {
      obj->PWMDriverObj.MW_PWM_HANDLE = MW_PWM_GetHandle(7UL);
      MW_PWM_SetDutyCycle(parte2_DWork.obj_n.PWMDriverObj.MW_PWM_HANDLE, 0.0);
      obj->PWMDriverObj.MW_PWM_HANDLE = MW_PWM_GetHandle(7UL);
      MW_PWM_Close(parte2_DWork.obj_n.PWMDriverObj.MW_PWM_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S3>/PWM' */

  /* Terminate for MATLABSystem: '<S3>/PWM1' */
  obj = &parte2_DWork.obj;
  if (!parte2_DWork.obj.matlabCodegenIsDeleted) {
    parte2_DWork.obj.matlabCodegenIsDeleted = true;
    if ((parte2_DWork.obj.isInitialized == 1L) &&
        parte2_DWork.obj.isSetupComplete) {
      obj->PWMDriverObj.MW_PWM_HANDLE = MW_PWM_GetHandle(6UL);
      MW_PWM_SetDutyCycle(parte2_DWork.obj.PWMDriverObj.MW_PWM_HANDLE, 0.0);
      obj->PWMDriverObj.MW_PWM_HANDLE = MW_PWM_GetHandle(6UL);
      MW_PWM_Close(parte2_DWork.obj.PWMDriverObj.MW_PWM_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<S3>/PWM1' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
