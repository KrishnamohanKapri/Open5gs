/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "S1AP-IEs"
 * 	found in "../support/s1ap-r16.4.0/36413-g40.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_S1AP_SONInformation_H_
#define	_S1AP_SONInformation_H_


#include <asn_application.h>

/* Including external dependencies */
#include "S1AP_SONInformationRequest.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum S1AP_SONInformation_PR {
	S1AP_SONInformation_PR_NOTHING,	/* No components present */
	S1AP_SONInformation_PR_sONInformationRequest,
	S1AP_SONInformation_PR_sONInformationReply,
	/* Extensions may appear below */
	S1AP_SONInformation_PR_sONInformation_Extension
} S1AP_SONInformation_PR;

/* Forward declarations */
struct S1AP_SONInformationReply;
struct S1AP_SONInformation_Extension;

/* S1AP_SONInformation */
typedef struct S1AP_SONInformation {
	S1AP_SONInformation_PR present;
	union S1AP_SONInformation_u {
		S1AP_SONInformationRequest_t	 sONInformationRequest;
		struct S1AP_SONInformationReply	*sONInformationReply;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		struct S1AP_SONInformation_Extension	*sONInformation_Extension;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} S1AP_SONInformation_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_S1AP_SONInformation;
extern asn_CHOICE_specifics_t asn_SPC_S1AP_SONInformation_specs_1;
extern asn_TYPE_member_t asn_MBR_S1AP_SONInformation_1[3];
extern asn_per_constraints_t asn_PER_type_S1AP_SONInformation_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _S1AP_SONInformation_H_ */
#include <asn_internal.h>
