/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_InterFrequencyMeasurement_r8_H_
#define	_InterFrequencyMeasurement_r8_H_


#include <asn_application.h>

/* Including external dependencies */
#include "InterFreqCellInfoList-r8.h"
#include <NativeInteger.h>
#include "InterFreqReportCriteria-r7.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct InterFreqMeasQuantity;
struct InterFreqReportingQuantity;
struct MeasurementValidity;
struct UE_AutonomousUpdateMode;

/* InterFrequencyMeasurement-r8 */
typedef struct InterFrequencyMeasurement_r8 {
	InterFreqCellInfoList_r8_t	 interFreqCellInfoList;
	struct InterFreqMeasQuantity	*interFreqMeasQuantity	/* OPTIONAL */;
	struct InterFreqReportingQuantity	*interFreqReportingQuantity	/* OPTIONAL */;
	struct MeasurementValidity	*measurementValidity	/* OPTIONAL */;
	struct UE_AutonomousUpdateMode	*interFreqSetUpdate	/* OPTIONAL */;
	long	*adjacentFrequencyIndex	/* OPTIONAL */;
	InterFreqReportCriteria_r7_t	 reportCriteria;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} InterFrequencyMeasurement_r8_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_InterFrequencyMeasurement_r8;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "InterFreqMeasQuantity.h"
#include "InterFreqReportingQuantity.h"
#include "MeasurementValidity.h"
#include "UE-AutonomousUpdateMode.h"

#endif	/* _InterFrequencyMeasurement_r8_H_ */
#include <asn_internal.h>