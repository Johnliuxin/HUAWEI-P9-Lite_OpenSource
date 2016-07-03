


#ifndef __NASLPPLCSMSGPROC_H__
#define __NASLPPLCSMSGPROC_H__


/*****************************************************************************
  1 Include Headfile
*****************************************************************************/
#include    "vos.h"


/*****************************************************************************
  1.1 Cplusplus Announce
*****************************************************************************/
#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif
/*****************************************************************************
  #pragma pack(*)    �����ֽڶ��뷽ʽ
*****************************************************************************/
#if (VOS_OS_VER != VOS_WIN32)
#pragma pack(4)
#else
#pragma pack(push, 4)
#endif


/*****************************************************************************
  2 Macro
*****************************************************************************/



/*****************************************************************************
  3 Massage Declare
*****************************************************************************/



/*****************************************************************************
  4 Enum
*****************************************************************************/


/*****************************************************************************
  5 STRUCT
*****************************************************************************/
typedef struct
{

    VOS_UINT32                          bitOpLocationEstimate   :1;
    VOS_UINT32                          bitOpVelocityEstimate   :1;
    VOS_UINT32                          bitOpSpare              :30;
    LOC_COM_COORDINATE_STRU             stLocationEstimate;             /* λ����Ϣ */
    LOC_COM_VELOCITY_STRU               stVelocityEstimate;             /* �ٶ���Ϣ */
}LPP_LCS_LOCATION_INFO_STRU;

/*****************************************************************************
  6 UNION
*****************************************************************************/

/*****************************************************************************
  7 Extern Global Variable
*****************************************************************************/

/*****************************************************************************
  8 Fuction Extern
*****************************************************************************/
extern VOS_VOID NAS_LPP_LcsMsgDistr( VOS_VOID *pRcvMsg );



/*****************************************************************************
  9 OTHERS
*****************************************************************************/


#if (VOS_OS_VER != VOS_WIN32)
#pragma pack()
#else
#pragma pack(pop)
#endif




#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

#endif










































