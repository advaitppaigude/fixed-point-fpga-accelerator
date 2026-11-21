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
    Verilated::stackCheck(274);
    // Setup sub module instances
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscopep_TOP = new VerilatedScope{this, "TOP", "TOP", "<null>", 0, VerilatedScope::SCOPE_OTHER};
    __Vscopep_parametrised_note_classifier_fsm = new VerilatedScope{this, "parametrised_note_classifier_fsm", "parametrised_note_classifier_fsm", "parametrised_note_classifier_fsm", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_parametrised_note_classifier_fsm__u_compare = new VerilatedScope{this, "parametrised_note_classifier_fsm.u_compare", "u_compare", "compare", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_parametrised_note_classifier_fsm__u_mac_a = new VerilatedScope{this, "parametrised_note_classifier_fsm.u_mac_a", "u_mac_a", "pipelined_parametrised_multiply_accumulate", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_parametrised_note_classifier_fsm__u_mac_b = new VerilatedScope{this, "parametrised_note_classifier_fsm.u_mac_b", "u_mac_b", "pipelined_parametrised_multiply_accumulate", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_parametrised_note_classifier_fsm__u_mac_c = new VerilatedScope{this, "parametrised_note_classifier_fsm.u_mac_c", "u_mac_c", "pipelined_parametrised_multiply_accumulate", -9, VerilatedScope::SCOPE_MODULE};
    // Set up scope hierarchy
    __Vhier.add(0, __Vscopep_parametrised_note_classifier_fsm);
    __Vhier.add(__Vscopep_parametrised_note_classifier_fsm, __Vscopep_parametrised_note_classifier_fsm__u_compare);
    __Vhier.add(__Vscopep_parametrised_note_classifier_fsm, __Vscopep_parametrised_note_classifier_fsm__u_mac_a);
    __Vhier.add(__Vscopep_parametrised_note_classifier_fsm, __Vscopep_parametrised_note_classifier_fsm__u_mac_b);
    __Vhier.add(__Vscopep_parametrised_note_classifier_fsm, __Vscopep_parametrised_note_classifier_fsm__u_mac_c);
    // Setup export functions - final: 0
    // Setup export functions - final: 1
    // Setup public variables
    __Vscopep_TOP->varInsert("biases", &(TOP.biases), false, VLVT_UINT32, VLVD_IN|VLVF_PUB_RW|VLVF_SIGNED, 1, 1 ,0,2 ,23,0);
    __Vscopep_TOP->varInsert("class_index", &(TOP.class_index), false, VLVT_UINT8, VLVD_OUT|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_TOP->varInsert("clk", &(TOP.clk), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("feature_regs", &(TOP.feature_regs), false, VLVT_UINT16, VLVD_IN|VLVF_PUB_RW|VLVF_SIGNED, 1, 1 ,0,7 ,9,0);
    __Vscopep_TOP->varInsert("rst", &(TOP.rst), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("start", &(TOP.start), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("valid", &(TOP.valid), false, VLVT_UINT8, VLVD_OUT|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("weights", &(TOP.weights), false, VLVT_UINT16, VLVD_IN|VLVF_PUB_RW|VLVF_SIGNED, 1, 1 ,0,23 ,9,0);
    __Vscopep_parametrised_note_classifier_fsm->varInsert("ACC_BITS", const_cast<void*>(static_cast<const void*>(&(TOP.parametrised_note_classifier_fsm__DOT__ACC_BITS))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_parametrised_note_classifier_fsm->varInsert("BITS", const_cast<void*>(static_cast<const void*>(&(TOP.parametrised_note_classifier_fsm__DOT__BITS))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_parametrised_note_classifier_fsm->varInsert("biases", &(TOP.parametrised_note_classifier_fsm__DOT__biases), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 1, 1 ,0,2 ,23,0);
    __Vscopep_parametrised_note_classifier_fsm->varInsert("biggest", &(TOP.parametrised_note_classifier_fsm__DOT__biggest), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_parametrised_note_classifier_fsm->varInsert("class_index", &(TOP.parametrised_note_classifier_fsm__DOT__class_index), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_parametrised_note_classifier_fsm->varInsert("clk", &(TOP.parametrised_note_classifier_fsm__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_parametrised_note_classifier_fsm->varInsert("feature_regs", &(TOP.parametrised_note_classifier_fsm__DOT__feature_regs), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 1, 1 ,0,7 ,9,0);
    __Vscopep_parametrised_note_classifier_fsm->varInsert("mac_a_busy", &(TOP.parametrised_note_classifier_fsm__DOT__mac_a_busy), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_parametrised_note_classifier_fsm->varInsert("mac_a_done", &(TOP.parametrised_note_classifier_fsm__DOT__mac_a_done), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_parametrised_note_classifier_fsm->varInsert("mac_a_score", &(TOP.parametrised_note_classifier_fsm__DOT__mac_a_score), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,23,0);
    __Vscopep_parametrised_note_classifier_fsm->varInsert("mac_b_busy", &(TOP.parametrised_note_classifier_fsm__DOT__mac_b_busy), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_parametrised_note_classifier_fsm->varInsert("mac_b_done", &(TOP.parametrised_note_classifier_fsm__DOT__mac_b_done), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_parametrised_note_classifier_fsm->varInsert("mac_b_score", &(TOP.parametrised_note_classifier_fsm__DOT__mac_b_score), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,23,0);
    __Vscopep_parametrised_note_classifier_fsm->varInsert("mac_c_busy", &(TOP.parametrised_note_classifier_fsm__DOT__mac_c_busy), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_parametrised_note_classifier_fsm->varInsert("mac_c_done", &(TOP.parametrised_note_classifier_fsm__DOT__mac_c_done), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_parametrised_note_classifier_fsm->varInsert("mac_c_score", &(TOP.parametrised_note_classifier_fsm__DOT__mac_c_score), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,23,0);
    __Vscopep_parametrised_note_classifier_fsm->varInsert("rst", &(TOP.parametrised_note_classifier_fsm__DOT__rst), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_parametrised_note_classifier_fsm->varInsert("start", &(TOP.parametrised_note_classifier_fsm__DOT__start), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_parametrised_note_classifier_fsm->varInsert("valid", &(TOP.parametrised_note_classifier_fsm__DOT__valid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_parametrised_note_classifier_fsm->varInsert("weights", &(TOP.parametrised_note_classifier_fsm__DOT__weights), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 1, 1 ,0,23 ,9,0);
    __Vscopep_parametrised_note_classifier_fsm__u_compare->varInsert("BITS", const_cast<void*>(static_cast<const void*>(&(TOP.parametrised_note_classifier_fsm__DOT__u_compare__DOT__BITS))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_parametrised_note_classifier_fsm__u_compare->varInsert("a", &(TOP.parametrised_note_classifier_fsm__DOT__u_compare__DOT__a), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,23,0);
    __Vscopep_parametrised_note_classifier_fsm__u_compare->varInsert("b", &(TOP.parametrised_note_classifier_fsm__DOT__u_compare__DOT__b), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,23,0);
    __Vscopep_parametrised_note_classifier_fsm__u_compare->varInsert("biggest", &(TOP.parametrised_note_classifier_fsm__DOT__u_compare__DOT__biggest), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_parametrised_note_classifier_fsm__u_compare->varInsert("c", &(TOP.parametrised_note_classifier_fsm__DOT__u_compare__DOT__c), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,23,0);
    __Vscopep_parametrised_note_classifier_fsm__u_mac_a->varInsert("ACC_BITS", const_cast<void*>(static_cast<const void*>(&(TOP.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__ACC_BITS))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_parametrised_note_classifier_fsm__u_mac_a->varInsert("BITS", const_cast<void*>(static_cast<const void*>(&(TOP.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__BITS))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_parametrised_note_classifier_fsm__u_mac_a->varInsert("bias", &(TOP.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__bias), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,23,0);
    __Vscopep_parametrised_note_classifier_fsm__u_mac_a->varInsert("busy", &(TOP.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__busy), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_parametrised_note_classifier_fsm__u_mac_a->varInsert("captured_feature_regs", &(TOP.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__captured_feature_regs), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 1, 1 ,0,7 ,9,0);
    __Vscopep_parametrised_note_classifier_fsm__u_mac_a->varInsert("captured_weights", &(TOP.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__captured_weights), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 1, 1 ,0,7 ,9,0);
    __Vscopep_parametrised_note_classifier_fsm__u_mac_a->varInsert("clk", &(TOP.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_parametrised_note_classifier_fsm__u_mac_a->varInsert("count", &(TOP.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__count), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_parametrised_note_classifier_fsm__u_mac_a->varInsert("done", &(TOP.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__done), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_parametrised_note_classifier_fsm__u_mac_a->varInsert("drain", &(TOP.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__drain), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_parametrised_note_classifier_fsm__u_mac_a->varInsert("extended_sum", &(TOP.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__extended_sum), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_SIGNED, 0, 1 ,24,0);
    __Vscopep_parametrised_note_classifier_fsm__u_mac_a->varInsert("feature_regs", &(TOP.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__feature_regs), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 1, 1 ,0,7 ,9,0);
    __Vscopep_parametrised_note_classifier_fsm__u_mac_a->varInsert("flush", &(TOP.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__flush), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_parametrised_note_classifier_fsm__u_mac_a->varInsert("product", &(TOP.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__product), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_SIGNED, 0, 1 ,19,0);
    __Vscopep_parametrised_note_classifier_fsm__u_mac_a->varInsert("product_reg", &(TOP.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__product_reg), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,19,0);
    __Vscopep_parametrised_note_classifier_fsm__u_mac_a->varInsert("product_valid", &(TOP.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__product_valid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_parametrised_note_classifier_fsm__u_mac_a->varInsert("rst", &(TOP.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__rst), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_parametrised_note_classifier_fsm__u_mac_a->varInsert("score", &(TOP.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__score), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,23,0);
    __Vscopep_parametrised_note_classifier_fsm__u_mac_a->varInsert("start", &(TOP.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__start), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_parametrised_note_classifier_fsm__u_mac_a->varInsert("weights", &(TOP.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__weights), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 1, 1 ,0,7 ,9,0);
    __Vscopep_parametrised_note_classifier_fsm__u_mac_b->varInsert("ACC_BITS", const_cast<void*>(static_cast<const void*>(&(TOP.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__ACC_BITS))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_parametrised_note_classifier_fsm__u_mac_b->varInsert("BITS", const_cast<void*>(static_cast<const void*>(&(TOP.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__BITS))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_parametrised_note_classifier_fsm__u_mac_b->varInsert("bias", &(TOP.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__bias), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,23,0);
    __Vscopep_parametrised_note_classifier_fsm__u_mac_b->varInsert("busy", &(TOP.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__busy), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_parametrised_note_classifier_fsm__u_mac_b->varInsert("captured_feature_regs", &(TOP.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__captured_feature_regs), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 1, 1 ,0,7 ,9,0);
    __Vscopep_parametrised_note_classifier_fsm__u_mac_b->varInsert("captured_weights", &(TOP.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__captured_weights), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 1, 1 ,0,7 ,9,0);
    __Vscopep_parametrised_note_classifier_fsm__u_mac_b->varInsert("clk", &(TOP.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_parametrised_note_classifier_fsm__u_mac_b->varInsert("count", &(TOP.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__count), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_parametrised_note_classifier_fsm__u_mac_b->varInsert("done", &(TOP.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__done), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_parametrised_note_classifier_fsm__u_mac_b->varInsert("drain", &(TOP.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__drain), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_parametrised_note_classifier_fsm__u_mac_b->varInsert("extended_sum", &(TOP.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__extended_sum), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_SIGNED, 0, 1 ,24,0);
    __Vscopep_parametrised_note_classifier_fsm__u_mac_b->varInsert("feature_regs", &(TOP.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__feature_regs), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 1, 1 ,0,7 ,9,0);
    __Vscopep_parametrised_note_classifier_fsm__u_mac_b->varInsert("flush", &(TOP.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__flush), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_parametrised_note_classifier_fsm__u_mac_b->varInsert("product", &(TOP.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__product), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_SIGNED, 0, 1 ,19,0);
    __Vscopep_parametrised_note_classifier_fsm__u_mac_b->varInsert("product_reg", &(TOP.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__product_reg), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,19,0);
    __Vscopep_parametrised_note_classifier_fsm__u_mac_b->varInsert("product_valid", &(TOP.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__product_valid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_parametrised_note_classifier_fsm__u_mac_b->varInsert("rst", &(TOP.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__rst), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_parametrised_note_classifier_fsm__u_mac_b->varInsert("score", &(TOP.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__score), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,23,0);
    __Vscopep_parametrised_note_classifier_fsm__u_mac_b->varInsert("start", &(TOP.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__start), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_parametrised_note_classifier_fsm__u_mac_b->varInsert("weights", &(TOP.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__weights), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 1, 1 ,0,7 ,9,0);
    __Vscopep_parametrised_note_classifier_fsm__u_mac_c->varInsert("ACC_BITS", const_cast<void*>(static_cast<const void*>(&(TOP.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__ACC_BITS))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_parametrised_note_classifier_fsm__u_mac_c->varInsert("BITS", const_cast<void*>(static_cast<const void*>(&(TOP.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__BITS))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_parametrised_note_classifier_fsm__u_mac_c->varInsert("bias", &(TOP.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__bias), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,23,0);
    __Vscopep_parametrised_note_classifier_fsm__u_mac_c->varInsert("busy", &(TOP.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__busy), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_parametrised_note_classifier_fsm__u_mac_c->varInsert("captured_feature_regs", &(TOP.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__captured_feature_regs), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 1, 1 ,0,7 ,9,0);
    __Vscopep_parametrised_note_classifier_fsm__u_mac_c->varInsert("captured_weights", &(TOP.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__captured_weights), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 1, 1 ,0,7 ,9,0);
    __Vscopep_parametrised_note_classifier_fsm__u_mac_c->varInsert("clk", &(TOP.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_parametrised_note_classifier_fsm__u_mac_c->varInsert("count", &(TOP.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__count), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_parametrised_note_classifier_fsm__u_mac_c->varInsert("done", &(TOP.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__done), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_parametrised_note_classifier_fsm__u_mac_c->varInsert("drain", &(TOP.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__drain), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_parametrised_note_classifier_fsm__u_mac_c->varInsert("extended_sum", &(TOP.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__extended_sum), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_SIGNED, 0, 1 ,24,0);
    __Vscopep_parametrised_note_classifier_fsm__u_mac_c->varInsert("feature_regs", &(TOP.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__feature_regs), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 1, 1 ,0,7 ,9,0);
    __Vscopep_parametrised_note_classifier_fsm__u_mac_c->varInsert("flush", &(TOP.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__flush), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_parametrised_note_classifier_fsm__u_mac_c->varInsert("product", &(TOP.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__product), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_SIGNED, 0, 1 ,19,0);
    __Vscopep_parametrised_note_classifier_fsm__u_mac_c->varInsert("product_reg", &(TOP.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__product_reg), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,19,0);
    __Vscopep_parametrised_note_classifier_fsm__u_mac_c->varInsert("product_valid", &(TOP.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__product_valid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_parametrised_note_classifier_fsm__u_mac_c->varInsert("rst", &(TOP.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__rst), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_parametrised_note_classifier_fsm__u_mac_c->varInsert("score", &(TOP.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__score), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,23,0);
    __Vscopep_parametrised_note_classifier_fsm__u_mac_c->varInsert("start", &(TOP.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__start), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_parametrised_note_classifier_fsm__u_mac_c->varInsert("weights", &(TOP.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__weights), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 1, 1 ,0,7 ,9,0);
}

Vtop__Syms::~Vtop__Syms() {
    // Tear down scope hierarchy
    __Vhier.remove(0, __Vscopep_parametrised_note_classifier_fsm);
    __Vhier.remove(__Vscopep_parametrised_note_classifier_fsm, __Vscopep_parametrised_note_classifier_fsm__u_compare);
    __Vhier.remove(__Vscopep_parametrised_note_classifier_fsm, __Vscopep_parametrised_note_classifier_fsm__u_mac_a);
    __Vhier.remove(__Vscopep_parametrised_note_classifier_fsm, __Vscopep_parametrised_note_classifier_fsm__u_mac_b);
    __Vhier.remove(__Vscopep_parametrised_note_classifier_fsm, __Vscopep_parametrised_note_classifier_fsm__u_mac_c);
    // Clear keys from hierarchy map after values have been removed
    __Vhier.clear();
    // Tear down scopes
    VL_DO_CLEAR(delete __Vscopep_TOP, __Vscopep_TOP = nullptr);
    VL_DO_CLEAR(delete __Vscopep_parametrised_note_classifier_fsm, __Vscopep_parametrised_note_classifier_fsm = nullptr);
    VL_DO_CLEAR(delete __Vscopep_parametrised_note_classifier_fsm__u_compare, __Vscopep_parametrised_note_classifier_fsm__u_compare = nullptr);
    VL_DO_CLEAR(delete __Vscopep_parametrised_note_classifier_fsm__u_mac_a, __Vscopep_parametrised_note_classifier_fsm__u_mac_a = nullptr);
    VL_DO_CLEAR(delete __Vscopep_parametrised_note_classifier_fsm__u_mac_b, __Vscopep_parametrised_note_classifier_fsm__u_mac_b = nullptr);
    VL_DO_CLEAR(delete __Vscopep_parametrised_note_classifier_fsm__u_mac_c, __Vscopep_parametrised_note_classifier_fsm__u_mac_c = nullptr);
    // Tear down sub module instances
}
