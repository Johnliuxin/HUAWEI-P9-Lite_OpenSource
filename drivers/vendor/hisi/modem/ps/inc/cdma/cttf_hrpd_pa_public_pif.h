/** ****************************************************************************

                    Huawei Technologies Sweden AB (C), 2001-2016

 ********************************************************************************
 * @author    Automatically generated by DAISY
 * @version
 * @date      2016-01-08 16:56:21
 * @file
 * @brief
 * Contains HRPD Packet Application public definations.
 * @copyright Huawei Technologies Sweden AB
 *******************************************************************************/
#ifndef CTTF_HRPD_PA_PUBLIC_PIF_H
#define CTTF_HRPD_PA_PUBLIC_PIF_H

/*******************************************************************************
 1. Other files included
*******************************************************************************/

#include "vos.h"

#ifdef __cplusplus
#if __cplusplus
    extern "C" {
#endif /* __cpluscplus */
#endif /* __cpluscplus */
#pragma pack(4)

/*******************************************************************************
 2. Macro definitions
*******************************************************************************/

/**
 * max number of DPA RLP
 */
#define CTTF_HRPD_PA_MAX_DPA_RLP                            ( 2 )
/**
 * max reservation labels number
 */
#define CTTF_HRPD_PA_MAX_NUM_RESERV_LABELS                  ( 16 )
/**
 * max streams number
 */
#define CTTF_HRPD_PA_MAX_NUM_STREAMS                        ( 4 )

/*******************************************************************************
 3. Enumerations declarations
*******************************************************************************/

/** ****************************************************************************
 * Name        : CTTF_HRPD_PA_ACCESS_AUTH_FAIL_REASON_ENUM_UINT8
 *
 * Description : list access auth failure reason
 *******************************************************************************/
enum CTTF_HRPD_PA_ACCESS_AUTH_FAIL_REASON_ENUM
{
    CTTF_HRPD_PA_ACCESS_AUTH_REJECT                         = 0x00, /**< AN returns an indication of CHAP access authentication failure to the AT */
    CTTF_HRPD_PA_ACCESS_AUTH_FAIL_REASON_ENUM_BUTT          = 0x01 /**< any other reason except above */
};
typedef VOS_UINT8 CTTF_HRPD_PA_ACCESS_AUTH_FAIL_REASON_ENUM_UINT8;

/** ****************************************************************************
 * Name        : CTTF_HRPD_PA_APPLICATION_TYPE_ENUM_UINT16
 *
 * Description : Application types that can be bound to a stream. Note that we
 * do not support CIRCUIT SERVICE NOTIFICATION application type.
 *******************************************************************************/
enum CTTF_HRPD_PA_APPLICATION_TYPE_ENUM
{
    CTTF_HRPD_PA_APPLICATION_TYPE_DEFAULT_SIGNALING                             = 0x0000,
    CTTF_HRPD_PA_APPLICATION_TYPE_DEFAULT_PACKET_RN                             = 0x0001,
    CTTF_HRPD_PA_APPLICATION_TYPE_DEFAULT_PACKET_SN                             = 0x0002,
    CTTF_HRPD_PA_APPLICATION_TYPE_TEST                                          = 0x0003,
    CTTF_HRPD_PA_APPLICATION_TYPE_MULTIFLOW_PACKET_RN                           = 0x0004,
    CTTF_HRPD_PA_APPLICATION_TYPE_MULTIFLOW_PACKET_SN                           = 0x0005,
    CTTF_HRPD_PA_APPLICATION_TYPE_3G1X_CIRCUIT_SERVICE_NOTIFICATION             = 0x0006,
    CTTF_HRPD_PA_APPLICATION_TYPE_RESERVED                                      = 0x0007,
    CTTF_HRPD_PA_APPLICATION_TYPE_ENHANCED_MULTIFLOW_PACKET_RN                  = 0x0008,
    CTTF_HRPD_PA_APPLICATION_TYPE_ENHANCED_MULTIFLOW_PACKET_SN                  = 0x0009,
    CTTF_HRPD_PA_APPLICATION_TYPE_ENHANCED_TEST                                 = 0x000A,
    CTTF_HRPD_PA_APPLICATION_TYPE_ENUM_BUTT                                     = 0x000B
};
typedef VOS_UINT16 CTTF_HRPD_PA_APPLICATION_TYPE_ENUM_UINT16;

/*******************************************************************************
 4. Message Header declaration
*******************************************************************************/

/*******************************************************************************
 5. Message declaration
*******************************************************************************/

/*******************************************************************************
 6. STRUCT and UNION declaration
*******************************************************************************/

/*******************************************************************************
 7. OTHER declarations
*******************************************************************************/

/*******************************************************************************
 8. Global  declaration
*******************************************************************************/

/*******************************************************************************
 9. Function declarations
*******************************************************************************/

#if ((VOS_OS_VER == VOS_WIN32) || (VOS_OS_VER == VOS_NUCLEUS))
#pragma pack()
#else
#pragma pack(0)
#endif

#ifdef __cplusplus
#if __cplusplus
}
#endif /* __cpluscplus */
#endif /* __cpluscplus */

#endif