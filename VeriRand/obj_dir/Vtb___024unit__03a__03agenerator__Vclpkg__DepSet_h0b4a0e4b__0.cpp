// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb___024unit__03a__03agenerator__Vclpkg.h"

void Vtb___024unit__03a__03agenerator::__VnoInFunc_randomize(Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb___024unit__03a__03agenerator::__VnoInFunc_randomize\n"); );
    // Body
    randomize__Vfuncrtn = 1U;
    this->__PVT__a = (0xfU & VL_RANDOM_RNG_I(__Vm_rng));
    this->__PVT__b = (0xfU & VL_RANDOM_RNG_I(__Vm_rng));
}

Vtb___024unit__03a__03agenerator::~Vtb___024unit__03a__03agenerator() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb___024unit__03a__03agenerator::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtb___024unit__03a__03agenerator>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb___024unit__03a__03agenerator::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtb___024unit__03a__03agenerator::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb___024unit__03a__03agenerator::to_string\n"); );
    // Body
    return (std::string{"'{"} + to_string_middle() + "}");
}

std::string Vtb___024unit__03a__03agenerator::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb___024unit__03a__03agenerator::to_string_middle\n"); );
    // Body
    std::string out;
    out += "a:" + VL_TO_STRING(__PVT__a);
    out += ", b:" + VL_TO_STRING(__PVT__b);
    return out;
}
