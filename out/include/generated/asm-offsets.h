#ifndef __ASM_OFFSETS_H__
#define __ASM_OFFSETS_H__
/*
 * DO NOT MODIFY.
 *
 * This file was generated by Kbuild
 */

#define TSK_ACTIVE_MM 1416 /* offsetof(struct task_struct, active_mm) */

#define TSK_TI_FLAGS 0 /* offsetof(struct task_struct, thread_info.flags) */
#define TSK_TI_PREEMPT 80 /* offsetof(struct task_struct, thread_info.preempt_count) */
#define TSK_TI_ADDR_LIMIT 64 /* offsetof(struct task_struct, thread_info.addr_limit) */
#define TSK_TI_TTBR0 72 /* offsetof(struct task_struct, thread_info.ttbr0) */
#define TSK_STACK 96 /* offsetof(struct task_struct, stack) */

#define THREAD_CPU_CONTEXT 3648 /* offsetof(struct task_struct, thread.cpu_context) */

#define S_X0 0 /* offsetof(struct pt_regs, regs[0]) */
#define S_X1 8 /* offsetof(struct pt_regs, regs[1]) */
#define S_X2 16 /* offsetof(struct pt_regs, regs[2]) */
#define S_X3 24 /* offsetof(struct pt_regs, regs[3]) */
#define S_X4 32 /* offsetof(struct pt_regs, regs[4]) */
#define S_X5 40 /* offsetof(struct pt_regs, regs[5]) */
#define S_X6 48 /* offsetof(struct pt_regs, regs[6]) */
#define S_X7 56 /* offsetof(struct pt_regs, regs[7]) */
#define S_X8 64 /* offsetof(struct pt_regs, regs[8]) */
#define S_X10 80 /* offsetof(struct pt_regs, regs[10]) */
#define S_X12 96 /* offsetof(struct pt_regs, regs[12]) */
#define S_X14 112 /* offsetof(struct pt_regs, regs[14]) */
#define S_X16 128 /* offsetof(struct pt_regs, regs[16]) */
#define S_X18 144 /* offsetof(struct pt_regs, regs[18]) */
#define S_X20 160 /* offsetof(struct pt_regs, regs[20]) */
#define S_X22 176 /* offsetof(struct pt_regs, regs[22]) */
#define S_X24 192 /* offsetof(struct pt_regs, regs[24]) */
#define S_X26 208 /* offsetof(struct pt_regs, regs[26]) */
#define S_X28 224 /* offsetof(struct pt_regs, regs[28]) */
#define S_LR 240 /* offsetof(struct pt_regs, regs[30]) */
#define S_SP 248 /* offsetof(struct pt_regs, sp) */
#define S_COMPAT_SP 104 /* offsetof(struct pt_regs, compat_sp) */
#define S_PSTATE 264 /* offsetof(struct pt_regs, pstate) */
#define S_PC 256 /* offsetof(struct pt_regs, pc) */
#define S_ORIG_X0 272 /* offsetof(struct pt_regs, orig_x0) */
#define S_SYSCALLNO 280 /* offsetof(struct pt_regs, syscallno) */
#define S_ORIG_ADDR_LIMIT 288 /* offsetof(struct pt_regs, orig_addr_limit) */
#define S_STACKFRAME 304 /* offsetof(struct pt_regs, stackframe) */
#define S_FRAME_SIZE 320 /* sizeof(struct pt_regs) */

#define COMPAT_SIGFRAME_REGS_OFFSET 32 /* offsetof(struct compat_sigframe, uc.uc_mcontext.arm_r0) */
#define COMPAT_RT_SIGFRAME_REGS_OFFSET 160 /* offsetof(struct compat_rt_sigframe, sig.uc.uc_mcontext.arm_r0) */

#define MM_CONTEXT_ID 776 /* offsetof(struct mm_struct, context.id.counter) */

#define VMA_VM_MM 64 /* offsetof(struct vm_area_struct, vm_mm) */
#define VMA_VM_FLAGS 80 /* offsetof(struct vm_area_struct, vm_flags) */

#define VM_EXEC 4 /* VM_EXEC */

#define PAGE_SZ 4096 /* PAGE_SIZE */

#define DMA_BIDIRECTIONAL 0 /* DMA_BIDIRECTIONAL */
#define DMA_TO_DEVICE 1 /* DMA_TO_DEVICE */
#define DMA_FROM_DEVICE 2 /* DMA_FROM_DEVICE */

#define PREEMPT_DISABLE_OFFSET 1 /* PREEMPT_DISABLE_OFFSET */

#define CLOCK_REALTIME 0 /* CLOCK_REALTIME */
#define CLOCK_MONOTONIC 1 /* CLOCK_MONOTONIC */
#define CLOCK_MONOTONIC_RAW 4 /* CLOCK_MONOTONIC_RAW */
#define CLOCK_REALTIME_RES 232 /* offsetof(struct vdso_data, hrtimer_res) */
#define CLOCK_REALTIME_COARSE 5 /* CLOCK_REALTIME_COARSE */
#define CLOCK_MONOTONIC_COARSE 6 /* CLOCK_MONOTONIC_COARSE */
#define CLOCK_COARSE_RES 4000000 /* LOW_RES_NSEC */
#define NSEC_PER_SEC 1000000000 /* NSEC_PER_SEC */

