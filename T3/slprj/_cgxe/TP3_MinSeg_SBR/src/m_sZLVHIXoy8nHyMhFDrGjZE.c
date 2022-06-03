/* Include files */

#include "modelInterface.h"
#include "m_sZLVHIXoy8nHyMhFDrGjZE.h"

/* Type Definitions */

/* Named Constants */

/* Variable Declarations */

/* Variable Definitions */
static emlrtRSInfo emlrtRSI = { 1,     /* lineNo */
  "soMPU6050Accel",                    /* fcnName */
  "C:\\Users\\Dylan\\OneDrive - Universidade de Coimbra\\UC\\4_Ano\\2_semestre\\CCEE\\TP3\\RASPlib\\blocks\\soMPU6050Accel.m"/* pathName */
};

static emlrtRSInfo b_emlrtRSI = { 1,   /* lineNo */
  "System",                            /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\System.p"/* pathName */
};

static emlrtRSInfo c_emlrtRSI = { 1,   /* lineNo */
  "SystemProp",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemProp.p"/* pathName */
};

static emlrtRSInfo d_emlrtRSI = { 1,   /* lineNo */
  "SystemCore",                        /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"/* pathName */
};

static emlrtRSInfo e_emlrtRSI = { 6,   /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo f_emlrtRSI = { 18,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo g_emlrtRSI = { 20,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo h_emlrtRSI = { 25,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo i_emlrtRSI = { 22,  /* lineNo */
  "",                                  /* fcnName */
  ""                                   /* pathName */
};

static emlrtRSInfo j_emlrtRSI = { 1,   /* lineNo */
  "matlabCodegenHandle",               /* fcnName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\coder\\coder\\+coder\\+internal\\matlabCodegenHandle.p"/* pathName */
};

static emlrtMCInfo emlrtMCI = { 1,     /* lineNo */
  1,                                   /* colNo */
  "SystemCore",                        /* fName */
  "C:\\Program Files\\MATLAB\\R2021b\\toolbox\\shared\\system\\coder\\+matlab\\+system\\+coder\\SystemCore.p"/* pName */
};

/* Function Declarations */
static void cgxe_mdl_start(InstanceStruct_sZLVHIXoy8nHyMhFDrGjZE *moduleInstance);
static void cgxe_mdl_initialize(InstanceStruct_sZLVHIXoy8nHyMhFDrGjZE
  *moduleInstance);
static void cgxe_mdl_outputs(InstanceStruct_sZLVHIXoy8nHyMhFDrGjZE
  *moduleInstance);
static void cgxe_mdl_update(InstanceStruct_sZLVHIXoy8nHyMhFDrGjZE
  *moduleInstance);
static void cgxe_mdl_enable(InstanceStruct_sZLVHIXoy8nHyMhFDrGjZE
  *moduleInstance);
static void cgxe_mdl_disable(InstanceStruct_sZLVHIXoy8nHyMhFDrGjZE
  *moduleInstance);
static void cgxe_mdl_terminate(InstanceStruct_sZLVHIXoy8nHyMhFDrGjZE
  *moduleInstance);
static void mw__internal__system__init__fcn
  (InstanceStruct_sZLVHIXoy8nHyMhFDrGjZE *moduleInstance);
static void mw__internal__system__terminate__fcn
  (InstanceStruct_sZLVHIXoy8nHyMhFDrGjZE *moduleInstance);
static void mw__internal__call__setup(InstanceStruct_sZLVHIXoy8nHyMhFDrGjZE
  *moduleInstance, const emlrtStack *sp);
static soMPU6050Accel *soMPU6050Accel_soMPU6050Accel
  (InstanceStruct_sZLVHIXoy8nHyMhFDrGjZE *moduleInstance, soMPU6050Accel *obj);
static void SystemCore_setup(const emlrtStack *sp, soMPU6050Accel *obj);
static void mw__internal__call__reset(InstanceStruct_sZLVHIXoy8nHyMhFDrGjZE
  *moduleInstance, const emlrtStack *sp);
static void mw__internal__call__step(InstanceStruct_sZLVHIXoy8nHyMhFDrGjZE
  *moduleInstance, const emlrtStack *sp, int16_T *c_y0, int16_T *c_y1, int16_T
  *b_y2);
static const mxArray *emlrt_marshallOut(InstanceStruct_sZLVHIXoy8nHyMhFDrGjZE
  *moduleInstance);
static const mxArray *cgxe_mdl_get_sim_state
  (InstanceStruct_sZLVHIXoy8nHyMhFDrGjZE *moduleInstance);
static void emlrt_marshallIn(InstanceStruct_sZLVHIXoy8nHyMhFDrGjZE
  *moduleInstance, const emlrtStack *sp, const mxArray *u);
static soMPU6050Accel b_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *b_sysobj, const char_T *identifier);
static soMPU6050Accel c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId);
static boolean_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId);
static int32_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId);
static boolean_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *b_sysobj_not_empty, const char_T *identifier);
static void cgxe_mdl_set_sim_state(InstanceStruct_sZLVHIXoy8nHyMhFDrGjZE
  *moduleInstance, const mxArray *st);
