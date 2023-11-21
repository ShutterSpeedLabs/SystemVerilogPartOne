// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb__Syms.h"
#include "Vtb_std__03a__03amailbox__Tz1__Vclpkg.h"

Vtb_std__03a__03amailbox__Tz1::Vtb_std__03a__03amailbox__Tz1(Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ bound) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_std__03a__03amailbox__Tz1::new\n"); );
    // Init
    _ctor_var_reset(vlSymsp);
    // Body
    this->__PVT__m_bound = bound;
}

VlCoroutine Vtb_std__03a__03amailbox__Tz1::__VnoInFunc_put(Vtb__Syms* __restrict vlSymsp, VlClassRef<Vtb___024unit__03a__03atransaction> message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_std__03a__03amailbox__Tz1::__VnoInFunc_put\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    if ((0U != this->__PVT__m_bound)) {
        if (VL_GTES_III(32, this->__PVT__m_queue.size(), this->__PVT__m_bound)) {
            CData/*0:0*/ __VdynTrigger_hd4cab653__0;
            __VdynTrigger_hd4cab653__0 = 0;
            __VdynTrigger_hd4cab653__0 = 0U;
            CData/*0:0*/ __Vtrigcurrexpr_haea5e0bf__0;
            __Vtrigcurrexpr_haea5e0bf__0 = 0;
            while ((1U & (~ (IData)(__VdynTrigger_hd4cab653__0)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             nullptr, 
                                                             "@([true] (std::mailbox__Tz1.m_queue.size() < std::mailbox__Tz1.m_bound))", 
                                                             "/usr/local/share/verilator/include/verilated_std.sv", 
                                                             44);
                __Vtrigcurrexpr_haea5e0bf__0 = VL_LTS_III(32, this->__PVT__m_queue.size(), this->__PVT__m_bound);
                __VdynTrigger_hd4cab653__0 = __Vtrigcurrexpr_haea5e0bf__0;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_hd4cab653__0);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         nullptr, 
                                                         "@([true] (std::mailbox__Tz1.m_queue.size() < std::mailbox__Tz1.m_bound))", 
                                                         "/usr/local/share/verilator/include/verilated_std.sv", 
                                                         44);
        }
    }
    this->__PVT__m_queue.push_back(message);
}

VlCoroutine Vtb_std__03a__03amailbox__Tz1::__VnoInFunc_get(Vtb__Syms* __restrict vlSymsp, VlClassRef<Vtb___024unit__03a__03atransaction> &message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_std__03a__03amailbox__Tz1::__VnoInFunc_get\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    if (VL_GTES_III(32, 0U, this->__PVT__m_queue.size())) {
        CData/*0:0*/ __VdynTrigger_h40529636__0;
        __VdynTrigger_h40529636__0 = 0;
        __VdynTrigger_h40529636__0 = 0U;
        CData/*0:0*/ __Vtrigcurrexpr_h462dc0e0__0;
        __Vtrigcurrexpr_h462dc0e0__0 = 0;
        while ((1U & (~ (IData)(__VdynTrigger_h40529636__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@([true] (32'sh0 < std::mailbox__Tz1.m_queue.size()))", 
                                                         "/usr/local/share/verilator/include/verilated_std.sv", 
                                                         59);
            __Vtrigcurrexpr_h462dc0e0__0 = VL_LTS_III(32, 0U, this->__PVT__m_queue.size());
            __VdynTrigger_h40529636__0 = __Vtrigcurrexpr_h462dc0e0__0;
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h40529636__0);
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@([true] (32'sh0 < std::mailbox__Tz1.m_queue.size()))", 
                                                     "/usr/local/share/verilator/include/verilated_std.sv", 
                                                     59);
    }
    message = this->__PVT__m_queue.pop_front();
}

VlCoroutine Vtb_std__03a__03amailbox__Tz1::__VnoInFunc_peek(Vtb__Syms* __restrict vlSymsp, VlClassRef<Vtb___024unit__03a__03atransaction> &message) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_std__03a__03amailbox__Tz1::__VnoInFunc_peek\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    if (VL_GTES_III(32, 0U, this->__PVT__m_queue.size())) {
        CData/*0:0*/ __VdynTrigger_h40529636__1;
        __VdynTrigger_h40529636__1 = 0;
        __VdynTrigger_h40529636__1 = 0U;
        CData/*0:0*/ __Vtrigcurrexpr_h462dc0e0__1;
        __Vtrigcurrexpr_h462dc0e0__1 = 0;
        while ((1U & (~ (IData)(__VdynTrigger_h40529636__1)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@([true] (32'sh0 < std::mailbox__Tz1.m_queue.size()))", 
                                                         "/usr/local/share/verilator/include/verilated_std.sv", 
                                                         74);
            __Vtrigcurrexpr_h462dc0e0__1 = VL_LTS_III(32, 0U, this->__PVT__m_queue.size());
            __VdynTrigger_h40529636__1 = __Vtrigcurrexpr_h462dc0e0__1;
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h40529636__1);
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@([true] (32'sh0 < std::mailbox__Tz1.m_queue.size()))", 
                                                     "/usr/local/share/verilator/include/verilated_std.sv", 
                                                     74);
    }
    message = this->__PVT__m_queue.at(0U);
}

void Vtb_std__03a__03amailbox__Tz1::_ctor_var_reset(Vtb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vtb_std__03a__03amailbox__Tz1::_ctor_var_reset\n"); );
    // Body
    if (false && vlSymsp) {}  // Prevent unused
    __PVT__m_bound = 0;
    }
