// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb.h for the primary calling header

#ifndef VERILATED_VTB___024UNIT__03A__03AGENERATOR__VCLPKG_H_
#define VERILATED_VTB___024UNIT__03A__03AGENERATOR__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb___024unit__03a__03agenerator__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb___024unit__03a__03agenerator__Vclpkg(Vtb__Syms* symsp, const char* v__name);
    ~Vtb___024unit__03a__03agenerator__Vclpkg();
    VL_UNCOPYABLE(Vtb___024unit__03a__03agenerator__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtb__Syms;

class Vtb___024unit__03a__03agenerator : public VlClass {
  public:

    // DESIGN SPECIFIC STATE
    CData/*3:0*/ __PVT__a;
    CData/*3:0*/ __PVT__b;

    // INTERNAL VARIABLES
    VlRNG __Vm_rng;
    void __VnoInFunc_randomize(Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn);
  private:
    void _ctor_var_reset(Vtb__Syms* __restrict vlSymsp);
  public:
    Vtb___024unit__03a__03agenerator(Vtb__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtb___024unit__03a__03agenerator();
};

std::string VL_TO_STRING(const VlClassRef<Vtb___024unit__03a__03agenerator>& obj);

#endif  // guard
