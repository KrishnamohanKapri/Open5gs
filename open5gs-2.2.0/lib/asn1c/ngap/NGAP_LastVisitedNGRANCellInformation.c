/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-IEs"
 * 	found in "../support/ngap-r16.4.0/38413-g40.asn"
 * 	`asn1c -pdu=all -fcompound-names -findirect-choice -fno-include-deps -no-gen-BER -no-gen-XER -no-gen-OER -no-gen-UPER`
 */

#include "NGAP_LastVisitedNGRANCellInformation.h"

#include "NGAP_Cause.h"
#include "NGAP_ProtocolExtensionContainer.h"
asn_TYPE_member_t asn_MBR_NGAP_LastVisitedNGRANCellInformation_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NGAP_LastVisitedNGRANCellInformation, globalCellID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NGAP_NGRAN_CGI,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"globalCellID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NGAP_LastVisitedNGRANCellInformation, cellType),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_CellType,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"cellType"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NGAP_LastVisitedNGRANCellInformation, timeUEStayedInCell),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_TimeUEStayedInCell,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"timeUEStayedInCell"
		},
	{ ATF_POINTER, 3, offsetof(struct NGAP_LastVisitedNGRANCellInformation, timeUEStayedInCellEnhancedGranularity),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_TimeUEStayedInCellEnhancedGranularity,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"timeUEStayedInCellEnhancedGranularity"
		},
	{ ATF_POINTER, 2, offsetof(struct NGAP_LastVisitedNGRANCellInformation, hOCauseValue),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NGAP_Cause,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"hOCauseValue"
		},
	{ ATF_POINTER, 1, offsetof(struct NGAP_LastVisitedNGRANCellInformation, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NGAP_ProtocolExtensionContainer_9571P111,
		0,
		{
#if !defined(ASN_DISABLE_OER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
			0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
			0
		},
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_NGAP_LastVisitedNGRANCellInformation_oms_1[] = { 3, 4, 5 };
static const ber_tlv_tag_t asn_DEF_NGAP_LastVisitedNGRANCellInformation_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NGAP_LastVisitedNGRANCellInformation_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* globalCellID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cellType */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* timeUEStayedInCell */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* timeUEStayedInCellEnhancedGranularity */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* hOCauseValue */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_NGAP_LastVisitedNGRANCellInformation_specs_1 = {
	sizeof(struct NGAP_LastVisitedNGRANCellInformation),
	offsetof(struct NGAP_LastVisitedNGRANCellInformation, _asn_ctx),
	asn_MAP_NGAP_LastVisitedNGRANCellInformation_tag2el_1,
	6,	/* Count of tags in the map */
	asn_MAP_NGAP_LastVisitedNGRANCellInformation_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NGAP_LastVisitedNGRANCellInformation = {
	"LastVisitedNGRANCellInformation",
	"LastVisitedNGRANCellInformation",
	&asn_OP_SEQUENCE,
	asn_DEF_NGAP_LastVisitedNGRANCellInformation_tags_1,
	sizeof(asn_DEF_NGAP_LastVisitedNGRANCellInformation_tags_1)
		/sizeof(asn_DEF_NGAP_LastVisitedNGRANCellInformation_tags_1[0]), /* 1 */
	asn_DEF_NGAP_LastVisitedNGRANCellInformation_tags_1,	/* Same as above */
	sizeof(asn_DEF_NGAP_LastVisitedNGRANCellInformation_tags_1)
		/sizeof(asn_DEF_NGAP_LastVisitedNGRANCellInformation_tags_1[0]), /* 1 */
	{
#if !defined(ASN_DISABLE_OER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_OER_SUPPORT) */
#if !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT)
		0,
#endif  /* !defined(ASN_DISABLE_UPER_SUPPORT) || !defined(ASN_DISABLE_APER_SUPPORT) */
		SEQUENCE_constraint
	},
	asn_MBR_NGAP_LastVisitedNGRANCellInformation_1,
	6,	/* Elements count */
	&asn_SPC_NGAP_LastVisitedNGRANCellInformation_specs_1	/* Additional specs */
};
