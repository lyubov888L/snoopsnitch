/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#include "CommonTransChTFS.h"

static asn_per_constraints_t asn_PER_type_tti_constr_2 = {
	{ APC_CONSTRAINED,	 3,  3,  0,  4 }	/* (0..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_tti_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CommonTransChTFS__tti, choice.tti10),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CommonDynamicTF_InfoList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tti10"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CommonTransChTFS__tti, choice.tti20),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CommonDynamicTF_InfoList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tti20"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CommonTransChTFS__tti, choice.tti40),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CommonDynamicTF_InfoList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tti40"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CommonTransChTFS__tti, choice.tti80),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CommonDynamicTF_InfoList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tti80"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CommonTransChTFS__tti, choice.dynamic),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CommonDynamicTF_InfoList_DynamicTTI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dynamic"
		},
};
static asn_TYPE_tag2member_t asn_MAP_tti_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tti10 at 4930 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* tti20 at 4931 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* tti40 at 4932 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* tti80 at 4933 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* dynamic at 4935 */
};
static asn_CHOICE_specifics_t asn_SPC_tti_specs_2 = {
	sizeof(struct CommonTransChTFS__tti),
	offsetof(struct CommonTransChTFS__tti, _asn_ctx),
	offsetof(struct CommonTransChTFS__tti, present),
	sizeof(((struct CommonTransChTFS__tti *)0)->present),
	asn_MAP_tti_tag2el_2,
	5,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_tti_2 = {
	"tti",
	"tti",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_tti_constr_2,
	asn_MBR_tti_2,
	5,	/* Elements count */
	&asn_SPC_tti_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_CommonTransChTFS_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CommonTransChTFS, tti),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_tti_2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"tti"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CommonTransChTFS, semistaticTF_Information),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SemistaticTF_Information,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"semistaticTF-Information"
		},
};
static ber_tlv_tag_t asn_DEF_CommonTransChTFS_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_CommonTransChTFS_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* tti at 4930 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* semistaticTF-Information at 4937 */
};
static asn_SEQUENCE_specifics_t asn_SPC_CommonTransChTFS_specs_1 = {
	sizeof(struct CommonTransChTFS),
	offsetof(struct CommonTransChTFS, _asn_ctx),
	asn_MAP_CommonTransChTFS_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_CommonTransChTFS = {
	"CommonTransChTFS",
	"CommonTransChTFS",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_CommonTransChTFS_tags_1,
	sizeof(asn_DEF_CommonTransChTFS_tags_1)
		/sizeof(asn_DEF_CommonTransChTFS_tags_1[0]), /* 1 */
	asn_DEF_CommonTransChTFS_tags_1,	/* Same as above */
	sizeof(asn_DEF_CommonTransChTFS_tags_1)
		/sizeof(asn_DEF_CommonTransChTFS_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_CommonTransChTFS_1,
	2,	/* Elements count */
	&asn_SPC_CommonTransChTFS_specs_1	/* Additional specs */
};
