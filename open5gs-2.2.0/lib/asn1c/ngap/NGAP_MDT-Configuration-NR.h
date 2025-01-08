/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../support/ngap-r16.4.0/38413-g40.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_NGAP_MDT_Configuration_NR_H_
#define	_NGAP_MDT_Configuration_NR_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NGAP_MDT-Activation.h"
#include "NGAP_AreaScopeOfMDT-NR.h"
#include "NGAP_MDTModeNr.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NGAP_MDTPLMNList;
struct NGAP_ProtocolExtensionContainer;

/* NGAP_MDT-Configuration-NR */
typedef struct NGAP_MDT_Configuration_NR {
	NGAP_MDT_Activation_t	 mdt_Activation;
	NGAP_AreaScopeOfMDT_NR_t	 areaScopeOfMDT;
	NGAP_MDTModeNr_t	 mDTModeNr;
	struct NGAP_MDTPLMNList	*signallingBasedMDTPLMNList;	/* OPTIONAL */
	struct NGAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_MDT_Configuration_NR_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_MDT_Configuration_NR;
extern asn_SEQUENCE_specifics_t asn_SPC_NGAP_MDT_Configuration_NR_specs_1;
extern asn_TYPE_member_t asn_MBR_NGAP_MDT_Configuration_NR_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_MDT_Configuration_NR_H_ */
#include <asn_internal.h>
