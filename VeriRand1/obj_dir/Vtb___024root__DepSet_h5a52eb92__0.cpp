// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb__Syms.h"
#include "Vtb___024root.h"
#include "Vtb___024unit__03a__03adriver__Vclpkg.h"
#include "Vtb___024unit__03a__03agenerator__Vclpkg.h"
#include "Vtb_std__03a__03amailbox__Tz1__Vclpkg.h"

VL_INLINE_OPT VlCoroutine Vtb___024root___eval_initial__TOP__0(Vtb___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb___024root___eval_initial__TOP__0\n"); );
    // Init
    VlClassRef<Vtb___024unit__03a__03agenerator> tb__DOT__gen;
    VlClassRef<Vtb_std__03a__03amailbox__Tz1> tb__DOT__mbx;
    // Body
    tb__DOT__mbx = VL_NEW(Vtb_std__03a__03amailbox__Tz1, vlSymsp, 0U);
    tb__DOT__gen = VL_NEW(Vtb___024unit__03a__03agenerator, vlSymsp, tb__DOT__mbx);
    vlSelf->tb__DOT__drv = VL_NEW(Vtb___024unit__03a__03adriver, vlSymsp, tb__DOT__mbx);
    co_await VL_NULL_CHECK(tb__DOT__gen, "VeriRand1/tb.sv", 19)->__VnoInFunc_run(vlSymsp);
    co_await VL_NULL_CHECK(vlSelf->tb__DOT__drv, "VeriRand1/tb.sv", 20)->__VnoInFunc_run(vlSymsp);
    while ((1U & (~ (IData)(VL_NULL_CHECK(vlSelf->tb__DOT__drv, "VeriRand1/tb.sv", 21)
                            ->__PVT__next.isTriggered())))) {
        co_await vlSelf->__VtrigSched_h756fa6fb__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] tb.drv.next.isTriggered())", 
                                                           "VeriRand1/tb.sv", 
                                                           21);
    }
    co_await VL_NULL_CHECK(tb__DOT__gen, "VeriRand1/tb.sv", 19)->__VnoInFunc_run(vlSymsp);
    co_await VL_NULL_CHECK(vlSelf->tb__DOT__drv, "VeriRand1/tb.sv", 20)->__VnoInFunc_run(vlSymsp);
    while ((1U & (~ (IData)(VL_NULL_CHECK(vlSelf->tb__DOT__drv, "VeriRand1/tb.sv", 21)
                            ->__PVT__next.isTriggered())))) {
        co_await vlSelf->__VtrigSched_h756fa6fb__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] tb.drv.next.isTriggered())", 
                                                           "VeriRand1/tb.sv", 
                                                           21);
    }
    co_await VL_NULL_CHECK(tb__DOT__gen, "VeriRand1/tb.sv", 19)->__VnoInFunc_run(vlSymsp);
    co_await VL_NULL_CHECK(vlSelf->tb__DOT__drv, "VeriRand1/tb.sv", 20)->__VnoInFunc_run(vlSymsp);
    while ((1U & (~ (IData)(VL_NULL_CHECK(vlSelf->tb__DOT__drv, "VeriRand1/tb.sv", 21)
                            ->__PVT__next.isTriggered())))) {
        co_await vlSelf->__VtrigSched_h756fa6fb__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] tb.drv.next.isTriggered())", 
                                                           "VeriRand1/tb.sv", 
                                                           21);
    }
    co_await VL_NULL_CHECK(tb__DOT__gen, "VeriRand1/tb.sv", 19)->__VnoInFunc_run(vlSymsp);
    co_await VL_NULL_CHECK(vlSelf->tb__DOT__drv, "VeriRand1/tb.sv", 20)->__VnoInFunc_run(vlSymsp);
    while ((1U & (~ (IData)(VL_NULL_CHECK(vlSelf->tb__DOT__drv, "VeriRand1/tb.sv", 21)
                            ->__PVT__next.isTriggered())))) {
        co_await vlSelf->__VtrigSched_h756fa6fb__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] tb.drv.next.isTriggered())", 
                                                           "VeriRand1/tb.sv", 
                                                           21);
    }
    co_await VL_NULL_CHECK(tb__DOT__gen, "VeriRand1/tb.sv", 19)->__VnoInFunc_run(vlSymsp);
    co_await VL_NULL_CHECK(vlSelf->tb__DOT__drv, "VeriRand1/tb.sv", 20)->__VnoInFunc_run(vlSymsp);
    while ((1U & (~ (IData)(VL_NULL_CHECK(vlSelf->tb__DOT__drv, "VeriRand1/tb.sv", 21)
                            ->__PVT__next.isTriggered())))) {
        co_await vlSelf->__VtrigSched_h756fa6fb__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] tb.drv.next.isTriggered())", 
                                                           "VeriRand1/tb.sv", 
                                                           21);
    }
    co_await VL_NULL_CHECK(tb__DOT__gen, "VeriRand1/tb.sv", 19)->__VnoInFunc_run(vlSymsp);
    co_await VL_NULL_CHECK(vlSelf->tb__DOT__drv, "VeriRand1/tb.sv", 20)->__VnoInFunc_run(vlSymsp);
    while ((1U & (~ (IData)(VL_NULL_CHECK(vlSelf->tb__DOT__drv, "VeriRand1/tb.sv", 21)
                            ->__PVT__next.isTriggered())))) {
        co_await vlSelf->__VtrigSched_h756fa6fb__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] tb.drv.next.isTriggered())", 
                                                           "VeriRand1/tb.sv", 
                                                           21);
    }
    co_await VL_NULL_CHECK(tb__DOT__gen, "VeriRand1/tb.sv", 19)->__VnoInFunc_run(vlSymsp);
    co_await VL_NULL_CHECK(vlSelf->tb__DOT__drv, "VeriRand1/tb.sv", 20)->__VnoInFunc_run(vlSymsp);
    while ((1U & (~ (IData)(VL_NULL_CHECK(vlSelf->tb__DOT__drv, "VeriRand1/tb.sv", 21)
                            ->__PVT__next.isTriggered())))) {
        co_await vlSelf->__VtrigSched_h756fa6fb__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] tb.drv.next.isTriggered())", 
                                                           "VeriRand1/tb.sv", 
                                                           21);
    }
    co_await VL_NULL_CHECK(tb__DOT__gen, "VeriRand1/tb.sv", 19)->__VnoInFunc_run(vlSymsp);
    co_await VL_NULL_CHECK(vlSelf->tb__DOT__drv, "VeriRand1/tb.sv", 20)->__VnoInFunc_run(vlSymsp);
    while ((1U & (~ (IData)(VL_NULL_CHECK(vlSelf->tb__DOT__drv, "VeriRand1/tb.sv", 21)
                            ->__PVT__next.isTriggered())))) {
        co_await vlSelf->__VtrigSched_h756fa6fb__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] tb.drv.next.isTriggered())", 
                                                           "VeriRand1/tb.sv", 
                                                           21);
    }
    co_await VL_NULL_CHECK(tb__DOT__gen, "VeriRand1/tb.sv", 19)->__VnoInFunc_run(vlSymsp);
    co_await VL_NULL_CHECK(vlSelf->tb__DOT__drv, "VeriRand1/tb.sv", 20)->__VnoInFunc_run(vlSymsp);
    while ((1U & (~ (IData)(VL_NULL_CHECK(vlSelf->tb__DOT__drv, "VeriRand1/tb.sv", 21)
                            ->__PVT__next.isTriggered())))) {
        co_await vlSelf->__VtrigSched_h756fa6fb__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] tb.drv.next.isTriggered())", 
                                                           "VeriRand1/tb.sv", 
                                                           21);
    }
    co_await VL_NULL_CHECK(tb__DOT__gen, "VeriRand1/tb.sv", 19)->__VnoInFunc_run(vlSymsp);
    co_await VL_NULL_CHECK(vlSelf->tb__DOT__drv, "VeriRand1/tb.sv", 20)->__VnoInFunc_run(vlSymsp);
    while ((1U & (~ (IData)(VL_NULL_CHECK(vlSelf->tb__DOT__drv, "VeriRand1/tb.sv", 21)
                            ->__PVT__next.isTriggered())))) {
        co_await vlSelf->__VtrigSched_h756fa6fb__0.trigger(1U, 
                                                           nullptr, 
                                                           "@([changed] tb.drv.next.isTriggered())", 
                                                           "VeriRand1/tb.sv", 
                                                           21);
    }
    VL_FINISH_MT("VeriRand1/tb.sv", 23, "");
}
