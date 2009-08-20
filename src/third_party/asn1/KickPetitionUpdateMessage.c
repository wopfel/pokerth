/*
 * Generated by asn1c-0.9.22 (http://lionet.info/asn1c)
 * From ASN.1 module "POKERTH-PROTOCOL"
 * 	found in "../../../docs/pokerth.asn1"
 */

#include <asn_internal.h>

#include "KickPetitionUpdateMessage.h"

static int
memb_numVotesAgainstKicking_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 9)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_numVotesInFavourOfKicking_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 9)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_numVotesNeededToKick_constraint_1(asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 9)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		_ASN_CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_TYPE_member_t asn_MBR_KickPetitionUpdateMessage_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct KickPetitionUpdateMessage, gameId),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NonZeroId,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"gameId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct KickPetitionUpdateMessage, petitionId),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NonZeroId,
		0,	/* Defer constraints checking to the member type */
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"petitionId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct KickPetitionUpdateMessage, numVotesAgainstKicking),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		memb_numVotesAgainstKicking_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"numVotesAgainstKicking"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct KickPetitionUpdateMessage, numVotesInFavourOfKicking),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		memb_numVotesInFavourOfKicking_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"numVotesInFavourOfKicking"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct KickPetitionUpdateMessage, numVotesNeededToKick),
		(ASN_TAG_CLASS_UNIVERSAL | (2 << 2)),
		0,
		&asn_DEF_NativeInteger,
		memb_numVotesNeededToKick_constraint_1,
		0,	/* PER is not compiled, use -gen-PER */
		0,
		"numVotesNeededToKick"
		},
};
static ber_tlv_tag_t asn_DEF_KickPetitionUpdateMessage_tags_1[] = {
	(ASN_TAG_CLASS_APPLICATION | (69 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_KickPetitionUpdateMessage_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 0, 0, 4 }, /* gameId at 504 */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 1, -1, 3 }, /* petitionId at 505 */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 2, -2, 2 }, /* numVotesAgainstKicking at 506 */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 3, -3, 1 }, /* numVotesInFavourOfKicking at 507 */
    { (ASN_TAG_CLASS_UNIVERSAL | (2 << 2)), 4, -4, 0 } /* numVotesNeededToKick at 508 */
};
static asn_SEQUENCE_specifics_t asn_SPC_KickPetitionUpdateMessage_specs_1 = {
	sizeof(struct KickPetitionUpdateMessage),
	offsetof(struct KickPetitionUpdateMessage, _asn_ctx),
	asn_MAP_KickPetitionUpdateMessage_tag2el_1,
	5,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	4,	/* Start extensions */
	6	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_KickPetitionUpdateMessage = {
	"KickPetitionUpdateMessage",
	"KickPetitionUpdateMessage",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	0, 0,	/* No PER support, use "-gen-PER" to enable */
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_KickPetitionUpdateMessage_tags_1,
	sizeof(asn_DEF_KickPetitionUpdateMessage_tags_1)
		/sizeof(asn_DEF_KickPetitionUpdateMessage_tags_1[0]) - 1, /* 1 */
	asn_DEF_KickPetitionUpdateMessage_tags_1,	/* Same as above */
	sizeof(asn_DEF_KickPetitionUpdateMessage_tags_1)
		/sizeof(asn_DEF_KickPetitionUpdateMessage_tags_1[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_KickPetitionUpdateMessage_1,
	5,	/* Elements count */
	&asn_SPC_KickPetitionUpdateMessage_specs_1	/* Additional specs */
};
