// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb.h for the primary calling header

#ifndef VERILATED_VTB_STD_H_
#define VERILATED_VTB_STD_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_std final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_std(Vtb__Syms* symsp, const char* v__name);
    ~Vtb_std();
    VL_UNCOPYABLE(Vtb_std);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