static const mxArray *message(const emlrtStack *sp, const mxArray *m1, const
  mxArray *m2, emlrtMCInfo *location);
static const mxArray *getString(const emlrtStack *sp, const mxArray *m1,
  emlrtMCInfo *location);
static void error(const emlrtStack *sp, const mxArray *m, const mxArray *m1,
                  emlrtMCInfo *location);
static boolean_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static int32_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId);
static void init_simulink_io_address(InstanceStruct_sZLVHIXoy8nHyMhFDrGjZE
  *moduleInstance);

/* Function Definitions */
static void cgxe_mdl_start(InstanceStruct_sZLVHIXoy8nHyMhFDrGjZE *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  init_simulink_io_address(moduleInstance);
  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__system__init__fcn(moduleInstance);
  mw__internal__call__setup(moduleInstance, &st);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_initialize(InstanceStruct_sZLVHIXoy8nHyMhFDrGjZE
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__call__reset(moduleInstance, &st);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_outputs(InstanceStruct_sZLVHIXoy8nHyMhFDrGjZE
  *moduleInstance)
{
  emlrtStack st = { NULL,              /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  st.tls = moduleInstance->emlrtRootTLSGlobal;
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__call__step(moduleInstance, &st, moduleInstance->b_y0,
    moduleInstance->b_y1, moduleInstance->y2);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void cgxe_mdl_update(InstanceStruct_sZLVHIXoy8nHyMhFDrGjZE
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_enable(InstanceStruct_sZLVHIXoy8nHyMhFDrGjZE
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_disable(InstanceStruct_sZLVHIXoy8nHyMhFDrGjZE
  *moduleInstance)
{
  (void)moduleInstance;
}

static void cgxe_mdl_terminate(InstanceStruct_sZLVHIXoy8nHyMhFDrGjZE
  *moduleInstance)
{
  cgxertSetGcb(moduleInstance->S, -1, -1);
  mw__internal__system__terminate__fcn(moduleInstance);
  cgxertRestoreGcb(moduleInstance->S, -1, -1);
}

static void mw__internal__system__init__fcn
  (InstanceStruct_sZLVHIXoy8nHyMhFDrGjZE *moduleInstance)
{
  moduleInstance->sysobj.matlabCodegenIsDeleted = true;

  /* Allocate instance data */
  covrtAllocateInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);

  /* Initialize Coverage Information */
  covrtScriptInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX,
                  "C:\\Users\\Dylan\\OneDrive - Universidade de Coimbra\\UC\\4_Ano\\2_semestre\\CCEE\\TP3\\RASPlib\\blocks\\soMPU6050Accel.m",
                  0U, 5U, 16U, 7U, 0U, 0U, 0U, 0U, 0U, 0U, 0U);

  /* Initialize Function Information */
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 1U,
               "soMPU6050Accel_stepImpl", 931, -1, 1535);
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 2U,
               "soMPU6050Accel_getDescriptiveName", 1776, -1, 1852);
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 3U,
               "soMPU6050Accel_isSupportedContext", 1870, -1, 1970);
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 4U,
               "soMPU6050Accel_updateBuildInfo", 2030, -1, 5020);
  covrtFcnInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 0U,
               "soMPU6050Accel_soMPU6050Accel", 9, -1, 23);

  /* Initialize Basic Block Information */
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 3U,
                      1448, -1, 1522);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 2U,
                      1166, -1, 1322);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 1U,
                      1064, -1, 1088);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 4U,
                      1825, -1, 1840);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 5U,
                      1923, -1, 1958);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 15U,
                      4839, -1, 4975);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 14U,
                      4674, -1, 4745);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 13U,
                      4532, -1, 4598);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 12U,
                      4254, -1, 4463);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 11U,
                      3549, -1, 3621);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 10U,
                      3290, -1, 3476);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 9U,
                      3203, -1, 3269);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 8U,
                      2922, -1, 3136);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 7U,
                      2680, -1, 2822);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 6U,
                      2428, -1, 2599);
  covrtBasicBlockInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 0U, 26,
                      -1, 66);

  /* Initialize If Information */
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 0U, 1101, 1125,
              1335, 1385);
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 1U, 1335, 1366,
              -1, 1385);
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 2U, 2087, 2120,
              -1, 5008);
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 3U, 3153, 3202,
              -1, 3273);
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 4U, 3493, 3548,
              -1, 3624);
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 5U, 4480, 4530,
              -1, 4601);
  covrtIfInit(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U, 6U, 4618, 4673,
              -1, 4748);

  /* Initialize MCDC Information */
  /* Initialize For Information */
  /* Initialize While Information */
  /* Initialize Switch Information */
  /* Start callback for coverage engine */
  covrtScriptStart(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0U);
}

