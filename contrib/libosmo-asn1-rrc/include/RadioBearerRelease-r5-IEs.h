/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../asn/PDU-definitions.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_RadioBearerRelease_r5_IEs_H_
#define	_RadioBearerRelease_r5_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "ActivationTime.h"
#include "C-RNTI.h"
#include "DSCH-RNTI.h"
#include "H-RNTI.h"
#include "RRC-StateIndicator.h"
#include "UTRAN-DRX-CycleLengthCoefficient.h"
#include "CN-DomainIdentity.h"
#include "URA-Identity.h"
#include "RB-InformationReleaseList.h"
#include "MaxAllowedUL-TX-Power.h"
#include <NULL.h>
#include "CPCH-SetID.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RadioBearerRelease_r5_IEs__dummy_PR {
	RadioBearerRelease_r5_IEs__dummy_PR_NOTHING,	/* No components present */
	RadioBearerRelease_r5_IEs__dummy_PR_fdd,
	RadioBearerRelease_r5_IEs__dummy_PR_tdd
} RadioBearerRelease_r5_IEs__dummy_PR;
typedef enum RadioBearerRelease_r5_IEs__modeSpecificPhysChInfo_PR {
	RadioBearerRelease_r5_IEs__modeSpecificPhysChInfo_PR_NOTHING,	/* No components present */
	RadioBearerRelease_r5_IEs__modeSpecificPhysChInfo_PR_fdd,
	RadioBearerRelease_r5_IEs__modeSpecificPhysChInfo_PR_tdd
} RadioBearerRelease_r5_IEs__modeSpecificPhysChInfo_PR;

/* Forward declarations */
struct IntegrityProtectionModeInfo;
struct CipheringModeInfo;
struct U_RNTI;
struct CN_InformationInfo;
struct RAB_InformationReconfigList;
struct RB_InformationAffectedList_r5;
struct DL_CounterSynchronisationInfo_r5;
struct UL_CommonTransChInfo_r4;
struct UL_DeletedTransChInfoList;
struct UL_AddReconfTransChInfoList;
struct DL_CommonTransChInfo_r4;
struct DL_DeletedTransChInfoList_r5;
struct DL_AddReconfTransChInfoList_r5;
struct FrequencyInfo;
struct UL_ChannelRequirement_r5;
struct DL_HSPDSCH_Information;
struct DL_CommonInformation_r5;
struct DL_InformationPerRL_List_r5;
struct DRAC_StaticInformationList;
struct DL_PDSCH_Information;

/* RadioBearerRelease-r5-IEs */
typedef struct RadioBearerRelease_r5_IEs {
	struct IntegrityProtectionModeInfo	*integrityProtectionModeInfo	/* OPTIONAL */;
	struct CipheringModeInfo	*cipheringModeInfo	/* OPTIONAL */;
	ActivationTime_t	*activationTime	/* OPTIONAL */;
	struct U_RNTI	*new_U_RNTI	/* OPTIONAL */;
	C_RNTI_t	*new_C_RNTI	/* OPTIONAL */;
	DSCH_RNTI_t	*new_DSCH_RNTI	/* OPTIONAL */;
	H_RNTI_t	*new_H_RNTI	/* OPTIONAL */;
	RRC_StateIndicator_t	 rrc_StateIndicator;
	UTRAN_DRX_CycleLengthCoefficient_t	*utran_DRX_CycleLengthCoeff	/* OPTIONAL */;
	struct CN_InformationInfo	*cn_InformationInfo	/* OPTIONAL */;
	CN_DomainIdentity_t	*signallingConnectionRelIndication	/* OPTIONAL */;
	URA_Identity_t	*ura_Identity	/* OPTIONAL */;
	struct RAB_InformationReconfigList	*rab_InformationReconfigList	/* OPTIONAL */;
	RB_InformationReleaseList_t	 rb_InformationReleaseList;
	struct RB_InformationAffectedList_r5	*rb_InformationAffectedList	/* OPTIONAL */;
	struct DL_CounterSynchronisationInfo_r5	*dl_CounterSynchronisationInfo	/* OPTIONAL */;
	struct UL_CommonTransChInfo_r4	*ul_CommonTransChInfo	/* OPTIONAL */;
	struct UL_DeletedTransChInfoList	*ul_deletedTransChInfoList	/* OPTIONAL */;
	struct UL_AddReconfTransChInfoList	*ul_AddReconfTransChInfoList	/* OPTIONAL */;
	struct RadioBearerRelease_r5_IEs__dummy {
		RadioBearerRelease_r5_IEs__dummy_PR present;
		union RadioBearerRelease_r5_IEs__dummy_u {
			struct RadioBearerRelease_r5_IEs__dummy__fdd {
				CPCH_SetID_t	*dummy1	/* OPTIONAL */;
				struct DRAC_StaticInformationList	*dummy2	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} fdd;
			NULL_t	 tdd;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *dummy;
	struct DL_CommonTransChInfo_r4	*dl_CommonTransChInfo	/* OPTIONAL */;
	struct DL_DeletedTransChInfoList_r5	*dl_DeletedTransChInfoList	/* OPTIONAL */;
	struct DL_AddReconfTransChInfoList_r5	*dl_AddReconfTransChInfoList	/* OPTIONAL */;
	struct FrequencyInfo	*frequencyInfo	/* OPTIONAL */;
	MaxAllowedUL_TX_Power_t	*maxAllowedUL_TX_Power	/* OPTIONAL */;
	struct UL_ChannelRequirement_r5	*ul_ChannelRequirement	/* OPTIONAL */;
	struct RadioBearerRelease_r5_IEs__modeSpecificPhysChInfo {
		RadioBearerRelease_r5_IEs__modeSpecificPhysChInfo_PR present;
		union RadioBearerRelease_r5_IEs__modeSpecificPhysChInfo_u {
			struct RadioBearerRelease_r5_IEs__modeSpecificPhysChInfo__fdd {
				struct DL_PDSCH_Information	*dummy	/* OPTIONAL */;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} fdd;
			NULL_t	 tdd;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} modeSpecificPhysChInfo;
	struct DL_HSPDSCH_Information	*dl_HSPDSCH_Information	/* OPTIONAL */;
	struct DL_CommonInformation_r5	*dl_CommonInformation	/* OPTIONAL */;
	struct DL_InformationPerRL_List_r5	*dl_InformationPerRL_List	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RadioBearerRelease_r5_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RadioBearerRelease_r5_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "IntegrityProtectionModeInfo.h"
#include "CipheringModeInfo.h"
#include "U-RNTI.h"
#include "CN-InformationInfo.h"
#include "RAB-InformationReconfigList.h"
#include "RB-InformationAffectedList-r5.h"
#include "DL-CounterSynchronisationInfo-r5.h"
#include "UL-CommonTransChInfo-r4.h"
#include "UL-DeletedTransChInfoList.h"
#include "UL-AddReconfTransChInfoList.h"
#include "DL-CommonTransChInfo-r4.h"
#include "DL-DeletedTransChInfoList-r5.h"
#include "DL-AddReconfTransChInfoList-r5.h"
#include "FrequencyInfo.h"
#include "UL-ChannelRequirement-r5.h"
#include "DL-HSPDSCH-Information.h"
#include "DL-CommonInformation-r5.h"
#include "DL-InformationPerRL-List-r5.h"
#include "DRAC-StaticInformationList.h"
#include "DL-PDSCH-Information.h"

#endif	/* _RadioBearerRelease_r5_IEs_H_ */
#include <asn_internal.h>