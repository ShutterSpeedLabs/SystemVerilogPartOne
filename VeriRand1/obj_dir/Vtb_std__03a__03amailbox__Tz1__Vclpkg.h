// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb.h for the primary calling header

#ifndef VERILATED_VTB_STD__03A__03AMAILBOX__TZ1__VCLPKG_H_
#define VERILATED_VTB_STD__03A__03AMAILBOX__TZ1__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb___024unit__03a__03atransaction;


class Vtb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_std__03a__03amailbox__Tz1__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_std__03a__03amailbox__Tz1__Vclpkg(Vtb__Syms* symsp, const char* v__name);
    ~Vtb_std__03a__03amailbox__Tz1__Vclpkg();
    VL_UNCOPYABLE(Vtb_std__03a__03amailbox__Tz1__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtb__Syms;

class Vtb_std__03a__03amailbox__Tz1 : public VlClass {
  public:

    // DESIGN SPECIFIC STATE
    IData/*31:0*/ __PVT__m_bound;
    VlQueue<VlClassRef<Vtb___024unit__03a__03atransaction>> __PVT__m_queue;
    VlCoroutine __VnoInFunc_get(Vtb__Syms* __restrict vlSymsp, VlClassRef<Vtb___024unit__03a__03atransaction> &message);
    void __VnoInFunc_num(Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ &num__Vfuncrtn);
    VlCoroutine __VnoInFunc_peek(Vtb__Syms* __restrict vlSymsp, VlClassRef<Vtb___024unit__03a__03atransaction> &message);
    VlCoroutine __VnoInFunc_put(Vtb__Syms* __restrict vlSymsp, VlClassRef<Vtb___024unit__03a__03atransaction> message);
    void __VnoInFunc_try_get(Vtb__Syms* __restrict vlSymsp, VlClassRef<Vtb___024unit__03a__03atransaction> &message, IData/*31:0*/ &try_get__Vfuncrtn);
    void __VnoInFunc_try_peek(Vtb__Syms* __restrict vlSymsp, VlClassRef<Vtb___024unit__03a__03atransaction> &message, IData/*31:0*/ &try_peek__Vfuncrtn);
    void __VnoInFunc_try_put(Vtb__Syms* __restrict vlSymsp, VlClassRef<Vtb___024unit__03a__03atransaction> message, IData/*31:0*/ &try_put__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtb__Syms* __restrict vlSymsp);
  public:
    Vtb_std__03a__03amailbox__Tz1(Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ bound);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtb_std__03a__03amailbox__Tz1();
};

std::string VL_TO_STRING(const VlClassRef<Vtb_std__03a__03amailbox__Tz1>& obj);

#endif  // guard