static void mw__internal__system__terminate__fcn
  (InstanceStruct_sZLVHIXoy8nHyMhFDrGjZE *moduleInstance)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack d_st;
  emlrtStack st;
  st.site = NULL;
  if (!moduleInstance->sysobj.matlabCodegenIsDeleted) {
    moduleInstance->sysobj.matlabCodegenIsDeleted = true;
    b_st.site = &j_emlrtRSI;
    c_st.site = &d_emlrtRSI;
    if (moduleInstance->sysobj.isInitialized == 1) {
      moduleInstance->sysobj.isInitialized = 2;
      d_st.site = &d_emlrtRSI;
    }
  }

  /* Free instance data */
  covrtFreeInstanceData(moduleInstance->covInst_CONTAINER_BLOCK_INDEX);
}

static void mw__internal__call__setup(InstanceStruct_sZLVHIXoy8nHyMhFDrGjZE
  *moduleInstance, const emlrtStack *sp)
{
  emlrtStack st;
  st.prev = sp;
  st.tls = sp->tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &e_emlrtRSI;
    soMPU6050Accel_soMPU6050Accel(moduleInstance, &moduleInstance->sysobj);
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &f_emlrtRSI;
  SystemCore_setup(&st, &moduleInstance->sysobj);
}

static soMPU6050Accel *soMPU6050Accel_soMPU6050Accel
  (InstanceStruct_sZLVHIXoy8nHyMhFDrGjZE *moduleInstance, soMPU6050Accel *obj)
{
  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  soMPU6050Accel *b_obj;
  b_obj = obj;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0);
  st.site = &emlrtRSI;
  b_st.site = &b_emlrtRSI;
  c_st.site = &c_emlrtRSI;
  b_st.site = &b_emlrtRSI;
  c_st.site = &d_emlrtRSI;
  b_obj->isInitialized = 0;
  st.site = &emlrtRSI;
  b_obj->matlabCodegenIsDeleted = false;
  return b_obj;
}

