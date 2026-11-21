// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

void Vtop___024root___eval_triggers_vec__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers_vec__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VicoFirstIteration)));
}

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__rst 
        = vlSelfRef.rst;
    vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__flush 
        = vlSelfRef.flush;
    vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__start 
        = vlSelfRef.start;
    vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__feature_regs 
        = vlSelfRef.feature_regs;
    vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__weights 
        = vlSelfRef.weights;
    vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__bias 
        = vlSelfRef.bias;
    vlSelfRef.busy = vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__busy;
    vlSelfRef.done = vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__done;
    vlSelfRef.score = vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__score;
    vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__extended_sum 
        = (0x0001ffffU & (((0x00010000U & ((IData)(vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__score) 
                                           << 1U)) 
                           | (IData)(vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__score)) 
                          + ((0x0001f000U & ((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__product_reg) 
                                                            >> 0x0000000bU)))) 
                                             << 0x0000000cU)) 
                             | (IData)(vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__product_reg))));
    vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__product 
        = (0x00000fffU & VL_MULS_III(12, (0x00000fffU 
                                          & VL_EXTENDS_II(12,6, vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__captured_feature_regs
                                                          [vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__count])), 
                                     (0x00000fffU & 
                                      VL_EXTENDS_II(12,6, vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__captured_weights
                                                    [vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__count]))));
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__clk 
            = vlSelfRef.clk;
        vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__rst 
            = vlSelfRef.rst;
        vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__flush 
            = vlSelfRef.flush;
        vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__start 
            = vlSelfRef.start;
        vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__feature_regs 
            = vlSelfRef.feature_regs;
        vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__weights 
            = vlSelfRef.weights;
        vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__bias 
            = vlSelfRef.bias;
        vlSelfRef.busy = vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__busy;
        vlSelfRef.done = vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__done;
        vlSelfRef.score = vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__score;
        vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__extended_sum 
            = (0x0001ffffU & (((0x00010000U & ((IData)(vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__score) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__score)) 
                              + ((0x0001f000U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__product_reg) 
                                                                >> 0x0000000bU)))) 
                                                 << 0x0000000cU)) 
                                 | (IData)(vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__product_reg))));
        vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__product 
            = (0x00000fffU & VL_MULS_III(12, (0x00000fffU 
                                              & VL_EXTENDS_II(12,6, vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__captured_feature_regs
                                                              [vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__count])), 
                                         (0x00000fffU 
                                          & VL_EXTENDS_II(12,6, vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__captured_weights
                                                          [vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__count]))));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers_vec__ico(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    __VicoExecute = Vtop___024root___trigger_anySet__ico(vlSelfRef.__VicoTriggered);
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_triggers_vec__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers_vec__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((IData)(vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__clk) 
                                                     & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__pipelined_parametrised_multiply_accumulate__DOT__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__pipelined_parametrised_multiply_accumulate__DOT__clk__0 
        = vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__clk;
}

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vdly__pipelined_parametrised_multiply_accumulate__DOT__count;
    __Vdly__pipelined_parametrised_multiply_accumulate__DOT__count = 0;
    CData/*0:0*/ __Vdly__pipelined_parametrised_multiply_accumulate__DOT__busy;
    __Vdly__pipelined_parametrised_multiply_accumulate__DOT__busy = 0;
    CData/*0:0*/ __Vdly__pipelined_parametrised_multiply_accumulate__DOT__drain;
    __Vdly__pipelined_parametrised_multiply_accumulate__DOT__drain = 0;
    CData/*0:0*/ __Vdly__pipelined_parametrised_multiply_accumulate__DOT__product_valid;
    __Vdly__pipelined_parametrised_multiply_accumulate__DOT__product_valid = 0;
    // Body
    __Vdly__pipelined_parametrised_multiply_accumulate__DOT__drain 
        = vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__drain;
    __Vdly__pipelined_parametrised_multiply_accumulate__DOT__product_valid 
        = vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__product_valid;
    __Vdly__pipelined_parametrised_multiply_accumulate__DOT__busy 
        = vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__busy;
    __Vdly__pipelined_parametrised_multiply_accumulate__DOT__count 
        = vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__count;
    vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__done = 0U;
    if (((IData)(vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__rst) 
         | (IData)(vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__flush))) {
        __Vdly__pipelined_parametrised_multiply_accumulate__DOT__count = 7U;
        vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__score = 0U;
        __Vdly__pipelined_parametrised_multiply_accumulate__DOT__busy = 0U;
        __Vdly__pipelined_parametrised_multiply_accumulate__DOT__drain = 0U;
        __Vdly__pipelined_parametrised_multiply_accumulate__DOT__product_valid = 0U;
    } else if (vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__busy) {
        if (vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__product_valid) {
            vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__score 
                = (0x0000ffffU & (((1U & (vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__extended_sum 
                                          >> 0x10U)) 
                                   != (1U & (vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__extended_sum 
                                             >> 0x0fU)))
                                   ? ((0x00010000U 
                                       & vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__extended_sum)
                                       ? 0x8000U : 0x7fffU)
                                   : vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__extended_sum));
        }
        if (vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__drain) {
            vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__done = 1U;
            __Vdly__pipelined_parametrised_multiply_accumulate__DOT__drain = 0U;
            __Vdly__pipelined_parametrised_multiply_accumulate__DOT__busy = 0U;
            __Vdly__pipelined_parametrised_multiply_accumulate__DOT__product_valid = 0U;
        } else {
            vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__product_reg 
                = vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__product;
            __Vdly__pipelined_parametrised_multiply_accumulate__DOT__product_valid = 1U;
            if ((0U == (IData)(vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__count))) {
                __Vdly__pipelined_parametrised_multiply_accumulate__DOT__drain = 1U;
            } else {
                __Vdly__pipelined_parametrised_multiply_accumulate__DOT__count 
                    = (7U & ((IData)(vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__count) 
                             - (IData)(1U)));
            }
        }
    } else if (vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__start) {
        vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__captured_feature_regs 
            = vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__feature_regs;
        vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__captured_weights 
            = vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__weights;
        __Vdly__pipelined_parametrised_multiply_accumulate__DOT__count = 7U;
        vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__score 
            = vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__bias;
        __Vdly__pipelined_parametrised_multiply_accumulate__DOT__busy = 1U;
        __Vdly__pipelined_parametrised_multiply_accumulate__DOT__product_valid = 0U;
        __Vdly__pipelined_parametrised_multiply_accumulate__DOT__drain = 0U;
    }
    vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__drain 
        = __Vdly__pipelined_parametrised_multiply_accumulate__DOT__drain;
    vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__product_valid 
        = __Vdly__pipelined_parametrised_multiply_accumulate__DOT__product_valid;
    vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__busy 
        = __Vdly__pipelined_parametrised_multiply_accumulate__DOT__busy;
    vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__count 
        = __Vdly__pipelined_parametrised_multiply_accumulate__DOT__count;
    vlSelfRef.done = vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__done;
    vlSelfRef.busy = vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__busy;
    vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__product 
        = (0x00000fffU & VL_MULS_III(12, (0x00000fffU 
                                          & VL_EXTENDS_II(12,6, vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__captured_feature_regs
                                                          [vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__count])), 
                                     (0x00000fffU & 
                                      VL_EXTENDS_II(12,6, vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__captured_weights
                                                    [vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__count]))));
    vlSelfRef.score = vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__score;
    vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__extended_sum 
        = (0x0001ffffU & (((0x00010000U & ((IData)(vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__score) 
                                           << 1U)) 
                           | (IData)(vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__score)) 
                          + ((0x0001f000U & ((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__product_reg) 
                                                            >> 0x0000000bU)))) 
                                             << 0x0000000cU)) 
                             | (IData)(vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__product_reg))));
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vinline__nba_sequent__TOP__0___Vdly__pipelined_parametrised_multiply_accumulate__DOT__count;
    __Vinline__nba_sequent__TOP__0___Vdly__pipelined_parametrised_multiply_accumulate__DOT__count = 0;
    CData/*0:0*/ __Vinline__nba_sequent__TOP__0___Vdly__pipelined_parametrised_multiply_accumulate__DOT__busy;
    __Vinline__nba_sequent__TOP__0___Vdly__pipelined_parametrised_multiply_accumulate__DOT__busy = 0;
    CData/*0:0*/ __Vinline__nba_sequent__TOP__0___Vdly__pipelined_parametrised_multiply_accumulate__DOT__drain;
    __Vinline__nba_sequent__TOP__0___Vdly__pipelined_parametrised_multiply_accumulate__DOT__drain = 0;
    CData/*0:0*/ __Vinline__nba_sequent__TOP__0___Vdly__pipelined_parametrised_multiply_accumulate__DOT__product_valid;
    __Vinline__nba_sequent__TOP__0___Vdly__pipelined_parametrised_multiply_accumulate__DOT__product_valid = 0;
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__0___Vdly__pipelined_parametrised_multiply_accumulate__DOT__drain 
            = vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__drain;
        __Vinline__nba_sequent__TOP__0___Vdly__pipelined_parametrised_multiply_accumulate__DOT__product_valid 
            = vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__product_valid;
        __Vinline__nba_sequent__TOP__0___Vdly__pipelined_parametrised_multiply_accumulate__DOT__busy 
            = vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__busy;
        __Vinline__nba_sequent__TOP__0___Vdly__pipelined_parametrised_multiply_accumulate__DOT__count 
            = vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__count;
        vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__done = 0U;
        if (((IData)(vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__rst) 
             | (IData)(vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__flush))) {
            __Vinline__nba_sequent__TOP__0___Vdly__pipelined_parametrised_multiply_accumulate__DOT__count = 7U;
            vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__score = 0U;
            __Vinline__nba_sequent__TOP__0___Vdly__pipelined_parametrised_multiply_accumulate__DOT__busy = 0U;
            __Vinline__nba_sequent__TOP__0___Vdly__pipelined_parametrised_multiply_accumulate__DOT__drain = 0U;
            __Vinline__nba_sequent__TOP__0___Vdly__pipelined_parametrised_multiply_accumulate__DOT__product_valid = 0U;
        } else if (vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__busy) {
            if (vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__product_valid) {
                vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__score 
                    = (0x0000ffffU & (((1U & (vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__extended_sum 
                                              >> 0x10U)) 
                                       != (1U & (vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__extended_sum 
                                                 >> 0x0fU)))
                                       ? ((0x00010000U 
                                           & vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__extended_sum)
                                           ? 0x8000U
                                           : 0x7fffU)
                                       : vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__extended_sum));
            }
            if (vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__drain) {
                vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__done = 1U;
                __Vinline__nba_sequent__TOP__0___Vdly__pipelined_parametrised_multiply_accumulate__DOT__drain = 0U;
                __Vinline__nba_sequent__TOP__0___Vdly__pipelined_parametrised_multiply_accumulate__DOT__busy = 0U;
                __Vinline__nba_sequent__TOP__0___Vdly__pipelined_parametrised_multiply_accumulate__DOT__product_valid = 0U;
            } else {
                vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__product_reg 
                    = vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__product;
                __Vinline__nba_sequent__TOP__0___Vdly__pipelined_parametrised_multiply_accumulate__DOT__product_valid = 1U;
                if ((0U == (IData)(vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__count))) {
                    __Vinline__nba_sequent__TOP__0___Vdly__pipelined_parametrised_multiply_accumulate__DOT__drain = 1U;
                } else {
                    __Vinline__nba_sequent__TOP__0___Vdly__pipelined_parametrised_multiply_accumulate__DOT__count 
                        = (7U & ((IData)(vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__count) 
                                 - (IData)(1U)));
                }
            }
        } else if (vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__start) {
            vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__captured_feature_regs 
                = vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__feature_regs;
            vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__captured_weights 
                = vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__weights;
            __Vinline__nba_sequent__TOP__0___Vdly__pipelined_parametrised_multiply_accumulate__DOT__count = 7U;
            vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__score 
                = vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__bias;
            __Vinline__nba_sequent__TOP__0___Vdly__pipelined_parametrised_multiply_accumulate__DOT__busy = 1U;
            __Vinline__nba_sequent__TOP__0___Vdly__pipelined_parametrised_multiply_accumulate__DOT__product_valid = 0U;
            __Vinline__nba_sequent__TOP__0___Vdly__pipelined_parametrised_multiply_accumulate__DOT__drain = 0U;
        }
        vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__drain 
            = __Vinline__nba_sequent__TOP__0___Vdly__pipelined_parametrised_multiply_accumulate__DOT__drain;
        vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__product_valid 
            = __Vinline__nba_sequent__TOP__0___Vdly__pipelined_parametrised_multiply_accumulate__DOT__product_valid;
        vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__busy 
            = __Vinline__nba_sequent__TOP__0___Vdly__pipelined_parametrised_multiply_accumulate__DOT__busy;
        vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__count 
            = __Vinline__nba_sequent__TOP__0___Vdly__pipelined_parametrised_multiply_accumulate__DOT__count;
        vlSelfRef.done = vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__done;
        vlSelfRef.busy = vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__busy;
        vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__product 
            = (0x00000fffU & VL_MULS_III(12, (0x00000fffU 
                                              & VL_EXTENDS_II(12,6, vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__captured_feature_regs
                                                              [vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__count])), 
                                         (0x00000fffU 
                                          & VL_EXTENDS_II(12,6, vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__captured_weights
                                                          [vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__count]))));
        vlSelfRef.score = vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__score;
        vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__extended_sum 
            = (0x0001ffffU & (((0x00010000U & ((IData)(vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__score) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__score)) 
                              + ((0x0001f000U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__product_reg) 
                                                                >> 0x0000000bU)))) 
                                                 << 0x0000000cU)) 
                                 | (IData)(vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__product_reg))));
    }
}

