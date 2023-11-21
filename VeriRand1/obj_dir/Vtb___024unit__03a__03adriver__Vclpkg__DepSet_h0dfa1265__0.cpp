// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb.h for the primary calling header

#include "Vtb__pch.h"
#include "Vtb___024unit__03a__03adriver__Vclpkg.h"

Vtb___024unit__03a__03adriver::~Vtb___024unit__03a__03adriver() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb___024unit__03a__03adriver::~\n"); );
}

std::string VL_TO_STRING(const VlClassRef<Vtb___024unit__03a__03adriver>& obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb___024unit__03a__03adriver::VL_TO_STRING\n"); );
    // Body
    return (obj ? obj->to_string() : "null");
}

std::string Vtb___024unit__03a__03adriver::to_string() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb___024unit__03a__03adriver::to_string\n"); );
    // Body
    return (std::string{"'{"} + to_string_middle() + "}");
}

std::string Vtb___024unit__03a__03adriver::to_string_middle() const {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtb___024unit__03a__03adriver::to_string_middle\n"); );
    // Body
    std::string out;
    out += "next:" + VL_TO_STRING(__PVT__next);
    out += ", mbx:" + VL_TO_STRING(__PVT__mbx);
    out += ", dataIn:" + VL_TO_STRING(__PVT__dataIn);
    return out;
}
