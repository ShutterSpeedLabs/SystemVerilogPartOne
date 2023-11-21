// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb.h for the primary calling header

#ifndef VERILATED_VTB___024UNIT__03A__03ATRANSACTION__VCLPKG_H_
#define VERILATED_VTB___024UNIT__03A__03ATRANSACTION__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb___024unit__03a__03atransaction__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb___024unit__03a__03atransaction__Vclpkg(Vtb__Syms* symsp, const char* v__name);
    ~Vtb___024unit__03a__03atransaction__Vclpkg();
    VL_UNCOPYABLE(Vtb___024unit__03a__03atransaction__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtb__Syms;

class Vtb___024unit__03a__03atransaction : public VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*7:0*/ __PVT__a;
    CData/*7:0*/ __PVT__b;
    CData/*0:0*/ __PVT__wr;

    // INTERNAL VARIABLES
    VlRNG __Vm_rng;
    void __VnoInFunc_randomize(Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtb__Syms* __restrict vlSymsp);
  public:
    Vtb___024unit__03a__03atransaction(Vtb__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtb___024unit__03a__03atransaction();
};

std::string VL_TO_STRING(const VlClassRef<Vtb___024unit__03a__03atransaction>& obj);

#endif  // guard
