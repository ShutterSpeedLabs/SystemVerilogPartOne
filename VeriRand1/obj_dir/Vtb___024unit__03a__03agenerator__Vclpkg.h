// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb.h for the primary calling header

#ifndef VERILATED_VTB___024UNIT__03A__03AGENERATOR__VCLPKG_H_
#define VERILATED_VTB___024UNIT__03A__03AGENERATOR__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb___024unit__03a__03atransaction;
class Vtb_std__03a__03amailbox__Tz1;


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
    IData/*31:0*/ __PVT__status;
    VlClassRef<Vtb___024unit__03a__03atransaction> __PVT__t;
    VlClassRef<Vtb_std__03a__03amailbox__Tz1> __PVT__mbx;
    VlCoroutine __VnoInFunc_run(Vtb__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vtb__Syms* __restrict vlSymsp);
  public:
    Vtb___024unit__03a__03agenerator(Vtb__Syms* __restrict vlSymsp, VlClassRef<Vtb_std__03a__03amailbox__Tz1> mbx);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtb___024unit__03a__03agenerator();
};

std::string VL_TO_STRING(const VlClassRef<Vtb___024unit__03a__03agenerator>& obj);

#endif  // guard
