/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../support/ngap-r16.4.0/38413-g40.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#ifndef	_NGAP_CNAssistedRANTuning_H_
#define	_NGAP_CNAssistedRANTuning_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NGAP_ExpectedUEBehaviour;
struct NGAP_ProtocolExtensionContainer;

/* NGAP_CNAssistedRANTuning */
typedef struct NGAP_CNAssistedRANTuning {
	struct NGAP_ExpectedUEBehaviour	*expectedUEBehaviour;	/* OPTIONAL */
	struct NGAP_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NGAP_CNAssistedRANTuning_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NGAP_CNAssistedRANTuning;

#ifdef __cplusplus
}
#endif

#endif	/* _NGAP_CNAssistedRANTuning_H_ */
#include <asn_internal.h>
