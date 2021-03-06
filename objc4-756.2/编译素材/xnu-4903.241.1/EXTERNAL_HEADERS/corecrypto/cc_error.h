/*
 *  cc_error.h
 *  corecrypto
 *
 *  Created on 11/14/2017
 *
 *  Copyright (c) 2017 Apple Inc. All rights reserved.
 *
 */

#ifndef _CORECRYPTO_CC_ERROR_H_
#define _CORECRYPTO_CC_ERROR_H_

enum {
    CCERR_OK = 0,

    /* the default error code */
    CCERR_INTERNAL = -1,

    CCERR_INTEGRITY = -2,

    CCERR_DEVICE = -3,
    CCERR_INTERRUPTS = -4,
    CCERR_CRYPTO_CONFIG = -5,
    CCERR_PERMS = -6,
    CCERR_PARAMETER = -7,
    CCERR_MEMORY = -8,
    CCERR_FILEDESC = -9,
    CCERR_OUT_OF_ENTROPY = -10,
    CCERR_ATFORK = -11,
    CCERR_OVERFLOW = -12,

    CCERR_MEMORY_ALLOC_FAIL = -13,

    CCEC_GENERATE_KEY_DEFAULT_ERR = -14,
    CCEC_GENERATE_KEY_TOO_MANY_TRIES = -15,
    CCEC_GENERATE_KEY_MULT_FAIL = -16,
    CCEC_GENERATE_KEY_AFF_FAIL = -17,
    CCEC_GENERATE_KEY_CONSISTENCY = -18,
    CCEC_GENERATE_NOT_ON_CURVE = -19,
    CCEC_GENERATE_NOT_ENOUGH_ENTROPY = -20,
    CCEC_GENERATE_NOT_SUPPORTED = -21,
    CCEC_GENERATE_INVALID_INPUT = -22,

    // Program error: buffer too small or encrypted message is too small
    CCRSA_INVALID_INPUT = -23,
    // Invalid crypto configuration: Hash length versus RSA key size
    CCRSA_INVALID_CONFIG = -24,
    CCRSA_ENCODING_ERROR = -25,
    CCRSA_DECODING_ERROR = -26,

    // The data is invalid (we won't say more for security)
    CCRSA_PRIVATE_OP_ERROR = -27,
    CCRSA_KEY_ERROR = -28,

    // Key generation specific
    CCRSA_KEYGEN_PRIME_NOT_FOUND = -29,
    CCRSA_KEYGEN_PRIME_NEED_NEW_SEED = -30,
    CCRSA_KEYGEN_PRIME_TOO_MANY_ITERATIONS = -31,
    CCRSA_KEYGEN_PRIME_SEED_GENERATION_ERROR = -32,
    CCRSA_KEYGEN_MODULUS_CRT_INV_ERROR = -33,
    CCRSA_KEYGEN_NEXT_PRIME_ERROR = -34,
    CCRSA_KEYGEN_SEED_X_ERROR = -35,
    CCRSA_KEYGEN_SEED_r_ERROR = -36,
    CCRSA_KEYGEN_KEYGEN_CONSISTENCY_FAIL = -37,
    CCRSA_KEYGEN_R1R2_SIZE_ERROR = -38,
    CCRSA_KEYGEN_PQ_DELTA_ERROR = -39,

    CCRSA_FIPS_KEYGEN_DISABLED = -40,

    CCZP_INV_ERROR = -41,
    CCZP_INV_NO_INVERSE = -42,
    CCZP_INV_INVALID_INPUT = -43,

    CCZ_INVALID_INPUT_ERROR = -44,
    CCZ_INVALID_RADIX_ERROR = -45,

    CCDH_ERROR_DEFAULT = -46,
    CCDH_GENERATE_KEY_TOO_MANY_TRIES = -47,
    CCDH_NOT_SUPPORTED_CONFIGURATION = -48,
    CCDH_SAFETY_CHECK = -49,
    CCDH_PUBLIC_KEY_MISSING = -50,
    CCDH_INVALID_DOMAIN_PARAMETER = -51,
    CCDH_INVALID_INPUT = -52,
    CCDH_DOMAIN_PARAMETER_MISMATCH = -53,
    CCDH_GENERATE_KEY_CONSISTENCY = -54,

    CCSRP_ERROR_DEFAULT = -55,
    CCSRP_GENERATE_KEY_TOO_MANY_TRIES = -56,
    CCSRP_NOT_SUPPORTED_CONFIGURATION = -57,
    CCSRP_SAFETY_CHECK = -58,
    CCSRP_PUBLIC_KEY_MISSING = -59,
    CCSRP_INVALID_DOMAIN_PARAMETER = -60,

    CCDRBG_STATUS_ERROR = -61,
    CCDRBG_STATUS_NEED_RESEED = -62,
    CCDRBG_STATUS_PARAM_ERROR = -63,
    // If this value is returned, the caller must abort or panic the process for
    // security reasons. for example in the case of catastrophic error in
    // http://csrc.nist.gov/publications/drafts/800-90/sp800_90a_r1_draft.pdf
    // ccdrbg calls abort() or panic(), if they are available in the system.
    CCDRBG_STATUS_ABORT = -64,

    CCKPRNG_NEED_ENTROPY = -65,
    CCKPRNG_ABORT = -66,

    CCMODE_INVALID_INPUT = -67,
    CCMODE_INVALID_CALL_SEQUENCE = -68,
    CCMODE_INTEGRITY_FAILURE = -69,
    CCMODE_NOT_SUPPORTED = -70,
    CCMODE_INTERNAL_ERROR = -71,

    // Configuration or unexpected issue
    CCPOST_GENERIC_FAILURE = -72,
    CCPOST_LIBRARY_ERROR = -73,
    CCPOST_INTEGRITY_ERROR = -74,
    // Output of the algo is not as expected
    CCPOST_KAT_FAILURE = -75,
};

#define CCDRBG_STATUS_OK CCERR_OK
#define CCKPRNG_OK CCERR_OK

#endif /* _CORECRYPTO_CC_ERROR_H_ */
