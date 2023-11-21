// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtb__pch.h"
#include "Vtb.h"
#include "Vtb___024root.h"
#include "Vtb___024unit.h"
#include "Vtb_std.h"
#include "Vtb___024unit__03a__03atransaction__Vclpkg.h"
#include "Vtb___024unit__03a__03adriver__Vclpkg.h"
#include "Vtb___024unit__03a__03agenerator__Vclpkg.h"
#include "Vtb_std__03a__03asemaphore__Vclpkg.h"
#include "Vtb_std__03a__03aprocess__Vclpkg.h"
#include "Vtb_std__03a__03amailbox__Tz1__Vclpkg.h"

// FUNCTIONS
Vtb__Syms::~Vtb__Syms()
{
}

Vtb__Syms::Vtb__Syms(VerilatedContext* contextp, const char* namep, Vtb* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP____024unit__03a__03adriver__Vclpkg{this, Verilated::catName(namep, "$unit::driver__Vclpkg")}
    , TOP____024unit__03a__03agenerator__Vclpkg{this, Verilated::catName(namep, "$unit::generator__Vclpkg")}
    , TOP____024unit__03a__03atransaction__Vclpkg{this, Verilated::catName(namep, "$unit::transaction__Vclpkg")}
    , TOP____024unit{this, Verilated::catName(namep, "$unit")}
    , TOP__std{this, Verilated::catName(namep, "std")}
    , TOP__std__03a__03amailbox__Tz1__Vclpkg{this, Verilated::catName(namep, "std::mailbox__Tz1__Vclpkg")}
    , TOP__std__03a__03aprocess__Vclpkg{this, Verilated::catName(namep, "std::process__Vclpkg")}
    , TOP__std__03a__03asemaphore__Vclpkg{this, Verilated::catName(namep, "std::semaphore__Vclpkg")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__024unit__03a__03adriver__Vclpkg = &TOP____024unit__03a__03adriver__Vclpkg;
    TOP.__024unit__03a__03agenerator__Vclpkg = &TOP____024unit__03a__03agenerator__Vclpkg;
    TOP.__024unit__03a__03atransaction__Vclpkg = &TOP____024unit__03a__03atransaction__Vclpkg;
    TOP.__PVT____024unit = &TOP____024unit;
    TOP.__PVT__std = &TOP__std;
    TOP.std__03a__03amailbox__Tz1__Vclpkg = &TOP__std__03a__03amailbox__Tz1__Vclpkg;
    TOP.std__03a__03aprocess__Vclpkg = &TOP__std__03a__03aprocess__Vclpkg;
    TOP.std__03a__03asemaphore__Vclpkg = &TOP__std__03a__03asemaphore__Vclpkg;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit__03a__03adriver__Vclpkg.__Vconfigure(true);
    TOP____024unit__03a__03agenerator__Vclpkg.__Vconfigure(true);
    TOP____024unit__03a__03atransaction__Vclpkg.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    TOP__std.__Vconfigure(true);
    TOP__std__03a__03amailbox__Tz1__Vclpkg.__Vconfigure(true);
    TOP__std__03a__03aprocess__Vclpkg.__Vconfigure(true);
    TOP__std__03a__03asemaphore__Vclpkg.__Vconfigure(true);
    // Setup scopes
    __Vscope_std__process.configure(this, name(), "std.process", "process", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_std__process__suspend.configure(this, name(), "std.process.suspend", "suspend", -9, VerilatedScope::SCOPE_OTHER);
}
