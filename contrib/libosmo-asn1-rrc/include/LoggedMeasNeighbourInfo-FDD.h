/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_LoggedMeasNeighbourInfo_FDD_H_
#define	_LoggedMeasNeighbourInfo_FDD_H_


#include <asn_application.h>

/* Including external dependencies */
#include "PrimaryCPICH-Info.h"
#include "CPICH-RSCP.h"
#include "CPICH-Ec-N0.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* LoggedMeasNeighbourInfo-FDD */
typedef struct LoggedMeasNeighbourInfo_FDD {
	PrimaryCPICH_Info_t	 primaryCPICH_Info;
	CPICH_RSCP_t	 cpich_RSCP;
	CPICH_Ec_N0_t	 cpich_Ec_N0;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} LoggedMeasNeighbourInfo_FDD_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_LoggedMeasNeighbourInfo_FDD;

#ifdef __cplusplus
}
#endif

#endif	/* _LoggedMeasNeighbourInfo_FDD_H_ */
#include <asn_internal.h>