static void SystemCore_setup(const emlrtStack *sp, soMPU6050Accel *obj)
{
  static const int32_T iv[2] = { 1, 51 };

  static const int32_T iv1[2] = { 1, 51 };

  static const int32_T iv2[2] = { 1, 5 };

  static char_T b_u[51] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'L', 'o', 'c', 'k', 'e', 'd', 'R', 'e', 'l', 'e',
    'a', 's', 'e', 'd', 'C', 'o', 'd', 'e', 'g', 'e', 'n' };

  static char_T d_u[5] = { 's', 'e', 't', 'u', 'p' };

  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T u[51];
  char_T c_u[5];
  st.prev = sp;
  st.tls = sp->tls;
  obj->isSetupComplete = false;
  if (obj->isInitialized != 0) {
    for (i = 0; i < 51; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a((void *)sp, 51, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 51; i++) {
      u[i] = b_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a((void *)sp, 51, m, &u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 5; i++) {
      c_u[i] = d_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a((void *)sp, 5, m, &c_u[0]);
    emlrtAssign(&c_y, m);
    st.site = &d_emlrtRSI;
    error(&st, y, getString(&st, message(&st, b_y, c_y, &emlrtMCI), &emlrtMCI),
          &emlrtMCI);
  }

  obj->isInitialized = 1;

  /*  */
  obj->isSetupComplete = true;
}

static void mw__internal__call__reset(InstanceStruct_sZLVHIXoy8nHyMhFDrGjZE
  *moduleInstance, const emlrtStack *sp)
{
  static const int32_T iv[2] = { 1, 45 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 5 };

  static char_T b_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  static char_T d_u[5] = { 'r', 'e', 's', 'e', 't' };

  emlrtStack b_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  int32_T i;
  char_T u[45];
  char_T c_u[5];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &e_emlrtRSI;
    soMPU6050Accel_soMPU6050Accel(moduleInstance, &moduleInstance->sysobj);
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &g_emlrtRSI;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 5; i++) {
      c_u[i] = d_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&st, 5, m, &c_u[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &d_emlrtRSI;
    error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }
}

static void mw__internal__call__step(InstanceStruct_sZLVHIXoy8nHyMhFDrGjZE
  *moduleInstance, const emlrtStack *sp, int16_T *c_y0, int16_T *c_y1, int16_T
  *b_y2)
{
  static const int32_T iv[2] = { 1, 45 };

  static const int32_T iv1[2] = { 1, 45 };

  static const int32_T iv2[2] = { 1, 4 };

  static char_T b_u[45] = { 'M', 'A', 'T', 'L', 'A', 'B', ':', 's', 'y', 's',
    't', 'e', 'm', ':', 'm', 'e', 't', 'h', 'o', 'd', 'C', 'a', 'l', 'l', 'e',
    'd', 'W', 'h', 'e', 'n', 'R', 'e', 'l', 'e', 'a', 's', 'e', 'd', 'C', 'o',
    'd', 'e', 'g', 'e', 'n' };

  static char_T d_u[4] = { 's', 't', 'e', 'p' };

  emlrtStack b_st;
  emlrtStack c_st;
  emlrtStack st;
  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *m;
  const mxArray *y;
  soMPU6050Accel *obj;
  int32_T i;
  char_T u[45];
  char_T c_u[4];
  st.prev = sp;
  st.tls = sp->tls;
  b_st.prev = &st;
  b_st.tls = st.tls;
  c_st.prev = &b_st;
  c_st.tls = b_st.tls;
  if (!moduleInstance->sysobj_not_empty) {
    st.site = &e_emlrtRSI;
    soMPU6050Accel_soMPU6050Accel(moduleInstance, &moduleInstance->sysobj);
    moduleInstance->sysobj_not_empty = true;
  }

  st.site = &h_emlrtRSI;
  obj = &moduleInstance->sysobj;
  if (moduleInstance->sysobj.isInitialized == 2) {
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    y = NULL;
    m = emlrtCreateCharArray(2, &iv[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &u[0]);
    emlrtAssign(&y, m);
    for (i = 0; i < 45; i++) {
      u[i] = b_u[i];
    }

    b_y = NULL;
    m = emlrtCreateCharArray(2, &iv1[0]);
    emlrtInitCharArrayR2013a(&st, 45, m, &u[0]);
    emlrtAssign(&b_y, m);
    for (i = 0; i < 4; i++) {
      c_u[i] = d_u[i];
    }

    c_y = NULL;
    m = emlrtCreateCharArray(2, &iv2[0]);
    emlrtInitCharArrayR2013a(&st, 4, m, &c_u[0]);
    emlrtAssign(&c_y, m);
    b_st.site = &d_emlrtRSI;
    error(&b_st, y, getString(&b_st, message(&b_st, b_y, c_y, &emlrtMCI),
           &emlrtMCI), &emlrtMCI);
  }

  if (moduleInstance->sysobj.isInitialized != 1) {
    b_st.site = &d_emlrtRSI;
    c_st.site = &d_emlrtRSI;
    SystemCore_setup(&c_st, obj);
  }

  b_st.site = &d_emlrtRSI;
  covrtLogFcn(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 1);
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 1);

  /*  initialize output to a single (float) with the value zero */
  covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 0, false);
  covrtLogIf(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 0, 1, true);

  /*  */
  covrtLogBasicBlock(moduleInstance->covInst_CONTAINER_BLOCK_INDEX, 0, 3);

  /*  pull the data appart */
  *c_y0 = 0;
  *c_y1 = 0;
  *b_y2 = 0;
}

static const mxArray *emlrt_marshallOut(InstanceStruct_sZLVHIXoy8nHyMhFDrGjZE
  *moduleInstance)
{
  static const char_T *sv[3] = { "matlabCodegenIsDeleted", "isInitialized",
    "isSetupComplete" };

  const mxArray *b_y;
  const mxArray *c_y;
  const mxArray *d_y;
  const mxArray *e_y;
  const mxArray *f_y;
  const mxArray *m;
  const mxArray *y;
  int32_T b_u;
  boolean_T u;
  y = NULL;
  emlrtAssign(&y, emlrtCreateCellMatrix(2, 1));
  b_y = NULL;
  emlrtAssign(&b_y, emlrtCreateStructMatrix(1, 1, 3, (const char_T **)&sv[0]));
  u = moduleInstance->sysobj.matlabCodegenIsDeleted;
  c_y = NULL;
  m = emlrtCreateLogicalScalar(u);
  emlrtAssign(&c_y, m);
  emlrtSetFieldR2017b(b_y, 0, (const char_T *)"matlabCodegenIsDeleted", c_y, 0);
  b_u = moduleInstance->sysobj.isInitialized;
  d_y = NULL;
  m = emlrtCreateNumericMatrix(1, 1, mxINT32_CLASS, mxREAL);
  *(int32_T *)emlrtMxGetData(m) = b_u;
  emlrtAssign(&d_y, m);
  emlrtSetFieldR2017b(b_y, 0, (const char_T *)"isInitialized", d_y, 1);
  u = moduleInstance->sysobj.isSetupComplete;
  e_y = NULL;
  m = emlrtCreateLogicalScalar(u);
  emlrtAssign(&e_y, m);
  emlrtSetFieldR2017b(b_y, 0, (const char_T *)"isSetupComplete", e_y, 2);
  emlrtSetCell(y, 0, b_y);
  f_y = NULL;
  m = emlrtCreateLogicalScalar(moduleInstance->sysobj_not_empty);
  emlrtAssign(&f_y, m);
  emlrtSetCell(y, 1, f_y);
  return y;
}

static const mxArray *cgxe_mdl_get_sim_state
  (InstanceStruct_sZLVHIXoy8nHyMhFDrGjZE *moduleInstance)
{
  const mxArray *st;
  st = NULL;
  emlrtAssign(&st, emlrt_marshallOut(moduleInstance));
  return st;
}

static void emlrt_marshallIn(InstanceStruct_sZLVHIXoy8nHyMhFDrGjZE
  *moduleInstance, const emlrtStack *sp, const mxArray *u)
{
  emlrtMsgIdentifier thisId;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  thisId.fIdentifier = "sysobj";
  moduleInstance->sysobj = b_emlrt_marshallIn(sp, emlrtAlias(emlrtGetCell((void *)
    sp, &thisId, u, 0)), "sysobj");
  thisId.fIdentifier = "sysobj_not_empty";
  moduleInstance->sysobj_not_empty = f_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetCell((void *)sp, &thisId, u, 1)), "sysobj_not_empty");
  emlrtDestroyArray(&u);
}

