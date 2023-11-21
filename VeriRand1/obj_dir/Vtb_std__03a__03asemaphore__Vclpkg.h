// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb.h for the primary calling header

#ifndef VERILATED_VTB_STD__03A__03ASEMAPHORE__VCLPKG_H_
#define VERILATED_VTB_STD__03A__03ASEMAPHORE__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_std__03a__03asemaphore__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_std__03a__03asemaphore__Vclpkg(Vtb__Syms* symsp, const char* v__name);
    ~Vtb_std__03a__03asemaphore__Vclpkg();
    VL_UNCOPYABLE(Vtb_std__03a__03asemaphore__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtb__Syms;

class Vtb_std__03a__03asemaphore : public VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_keyCount;
    VlCoroutine __VnoInFunc_get(Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    void __VnoInFunc_put(Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    void __VnoInFunc_try_get(Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount, IData/*31:0*/ &try_get__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtb__Syms* __restrict vlSymsp);
  public:
    Vtb_std__03a__03asemaphore(Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ keyCount);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtb_std__03a__03asemaphore();
};

std::string VL_TO_STRING(const VlClassRef<Vtb_std__03a__03asemaphore>& obj);

#endif  // guard
