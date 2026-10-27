#include <stdint.h>

/* Link-only stubs for optional NativeUfs observation/verification hooks.
 * The real VerifiedRoot policy bundle is not part of this bring-up archive. */
uint64_t boot_progress_poll(void) { return 0; }
volatile uint64_t umi_early_trace;
volatile uint64_t umi_trace_console_address;
unsigned char verified_root_key[32];
void *verified_root_policies;
unsigned int verified_root_policy_count;

int vr_open(void *a, void *b, void *c, void *d) { (void)a; (void)b; (void)c; (void)d; return -1; }
int vr_verify_block(void *a, void *b, void *c, void *d) { (void)a; (void)b; (void)c; (void)d; return -1; }
int vr_xnu_crypto(void *a, void *b, void *c, void *d) { (void)a; (void)b; (void)c; (void)d; return -1; }

int sheng_pmgr_run(void *a, void *b, void *c) { (void)a; (void)b; (void)c; return 0; }
