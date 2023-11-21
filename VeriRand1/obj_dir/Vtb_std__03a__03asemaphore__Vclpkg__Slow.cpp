// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb__Syms.h"
#include "Vtb_std__03a__03asemaphore__Vclpkg.h"

void Vtb_std__03a__03asemaphore__Vclpkg___ctor_var_reset(Vtb_std__03a__03asemaphore__Vclpkg* vlSelf);

Vtb_std__03a__03asemaphore__Vclpkg::Vtb_std__03a__03asemaphore__Vclpkg(Vtb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_std__03a__03asemaphore__Vclpkg___ctor_var_reset(this);
}

void Vtb_std__03a__03asemaphore__Vclpkg::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_std__03a__03asemaphore__Vclpkg::~Vtb_std__03a__03asemaphore__Vclpkg() {
}
