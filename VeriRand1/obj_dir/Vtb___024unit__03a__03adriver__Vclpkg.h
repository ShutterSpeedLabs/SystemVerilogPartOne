// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb.h for the primary calling header

#ifndef VERILATED_VTB___024UNIT__03A__03ADRIVER__VCLPKG_H_
#define VERILATED_VTB___024UNIT__03A__03ADRIVER__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb___024unit__03a__03atransaction;
class Vtb_std__03a__03amailbox__Tz1;


class Vtb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb___024unit__03a__03adriver__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb___024unit__03a__03adriver__Vclpkg(Vtb__Syms* symsp, const char* v__name);
    ~Vtb___024unit__03a__03adriver__Vclpkg();
    VL_UNCOPYABLE(Vtb___024unit__03a__03adriver__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


class Vtb__Syms;

class Vtb___024unit__03a__03adriver : public VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlEvent __PVT__next;
    VlClassRef<Vtb_std__03a__03amailbox__Tz1> __PVT__mbx;
    VlClassRef<Vtb___024unit__03a__03atransaction> __PVT__dataIn;
    VlCoroutine __VnoInFunc_run(Vtb__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vtb__Syms* __restrict vlSymsp);
  public:
    Vtb___024unit__03a__03adriver(Vtb__Syms* __restrict vlSymsp, VlClassRef<Vtb_std__03a__03amailbox__Tz1> mbx);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtb___024unit__03a__03adriver();
};

std::string VL_TO_STRING(const VlClassRef<Vtb___024unit__03a__03adriver>& obj);

#endif  // guard
