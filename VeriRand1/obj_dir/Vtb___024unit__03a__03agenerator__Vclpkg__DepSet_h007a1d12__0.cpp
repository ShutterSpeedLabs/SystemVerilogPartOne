// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb__Syms.h"
#include "Vtb___024unit__03a__03agenerator__Vclpkg.h"

Vtb___024unit__03a__03agenerator::Vtb___024unit__03a__03agenerator(Vtb__Syms* __restrict vlSymsp, VlClassRef<Vtb_std__03a__03amailbox__Tz1> mbx) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb___024unit__03a__03agenerator::new\n"); );
    // Init
    _ctor_var_reset(vlSymsp);
    // Body
    this->__PVT__status = 0U;
    this->__PVT__mbx = mbx;
}

void Vtb___024unit__03a__03agenerator::_ctor_var_reset(Vtb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb___024unit__03a__03agenerator::_ctor_var_reset\n"); );
    // Body
    if (false && vlSymsp) {}  // Prevent unused
    __PVT__status = 0;
    }