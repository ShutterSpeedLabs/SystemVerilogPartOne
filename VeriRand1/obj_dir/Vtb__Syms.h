// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB__SYMS_H_
#define VERILATED_VTB__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb.h"

// INCLUDE MODULE CLASSES
#include "Vtb___024root.h"
#include "Vtb___024unit.h"
#include "Vtb_std.h"
#include "Vtb___024unit__03a__03atransaction__Vclpkg.h"
#include "Vtb___024unit__03a__03adriver__Vclpkg.h"
#include "Vtb___024unit__03a__03agenerator__Vclpkg.h"
#include "Vtb_std__03a__03asemaphore__Vclpkg.h"
#include "Vtb_std__03a__03aprocess__Vclpkg.h"
#include "Vtb_std__03a__03amailbox__Tz1__Vclpkg.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)Vtb__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb* const __Vm_modelp;
    std::vector<VlEvent*> __Vm_triggeredEvents;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vtb___024root                  TOP;
    Vtb___024unit__03a__03adriver__Vclpkg TOP____024unit__03a__03adriver__Vclpkg;
    Vtb___024unit__03a__03agenerator__Vclpkg TOP____024unit__03a__03agenerator__Vclpkg;
    Vtb___024unit__03a__03atransaction__Vclpkg TOP____024unit__03a__03atransaction__Vclpkg;
    Vtb___024unit                  TOP____024unit;
    Vtb_std                        TOP__std;
    Vtb_std__03a__03amailbox__Tz1__Vclpkg TOP__std__03a__03amailbox__Tz1__Vclpkg;
    Vtb_std__03a__03aprocess__Vclpkg TOP__std__03a__03aprocess__Vclpkg;
    Vtb_std__03a__03asemaphore__Vclpkg TOP__std__03a__03asemaphore__Vclpkg;

    // SCOPE NAMES
    VerilatedScope __Vscope_std__process;
    VerilatedScope __Vscope_std__process__suspend;

    // CONSTRUCTORS
    Vtb__Syms(VerilatedContext* contextp, const char* namep, Vtb* modelp);
    ~Vtb__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
    void enqueueTriggeredEventForClearing(VlEvent& event) {
#ifdef VL_DEBUG
        if (VL_UNLIKELY(!event.isTriggered())) {
            VL_FATAL_MT(__FILE__, __LINE__, __FILE__, "event passed to 'enqueueTriggeredEventForClearing' was not triggered");
        }
#endif
        __Vm_triggeredEvents.push_back(&event);
    }
    void clearTriggeredEvents() {
        for (const auto eventp : __Vm_triggeredEvents) eventp->clearTriggered();
        __Vm_triggeredEvents.clear();
    }
};

#endif  // guard
