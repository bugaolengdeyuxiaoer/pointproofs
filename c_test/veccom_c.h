/* Text to put at the beginning of the generated file. Testing */

/* Warning, this file is autogenerated by cbindgen. Don't modify this manually. */

#include <stdarg.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>

typedef struct vcp_value {
  const uint8_t *buf;
  size_t buflen;
} vcp_value;

typedef struct vcp_params {
  void *prover;
  void *verifier;
} vcp_params;

/**
 * # Safety
 */
void *vcp_commit(const void *prover, const vcp_value *values, size_t nvalues);

/**
 * # Safety
 */
void *vcp_commit_update(const void *prover,
                        const void *com,
                        size_t changed_idx,
                        vcp_value val_old,
                        vcp_value val_new);

/**
 * # Safety
 */
void vcp_free_commit(void *commit);

/**
 * # Safety
 */
void vcp_free_proof(void *proof);

/**
 * # Safety
 */
void vcp_free_prover_params(void *pp);

/**
 * # Safety
 */
void vcp_free_verifier_params(void *vp);

/**
 * # Safety
 */
vcp_params vcp_paramgen(const uint8_t *seedbuf, size_t seedlen, uint8_t ciphersuite, size_t n);

/**
 * # Safety
 */
uint8_t *vcp_pp_serial(const void *prover);

/**
 * # Safety
 */
void *vcp_proof_update(const void *prover,
                       const void *proof,
                       size_t idx,
                       size_t changed_idx,
                       vcp_value val_old,
                       vcp_value val_new);

/**
 * # Safety
 */
void *vcp_prove(const void *prover, const vcp_value *values, size_t nvalues, size_t idx);

/**
 * # Safety
 */
bool vcp_verify(const void *verifier,
                const void *com,
                const void *proof,
                vcp_value val,
                size_t idx);

/**
 * # Safety
 */
uint8_t *vcp_vp_serial(const void *verifier);