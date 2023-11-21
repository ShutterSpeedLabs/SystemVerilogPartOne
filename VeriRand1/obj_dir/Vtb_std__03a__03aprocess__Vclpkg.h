// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb.h for the primary calling header

#ifndef VERILATED_VTB_STD__03A__03APROCESS__VCLPKG_H_
#define VERILATED_VTB_STD__03A__03APROCESS__VCLPKG_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"
class Vtb_std__03a__03aprocess;


class Vtb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_std__03a__03aprocess__Vclpkg final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    Vtb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtb_std__03a__03aprocess__Vclpkg(Vtb__Syms* symsp, const char* v__name);
    ~Vtb_std__03a__03aprocess__Vclpkg();
    VL_UNCOPYABLE(Vtb_std__03a__03aprocess__Vclpkg);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
    void __VnoInFunc_self(VlProcessRef vlProcess, Vtb__Syms* __restrict vlSymsp, VlClassRef<Vtb_std__03a__03aprocess> &self__Vfuncrtn);
};


class Vtb__Syms;

class Vtb_std__03a__03aprocess : public VlClass {
  public:

    // DESIGN SPECIFIC STATE
    VlProcessRef __PVT__m_process;
    VlCoroutine __VnoInFunc_await(Vtb__Syms* __restrict vlSymsp);
    void __VnoInFunc_get_randstate(Vtb__Syms* __restrict vlSymsp, std::string &get_randstate__Vfuncrtn);
    void __VnoInFunc_kill(Vtb__Syms* __restrict vlSymsp);
    void __VnoInFunc_resume(Vtb__Syms* __restrict vlSymsp);
    void __VnoInFunc_set_randstate(Vtb__Syms* __restrict vlSymsp, std::string s);
    void __VnoInFunc_set_status(Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ s);
    void __VnoInFunc_status(Vtb__Syms* __restrict vlSymsp, IData/*31:0*/ &status__Vfuncrtn);
    void __VnoInFunc_suspend(Vtb__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset(Vtb__Syms* __restrict vlSymsp);
  public:
    Vtb_std__03a__03aprocess(Vtb__Syms* __restrict vlSymsp);
    std::string to_string() const;
    std::string to_string_middle() const;
    ~Vtb_std__03a__03aprocess();
};

std::string VL_TO_STRING(const VlClassRef<Vtb_std__03a__03aprocess>& obj);

#endif  // guard
