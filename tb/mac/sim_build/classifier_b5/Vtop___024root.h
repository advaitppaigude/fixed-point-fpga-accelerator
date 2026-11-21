// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"


class Vtop__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        VL_IN8(start,0,0);
        VL_OUT8(class_index,1,0);
        VL_OUT8(valid,0,0);
        CData/*0:0*/ b5_f2_fsm_v1_pipelined__DOT__clk;
        CData/*0:0*/ b5_f2_fsm_v1_pipelined__DOT__rst;
        CData/*0:0*/ b5_f2_fsm_v1_pipelined__DOT__start;
        CData/*1:0*/ b5_f2_fsm_v1_pipelined__DOT__class_index;
        CData/*0:0*/ b5_f2_fsm_v1_pipelined__DOT__valid;
        CData/*0:0*/ b5_f2_fsm_v1_pipelined__DOT__mac_a_busy;
        CData/*0:0*/ b5_f2_fsm_v1_pipelined__DOT__mac_a_done;
        CData/*0:0*/ b5_f2_fsm_v1_pipelined__DOT__mac_b_busy;
        CData/*0:0*/ b5_f2_fsm_v1_pipelined__DOT__mac_b_done;
        CData/*0:0*/ b5_f2_fsm_v1_pipelined__DOT__mac_c_busy;
        CData/*0:0*/ b5_f2_fsm_v1_pipelined__DOT__mac_c_done;
        CData/*1:0*/ b5_f2_fsm_v1_pipelined__DOT__biggest;
        CData/*0:0*/ b5_f2_fsm_v1_pipelined__DOT__u_mac_a__DOT__clk;
        CData/*0:0*/ b5_f2_fsm_v1_pipelined__DOT__u_mac_a__DOT__rst;
        CData/*0:0*/ b5_f2_fsm_v1_pipelined__DOT__u_mac_a__DOT__flush;
        CData/*0:0*/ b5_f2_fsm_v1_pipelined__DOT__u_mac_a__DOT__start;
        CData/*0:0*/ b5_f2_fsm_v1_pipelined__DOT__u_mac_a__DOT__busy;
        CData/*0:0*/ b5_f2_fsm_v1_pipelined__DOT__u_mac_a__DOT__done;
        CData/*2:0*/ b5_f2_fsm_v1_pipelined__DOT__u_mac_a__DOT__count;
        CData/*0:0*/ b5_f2_fsm_v1_pipelined__DOT__u_mac_a__DOT__product_valid;
        CData/*0:0*/ b5_f2_fsm_v1_pipelined__DOT__u_mac_a__DOT__drain;
        CData/*0:0*/ b5_f2_fsm_v1_pipelined__DOT__u_mac_b__DOT__clk;
        CData/*0:0*/ b5_f2_fsm_v1_pipelined__DOT__u_mac_b__DOT__rst;
        CData/*0:0*/ b5_f2_fsm_v1_pipelined__DOT__u_mac_b__DOT__flush;
        CData/*0:0*/ b5_f2_fsm_v1_pipelined__DOT__u_mac_b__DOT__start;
        CData/*0:0*/ b5_f2_fsm_v1_pipelined__DOT__u_mac_b__DOT__busy;
        CData/*0:0*/ b5_f2_fsm_v1_pipelined__DOT__u_mac_b__DOT__done;
        CData/*2:0*/ b5_f2_fsm_v1_pipelined__DOT__u_mac_b__DOT__count;
        CData/*0:0*/ b5_f2_fsm_v1_pipelined__DOT__u_mac_b__DOT__product_valid;
        CData/*0:0*/ b5_f2_fsm_v1_pipelined__DOT__u_mac_b__DOT__drain;
        CData/*0:0*/ b5_f2_fsm_v1_pipelined__DOT__u_mac_c__DOT__clk;
        CData/*0:0*/ b5_f2_fsm_v1_pipelined__DOT__u_mac_c__DOT__rst;
        CData/*0:0*/ b5_f2_fsm_v1_pipelined__DOT__u_mac_c__DOT__flush;
        CData/*0:0*/ b5_f2_fsm_v1_pipelined__DOT__u_mac_c__DOT__start;
        CData/*0:0*/ b5_f2_fsm_v1_pipelined__DOT__u_mac_c__DOT__busy;
        CData/*0:0*/ b5_f2_fsm_v1_pipelined__DOT__u_mac_c__DOT__done;
        CData/*2:0*/ b5_f2_fsm_v1_pipelined__DOT__u_mac_c__DOT__count;
        CData/*0:0*/ b5_f2_fsm_v1_pipelined__DOT__u_mac_c__DOT__product_valid;
        CData/*0:0*/ b5_f2_fsm_v1_pipelined__DOT__u_mac_c__DOT__drain;
        CData/*1:0*/ b5_f2_fsm_v1_pipelined__DOT__u_compare__DOT__biggest;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __VicoPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__b5_f2_fsm_v1_pipelined__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__b5_f2_fsm_v1_pipelined__DOT__u_mac_a__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__b5_f2_fsm_v1_pipelined__DOT__u_mac_b__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__b5_f2_fsm_v1_pipelined__DOT__u_mac_c__DOT__clk__0;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        SData/*13:0*/ b5_f2_fsm_v1_pipelined__DOT__mac_a_score;
        SData/*13:0*/ b5_f2_fsm_v1_pipelined__DOT__mac_b_score;
        SData/*13:0*/ b5_f2_fsm_v1_pipelined__DOT__mac_c_score;
        SData/*13:0*/ b5_f2_fsm_v1_pipelined__DOT__u_mac_a__DOT__bias;
        SData/*13:0*/ b5_f2_fsm_v1_pipelined__DOT__u_mac_a__DOT__score;
        SData/*9:0*/ b5_f2_fsm_v1_pipelined__DOT__u_mac_a__DOT__product;
        SData/*14:0*/ b5_f2_fsm_v1_pipelined__DOT__u_mac_a__DOT__extended_sum;
        SData/*9:0*/ b5_f2_fsm_v1_pipelined__DOT__u_mac_a__DOT__product_reg;
        SData/*13:0*/ b5_f2_fsm_v1_pipelined__DOT__u_mac_b__DOT__bias;
    };
    struct {
        SData/*13:0*/ b5_f2_fsm_v1_pipelined__DOT__u_mac_b__DOT__score;
        SData/*9:0*/ b5_f2_fsm_v1_pipelined__DOT__u_mac_b__DOT__product;
        SData/*14:0*/ b5_f2_fsm_v1_pipelined__DOT__u_mac_b__DOT__extended_sum;
        SData/*9:0*/ b5_f2_fsm_v1_pipelined__DOT__u_mac_b__DOT__product_reg;
        SData/*13:0*/ b5_f2_fsm_v1_pipelined__DOT__u_mac_c__DOT__bias;
        SData/*13:0*/ b5_f2_fsm_v1_pipelined__DOT__u_mac_c__DOT__score;
        SData/*9:0*/ b5_f2_fsm_v1_pipelined__DOT__u_mac_c__DOT__product;
        SData/*14:0*/ b5_f2_fsm_v1_pipelined__DOT__u_mac_c__DOT__extended_sum;
        SData/*9:0*/ b5_f2_fsm_v1_pipelined__DOT__u_mac_c__DOT__product_reg;
        SData/*13:0*/ b5_f2_fsm_v1_pipelined__DOT__u_compare__DOT__a;
        SData/*13:0*/ b5_f2_fsm_v1_pipelined__DOT__u_compare__DOT__b;
        SData/*13:0*/ b5_f2_fsm_v1_pipelined__DOT__u_compare__DOT__c;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*4:0*/, 8> feature_regs;
        VlUnpacked<CData/*4:0*/, 24> weights;
        VlUnpacked<SData/*13:0*/, 3> biases;
        VlUnpacked<CData/*4:0*/, 8> b5_f2_fsm_v1_pipelined__DOT__feature_regs;
        VlUnpacked<CData/*4:0*/, 24> b5_f2_fsm_v1_pipelined__DOT__weights;
        VlUnpacked<SData/*13:0*/, 3> b5_f2_fsm_v1_pipelined__DOT__biases;
        VlUnpacked<CData/*4:0*/, 8> b5_f2_fsm_v1_pipelined__DOT____Vcellinp__u_mac_a__weights;
        VlUnpacked<CData/*4:0*/, 8> b5_f2_fsm_v1_pipelined__DOT____Vcellinp__u_mac_b__weights;
        VlUnpacked<CData/*4:0*/, 8> b5_f2_fsm_v1_pipelined__DOT____Vcellinp__u_mac_c__weights;
        VlUnpacked<CData/*4:0*/, 8> b5_f2_fsm_v1_pipelined__DOT__u_mac_a__DOT__feature_regs;
        VlUnpacked<CData/*4:0*/, 8> b5_f2_fsm_v1_pipelined__DOT__u_mac_a__DOT__weights;
        VlUnpacked<CData/*4:0*/, 8> b5_f2_fsm_v1_pipelined__DOT__u_mac_a__DOT__captured_feature_regs;
        VlUnpacked<CData/*4:0*/, 8> b5_f2_fsm_v1_pipelined__DOT__u_mac_a__DOT__captured_weights;
        VlUnpacked<CData/*4:0*/, 8> b5_f2_fsm_v1_pipelined__DOT__u_mac_b__DOT__feature_regs;
        VlUnpacked<CData/*4:0*/, 8> b5_f2_fsm_v1_pipelined__DOT__u_mac_b__DOT__weights;
        VlUnpacked<CData/*4:0*/, 8> b5_f2_fsm_v1_pipelined__DOT__u_mac_b__DOT__captured_feature_regs;
        VlUnpacked<CData/*4:0*/, 8> b5_f2_fsm_v1_pipelined__DOT__u_mac_b__DOT__captured_weights;
        VlUnpacked<CData/*4:0*/, 8> b5_f2_fsm_v1_pipelined__DOT__u_mac_c__DOT__feature_regs;
        VlUnpacked<CData/*4:0*/, 8> b5_f2_fsm_v1_pipelined__DOT__u_mac_c__DOT__weights;
        VlUnpacked<CData/*4:0*/, 8> b5_f2_fsm_v1_pipelined__DOT__u_mac_c__DOT__captured_feature_regs;
        VlUnpacked<CData/*4:0*/, 8> b5_f2_fsm_v1_pipelined__DOT__u_mac_c__DOT__captured_weights;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr IData/*31:0*/ b5_f2_fsm_v1_pipelined__DOT__BITS = 5U;
    static constexpr IData/*31:0*/ b5_f2_fsm_v1_pipelined__DOT__ACC_BITS = 0x0000000eU;
    static constexpr IData/*31:0*/ b5_f2_fsm_v1_pipelined__DOT__u_mac_a__DOT__BITS = 5U;
    static constexpr IData/*31:0*/ b5_f2_fsm_v1_pipelined__DOT__u_mac_a__DOT__ACC_BITS = 0x0000000eU;
    static constexpr IData/*31:0*/ b5_f2_fsm_v1_pipelined__DOT__u_mac_b__DOT__BITS = 5U;
    static constexpr IData/*31:0*/ b5_f2_fsm_v1_pipelined__DOT__u_mac_b__DOT__ACC_BITS = 0x0000000eU;
    static constexpr IData/*31:0*/ b5_f2_fsm_v1_pipelined__DOT__u_mac_c__DOT__BITS = 5U;
    static constexpr IData/*31:0*/ b5_f2_fsm_v1_pipelined__DOT__u_mac_c__DOT__ACC_BITS = 0x0000000eU;
    static constexpr IData/*31:0*/ b5_f2_fsm_v1_pipelined__DOT__u_compare__DOT__BITS = 0x0000000eU;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* namep);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
