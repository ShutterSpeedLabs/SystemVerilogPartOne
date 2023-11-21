// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb.h for the primary calling header

#ifndef VERILATED_VTB___024ROOT_H_
#define VERILATED_VTB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb___024unit;
class Vtb___024unit__03a__03adriver;
class Vtb___024unit__03a__03adriver__Vclpkg;
class Vtb___024unit__03a__03agenerator;
class Vtb___024unit__03a__03agenerator__Vclpkg;
class Vtb___024unit__03a__03atransaction__Vclpkg;
class Vtb_std;
class Vtb_std__03a__03amailbox__Tz1;
class Vtb_std__03a__03amailbox__Tz1__Vclpkg;
class Vtb_std__03a__03aprocess__Vclpkg;
class Vtb_std__03a__03asemaphore__Vclpkg;


class Vtb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb___024root final : public VerilatedModule {
  public:
    // CELLS
    Vtb___024unit* __PVT____024unit;
    Vtb_std* __PVT__std;
    Vtb___024unit__03a__03atransaction__Vclpkg* __024unit__03a__03atransaction__Vclpkg;
    Vtb___024unit__03a__03adriver__Vclpkg* __024unit__03a__03adriver__Vclpkg;
    Vtb___024unit__03a__03agenerator__Vclpkg* __024unit__03a__03agenerator__Vclpkg;
    Vtb_std__03a__03asemaphore__Vclpkg* std__03a__03asemaphore__Vclpkg;
    Vtb_std__03a__03aprocess__Vclpkg* std__03a__03aprocess__Vclpkg;
    Vtb_std__03a__03amailbox__Tz1__Vclpkg* std__03a__03amailbox__Tz1__Vclpkg;

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ __Vtrigprevexpr_hf1c89f1d__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerScheduler __VtrigSched_h756fa6fb__0;
    VlDynamicTriggerScheduler __VdynSched;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;
    VlClassRef<Vtb___024unit__03a__03adriver> tb__DOT__drv;

    // INTERNAL VARIABLES
    Vtb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb___024root(Vtb__Syms* symsp, const char* v__name);
    ~Vtb___024root();
    VL_UNCOPYABLE(Vtb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
