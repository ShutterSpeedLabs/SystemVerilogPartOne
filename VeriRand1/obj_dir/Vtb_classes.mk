# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Make include file with class lists
#
# This file lists generated Verilated files, for including in higher level makefiles.
# See Vtb.mk for the caller.

### Switches...
# C11 constructs required?  0/1 (always on now)
VM_C11 = 1
# Timing enabled?  0/1
VM_TIMING = 1
# Coverage output mode?  0/1 (from --coverage)
VM_COVERAGE = 0
# Parallel builds?  0/1 (from --output-split)
VM_PARALLEL_BUILDS = 0
# Tracing output mode?  0/1 (from --trace/--trace-fst)
VM_TRACE = 0
# Tracing output mode in VCD format?  0/1 (from --trace)
VM_TRACE_VCD = 0
# Tracing output mode in FST format?  0/1 (from --trace-fst)
VM_TRACE_FST = 0

### Object file lists...
# Generated module classes, fast-path, compile with highest optimization
VM_CLASSES_FAST += \
	Vtb \
	Vtb___024root__DepSet_h2b8c5b0a__0 \
	Vtb___024root__DepSet_h5a52eb92__0 \
	Vtb___024root__DepSet_ha183790c__0 \
	Vtb___024root__DepSet_h36ba4aa4__0 \
	Vtb___024unit__03a__03atransaction__Vclpkg__DepSet_h72290d95__0 \
	Vtb___024unit__03a__03atransaction__Vclpkg__DepSet_h1d7d1dca__0 \
	Vtb___024unit__03a__03adriver__Vclpkg__DepSet_h02aa1168__0 \
	Vtb___024unit__03a__03adriver__Vclpkg__DepSet_h0dfa1265__0 \
	Vtb___024unit__03a__03adriver__Vclpkg__DepSet_hf1596be3__0 \
	Vtb___024unit__03a__03agenerator__Vclpkg__DepSet_h007a1d12__0 \
	Vtb___024unit__03a__03agenerator__Vclpkg__DepSet_hf9155ec7__0 \
	Vtb___024unit__03a__03agenerator__Vclpkg__DepSet_h0b4a0e4b__0 \
	Vtb_std__03a__03asemaphore__Vclpkg__DepSet_hdb7ff777__0 \
	Vtb_std__03a__03asemaphore__Vclpkg__DepSet_hc646b468__0 \
	Vtb_std__03a__03aprocess__Vclpkg__DepSet_h5c22f512__0 \
	Vtb_std__03a__03aprocess__Vclpkg__DepSet_h3f81b64b__0 \
	Vtb_std__03a__03amailbox__Tz1__Vclpkg__DepSet_hfcaa653b__0 \
	Vtb_std__03a__03amailbox__Tz1__Vclpkg__DepSet_h9ffa4634__0 \
	Vtb__main \

# Generated module classes, non-fast-path, compile with low/medium optimization
VM_CLASSES_SLOW += \
	Vtb___024root__Slow \
	Vtb___024root__DepSet_ha183790c__0__Slow \
	Vtb___024unit__Slow \
	Vtb___024unit__DepSet_h182099b4__0__Slow \
	Vtb_std__Slow \
	Vtb_std__DepSet_h9d7ee5ba__0__Slow \
	Vtb___024unit__03a__03atransaction__Vclpkg__Slow \
	Vtb___024unit__03a__03atransaction__Vclpkg__DepSet_h1d7d1dca__0__Slow \
	Vtb___024unit__03a__03adriver__Vclpkg__Slow \
	Vtb___024unit__03a__03adriver__Vclpkg__DepSet_h0dfa1265__0__Slow \
	Vtb___024unit__03a__03agenerator__Vclpkg__Slow \
	Vtb___024unit__03a__03agenerator__Vclpkg__DepSet_h0b4a0e4b__0__Slow \
	Vtb_std__03a__03asemaphore__Vclpkg__Slow \
	Vtb_std__03a__03asemaphore__Vclpkg__DepSet_hc646b468__0__Slow \
	Vtb_std__03a__03aprocess__Vclpkg__Slow \
	Vtb_std__03a__03aprocess__Vclpkg__DepSet_h3f81b64b__0__Slow \
	Vtb_std__03a__03amailbox__Tz1__Vclpkg__Slow \
	Vtb_std__03a__03amailbox__Tz1__Vclpkg__DepSet_h9ffa4634__0__Slow \

# Generated support classes, fast-path, compile with highest optimization
VM_SUPPORT_FAST += \

# Generated support classes, non-fast-path, compile with low/medium optimization
VM_SUPPORT_SLOW += \
	Vtb__Syms \

# Global classes, need linked once per executable, fast-path, compile with highest optimization
VM_GLOBAL_FAST += \
	verilated \
	verilated_timing \
	verilated_threads \

# Global classes, need linked once per executable, non-fast-path, compile with low/medium optimization
VM_GLOBAL_SLOW += \


# Verilated -*- Makefile -*-