static soMPU6050Accel b_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *b_sysobj, const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  soMPU6050Accel y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = c_emlrt_marshallIn(sp, emlrtAlias(b_sysobj), &thisId);
  emlrtDestroyArray(&b_sysobj);
  return y;
}

static soMPU6050Accel c_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId)
{
  static const int32_T dims = 0;
  static const char_T *fieldNames[3] = { "matlabCodegenIsDeleted",
    "isInitialized", "isSetupComplete" };

  emlrtMsgIdentifier thisId;
  soMPU6050Accel y;
  thisId.fParent = parentId;
  thisId.bParentIsCell = false;
  emlrtCheckStructR2012b((void *)sp, parentId, u, 3, (const char_T **)
    &fieldNames[0], 0U, (void *)&dims);
  thisId.fIdentifier = "matlabCodegenIsDeleted";
  y.matlabCodegenIsDeleted = d_emlrt_marshallIn(sp, emlrtAlias
    (emlrtGetFieldR2017b((void *)sp, u, 0, 0, (const char_T *)
    "matlabCodegenIsDeleted")), &thisId);
  thisId.fIdentifier = "isInitialized";
  y.isInitialized = e_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b((void *)
    sp, u, 0, 1, (const char_T *)"isInitialized")), &thisId);
  thisId.fIdentifier = "isSetupComplete";
  y.isSetupComplete = d_emlrt_marshallIn(sp, emlrtAlias(emlrtGetFieldR2017b
    ((void *)sp, u, 0, 2, (const char_T *)"isSetupComplete")), &thisId);
  emlrtDestroyArray(&u);
  return y;
}

