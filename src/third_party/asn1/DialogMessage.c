/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 */

#include <asn_internal.h>

#include "DialogMessage.h"

static int
memb_notificationText_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const UTF8String_t *st = (const UTF8String_t *)sptr;
	size_t size;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = UTF8String_length(st);
	if((ssize_t)size < 0) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: UTF-8: broken encoding (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if((size >= 1 && size <= 128)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_TYPE_member_t asn_MBR_DialogMessage_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct DialogMessage, notificationText),
		(ASN_TAG_CLASS_UNIVERSAL | (12 << 2)),
		0,
		&asn_DEF_UTF8String,
		memb_notificationText_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"notificationText"
		},
};
static ber_tlv_tag_t asn_DEF_DialogMessage_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (131 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_DialogMessage_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (12 << 2)), 0, 0, 0 } /* notificationText at 531 */
};
static asn_SEQUENCE_specifics_t asn_SPC_DialogMessage_specs_1 = {
	sizeof(struct DialogMessage),
	offsetof(struct DialogMessage, _asn_ctx),
	asn_MAP_DialogMessage_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	0,	/* Start extensions */
	2	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_DialogMessage = {
	"DialogMessage",
	"DialogMessage",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_DialogMessage_tags_1,
	sizeof(asn_DEF_DialogMessage_tags_1)
		/sizeof(asn_DEF_DialogMessage_tags_1[0]) - 1, /* 1 */
	asn_DEF_DialogMessage_tags_1,	/* Same as above */
	sizeof(asn_DEF_DialogMessage_tags_1)
		/sizeof(asn_DEF_DialogMessage_tags_1[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_DialogMessage_1,
	1,	/* Elements count */
	&asn_SPC_DialogMessage_specs_1	/* Additional specs */
};