#define VDSO_SEQ 0 /* offsetof(struct vdso_data, seq) */
#define VDSO_CLK_MODE 4 /* offsetof(struct vdso_data, clock_mode) */
#define VDSO_CYCLE_LAST 8 /* offsetof(struct vdso_data, cycle_last) */
#define VDSO_MASK 16 /* offsetof(struct vdso_data, mask) */
#define VDSO_MULT 24 /* offsetof(struct vdso_data, mult) */
#define VDSO_SHIFT 28 /* offsetof(struct vdso_data, shift) */
#define VDSO_REALTIME_SEC 32 /* offsetof(struct vdso_data, basetime[CLOCK_REALTIME].sec) */
#define VDSO_REALTIME_NSEC 40 /* offsetof(struct vdso_data, basetime[CLOCK_REALTIME].nsec) */
#define VDSO_MONO_SEC 48 /* offsetof(struct vdso_data, basetime[CLOCK_MONOTONIC].sec) */
#define VDSO_MONO_NSEC 56 /* offsetof(struct vdso_data, basetime[CLOCK_MONOTONIC].nsec) */
#define VDSO_MONO_RAW_SEC 96 /* offsetof(struct vdso_data, basetime[CLOCK_MONOTONIC_RAW].sec) */
#define VDSO_MONO_RAW_NSEC 104 /* offsetof(struct vdso_data, basetime[CLOCK_MONOTONIC_RAW].nsec) */
#define VDSO_BOOTTIME_SEC 144 /* offsetof(struct vdso_data, basetime[CLOCK_BOOTTIME].sec) */
#define VDSO_BOOTTIME_NSEC 152 /* offsetof(struct vdso_data, basetime[CLOCK_BOOTTIME].nsec) */
#define VDSO_TAI_SEC 208 /* offsetof(struct vdso_data, basetime[CLOCK_TAI].sec) */
#define VDSO_TAI_NSEC 216 /* offsetof(struct vdso_data, basetime[CLOCK_TAI].nsec) */
#define VDSO_RT_COARSE_SEC 112 /* offsetof(struct vdso_data, basetime[CLOCK_REALTIME_COARSE].sec) */
#define VDSO_RT_COARSE_NSEC 120 /* offsetof(struct vdso_data, basetime[CLOCK_REALTIME_COARSE].nsec) */
#define VDSO_MONO_COARSE_SEC 128 /* offsetof(struct vdso_data, basetime[CLOCK_MONOTONIC_COARSE].sec) */
#define VDSO_MONO_COARSE_NSEC 136 /* offsetof(struct vdso_data, basetime[CLOCK_MONOTONIC_COARSE].nsec) */
#define VDSO_TZ_MINWEST 224 /* offsetof(struct vdso_data, tz_minuteswest) */
#define VDSO_TZ_DSTTIME 228 /* offsetof(struct vdso_data, tz_dsttime) */

#define TVAL_TV_SEC 0 /* offsetof(struct timeval, tv_sec) */
#define TVAL_TV_USEC 8 /* offsetof(struct timeval, tv_usec) */
#define TSPEC_TV_SEC 0 /* offsetof(struct timespec, tv_sec) */
#define TSPEC_TV_NSEC 8 /* offsetof(struct timespec, tv_nsec) */

#define TZ_MINWEST 0 /* offsetof(struct timezone, tz_minuteswest) */
#define TZ_DSTTIME 4 /* offsetof(struct timezone, tz_dsttime) */

#define CPU_BOOT_STACK 0 /* offsetof(struct secondary_data, stack) */
#define CPU_BOOT_TASK 8 /* offsetof(struct secondary_data, task) */

#define CPU_SUSPEND_SZ 112 /* sizeof(struct cpu_suspend_ctx) */
#define CPU_CTX_SP 104 /* offsetof(struct cpu_suspend_ctx, sp) */
#define MPIDR_HASH_MASK 0 /* offsetof(struct mpidr_hash, mask) */
#define MPIDR_HASH_SHIFTS 8 /* offsetof(struct mpidr_hash, shift_aff) */
#define SLEEP_STACK_DATA_SYSTEM_REGS 0 /* offsetof(struct sleep_stack_data, system_regs) */
#define SLEEP_STACK_DATA_CALLEE_REGS 112 /* offsetof(struct sleep_stack_data, callee_saved_regs) */
#define ARM_SMCCC_RES_X0_OFFS 0 /* offsetof(struct arm_smccc_res, a0) */
#define ARM_SMCCC_RES_X2_OFFS 16 /* offsetof(struct arm_smccc_res, a2) */
#define ARM_SMCCC_QUIRK_ID_OFFS 0 /* offsetof(struct arm_smccc_quirk, id) */
#define ARM_SMCCC_QUIRK_STATE_OFFS 8 /* offsetof(struct arm_smccc_quirk, state) */

#define HIBERN_PBE_ORIG 8 /* offsetof(struct pbe, orig_address) */
#define HIBERN_PBE_ADDR 0 /* offsetof(struct pbe, address) */
#define HIBERN_PBE_NEXT 16 /* offsetof(struct pbe, next) */
#define ARM64_FTR_SYSVAL 24 /* offsetof(struct arm64_ftr_reg, sys_val) */

#define TRAMP_VALIAS -279198056448 /* TRAMP_VALIAS */
#define PROOT_TSK_CRED 2016 /* offsetof(struct task_struct, cred) */
#define PROOT_CRED_UID 4 /* offsetof(struct cred, uid) */
#define PROOT_CRED_EUID 20 /* offsetof(struct cred, euid) */
#define PROOT_CRED_FSUID 28 /* offsetof(struct cred, fsuid) */
#define PROOT_THREAD_ADDR_LIMIT 64 /* offsetof(struct task_struct, thread_info.addr_limit) */

#endif
