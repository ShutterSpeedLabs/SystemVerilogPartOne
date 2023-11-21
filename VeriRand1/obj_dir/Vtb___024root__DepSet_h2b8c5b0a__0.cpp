// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb__Syms.h"
#include "Vtb___024root.h"
#include "Vtb___024unit__03a__03adriver__Vclpkg.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb___024root___dump_triggers__act(Vtb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb___024root___eval_triggers__act(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (VL_NULL_CHECK(vlSelf->tb__DOT__drv, "VeriRand1/tb.sv", 21)
                                     ->__PVT__next.isTriggered() 
                                     != (IData)(vlSelf->__Vtrigprevexpr_hf1c89f1d__0)));
    vlSelf->__VactTriggered.set(1U, vlSelf->__VdynSched.evaluate());
    vlSelf->__Vtrigprevexpr_hf1c89f1d__0 = VL_NULL_CHECK(vlSelf->tb__DOT__drv, "VeriRand1/tb.sv", 21)
        ->__PVT__next.isTriggered();
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(0U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb___024root___dump_triggers__act(vlSelf);
    }
#endif
    vlSelf->__VdynSched.doPostUpdates();
}
