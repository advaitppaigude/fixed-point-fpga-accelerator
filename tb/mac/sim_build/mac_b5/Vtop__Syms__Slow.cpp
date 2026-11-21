// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtop__pch.h"

Vtop__Syms::Vtop__Syms(VerilatedContext* contextp, const char* namep, Vtop* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup top module instance
    , TOP{this, namep}
{
    // Check resources
    Verilated::stackCheck(258);
    // Setup sub module instances
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscopep_TOP = new VerilatedScope{this, "TOP", "TOP", "<null>", 0, VerilatedScope::SCOPE_OTHER};
    __Vscopep_pipelined_parametrised_multiply_accumulate = new VerilatedScope{this, "pipelined_parametrised_multiply_accumulate", "pipelined_parametrised_multiply_accumulate", "pipelined_parametrised_multiply_accumulate", -9, VerilatedScope::SCOPE_MODULE};
    // Set up scope hierarchy
    __Vhier.add(0, __Vscopep_pipelined_parametrised_multiply_accumulate);
    // Setup export functions - final: 0
    // Setup export functions - final: 1
    // Setup public variables
    __Vscopep_TOP->varInsert("bias", &(TOP.bias), false, VLVT_UINT16, VLVD_IN|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,13,0);
    __Vscopep_TOP->varInsert("busy", &(TOP.busy), false, VLVT_UINT8, VLVD_OUT|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("clk", &(TOP.clk), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("done", &(TOP.done), false, VLVT_UINT8, VLVD_OUT|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("feature_regs", &(TOP.feature_regs), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW|VLVF_SIGNED, 1, 1 ,0,7 ,4,0);
    __Vscopep_TOP->varInsert("flush", &(TOP.flush), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("rst", &(TOP.rst), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("score", &(TOP.score), false, VLVT_UINT16, VLVD_OUT|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,13,0);
    __Vscopep_TOP->varInsert("start", &(TOP.start), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("weights", &(TOP.weights), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW|VLVF_SIGNED, 1, 1 ,0,7 ,4,0);
    __Vscopep_pipelined_parametrised_multiply_accumulate->varInsert("ACC_BITS", const_cast<void*>(static_cast<const void*>(&(TOP.pipelined_parametrised_multiply_accumulate__DOT__ACC_BITS))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_pipelined_parametrised_multiply_accumulate->varInsert("BITS", const_cast<void*>(static_cast<const void*>(&(TOP.pipelined_parametrised_multiply_accumulate__DOT__BITS))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_pipelined_parametrised_multiply_accumulate->varInsert("bias", &(TOP.pipelined_parametrised_multiply_accumulate__DOT__bias), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,13,0);
    __Vscopep_pipelined_parametrised_multiply_accumulate->varInsert("busy", &(TOP.pipelined_parametrised_multiply_accumulate__DOT__busy), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_pipelined_parametrised_multiply_accumulate->varInsert("captured_feature_regs", &(TOP.pipelined_parametrised_multiply_accumulate__DOT__captured_feature_regs), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 1, 1 ,0,7 ,4,0);
    __Vscopep_pipelined_parametrised_multiply_accumulate->varInsert("captured_weights", &(TOP.pipelined_parametrised_multiply_accumulate__DOT__captured_weights), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 1, 1 ,0,7 ,4,0);
    __Vscopep_pipelined_parametrised_multiply_accumulate->varInsert("clk", &(TOP.pipelined_parametrised_multiply_accumulate__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_pipelined_parametrised_multiply_accumulate->varInsert("count", &(TOP.pipelined_parametrised_multiply_accumulate__DOT__count), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_pipelined_parametrised_multiply_accumulate->varInsert("done", &(TOP.pipelined_parametrised_multiply_accumulate__DOT__done), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_pipelined_parametrised_multiply_accumulate->varInsert("drain", &(TOP.pipelined_parametrised_multiply_accumulate__DOT__drain), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_pipelined_parametrised_multiply_accumulate->varInsert("extended_sum", &(TOP.pipelined_parametrised_multiply_accumulate__DOT__extended_sum), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_SIGNED, 0, 1 ,14,0);
    __Vscopep_pipelined_parametrised_multiply_accumulate->varInsert("feature_regs", &(TOP.pipelined_parametrised_multiply_accumulate__DOT__feature_regs), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 1, 1 ,0,7 ,4,0);
    __Vscopep_pipelined_parametrised_multiply_accumulate->varInsert("flush", &(TOP.pipelined_parametrised_multiply_accumulate__DOT__flush), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_pipelined_parametrised_multiply_accumulate->varInsert("product", &(TOP.pipelined_parametrised_multiply_accumulate__DOT__product), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_SIGNED, 0, 1 ,9,0);
    __Vscopep_pipelined_parametrised_multiply_accumulate->varInsert("product_reg", &(TOP.pipelined_parametrised_multiply_accumulate__DOT__product_reg), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,9,0);
    __Vscopep_pipelined_parametrised_multiply_accumulate->varInsert("product_valid", &(TOP.pipelined_parametrised_multiply_accumulate__DOT__product_valid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_pipelined_parametrised_multiply_accumulate->varInsert("rst", &(TOP.pipelined_parametrised_multiply_accumulate__DOT__rst), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_pipelined_parametrised_multiply_accumulate->varInsert("score", &(TOP.pipelined_parametrised_multiply_accumulate__DOT__score), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,13,0);
    __Vscopep_pipelined_parametrised_multiply_accumulate->varInsert("start", &(TOP.pipelined_parametrised_multiply_accumulate__DOT__start), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_pipelined_parametrised_multiply_accumulate->varInsert("weights", &(TOP.pipelined_parametrised_multiply_accumulate__DOT__weights), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 1, 1 ,0,7 ,4,0);
}

Vtop__Syms::~Vtop__Syms() {
    // Tear down scope hierarchy
    __Vhier.remove(0, __Vscopep_pipelined_parametrised_multiply_accumulate);
    // Clear keys from hierarchy map after values have been removed
    __Vhier.clear();
    // Tear down scopes
    VL_DO_CLEAR(delete __Vscopep_TOP, __Vscopep_TOP = nullptr);
    VL_DO_CLEAR(delete __Vscopep_pipelined_parametrised_multiply_accumulate, __Vscopep_pipelined_parametrised_multiply_accumulate = nullptr);
    // Tear down sub module instances
}
