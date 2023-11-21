// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb___024root.h"
#include "Vtb___024unit__03a__03adriver__Vclpkg.h"

VlCoroutine Vtb___024root___eval_initial__TOP__0(Vtb___024root* vlSelf);

void Vtb___024root___eval_initial(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial\n"); );
    // Body
    Vtb___024root___eval_initial__TOP__0(vlSelf);
    vlSelf->__Vtrigprevexpr_hf1c89f1d__0 = VL_NULL_CHECK(vlSelf->tb__DOT__drv, "VeriRand1/tb.sv", 21)
        ->__PVT__next.isTriggered();
}
