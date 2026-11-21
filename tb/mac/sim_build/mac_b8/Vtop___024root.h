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
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_IN8(flush,0,0);
    VL_IN8(start,0,0);
    VL_OUT8(busy,0,0);
    VL_OUT8(done,0,0);
    CData/*0:0*/ pipelined_parametrised_multiply_accumulate__DOT__clk;
    CData/*0:0*/ pipelined_parametrised_multiply_accumulate__DOT__rst;
    CData/*0:0*/ pipelined_parametrised_multiply_accumulate__DOT__flush;
    CData/*0:0*/ pipelined_parametrised_multiply_accumulate__DOT__start;
    CData/*0:0*/ pipelined_parametrised_multiply_accumulate__DOT__busy;
    CData/*0:0*/ pipelined_parametrised_multiply_accumulate__DOT__done;
    CData/*2:0*/ pipelined_parametrised_multiply_accumulate__DOT__count;
    CData/*0:0*/ pipelined_parametrised_multiply_accumulate__DOT__product_valid;
    CData/*0:0*/ pipelined_parametrised_multiply_accumulate__DOT__drain;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VicoPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__pipelined_parametrised_multiply_accumulate__DOT__clk__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    SData/*15:0*/ pipelined_parametrised_multiply_accumulate__DOT__product;
    SData/*15:0*/ pipelined_parametrised_multiply_accumulate__DOT__product_reg;
    VL_IN(bias,19,0);
    VL_OUT(score,19,0);
    IData/*19:0*/ pipelined_parametrised_multiply_accumulate__DOT__bias;
    IData/*19:0*/ pipelined_parametrised_multiply_accumulate__DOT__score;
    IData/*20:0*/ pipelined_parametrised_multiply_accumulate__DOT__extended_sum;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*7:0*/, 8> feature_regs;
    VlUnpacked<CData/*7:0*/, 8> weights;
    VlUnpacked<CData/*7:0*/, 8> pipelined_parametrised_multiply_accumulate__DOT__feature_regs;
    VlUnpacked<CData/*7:0*/, 8> pipelined_parametrised_multiply_accumulate__DOT__weights;
    VlUnpacked<CData/*7:0*/, 8> pipelined_parametrised_multiply_accumulate__DOT__captured_feature_regs;
    VlUnpacked<CData/*7:0*/, 8> pipelined_parametrised_multiply_accumulate__DOT__captured_weights;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;
    const char* vlNamep;

    // PARAMETERS
    static constexpr IData/*31:0*/ pipelined_parametrised_multiply_accumulate__DOT__BITS = 8U;
    static constexpr IData/*31:0*/ pipelined_parametrised_multiply_accumulate__DOT__ACC_BITS = 0x00000014U;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* namep);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
