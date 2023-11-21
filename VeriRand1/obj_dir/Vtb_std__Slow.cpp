// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb__Syms.h"
#include "Vtb_std.h"

void Vtb_std___ctor_var_reset(Vtb_std* vlSelf);

Vtb_std::Vtb_std(Vtb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vtb_std___ctor_var_reset(this);
}

void Vtb_std::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vtb_std::~Vtb_std() {
}