static boolean_T d_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u,
  const emlrtMsgIdentifier *parentId)
{
  boolean_T y;
  y = g_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static int32_T e_emlrt_marshallIn(const emlrtStack *sp, const mxArray *u, const
  emlrtMsgIdentifier *parentId)
{
  int32_T y;
  y = h_emlrt_marshallIn(sp, emlrtAlias(u), parentId);
  emlrtDestroyArray(&u);
  return y;
}

static boolean_T f_emlrt_marshallIn(const emlrtStack *sp, const mxArray
  *b_sysobj_not_empty, const char_T *identifier)
{
  emlrtMsgIdentifier thisId;
  boolean_T y;
  thisId.fIdentifier = (const char_T *)identifier;
  thisId.fParent = NULL;
  thisId.bParentIsCell = false;
  y = d_emlrt_marshallIn(sp, emlrtAlias(b_sysobj_not_empty), &thisId);
  emlrtDestroyArray(&b_sysobj_not_empty);
  return y;
}

static void cgxe_mdl_set_sim_state(InstanceStruct_sZLVHIXoy8nHyMhFDrGjZE
  *moduleInstance, const mxArray *st)
{
  emlrtStack b_st = { NULL,            /* site */
    NULL,                              /* tls */
    NULL                               /* prev */
  };

  b_st.tls = moduleInstance->emlrtRootTLSGlobal;
  emlrt_marshallIn(moduleInstance, &b_st, emlrtAlias(st));
  emlrtDestroyArray(&st);
}

static const mxArray *message(const emlrtStack *sp, const mxArray *m1, const
  mxArray *m2, emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  const mxArray *m;
  pArrays[0] = m1;
  pArrays[1] = m2;
  return emlrtCallMATLABR2012b((void *)sp, 1, &m, 2, &pArrays[0], (const char_T *)
    "message", true, location);
}

static const mxArray *getString(const emlrtStack *sp, const mxArray *m1,
  emlrtMCInfo *location)
{
  const mxArray *m;
  const mxArray *pArray;
  pArray = m1;
  return emlrtCallMATLABR2012b((void *)sp, 1, &m, 1, &pArray, (const char_T *)
    "getString", true, location);
}

static void error(const emlrtStack *sp, const mxArray *m, const mxArray *m1,
                  emlrtMCInfo *location)
{
  const mxArray *pArrays[2];
  pArrays[0] = m;
  pArrays[1] = m1;
  emlrtCallMATLABR2012b((void *)sp, 0, NULL, 2, &pArrays[0], (const char_T *)
                        "error", true, location);
}

static boolean_T g_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  boolean_T ret;
  emlrtCheckBuiltInR2012b((void *)sp, msgId, src, (const char_T *)"logical",
    false, 0U, (void *)&dims);
  ret = *emlrtMxGetLogicals(src);
  emlrtDestroyArray(&src);
  return ret;
}

static int32_T h_emlrt_marshallIn(const emlrtStack *sp, const mxArray *src,
  const emlrtMsgIdentifier *msgId)
{
  static const int32_T dims = 0;
  int32_T ret;
  emlrtCheckBuiltInR2012b((void *)sp, msgId, src, (const char_T *)"int32", false,
    0U, (void *)&dims);
  ret = *(int32_T *)emlrtMxGetData(src);
  emlrtDestroyArray(&src);
  return ret;
}

