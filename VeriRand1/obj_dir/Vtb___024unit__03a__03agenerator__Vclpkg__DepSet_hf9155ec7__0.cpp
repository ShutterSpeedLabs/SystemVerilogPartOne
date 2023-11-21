// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb__Syms.h"
#include "Vtb___024unit__03a__03agenerator__Vclpkg.h"
#include "Vtb___024unit__03a__03atransaction__Vclpkg.h"
#include "Vtb_std__03a__03amailbox__Tz1__Vclpkg.h"

VlCoroutine Vtb___024unit__03a__03agenerator::__VnoInFunc_run(Vtb__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb___024unit__03a__03agenerator::__VnoInFunc_run\n"); );
    // Init
    VL_KEEP_THIS;
    IData/*31:0*/ __Vtask_randomize__1__Vfuncout;
    __Vtask_randomize__1__Vfuncout = 0;
    // Body
    this->__PVT__t = VL_NEW(Vtb___024unit__03a__03atransaction, vlSymsp);
    VL_NULL_CHECK(this->__PVT__t, "VeriRand1/generator.sv", 15)->__VnoInFunc_randomize(vlSymsp, __Vtask_randomize__1__Vfuncout);
    this->__PVT__status = __Vtask_randomize__1__Vfuncout;
    co_await VL_NULL_CHECK(this->__PVT__mbx, "VeriRand1/generator.sv", 16)->__VnoInFunc_put(vlSymsp, this->__PVT__t);
    VL_WRITEF("[GEN] : Data Send from Gen a : %0#, b : %0#, wr : %0#\n",
              8,VL_NULL_CHECK(this->__PVT__t, "VeriRand1/generator.sv", 17)
              ->__PVT__a,8,VL_NULL_CHECK(this->__PVT__t, "VeriRand1/generator.sv", 17)
              ->__PVT__b,1,VL_NULL_CHECK(this->__PVT__t, "VeriRand1/generator.sv", 17)
              ->__PVT__wr);
}
