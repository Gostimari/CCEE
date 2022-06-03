/* Include files */

#include "TP3_MinSeg_SBR_cgxe.h"
#include "m_sZLVHIXoy8nHyMhFDrGjZE.h"

unsigned int cgxe_TP3_MinSeg_SBR_method_dispatcher(SimStruct* S, int_T method,
  void* data)
{
  if (ssGetChecksum0(S) == 2748787460 &&
      ssGetChecksum1(S) == 4236533339 &&
      ssGetChecksum2(S) == 137733163 &&
      ssGetChecksum3(S) == 3150076319) {
    method_dispatcher_sZLVHIXoy8nHyMhFDrGjZE(S, method, data);
    return 1;
  }

  return 0;
}
