// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb___024unit__03a__03agenerator__Vclpkg.h"

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
    out += "status:" + VL_TO_STRING(__PVT__status);
    out += ", t:" + VL_TO_STRING(__PVT__t);
    out += ", mbx:" + VL_TO_STRING(__PVT__mbx);
    return out;
}
