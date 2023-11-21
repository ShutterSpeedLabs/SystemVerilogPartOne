// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb___024unit__03a__03adriver__Vclpkg.h"
#include "Vtb___024unit__03a__03atransaction__Vclpkg.h"
#include "Vtb_std__03a__03amailbox__Tz1__Vclpkg.h"

VlCoroutine Vtb___024unit__03a__03adriver::__VnoInFunc_run(Vtb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb___024unit__03a__03adriver::__VnoInFunc_run\n"); );
    // Init
    VL_KEEP_THIS;
    // Body
    co_await VL_NULL_CHECK(this->__PVT__mbx, "VeriRand1/driver.sv", 15)->__VnoInFunc_get(vlSymsp, this->__PVT__dataIn);
    VL_WRITEF("[DRV] : Data recieved from Gen a : %0#, b : %0#, wr : %0#\n",
              8,VL_NULL_CHECK(this->__PVT__dataIn, "VeriRand1/driver.sv", 16)
              ->__PVT__a,8,VL_NULL_CHECK(this->__PVT__dataIn, "VeriRand1/driver.sv", 16)
              ->__PVT__b,1,VL_NULL_CHECK(this->__PVT__dataIn, "VeriRand1/driver.sv", 16)
              ->__PVT__wr);
    this->__PVT__next.fire();
}
