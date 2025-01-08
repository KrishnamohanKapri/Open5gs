/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../support/ngap-r16.4.0/38413-g40.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_NGAP_DRBsSubjectToEarlyStatusTransfer_Item_H_
#define	_NGAP_DRBsSubjectToEarlyStatusTransfer_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NGAP_DRB-ID.h"
#include "NGAP_DRBStatusDL.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NGAP_ProtocolExtensionContainer;

/* NGAP_DRBsSubjectToEarlyStatusTransfer-Item */
typedef struct NGAP_DRBsSubjectToEarlyStatusTransfer_Item {
	NGAP_DRB_ID_t	 dRB_ID;
	NGAP_DRBStatusDL_t	 firstDLCOUNT;
	struct NGAP_ProtocolExtensionContainer	*iE_Extension;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_DRBsSubjectToEarlyStatusTransfer_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_DRBsSubjectToEarlyStatusTransfer_Item;
extern asn_SEQUENCE_specifics_t asn_SPC_NGAP_DRBsSubjectToEarlyStatusTransfer_Item_specs_1;
extern asn_TYPE_member_t asn_MBR_NGAP_DRBsSubjectToEarlyStatusTransfer_Item_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_DRBsSubjectToEarlyStatusTransfer_Item_H_ */
#include <asn_internal.h>
