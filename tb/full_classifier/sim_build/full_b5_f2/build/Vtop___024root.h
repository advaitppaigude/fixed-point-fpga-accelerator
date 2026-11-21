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
        VL_IN8(note,2,0);
        VL_OUT8(class_index,1,0);
        VL_OUT8(valid,0,0);
        CData/*0:0*/ full_classifier__DOT__clk;
        CData/*0:0*/ full_classifier__DOT__rst;
        CData/*0:0*/ full_classifier__DOT__start;
        CData/*2:0*/ full_classifier__DOT__note;
        CData/*1:0*/ full_classifier__DOT__class_index;
        CData/*0:0*/ full_classifier__DOT__valid;
        CData/*2:0*/ full_classifier__DOT__u_load__DOT__note;
        CData/*0:0*/ full_classifier__DOT__u_classifier__DOT__clk;
        CData/*0:0*/ full_classifier__DOT__u_classifier__DOT__rst;
        CData/*0:0*/ full_classifier__DOT__u_classifier__DOT__start;
        CData/*1:0*/ full_classifier__DOT__u_classifier__DOT__class_index;
        CData/*0:0*/ full_classifier__DOT__u_classifier__DOT__valid;
        CData/*0:0*/ full_classifier__DOT__u_classifier__DOT__mac_a_busy;
        CData/*0:0*/ full_classifier__DOT__u_classifier__DOT__mac_a_done;
        CData/*0:0*/ full_classifier__DOT__u_classifier__DOT__mac_b_busy;
        CData/*0:0*/ full_classifier__DOT__u_classifier__DOT__mac_b_done;
        CData/*0:0*/ full_classifier__DOT__u_classifier__DOT__mac_c_busy;
        CData/*0:0*/ full_classifier__DOT__u_classifier__DOT__mac_c_done;
        CData/*1:0*/ full_classifier__DOT__u_classifier__DOT__biggest;
        CData/*0:0*/ full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__clk;
        CData/*0:0*/ full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__rst;
        CData/*0:0*/ full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__flush;
        CData/*0:0*/ full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__start;
        CData/*0:0*/ full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__busy;
        CData/*0:0*/ full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__done;
        CData/*2:0*/ full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__count;
        CData/*0:0*/ full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__product_valid;
        CData/*0:0*/ full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__drain;
        CData/*0:0*/ full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__clk;
        CData/*0:0*/ full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__rst;
        CData/*0:0*/ full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__flush;
        CData/*0:0*/ full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__start;
        CData/*0:0*/ full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__busy;
        CData/*0:0*/ full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__done;
        CData/*2:0*/ full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__count;
        CData/*0:0*/ full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__product_valid;
        CData/*0:0*/ full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__drain;
        CData/*0:0*/ full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__clk;
        CData/*0:0*/ full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__rst;
        CData/*0:0*/ full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__flush;
        CData/*0:0*/ full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__start;
        CData/*0:0*/ full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__busy;
        CData/*0:0*/ full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__done;
        CData/*2:0*/ full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__count;
        CData/*0:0*/ full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__product_valid;
        CData/*0:0*/ full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__drain;
        CData/*1:0*/ full_classifier__DOT__u_classifier__DOT__u_compare__DOT__biggest;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __VicoFirstIteration;
        CData/*0:0*/ __VicoPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__full_classifier__DOT__u_classifier__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__clk__0;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        SData/*13:0*/ full_classifier__DOT__biases_a;
    };
    struct {
        SData/*13:0*/ full_classifier__DOT__biases_b;
        SData/*13:0*/ full_classifier__DOT__biases_c;
        SData/*13:0*/ full_classifier__DOT__u_load__DOT__biases_a;
        SData/*13:0*/ full_classifier__DOT__u_load__DOT__biases_b;
        SData/*13:0*/ full_classifier__DOT__u_load__DOT__biases_c;
        SData/*13:0*/ full_classifier__DOT__u_classifier__DOT__mac_a_score;
        SData/*13:0*/ full_classifier__DOT__u_classifier__DOT__mac_b_score;
        SData/*13:0*/ full_classifier__DOT__u_classifier__DOT__mac_c_score;
        SData/*13:0*/ full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__bias;
        SData/*13:0*/ full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__score;
        SData/*9:0*/ full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__product;
        SData/*14:0*/ full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__extended_sum;
        SData/*9:0*/ full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__product_reg;
        SData/*13:0*/ full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__bias;
        SData/*13:0*/ full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__score;
        SData/*9:0*/ full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__product;
        SData/*14:0*/ full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__extended_sum;
        SData/*9:0*/ full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__product_reg;
        SData/*13:0*/ full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__bias;
        SData/*13:0*/ full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__score;
        SData/*9:0*/ full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__product;
        SData/*14:0*/ full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__extended_sum;
        SData/*9:0*/ full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__product_reg;
        SData/*13:0*/ full_classifier__DOT__u_classifier__DOT__u_compare__DOT__a;
        SData/*13:0*/ full_classifier__DOT__u_classifier__DOT__u_compare__DOT__b;
        SData/*13:0*/ full_classifier__DOT__u_classifier__DOT__u_compare__DOT__c;
        IData/*31:0*/ full_classifier__DOT__u_load__DOT__weight_base;
        IData/*31:0*/ full_classifier__DOT__u_load__DOT__bias_base;
        IData/*31:0*/ __VactIterCount;
        VlUnpacked<CData/*4:0*/, 8> features;
        VlUnpacked<CData/*4:0*/, 8> full_classifier__DOT__features;
        VlUnpacked<CData/*4:0*/, 8> full_classifier__DOT__weights_a;
        VlUnpacked<CData/*4:0*/, 8> full_classifier__DOT__weights_b;
        VlUnpacked<CData/*4:0*/, 8> full_classifier__DOT__weights_c;
        VlUnpacked<CData/*4:0*/, 24> full_classifier__DOT__weights;
        VlUnpacked<SData/*13:0*/, 3> full_classifier__DOT__biases;
        VlUnpacked<CData/*4:0*/, 8> full_classifier__DOT__u_load__DOT__weights_a;
        VlUnpacked<CData/*4:0*/, 8> full_classifier__DOT__u_load__DOT__weights_b;
        VlUnpacked<CData/*4:0*/, 8> full_classifier__DOT__u_load__DOT__weights_c;
        VlUnpacked<CData/*4:0*/, 120> full_classifier__DOT__u_load__DOT__weight_rom;
        VlUnpacked<SData/*13:0*/, 15> full_classifier__DOT__u_load__DOT__bias_rom;
        VlUnpacked<CData/*4:0*/, 8> full_classifier__DOT__u_classifier__DOT__feature_regs;
        VlUnpacked<CData/*4:0*/, 24> full_classifier__DOT__u_classifier__DOT__weights;
        VlUnpacked<SData/*13:0*/, 3> full_classifier__DOT__u_classifier__DOT__biases;
        VlUnpacked<CData/*4:0*/, 8> full_classifier__DOT__u_classifier__DOT____Vcellinp__u_mac_a__weights;
        VlUnpacked<CData/*4:0*/, 8> full_classifier__DOT__u_classifier__DOT____Vcellinp__u_mac_b__weights;
        VlUnpacked<CData/*4:0*/, 8> full_classifier__DOT__u_classifier__DOT____Vcellinp__u_mac_c__weights;
        VlUnpacked<CData/*4:0*/, 8> full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__feature_regs;
        VlUnpacked<CData/*4:0*/, 8> full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__weights;
        VlUnpacked<CData/*4:0*/, 8> full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__captured_feature_regs;
        VlUnpacked<CData/*4:0*/, 8> full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__captured_weights;
        VlUnpacked<CData/*4:0*/, 8> full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__feature_regs;
        VlUnpacked<CData/*4:0*/, 8> full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__weights;
        VlUnpacked<CData/*4:0*/, 8> full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__captured_feature_regs;
        VlUnpacked<CData/*4:0*/, 8> full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__captured_weights;
        VlUnpacked<CData/*4:0*/, 8> full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__feature_regs;
        VlUnpacked<CData/*4:0*/, 8> full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__weights;
        VlUnpacked<CData/*4:0*/, 8> full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__captured_feature_regs;
        VlUnpacked<CData/*4:0*/, 8> full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__captured_weights;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr IData/*31:0*/ full_classifier__DOT__BITS = 5U;
    static constexpr IData/*31:0*/ full_classifier__DOT__ACC_BITS = 0x0000000eU;
    static constexpr IData/*31:0*/ full_classifier__DOT__u_load__DOT__BITS = 5U;
    static constexpr IData/*31:0*/ full_classifier__DOT__u_load__DOT__ACC_BITS = 0x0000000eU;
    static constexpr VlWide<6>/*175:0*/ full_classifier__DOT__u_load__DOT__WEIGHTS_FILE = VlWide<6>{{
            0x2e6d656d, 0x67687473, 0x5f776569, 0x365f6633,
            0x6f6d2f62, 0x00000072
    }};
    static constexpr VlWide<6>/*167:0*/ full_classifier__DOT__u_load__DOT__BIASES_FILE = VlWide<6>{{
            0x2e6d656d, 0x61736573, 0x335f6269, 0x62365f66,
            0x726f6d2f, 0x00000000
    }};
    static constexpr IData/*31:0*/ full_classifier__DOT__u_classifier__DOT__BITS = 5U;
    static constexpr IData/*31:0*/ full_classifier__DOT__u_classifier__DOT__ACC_BITS = 0x0000000eU;
    static constexpr IData/*31:0*/ full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__BITS = 5U;
    static constexpr IData/*31:0*/ full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__ACC_BITS = 0x0000000eU;
    static constexpr IData/*31:0*/ full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__BITS = 5U;
    static constexpr IData/*31:0*/ full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__ACC_BITS = 0x0000000eU;
    static constexpr IData/*31:0*/ full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__BITS = 5U;
    static constexpr IData/*31:0*/ full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__ACC_BITS = 0x0000000eU;
    static constexpr IData/*31:0*/ full_classifier__DOT__u_classifier__DOT__u_compare__DOT__BITS = 0x0000000eU;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* namep);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
