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
    __Vscopep_full_classifier = new VerilatedScope{this, "full_classifier", "full_classifier", "full_classifier", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_full_classifier__u_classifier = new VerilatedScope{this, "full_classifier.u_classifier", "u_classifier", "parametrised_note_classifier_fsm", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_full_classifier__u_classifier__u_compare = new VerilatedScope{this, "full_classifier.u_classifier.u_compare", "u_compare", "compare", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_full_classifier__u_classifier__u_mac_a = new VerilatedScope{this, "full_classifier.u_classifier.u_mac_a", "u_mac_a", "pipelined_parametrised_multiply_accumulate", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_full_classifier__u_classifier__u_mac_b = new VerilatedScope{this, "full_classifier.u_classifier.u_mac_b", "u_mac_b", "pipelined_parametrised_multiply_accumulate", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_full_classifier__u_classifier__u_mac_c = new VerilatedScope{this, "full_classifier.u_classifier.u_mac_c", "u_mac_c", "pipelined_parametrised_multiply_accumulate", -9, VerilatedScope::SCOPE_MODULE};
    __Vscopep_full_classifier__u_load = new VerilatedScope{this, "full_classifier.u_load", "u_load", "load_model", -9, VerilatedScope::SCOPE_MODULE};
    // Set up scope hierarchy
    __Vhier.add(0, __Vscopep_full_classifier);
    __Vhier.add(__Vscopep_full_classifier, __Vscopep_full_classifier__u_classifier);
    __Vhier.add(__Vscopep_full_classifier, __Vscopep_full_classifier__u_load);
    __Vhier.add(__Vscopep_full_classifier__u_classifier, __Vscopep_full_classifier__u_classifier__u_compare);
    __Vhier.add(__Vscopep_full_classifier__u_classifier, __Vscopep_full_classifier__u_classifier__u_mac_a);
    __Vhier.add(__Vscopep_full_classifier__u_classifier, __Vscopep_full_classifier__u_classifier__u_mac_b);
    __Vhier.add(__Vscopep_full_classifier__u_classifier, __Vscopep_full_classifier__u_classifier__u_mac_c);
    // Setup export functions - final: 0
    // Setup export functions - final: 1
    // Setup public variables
    __Vscopep_TOP->varInsert("class_index", &(TOP.class_index), false, VLVT_UINT8, VLVD_OUT|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_TOP->varInsert("clk", &(TOP.clk), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("features", &(TOP.features), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW|VLVF_SIGNED, 1, 1 ,0,7 ,5,0);
    __Vscopep_TOP->varInsert("note", &(TOP.note), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_TOP->varInsert("rst", &(TOP.rst), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("start", &(TOP.start), false, VLVT_UINT8, VLVD_IN|VLVF_PUB_RW, 0, 0);
    __Vscopep_TOP->varInsert("valid", &(TOP.valid), false, VLVT_UINT8, VLVD_OUT|VLVF_PUB_RW, 0, 0);
    __Vscopep_full_classifier->varInsert("ACC_BITS", const_cast<void*>(static_cast<const void*>(&(TOP.full_classifier__DOT__ACC_BITS))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_full_classifier->varInsert("BITS", const_cast<void*>(static_cast<const void*>(&(TOP.full_classifier__DOT__BITS))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_full_classifier->varInsert("biases", &(TOP.full_classifier__DOT__biases), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_SIGNED, 1, 1 ,0,2 ,15,0);
    __Vscopep_full_classifier->varInsert("biases_a", &(TOP.full_classifier__DOT__biases_a), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,15,0);
    __Vscopep_full_classifier->varInsert("biases_b", &(TOP.full_classifier__DOT__biases_b), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,15,0);
    __Vscopep_full_classifier->varInsert("biases_c", &(TOP.full_classifier__DOT__biases_c), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,15,0);
    __Vscopep_full_classifier->varInsert("class_index", &(TOP.full_classifier__DOT__class_index), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_full_classifier->varInsert("clk", &(TOP.full_classifier__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_full_classifier->varInsert("features", &(TOP.full_classifier__DOT__features), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 1, 1 ,0,7 ,5,0);
    __Vscopep_full_classifier->varInsert("note", &(TOP.full_classifier__DOT__note), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_full_classifier->varInsert("rst", &(TOP.full_classifier__DOT__rst), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_full_classifier->varInsert("start", &(TOP.full_classifier__DOT__start), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_full_classifier->varInsert("valid", &(TOP.full_classifier__DOT__valid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_full_classifier->varInsert("weights", &(TOP.full_classifier__DOT__weights), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_SIGNED, 1, 1 ,0,23 ,5,0);
    __Vscopep_full_classifier->varInsert("weights_a", &(TOP.full_classifier__DOT__weights_a), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 1, 1 ,0,7 ,5,0);
    __Vscopep_full_classifier->varInsert("weights_b", &(TOP.full_classifier__DOT__weights_b), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 1, 1 ,0,7 ,5,0);
    __Vscopep_full_classifier->varInsert("weights_c", &(TOP.full_classifier__DOT__weights_c), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 1, 1 ,0,7 ,5,0);
    __Vscopep_full_classifier__u_classifier->varInsert("ACC_BITS", const_cast<void*>(static_cast<const void*>(&(TOP.full_classifier__DOT__u_classifier__DOT__ACC_BITS))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_full_classifier__u_classifier->varInsert("BITS", const_cast<void*>(static_cast<const void*>(&(TOP.full_classifier__DOT__u_classifier__DOT__BITS))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_full_classifier__u_classifier->varInsert("biases", &(TOP.full_classifier__DOT__u_classifier__DOT__biases), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 1, 1 ,0,2 ,15,0);
    __Vscopep_full_classifier__u_classifier->varInsert("biggest", &(TOP.full_classifier__DOT__u_classifier__DOT__biggest), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_full_classifier__u_classifier->varInsert("class_index", &(TOP.full_classifier__DOT__u_classifier__DOT__class_index), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_full_classifier__u_classifier->varInsert("clk", &(TOP.full_classifier__DOT__u_classifier__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_full_classifier__u_classifier->varInsert("feature_regs", &(TOP.full_classifier__DOT__u_classifier__DOT__feature_regs), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 1, 1 ,0,7 ,5,0);
    __Vscopep_full_classifier__u_classifier->varInsert("mac_a_busy", &(TOP.full_classifier__DOT__u_classifier__DOT__mac_a_busy), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_full_classifier__u_classifier->varInsert("mac_a_done", &(TOP.full_classifier__DOT__u_classifier__DOT__mac_a_done), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_full_classifier__u_classifier->varInsert("mac_a_score", &(TOP.full_classifier__DOT__u_classifier__DOT__mac_a_score), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,15,0);
    __Vscopep_full_classifier__u_classifier->varInsert("mac_b_busy", &(TOP.full_classifier__DOT__u_classifier__DOT__mac_b_busy), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_full_classifier__u_classifier->varInsert("mac_b_done", &(TOP.full_classifier__DOT__u_classifier__DOT__mac_b_done), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_full_classifier__u_classifier->varInsert("mac_b_score", &(TOP.full_classifier__DOT__u_classifier__DOT__mac_b_score), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,15,0);
    __Vscopep_full_classifier__u_classifier->varInsert("mac_c_busy", &(TOP.full_classifier__DOT__u_classifier__DOT__mac_c_busy), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_full_classifier__u_classifier->varInsert("mac_c_done", &(TOP.full_classifier__DOT__u_classifier__DOT__mac_c_done), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_full_classifier__u_classifier->varInsert("mac_c_score", &(TOP.full_classifier__DOT__u_classifier__DOT__mac_c_score), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,15,0);
    __Vscopep_full_classifier__u_classifier->varInsert("rst", &(TOP.full_classifier__DOT__u_classifier__DOT__rst), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_full_classifier__u_classifier->varInsert("start", &(TOP.full_classifier__DOT__u_classifier__DOT__start), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_full_classifier__u_classifier->varInsert("valid", &(TOP.full_classifier__DOT__u_classifier__DOT__valid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_full_classifier__u_classifier->varInsert("weights", &(TOP.full_classifier__DOT__u_classifier__DOT__weights), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 1, 1 ,0,23 ,5,0);
    __Vscopep_full_classifier__u_classifier__u_compare->varInsert("BITS", const_cast<void*>(static_cast<const void*>(&(TOP.full_classifier__DOT__u_classifier__DOT__u_compare__DOT__BITS))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_full_classifier__u_classifier__u_compare->varInsert("a", &(TOP.full_classifier__DOT__u_classifier__DOT__u_compare__DOT__a), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,15,0);
    __Vscopep_full_classifier__u_classifier__u_compare->varInsert("b", &(TOP.full_classifier__DOT__u_classifier__DOT__u_compare__DOT__b), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,15,0);
    __Vscopep_full_classifier__u_classifier__u_compare->varInsert("biggest", &(TOP.full_classifier__DOT__u_classifier__DOT__u_compare__DOT__biggest), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,1,0);
    __Vscopep_full_classifier__u_classifier__u_compare->varInsert("c", &(TOP.full_classifier__DOT__u_classifier__DOT__u_compare__DOT__c), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,15,0);
    __Vscopep_full_classifier__u_classifier__u_mac_a->varInsert("ACC_BITS", const_cast<void*>(static_cast<const void*>(&(TOP.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__ACC_BITS))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_full_classifier__u_classifier__u_mac_a->varInsert("BITS", const_cast<void*>(static_cast<const void*>(&(TOP.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__BITS))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_full_classifier__u_classifier__u_mac_a->varInsert("bias", &(TOP.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__bias), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,15,0);
    __Vscopep_full_classifier__u_classifier__u_mac_a->varInsert("busy", &(TOP.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__busy), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_full_classifier__u_classifier__u_mac_a->varInsert("captured_feature_regs", &(TOP.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__captured_feature_regs), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 1, 1 ,0,7 ,5,0);
    __Vscopep_full_classifier__u_classifier__u_mac_a->varInsert("captured_weights", &(TOP.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__captured_weights), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 1, 1 ,0,7 ,5,0);
    __Vscopep_full_classifier__u_classifier__u_mac_a->varInsert("clk", &(TOP.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_full_classifier__u_classifier__u_mac_a->varInsert("count", &(TOP.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__count), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_full_classifier__u_classifier__u_mac_a->varInsert("done", &(TOP.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__done), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_full_classifier__u_classifier__u_mac_a->varInsert("drain", &(TOP.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__drain), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_full_classifier__u_classifier__u_mac_a->varInsert("extended_sum", &(TOP.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__extended_sum), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_SIGNED, 0, 1 ,16,0);
    __Vscopep_full_classifier__u_classifier__u_mac_a->varInsert("feature_regs", &(TOP.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__feature_regs), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 1, 1 ,0,7 ,5,0);
    __Vscopep_full_classifier__u_classifier__u_mac_a->varInsert("flush", &(TOP.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__flush), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_full_classifier__u_classifier__u_mac_a->varInsert("product", &(TOP.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__product), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_SIGNED, 0, 1 ,11,0);
    __Vscopep_full_classifier__u_classifier__u_mac_a->varInsert("product_reg", &(TOP.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__product_reg), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,11,0);
    __Vscopep_full_classifier__u_classifier__u_mac_a->varInsert("product_valid", &(TOP.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__product_valid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_full_classifier__u_classifier__u_mac_a->varInsert("rst", &(TOP.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__rst), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_full_classifier__u_classifier__u_mac_a->varInsert("score", &(TOP.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__score), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,15,0);
    __Vscopep_full_classifier__u_classifier__u_mac_a->varInsert("start", &(TOP.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__start), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_full_classifier__u_classifier__u_mac_a->varInsert("weights", &(TOP.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__weights), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 1, 1 ,0,7 ,5,0);
    __Vscopep_full_classifier__u_classifier__u_mac_b->varInsert("ACC_BITS", const_cast<void*>(static_cast<const void*>(&(TOP.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__ACC_BITS))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_full_classifier__u_classifier__u_mac_b->varInsert("BITS", const_cast<void*>(static_cast<const void*>(&(TOP.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__BITS))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_full_classifier__u_classifier__u_mac_b->varInsert("bias", &(TOP.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__bias), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,15,0);
    __Vscopep_full_classifier__u_classifier__u_mac_b->varInsert("busy", &(TOP.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__busy), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_full_classifier__u_classifier__u_mac_b->varInsert("captured_feature_regs", &(TOP.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__captured_feature_regs), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 1, 1 ,0,7 ,5,0);
    __Vscopep_full_classifier__u_classifier__u_mac_b->varInsert("captured_weights", &(TOP.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__captured_weights), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 1, 1 ,0,7 ,5,0);
    __Vscopep_full_classifier__u_classifier__u_mac_b->varInsert("clk", &(TOP.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_full_classifier__u_classifier__u_mac_b->varInsert("count", &(TOP.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__count), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_full_classifier__u_classifier__u_mac_b->varInsert("done", &(TOP.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__done), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_full_classifier__u_classifier__u_mac_b->varInsert("drain", &(TOP.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__drain), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_full_classifier__u_classifier__u_mac_b->varInsert("extended_sum", &(TOP.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__extended_sum), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_SIGNED, 0, 1 ,16,0);
    __Vscopep_full_classifier__u_classifier__u_mac_b->varInsert("feature_regs", &(TOP.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__feature_regs), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 1, 1 ,0,7 ,5,0);
    __Vscopep_full_classifier__u_classifier__u_mac_b->varInsert("flush", &(TOP.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__flush), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_full_classifier__u_classifier__u_mac_b->varInsert("product", &(TOP.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__product), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_SIGNED, 0, 1 ,11,0);
    __Vscopep_full_classifier__u_classifier__u_mac_b->varInsert("product_reg", &(TOP.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__product_reg), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,11,0);
    __Vscopep_full_classifier__u_classifier__u_mac_b->varInsert("product_valid", &(TOP.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__product_valid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_full_classifier__u_classifier__u_mac_b->varInsert("rst", &(TOP.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__rst), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_full_classifier__u_classifier__u_mac_b->varInsert("score", &(TOP.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__score), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,15,0);
    __Vscopep_full_classifier__u_classifier__u_mac_b->varInsert("start", &(TOP.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__start), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_full_classifier__u_classifier__u_mac_b->varInsert("weights", &(TOP.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__weights), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 1, 1 ,0,7 ,5,0);
    __Vscopep_full_classifier__u_classifier__u_mac_c->varInsert("ACC_BITS", const_cast<void*>(static_cast<const void*>(&(TOP.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__ACC_BITS))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_full_classifier__u_classifier__u_mac_c->varInsert("BITS", const_cast<void*>(static_cast<const void*>(&(TOP.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__BITS))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_full_classifier__u_classifier__u_mac_c->varInsert("bias", &(TOP.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__bias), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,15,0);
    __Vscopep_full_classifier__u_classifier__u_mac_c->varInsert("busy", &(TOP.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__busy), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_full_classifier__u_classifier__u_mac_c->varInsert("captured_feature_regs", &(TOP.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__captured_feature_regs), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 1, 1 ,0,7 ,5,0);
    __Vscopep_full_classifier__u_classifier__u_mac_c->varInsert("captured_weights", &(TOP.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__captured_weights), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 1, 1 ,0,7 ,5,0);
    __Vscopep_full_classifier__u_classifier__u_mac_c->varInsert("clk", &(TOP.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__clk), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_full_classifier__u_classifier__u_mac_c->varInsert("count", &(TOP.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__count), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_full_classifier__u_classifier__u_mac_c->varInsert("done", &(TOP.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__done), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_full_classifier__u_classifier__u_mac_c->varInsert("drain", &(TOP.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__drain), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_full_classifier__u_classifier__u_mac_c->varInsert("extended_sum", &(TOP.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__extended_sum), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_SIGNED, 0, 1 ,16,0);
    __Vscopep_full_classifier__u_classifier__u_mac_c->varInsert("feature_regs", &(TOP.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__feature_regs), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 1, 1 ,0,7 ,5,0);
    __Vscopep_full_classifier__u_classifier__u_mac_c->varInsert("flush", &(TOP.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__flush), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_full_classifier__u_classifier__u_mac_c->varInsert("product", &(TOP.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__product), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_SIGNED, 0, 1 ,11,0);
    __Vscopep_full_classifier__u_classifier__u_mac_c->varInsert("product_reg", &(TOP.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__product_reg), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,11,0);
    __Vscopep_full_classifier__u_classifier__u_mac_c->varInsert("product_valid", &(TOP.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__product_valid), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_full_classifier__u_classifier__u_mac_c->varInsert("rst", &(TOP.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__rst), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_full_classifier__u_classifier__u_mac_c->varInsert("score", &(TOP.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__score), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 0, 1 ,15,0);
    __Vscopep_full_classifier__u_classifier__u_mac_c->varInsert("start", &(TOP.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__start), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 0);
    __Vscopep_full_classifier__u_classifier__u_mac_c->varInsert("weights", &(TOP.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__weights), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 1, 1 ,0,7 ,5,0);
    __Vscopep_full_classifier__u_load->varInsert("ACC_BITS", const_cast<void*>(static_cast<const void*>(&(TOP.full_classifier__DOT__u_load__DOT__ACC_BITS))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_full_classifier__u_load->varInsert("BIASES_FILE", const_cast<void*>(static_cast<const void*>(&(TOP.full_classifier__DOT__u_load__DOT__BIASES_FILE))), true, VLVT_WDATA, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,167,0);
    __Vscopep_full_classifier__u_load->varInsert("BITS", const_cast<void*>(static_cast<const void*>(&(TOP.full_classifier__DOT__u_load__DOT__BITS))), true, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_DPI_CLAY|VLVF_SIGNED, 0, 1 ,31,0);
    __Vscopep_full_classifier__u_load->varInsert("WEIGHTS_FILE", const_cast<void*>(static_cast<const void*>(&(TOP.full_classifier__DOT__u_load__DOT__WEIGHTS_FILE))), true, VLVT_WDATA, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,175,0);
    __Vscopep_full_classifier__u_load->varInsert("bias_base", &(TOP.full_classifier__DOT__u_load__DOT__bias_base), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_full_classifier__u_load->varInsert("bias_rom", &(TOP.full_classifier__DOT__u_load__DOT__bias_rom), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 1, 1 ,0,14 ,15,0);
    __Vscopep_full_classifier__u_load->varInsert("biases_a", &(TOP.full_classifier__DOT__u_load__DOT__biases_a), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_SIGNED, 0, 1 ,15,0);
    __Vscopep_full_classifier__u_load->varInsert("biases_b", &(TOP.full_classifier__DOT__u_load__DOT__biases_b), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_SIGNED, 0, 1 ,15,0);
    __Vscopep_full_classifier__u_load->varInsert("biases_c", &(TOP.full_classifier__DOT__u_load__DOT__biases_c), false, VLVT_UINT16, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_SIGNED, 0, 1 ,15,0);
    __Vscopep_full_classifier__u_load->varInsert("note", &(TOP.full_classifier__DOT__u_load__DOT__note), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW, 0, 1 ,2,0);
    __Vscopep_full_classifier__u_load->varInsert("weight_base", &(TOP.full_classifier__DOT__u_load__DOT__weight_base), false, VLVT_UINT32, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_DPI_CLAY, 0, 1 ,31,0);
    __Vscopep_full_classifier__u_load->varInsert("weight_rom", &(TOP.full_classifier__DOT__u_load__DOT__weight_rom), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_SIGNED, 1, 1 ,0,119 ,5,0);
    __Vscopep_full_classifier__u_load->varInsert("weights_a", &(TOP.full_classifier__DOT__u_load__DOT__weights_a), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_SIGNED, 1, 1 ,0,7 ,5,0);
    __Vscopep_full_classifier__u_load->varInsert("weights_b", &(TOP.full_classifier__DOT__u_load__DOT__weights_b), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_SIGNED, 1, 1 ,0,7 ,5,0);
    __Vscopep_full_classifier__u_load->varInsert("weights_c", &(TOP.full_classifier__DOT__u_load__DOT__weights_c), false, VLVT_UINT8, VLVD_NODIR|VLVF_PUB_RW|VLVF_CONTINUOUSLY|VLVF_SIGNED, 1, 1 ,0,7 ,5,0);
}

Vtop__Syms::~Vtop__Syms() {
    // Tear down scope hierarchy
    __Vhier.remove(0, __Vscopep_full_classifier);
    __Vhier.remove(__Vscopep_full_classifier, __Vscopep_full_classifier__u_classifier);
    __Vhier.remove(__Vscopep_full_classifier, __Vscopep_full_classifier__u_load);
    __Vhier.remove(__Vscopep_full_classifier__u_classifier, __Vscopep_full_classifier__u_classifier__u_compare);
    __Vhier.remove(__Vscopep_full_classifier__u_classifier, __Vscopep_full_classifier__u_classifier__u_mac_a);
    __Vhier.remove(__Vscopep_full_classifier__u_classifier, __Vscopep_full_classifier__u_classifier__u_mac_b);
    __Vhier.remove(__Vscopep_full_classifier__u_classifier, __Vscopep_full_classifier__u_classifier__u_mac_c);
    // Clear keys from hierarchy map after values have been removed
    __Vhier.clear();
    // Tear down scopes
    VL_DO_CLEAR(delete __Vscopep_TOP, __Vscopep_TOP = nullptr);
    VL_DO_CLEAR(delete __Vscopep_full_classifier, __Vscopep_full_classifier = nullptr);
    VL_DO_CLEAR(delete __Vscopep_full_classifier__u_classifier, __Vscopep_full_classifier__u_classifier = nullptr);
    VL_DO_CLEAR(delete __Vscopep_full_classifier__u_classifier__u_compare, __Vscopep_full_classifier__u_classifier__u_compare = nullptr);
    VL_DO_CLEAR(delete __Vscopep_full_classifier__u_classifier__u_mac_a, __Vscopep_full_classifier__u_classifier__u_mac_a = nullptr);
    VL_DO_CLEAR(delete __Vscopep_full_classifier__u_classifier__u_mac_b, __Vscopep_full_classifier__u_classifier__u_mac_b = nullptr);
    VL_DO_CLEAR(delete __Vscopep_full_classifier__u_classifier__u_mac_c, __Vscopep_full_classifier__u_classifier__u_mac_c = nullptr);
    VL_DO_CLEAR(delete __Vscopep_full_classifier__u_load, __Vscopep_full_classifier__u_load = nullptr);
    // Tear down sub module instances
}
