// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb___024unit__03a__03atransaction__Vclpkg.h"

void Vtb___024unit__03a__03atransaction::__VnoInFunc_randomize(Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb___024unit__03a__03atransaction::__VnoInFunc_randomize\n"); );
    // Body
    randomize__Vfuncrtn = 1U;
    this->__PVT__a = (0xffU & VL_RANDOM_RNG_I(__Vm_rng));
    this->__PVT__b = (0xffU & VL_RANDOM_RNG_I(__Vm_rng));
    this->__PVT__wr = (1U & VL_RANDOM_RNG_I(__Vm_rng));
}

Vtb___024unit__03a__03atransaction::~Vtb___024unit__03a__03atransaction() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb___024unit__03a__03atransaction::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtb___024unit__03a__03atransaction>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb___024unit__03a__03atransaction::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtb___024unit__03a__03atransaction::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb___024unit__03a__03atransaction::to_string\n"); );
    // Body
    return (std::string{"'{"} + to_string_middle() + "}");
}

std::string Vtb___024unit__03a__03atransaction::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb___024unit__03a__03atransaction::to_string_middle\n"); );
    // Body
    std::string out;
    out += "a:" + VL_TO_STRING(__PVT__a);
    out += ", b:" + VL_TO_STRING(__PVT__b);
    out += ", wr:" + VL_TO_STRING(__PVT__wr);
    return out;
}