static void init_simulink_io_address(InstanceStruct_sZLVHIXoy8nHyMhFDrGjZE
  *moduleInstance)
{
  moduleInstance->emlrtRootTLSGlobal = (void *)cgxertGetEMLRTCtx
    (moduleInstance->S);
  moduleInstance->b_y0 = (int16_T *)cgxertGetOutputPortSignal(moduleInstance->S,
    0);
  moduleInstance->b_y1 = (int16_T *)cgxertGetOutputPortSignal(moduleInstance->S,
    1);
  moduleInstance->y2 = (int16_T *)cgxertGetOutputPortSignal(moduleInstance->S, 2);
  moduleInstance->covInst_CONTAINER_BLOCK_INDEX = (covrtInstance *)
    cgxertGetCovrtInstance(moduleInstance->S, -1);
}

/* CGXE Glue Code */
static void mdlOutputs_sZLVHIXoy8nHyMhFDrGjZE(SimStruct *S, int_T tid)
{
  InstanceStruct_sZLVHIXoy8nHyMhFDrGjZE *moduleInstance =
    (InstanceStruct_sZLVHIXoy8nHyMhFDrGjZE *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_outputs(moduleInstance);
}

static void mdlInitialize_sZLVHIXoy8nHyMhFDrGjZE(SimStruct *S)
{
  InstanceStruct_sZLVHIXoy8nHyMhFDrGjZE *moduleInstance =
    (InstanceStruct_sZLVHIXoy8nHyMhFDrGjZE *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_initialize(moduleInstance);
}

static void mdlUpdate_sZLVHIXoy8nHyMhFDrGjZE(SimStruct *S, int_T tid)
{
  InstanceStruct_sZLVHIXoy8nHyMhFDrGjZE *moduleInstance =
    (InstanceStruct_sZLVHIXoy8nHyMhFDrGjZE *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_update(moduleInstance);
}

static mxArray* getSimState_sZLVHIXoy8nHyMhFDrGjZE(SimStruct *S)
{
  mxArray* mxSS;
  InstanceStruct_sZLVHIXoy8nHyMhFDrGjZE *moduleInstance =
    (InstanceStruct_sZLVHIXoy8nHyMhFDrGjZE *)cgxertGetRuntimeInstance(S);
  mxSS = (mxArray *) cgxe_mdl_get_sim_state(moduleInstance);
  return mxSS;
}

static void setSimState_sZLVHIXoy8nHyMhFDrGjZE(SimStruct *S, const mxArray *ss)
{
  InstanceStruct_sZLVHIXoy8nHyMhFDrGjZE *moduleInstance =
    (InstanceStruct_sZLVHIXoy8nHyMhFDrGjZE *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_set_sim_state(moduleInstance, emlrtAlias(ss));
}

static void mdlTerminate_sZLVHIXoy8nHyMhFDrGjZE(SimStruct *S)
{
  InstanceStruct_sZLVHIXoy8nHyMhFDrGjZE *moduleInstance =
    (InstanceStruct_sZLVHIXoy8nHyMhFDrGjZE *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_terminate(moduleInstance);
  free((void *)moduleInstance);
}

static void mdlEnable_sZLVHIXoy8nHyMhFDrGjZE(SimStruct *S)
{
  InstanceStruct_sZLVHIXoy8nHyMhFDrGjZE *moduleInstance =
    (InstanceStruct_sZLVHIXoy8nHyMhFDrGjZE *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_enable(moduleInstance);
}

static void mdlDisable_sZLVHIXoy8nHyMhFDrGjZE(SimStruct *S)
{
  InstanceStruct_sZLVHIXoy8nHyMhFDrGjZE *moduleInstance =
    (InstanceStruct_sZLVHIXoy8nHyMhFDrGjZE *)cgxertGetRuntimeInstance(S);
  cgxe_mdl_disable(moduleInstance);
}

static void mdlStart_sZLVHIXoy8nHyMhFDrGjZE(SimStruct *S)
{
  InstanceStruct_sZLVHIXoy8nHyMhFDrGjZE *moduleInstance =
    (InstanceStruct_sZLVHIXoy8nHyMhFDrGjZE *)calloc(1, sizeof
    (InstanceStruct_sZLVHIXoy8nHyMhFDrGjZE));
  moduleInstance->S = S;
  cgxertSetRuntimeInstance(S, (void *)moduleInstance);
  ssSetmdlOutputs(S, mdlOutputs_sZLVHIXoy8nHyMhFDrGjZE);
  ssSetmdlInitializeConditions(S, mdlInitialize_sZLVHIXoy8nHyMhFDrGjZE);
  ssSetmdlUpdate(S, mdlUpdate_sZLVHIXoy8nHyMhFDrGjZE);
  ssSetmdlTerminate(S, mdlTerminate_sZLVHIXoy8nHyMhFDrGjZE);
  ssSetmdlEnable(S, mdlEnable_sZLVHIXoy8nHyMhFDrGjZE);
  ssSetmdlDisable(S, mdlDisable_sZLVHIXoy8nHyMhFDrGjZE);
  cgxe_mdl_start(moduleInstance);

  {
    uint_T options = ssGetOptions(S);
    options |= SS_OPTION_RUNTIME_EXCEPTION_FREE_CODE;
    ssSetOptions(S, options);
  }
}

static void mdlProcessParameters_sZLVHIXoy8nHyMhFDrGjZE(SimStruct *S)
{
}

void method_dispatcher_sZLVHIXoy8nHyMhFDrGjZE(SimStruct *S, int_T method, void
  *data)
{
  switch (method) {
   case SS_CALL_MDL_START:
    mdlStart_sZLVHIXoy8nHyMhFDrGjZE(S);
    break;

   case SS_CALL_MDL_PROCESS_PARAMETERS:
    mdlProcessParameters_sZLVHIXoy8nHyMhFDrGjZE(S);
    break;

   case SS_CALL_MDL_GET_SIM_STATE:
    *((mxArray**) data) = getSimState_sZLVHIXoy8nHyMhFDrGjZE(S);
    break;

   case SS_CALL_MDL_SET_SIM_STATE:
    setSimState_sZLVHIXoy8nHyMhFDrGjZE(S, (const mxArray *) data);
    break;

   default:
    /* Unhandled method */
    /*
       sf_mex_error_message("Stateflow Internal Error:\n"
       "Error calling method dispatcher for module: sZLVHIXoy8nHyMhFDrGjZE.\n"
       "Can't handle method %d.\n", method);
     */
    break;
  }
}

mxArray *cgxe_sZLVHIXoy8nHyMhFDrGjZE_BuildInfoUpdate(void)
{
  mxArray * mxBIArgs;
  mxArray * elem_1;
  mxArray * elem_2;
  mxArray * elem_3;
  mxArray * elem_4;
  mxArray * elem_5;
  mxArray * elem_6;
  mxArray * elem_7;
  mxArray * elem_8;
  mxArray * elem_9;
  mxArray * elem_10;
  mxBIArgs = mxCreateCellMatrix(1,3);
  elem_1 = mxCreateCellMatrix(1,6);
  elem_2 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,0,elem_2);
  elem_3 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,1,elem_3);
  elem_4 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,2,elem_4);
  elem_5 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,3,elem_5);
  elem_6 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,4,elem_6);
  elem_7 = mxCreateCellMatrix(0,0);
  mxSetCell(elem_1,5,elem_7);
  mxSetCell(mxBIArgs,0,elem_1);
  elem_8 = mxCreateCellMatrix(1,1);
  elem_9 = mxCreateString("soMPU6050Accel");
  mxSetCell(elem_8,0,elem_9);
  mxSetCell(mxBIArgs,1,elem_8);
  elem_10 = mxCreateCellMatrix(1,0);
  mxSetCell(mxBIArgs,2,elem_10);
  return mxBIArgs;
}

mxArray *cgxe_sZLVHIXoy8nHyMhFDrGjZE_fallback_info(void)
{
  const char* fallbackInfoFields[] = { "fallbackType", "incompatiableSymbol" };

  mxArray* fallbackInfoStruct = mxCreateStructMatrix(1, 1, 2, fallbackInfoFields);
  mxArray* fallbackType = mxCreateString("thirdPartyLibs");
  mxArray* incompatibleSymbol = mxCreateString("soMPU6050Accel");
  mxSetFieldByNumber(fallbackInfoStruct, 0, 0, fallbackType);
  mxSetFieldByNumber(fallbackInfoStruct, 0, 1, incompatibleSymbol);
  return fallbackInfoStruct;
}