void Vtop___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtop___024root___eval_triggers_vec__act(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtop___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    return (0U);
}

void Vtop___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtop___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        Vtop___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VicoIterCount = 0U;
    vlSelfRef.__VicoFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VicoIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
            VL_FATAL_MT("/home/advait/classical-guitar-string-fret-localisation/fpga/rtl/pipelined_parametrised_multiply_accumulate.sv", 1, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        vlSelfRef.__VicoPhaseResult = Vtop___024root___eval_phase__ico(vlSelf);
        vlSelfRef.__VicoFirstIteration = 0U;
    } while (vlSelfRef.__VicoPhaseResult);
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("/home/advait/classical-guitar-string-fret-localisation/fpga/rtl/pipelined_parametrised_multiply_accumulate.sv", 1, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/home/advait/classical-guitar-string-fret-localisation/fpga/rtl/pipelined_parametrised_multiply_accumulate.sv", 1, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactPhaseResult = Vtop___024root___eval_phase__act(vlSelf);
        } while (vlSelfRef.__VactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vtop___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (VL_UNLIKELY(((vlSelfRef.clk & 0xfeU)))) {
        Verilated::overWidthError("clk");
    }
    if (VL_UNLIKELY(((vlSelfRef.rst & 0xfeU)))) {
        Verilated::overWidthError("rst");
    }
    if (VL_UNLIKELY(((vlSelfRef.flush & 0xfeU)))) {
        Verilated::overWidthError("flush");
    }
    if (VL_UNLIKELY(((vlSelfRef.start & 0xfeU)))) {
        Verilated::overWidthError("start");
    }
}
#endif  // VL_DEBUG
