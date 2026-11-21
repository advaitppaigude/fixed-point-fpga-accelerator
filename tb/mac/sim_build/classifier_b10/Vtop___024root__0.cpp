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
    vlSelfRef.class_index = vlSelfRef.parametrised_note_classifier_fsm__DOT__class_index;
    vlSelfRef.valid = vlSelfRef.parametrised_note_classifier_fsm__DOT__valid;
    vlSelfRef.parametrised_note_classifier_fsm__DOT__mac_a_busy 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__busy;
    vlSelfRef.parametrised_note_classifier_fsm__DOT__mac_a_done 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__done;
    vlSelfRef.parametrised_note_classifier_fsm__DOT__mac_b_busy 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__busy;
    vlSelfRef.parametrised_note_classifier_fsm__DOT__mac_b_done 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__done;
    vlSelfRef.parametrised_note_classifier_fsm__DOT__mac_c_busy 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__busy;
    vlSelfRef.parametrised_note_classifier_fsm__DOT__mac_c_done 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__done;
    vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__extended_sum 
        = (0x01ffffffU & (((0x01000000U & (vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__score 
                                           << 1U)) 
                           | vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__score) 
                          + ((0x01f00000U & ((- (IData)(
                                                        (1U 
                                                         & (vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__product_reg 
                                                            >> 0x00000013U)))) 
                                             << 0x00000014U)) 
                             | vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__product_reg)));
    vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__extended_sum 
        = (0x01ffffffU & (((0x01000000U & (vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__score 
                                           << 1U)) 
                           | vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__score) 
                          + ((0x01f00000U & ((- (IData)(
                                                        (1U 
                                                         & (vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__product_reg 
                                                            >> 0x00000013U)))) 
                                             << 0x00000014U)) 
                             | vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__product_reg)));
    vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__extended_sum 
        = (0x01ffffffU & (((0x01000000U & (vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__score 
                                           << 1U)) 
                           | vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__score) 
                          + ((0x01f00000U & ((- (IData)(
                                                        (1U 
                                                         & (vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__product_reg 
                                                            >> 0x00000013U)))) 
                                             << 0x00000014U)) 
                             | vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__product_reg)));
    vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__product 
        = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                          & VL_EXTENDS_II(20,10, vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__captured_feature_regs
                                                          [vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__count])), 
                                     (0x000fffffU & 
                                      VL_EXTENDS_II(20,10, vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__captured_weights
                                                    [vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__count]))));
    vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__product 
        = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                          & VL_EXTENDS_II(20,10, vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__captured_feature_regs
                                                          [vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__count])), 
                                     (0x000fffffU & 
                                      VL_EXTENDS_II(20,10, vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__captured_weights
                                                    [vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__count]))));
    vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__product 
        = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                          & VL_EXTENDS_II(20,10, vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__captured_feature_regs
                                                          [vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__count])), 
                                     (0x000fffffU & 
                                      VL_EXTENDS_II(20,10, vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__captured_weights
                                                    [vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__count]))));
    vlSelfRef.parametrised_note_classifier_fsm__DOT__clk 
        = vlSelfRef.clk;
    vlSelfRef.parametrised_note_classifier_fsm__DOT__rst 
        = vlSelfRef.rst;
    vlSelfRef.parametrised_note_classifier_fsm__DOT__start 
        = vlSelfRef.start;
    vlSelfRef.parametrised_note_classifier_fsm__DOT__feature_regs 
        = vlSelfRef.feature_regs;
    vlSelfRef.parametrised_note_classifier_fsm__DOT__biases 
        = vlSelfRef.biases;
    vlSelfRef.parametrised_note_classifier_fsm__DOT__mac_a_score 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__score;
    vlSelfRef.parametrised_note_classifier_fsm__DOT__mac_b_score 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__score;
    vlSelfRef.parametrised_note_classifier_fsm__DOT__mac_c_score 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__score;
    vlSelfRef.parametrised_note_classifier_fsm__DOT__weights 
        = vlSelfRef.weights;
    vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__clk 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__clk;
    vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__clk 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__clk;
    vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__clk 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__clk;
    vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__rst 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__rst;
    vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__rst 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__rst;
    vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__rst 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__rst;
    vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__start 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__start;
    vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__start 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__start;
    vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__start 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__start;
    vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__feature_regs 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__feature_regs;
    vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__feature_regs 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__feature_regs;
    vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__feature_regs 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__feature_regs;
    vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__bias 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__biases[0U];
    vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__bias 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__biases[1U];
    vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__bias 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__biases[2U];
    vlSelfRef.parametrised_note_classifier_fsm__DOT__u_compare__DOT__a 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__mac_a_score;
    vlSelfRef.parametrised_note_classifier_fsm__DOT__u_compare__DOT__b 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__mac_b_score;
    vlSelfRef.parametrised_note_classifier_fsm__DOT__u_compare__DOT__c 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__mac_c_score;
    vlSelfRef.parametrised_note_classifier_fsm__DOT____Vcellinp__u_mac_a__weights[0U] 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__weights[0U];
    vlSelfRef.parametrised_note_classifier_fsm__DOT____Vcellinp__u_mac_a__weights[1U] 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__weights[1U];
    vlSelfRef.parametrised_note_classifier_fsm__DOT____Vcellinp__u_mac_a__weights[2U] 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__weights[2U];
    vlSelfRef.parametrised_note_classifier_fsm__DOT____Vcellinp__u_mac_a__weights[3U] 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__weights[3U];
    vlSelfRef.parametrised_note_classifier_fsm__DOT____Vcellinp__u_mac_a__weights[4U] 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__weights[4U];
    vlSelfRef.parametrised_note_classifier_fsm__DOT____Vcellinp__u_mac_a__weights[5U] 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__weights[5U];
    vlSelfRef.parametrised_note_classifier_fsm__DOT____Vcellinp__u_mac_a__weights[6U] 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__weights[6U];
    vlSelfRef.parametrised_note_classifier_fsm__DOT____Vcellinp__u_mac_a__weights[7U] 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__weights[7U];
    vlSelfRef.parametrised_note_classifier_fsm__DOT____Vcellinp__u_mac_b__weights[0U] 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__weights[8U];
    vlSelfRef.parametrised_note_classifier_fsm__DOT____Vcellinp__u_mac_b__weights[1U] 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__weights[9U];
    vlSelfRef.parametrised_note_classifier_fsm__DOT____Vcellinp__u_mac_b__weights[2U] 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__weights[10U];
    vlSelfRef.parametrised_note_classifier_fsm__DOT____Vcellinp__u_mac_b__weights[3U] 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__weights[11U];
    vlSelfRef.parametrised_note_classifier_fsm__DOT____Vcellinp__u_mac_b__weights[4U] 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__weights[12U];
    vlSelfRef.parametrised_note_classifier_fsm__DOT____Vcellinp__u_mac_b__weights[5U] 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__weights[13U];
    vlSelfRef.parametrised_note_classifier_fsm__DOT____Vcellinp__u_mac_b__weights[6U] 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__weights[14U];
    vlSelfRef.parametrised_note_classifier_fsm__DOT____Vcellinp__u_mac_b__weights[7U] 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__weights[15U];
    vlSelfRef.parametrised_note_classifier_fsm__DOT____Vcellinp__u_mac_c__weights[0U] 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__weights[16U];
    vlSelfRef.parametrised_note_classifier_fsm__DOT____Vcellinp__u_mac_c__weights[1U] 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__weights[17U];
    vlSelfRef.parametrised_note_classifier_fsm__DOT____Vcellinp__u_mac_c__weights[2U] 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__weights[18U];
    vlSelfRef.parametrised_note_classifier_fsm__DOT____Vcellinp__u_mac_c__weights[3U] 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__weights[19U];
    vlSelfRef.parametrised_note_classifier_fsm__DOT____Vcellinp__u_mac_c__weights[4U] 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__weights[20U];
    vlSelfRef.parametrised_note_classifier_fsm__DOT____Vcellinp__u_mac_c__weights[5U] 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__weights[21U];
    vlSelfRef.parametrised_note_classifier_fsm__DOT____Vcellinp__u_mac_c__weights[6U] 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__weights[22U];
    vlSelfRef.parametrised_note_classifier_fsm__DOT____Vcellinp__u_mac_c__weights[7U] 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__weights[23U];
    vlSelfRef.parametrised_note_classifier_fsm__DOT__u_compare__DOT__biggest 
        = ((VL_GTES_III(24, vlSelfRef.parametrised_note_classifier_fsm__DOT__u_compare__DOT__b, vlSelfRef.parametrised_note_classifier_fsm__DOT__u_compare__DOT__c)
             ? 1U : 2U) & (- (IData)((1U & (~ (VL_GTES_III(24, vlSelfRef.parametrised_note_classifier_fsm__DOT__u_compare__DOT__a, vlSelfRef.parametrised_note_classifier_fsm__DOT__u_compare__DOT__b) 
                                               & VL_GTES_III(24, vlSelfRef.parametrised_note_classifier_fsm__DOT__u_compare__DOT__a, vlSelfRef.parametrised_note_classifier_fsm__DOT__u_compare__DOT__c)))))));
    vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__weights 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT____Vcellinp__u_mac_a__weights;
    vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__weights 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT____Vcellinp__u_mac_b__weights;
    vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__weights 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT____Vcellinp__u_mac_c__weights;
    vlSelfRef.parametrised_note_classifier_fsm__DOT__biggest 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_compare__DOT__biggest;
}

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VicoTriggered[0U])) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
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
                                                    (((((IData)(vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__clk) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__clk__0))) 
                                                       << 3U) 
                                                      | (((IData)(vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__clk) 
                                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__clk__0))) 
                                                         << 2U)) 
                                                     | ((((IData)(vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__clk) 
                                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__clk__0))) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.parametrised_note_classifier_fsm__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__parametrised_note_classifier_fsm__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__parametrised_note_classifier_fsm__DOT__clk__0 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__clk__0 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__clk__0 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__clk__0 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__clk;
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
    CData/*2:0*/ __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__count;
    __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__count = 0;
    CData/*0:0*/ __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__busy;
    __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__busy = 0;
    CData/*0:0*/ __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__drain;
    __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__drain = 0;
    CData/*0:0*/ __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__product_valid;
    __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__product_valid = 0;
    // Body
    __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__drain 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__drain;
    __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__product_valid 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__product_valid;
    __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__busy 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__busy;
    __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__count 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__count;
    vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__done = 0U;
    if (vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__rst) {
        __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__count = 7U;
        vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__score = 0U;
        __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__busy = 0U;
        __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__drain = 0U;
        __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__product_valid = 0U;
    } else if (vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__busy) {
        if (vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__product_valid) {
            vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__score 
                = (0x00ffffffU & (((1U & (vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__extended_sum 
                                          >> 0x18U)) 
                                   != (1U & (vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__extended_sum 
                                             >> 0x17U)))
                                   ? ((0x01000000U 
                                       & vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__extended_sum)
                                       ? 0x00800000U
                                       : 0x007fffffU)
                                   : vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__extended_sum));
        }
        if (vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__drain) {
            vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__done = 1U;
            __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__drain = 0U;
            __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__busy = 0U;
            __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__product_valid = 0U;
        } else {
            vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__product_reg 
                = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__product;
            __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__product_valid = 1U;
            if ((0U == (IData)(vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__count))) {
                __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__drain = 1U;
            } else {
                __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__count 
                    = (7U & ((IData)(vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__count) 
                             - (IData)(1U)));
            }
        }
    } else if (vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__start) {
        vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__captured_feature_regs 
            = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__feature_regs;
        vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__captured_weights 
            = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__weights;
        __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__count = 7U;
        vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__score 
            = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__bias;
        __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__busy = 1U;
        __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__product_valid = 0U;
        __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__drain = 0U;
    }
    vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__drain 
        = __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__drain;
    vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__product_valid 
        = __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__product_valid;
    vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__busy 
        = __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__busy;
    vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__count 
        = __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__count;
    vlSelfRef.parametrised_note_classifier_fsm__DOT__mac_a_busy 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__busy;
    vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__product 
        = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                          & VL_EXTENDS_II(20,10, vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__captured_feature_regs
                                                          [vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__count])), 
                                     (0x000fffffU & 
                                      VL_EXTENDS_II(20,10, vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__captured_weights
                                                    [vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__count]))));
    vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__extended_sum 
        = (0x01ffffffU & (((0x01000000U & (vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__score 
                                           << 1U)) 
                           | vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__score) 
                          + ((0x01f00000U & ((- (IData)(
                                                        (1U 
                                                         & (vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__product_reg 
                                                            >> 0x00000013U)))) 
                                             << 0x00000014U)) 
                             | vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__product_reg)));
    vlSelfRef.parametrised_note_classifier_fsm__DOT__mac_a_score 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__score;
    vlSelfRef.parametrised_note_classifier_fsm__DOT__u_compare__DOT__a 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__mac_a_score;
}

void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__count;
    __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__count = 0;
    CData/*0:0*/ __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__busy;
    __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__busy = 0;
    CData/*0:0*/ __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__drain;
    __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__drain = 0;
    CData/*0:0*/ __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__product_valid;
    __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__product_valid = 0;
    // Body
    __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__drain 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__drain;
    __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__product_valid 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__product_valid;
    __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__busy 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__busy;
    __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__count 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__count;
    vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__done = 0U;
    if (vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__rst) {
        __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__count = 7U;
        vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__score = 0U;
        __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__busy = 0U;
        __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__drain = 0U;
        __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__product_valid = 0U;
    } else if (vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__busy) {
        if (vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__product_valid) {
            vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__score 
                = (0x00ffffffU & (((1U & (vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__extended_sum 
                                          >> 0x18U)) 
                                   != (1U & (vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__extended_sum 
                                             >> 0x17U)))
                                   ? ((0x01000000U 
                                       & vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__extended_sum)
                                       ? 0x00800000U
                                       : 0x007fffffU)
                                   : vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__extended_sum));
        }
        if (vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__drain) {
            vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__done = 1U;
            __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__drain = 0U;
            __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__busy = 0U;
            __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__product_valid = 0U;
        } else {
            vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__product_reg 
                = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__product;
            __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__product_valid = 1U;
            if ((0U == (IData)(vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__count))) {
                __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__drain = 1U;
            } else {
                __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__count 
                    = (7U & ((IData)(vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__count) 
                             - (IData)(1U)));
            }
        }
    } else if (vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__start) {
        vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__captured_feature_regs 
            = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__feature_regs;
        vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__captured_weights 
            = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__weights;
        __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__count = 7U;
        vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__score 
            = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__bias;
        __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__busy = 1U;
        __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__product_valid = 0U;
        __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__drain = 0U;
    }
    vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__drain 
        = __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__drain;
    vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__product_valid 
        = __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__product_valid;
    vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__busy 
        = __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__busy;
    vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__count 
        = __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__count;
    vlSelfRef.parametrised_note_classifier_fsm__DOT__mac_b_busy 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__busy;
    vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__product 
        = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                          & VL_EXTENDS_II(20,10, vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__captured_feature_regs
                                                          [vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__count])), 
                                     (0x000fffffU & 
                                      VL_EXTENDS_II(20,10, vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__captured_weights
                                                    [vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__count]))));
    vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__extended_sum 
        = (0x01ffffffU & (((0x01000000U & (vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__score 
                                           << 1U)) 
                           | vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__score) 
                          + ((0x01f00000U & ((- (IData)(
                                                        (1U 
                                                         & (vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__product_reg 
                                                            >> 0x00000013U)))) 
                                             << 0x00000014U)) 
                             | vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__product_reg)));
    vlSelfRef.parametrised_note_classifier_fsm__DOT__mac_b_score 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__score;
    vlSelfRef.parametrised_note_classifier_fsm__DOT__u_compare__DOT__b 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__mac_b_score;
}

void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__count;
    __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__count = 0;
    CData/*0:0*/ __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__busy;
    __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__busy = 0;
    CData/*0:0*/ __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__drain;
    __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__drain = 0;
    CData/*0:0*/ __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__product_valid;
    __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__product_valid = 0;
    // Body
    __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__drain 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__drain;
    __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__product_valid 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__product_valid;
    __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__busy 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__busy;
    __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__count 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__count;
    vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__done = 0U;
    if (vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__rst) {
        __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__count = 7U;
        vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__score = 0U;
        __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__busy = 0U;
        __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__drain = 0U;
        __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__product_valid = 0U;
    } else if (vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__busy) {
        if (vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__product_valid) {
            vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__score 
                = (0x00ffffffU & (((1U & (vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__extended_sum 
                                          >> 0x18U)) 
                                   != (1U & (vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__extended_sum 
                                             >> 0x17U)))
                                   ? ((0x01000000U 
                                       & vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__extended_sum)
                                       ? 0x00800000U
                                       : 0x007fffffU)
                                   : vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__extended_sum));
        }
        if (vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__drain) {
            vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__done = 1U;
            __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__drain = 0U;
            __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__busy = 0U;
            __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__product_valid = 0U;
        } else {
            vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__product_reg 
                = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__product;
            __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__product_valid = 1U;
            if ((0U == (IData)(vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__count))) {
                __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__drain = 1U;
            } else {
                __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__count 
                    = (7U & ((IData)(vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__count) 
                             - (IData)(1U)));
            }
        }
    } else if (vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__start) {
        vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__captured_feature_regs 
            = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__feature_regs;
        vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__captured_weights 
            = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__weights;
        __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__count = 7U;
        vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__score 
            = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__bias;
        __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__busy = 1U;
        __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__product_valid = 0U;
        __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__drain = 0U;
    }
    vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__drain 
        = __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__drain;
    vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__product_valid 
        = __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__product_valid;
    vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__busy 
        = __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__busy;
    vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__count 
        = __Vdly__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__count;
    vlSelfRef.parametrised_note_classifier_fsm__DOT__mac_c_busy 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__busy;
    vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__product 
        = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                          & VL_EXTENDS_II(20,10, vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__captured_feature_regs
                                                          [vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__count])), 
                                     (0x000fffffU & 
                                      VL_EXTENDS_II(20,10, vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__captured_weights
                                                    [vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__count]))));
    vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__extended_sum 
        = (0x01ffffffU & (((0x01000000U & (vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__score 
                                           << 1U)) 
                           | vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__score) 
                          + ((0x01f00000U & ((- (IData)(
                                                        (1U 
                                                         & (vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__product_reg 
                                                            >> 0x00000013U)))) 
                                             << 0x00000014U)) 
                             | vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__product_reg)));
    vlSelfRef.parametrised_note_classifier_fsm__DOT__mac_c_score 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__score;
    vlSelfRef.parametrised_note_classifier_fsm__DOT__u_compare__DOT__c 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__mac_c_score;
}

void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.parametrised_note_classifier_fsm__DOT__valid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.parametrised_note_classifier_fsm__DOT__rst)))) {
        if ((((IData)(vlSelfRef.parametrised_note_classifier_fsm__DOT__mac_a_done) 
              & (IData)(vlSelfRef.parametrised_note_classifier_fsm__DOT__mac_b_done)) 
             & (IData)(vlSelfRef.parametrised_note_classifier_fsm__DOT__mac_c_done))) {
            vlSelfRef.parametrised_note_classifier_fsm__DOT__valid = 1U;
        }
    }
    if (vlSelfRef.parametrised_note_classifier_fsm__DOT__rst) {
        vlSelfRef.parametrised_note_classifier_fsm__DOT__class_index = 3U;
    } else if ((((IData)(vlSelfRef.parametrised_note_classifier_fsm__DOT__mac_a_done) 
                 & (IData)(vlSelfRef.parametrised_note_classifier_fsm__DOT__mac_b_done)) 
                & (IData)(vlSelfRef.parametrised_note_classifier_fsm__DOT__mac_c_done))) {
        vlSelfRef.parametrised_note_classifier_fsm__DOT__class_index 
            = vlSelfRef.parametrised_note_classifier_fsm__DOT__biggest;
    }
    vlSelfRef.valid = vlSelfRef.parametrised_note_classifier_fsm__DOT__valid;
    vlSelfRef.class_index = vlSelfRef.parametrised_note_classifier_fsm__DOT__class_index;
}

void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.parametrised_note_classifier_fsm__DOT__u_compare__DOT__biggest 
        = ((VL_GTES_III(24, vlSelfRef.parametrised_note_classifier_fsm__DOT__u_compare__DOT__b, vlSelfRef.parametrised_note_classifier_fsm__DOT__u_compare__DOT__c)
             ? 1U : 2U) & (- (IData)((1U & (~ (VL_GTES_III(24, vlSelfRef.parametrised_note_classifier_fsm__DOT__u_compare__DOT__a, vlSelfRef.parametrised_note_classifier_fsm__DOT__u_compare__DOT__b) 
                                               & VL_GTES_III(24, vlSelfRef.parametrised_note_classifier_fsm__DOT__u_compare__DOT__a, vlSelfRef.parametrised_note_classifier_fsm__DOT__u_compare__DOT__c)))))));
    vlSelfRef.parametrised_note_classifier_fsm__DOT__biggest 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_compare__DOT__biggest;
}

void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.parametrised_note_classifier_fsm__DOT__mac_a_done 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__done;
}

void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.parametrised_note_classifier_fsm__DOT__mac_b_done 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__done;
}

void Vtop___024root___nba_sequent__TOP__6(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.parametrised_note_classifier_fsm__DOT__mac_c_done 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__done;
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vinline__nba_sequent__TOP__0___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__count;
    __Vinline__nba_sequent__TOP__0___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__count = 0;
    CData/*0:0*/ __Vinline__nba_sequent__TOP__0___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__busy;
    __Vinline__nba_sequent__TOP__0___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__busy = 0;
    CData/*0:0*/ __Vinline__nba_sequent__TOP__0___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__drain;
    __Vinline__nba_sequent__TOP__0___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__drain = 0;
    CData/*0:0*/ __Vinline__nba_sequent__TOP__0___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__product_valid;
    __Vinline__nba_sequent__TOP__0___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__product_valid = 0;
    CData/*2:0*/ __Vinline__nba_sequent__TOP__1___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__count;
    __Vinline__nba_sequent__TOP__1___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__count = 0;
    CData/*0:0*/ __Vinline__nba_sequent__TOP__1___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__busy;
    __Vinline__nba_sequent__TOP__1___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__busy = 0;
    CData/*0:0*/ __Vinline__nba_sequent__TOP__1___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__drain;
    __Vinline__nba_sequent__TOP__1___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__drain = 0;
    CData/*0:0*/ __Vinline__nba_sequent__TOP__1___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__product_valid;
    __Vinline__nba_sequent__TOP__1___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__product_valid = 0;
    CData/*2:0*/ __Vinline__nba_sequent__TOP__2___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__count;
    __Vinline__nba_sequent__TOP__2___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__count = 0;
    CData/*0:0*/ __Vinline__nba_sequent__TOP__2___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__busy;
    __Vinline__nba_sequent__TOP__2___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__busy = 0;
    CData/*0:0*/ __Vinline__nba_sequent__TOP__2___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__drain;
    __Vinline__nba_sequent__TOP__2___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__drain = 0;
    CData/*0:0*/ __Vinline__nba_sequent__TOP__2___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__product_valid;
    __Vinline__nba_sequent__TOP__2___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__product_valid = 0;
    // Body
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__0___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__drain 
            = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__drain;
        __Vinline__nba_sequent__TOP__0___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__product_valid 
            = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__product_valid;
        __Vinline__nba_sequent__TOP__0___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__busy 
            = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__busy;
        __Vinline__nba_sequent__TOP__0___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__count 
            = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__count;
        vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__done = 0U;
        if (vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__rst) {
            __Vinline__nba_sequent__TOP__0___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__count = 7U;
            vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__score = 0U;
            __Vinline__nba_sequent__TOP__0___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__busy = 0U;
            __Vinline__nba_sequent__TOP__0___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__drain = 0U;
            __Vinline__nba_sequent__TOP__0___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__product_valid = 0U;
        } else if (vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__busy) {
            if (vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__product_valid) {
                vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__score 
                    = (0x00ffffffU & (((1U & (vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__extended_sum 
                                              >> 0x18U)) 
                                       != (1U & (vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__extended_sum 
                                                 >> 0x17U)))
                                       ? ((0x01000000U 
                                           & vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__extended_sum)
                                           ? 0x00800000U
                                           : 0x007fffffU)
                                       : vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__extended_sum));
            }
            if (vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__drain) {
                vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__done = 1U;
                __Vinline__nba_sequent__TOP__0___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__drain = 0U;
                __Vinline__nba_sequent__TOP__0___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__busy = 0U;
                __Vinline__nba_sequent__TOP__0___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__product_valid = 0U;
            } else {
                vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__product_reg 
                    = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__product;
                __Vinline__nba_sequent__TOP__0___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__product_valid = 1U;
                if ((0U == (IData)(vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__count))) {
                    __Vinline__nba_sequent__TOP__0___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__drain = 1U;
                } else {
                    __Vinline__nba_sequent__TOP__0___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__count 
                        = (7U & ((IData)(vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__count) 
                                 - (IData)(1U)));
                }
            }
        } else if (vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__start) {
            vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__captured_feature_regs 
                = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__feature_regs;
            vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__captured_weights 
                = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__weights;
            __Vinline__nba_sequent__TOP__0___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__count = 7U;
            vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__score 
                = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__bias;
            __Vinline__nba_sequent__TOP__0___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__busy = 1U;
            __Vinline__nba_sequent__TOP__0___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__product_valid = 0U;
            __Vinline__nba_sequent__TOP__0___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__drain = 0U;
        }
        vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__drain 
            = __Vinline__nba_sequent__TOP__0___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__drain;
        vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__product_valid 
            = __Vinline__nba_sequent__TOP__0___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__product_valid;
        vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__busy 
            = __Vinline__nba_sequent__TOP__0___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__busy;
        vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__count 
            = __Vinline__nba_sequent__TOP__0___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__count;
        vlSelfRef.parametrised_note_classifier_fsm__DOT__mac_a_busy 
            = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__busy;
        vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__product 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,10, vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__captured_feature_regs
                                                              [vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__count])), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,10, vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__captured_weights
                                                          [vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__count]))));
        vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__extended_sum 
            = (0x01ffffffU & (((0x01000000U & (vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__score 
                                               << 1U)) 
                               | vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__score) 
                              + ((0x01f00000U & ((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__product_reg 
                                                                >> 0x00000013U)))) 
                                                 << 0x00000014U)) 
                                 | vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__product_reg)));
        vlSelfRef.parametrised_note_classifier_fsm__DOT__mac_a_score 
            = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__score;
        vlSelfRef.parametrised_note_classifier_fsm__DOT__u_compare__DOT__a 
            = vlSelfRef.parametrised_note_classifier_fsm__DOT__mac_a_score;
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__1___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__drain 
            = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__drain;
        __Vinline__nba_sequent__TOP__1___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__product_valid 
            = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__product_valid;
        __Vinline__nba_sequent__TOP__1___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__busy 
            = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__busy;
        __Vinline__nba_sequent__TOP__1___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__count 
            = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__count;
        vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__done = 0U;
        if (vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__rst) {
            __Vinline__nba_sequent__TOP__1___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__count = 7U;
            vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__score = 0U;
            __Vinline__nba_sequent__TOP__1___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__busy = 0U;
            __Vinline__nba_sequent__TOP__1___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__drain = 0U;
            __Vinline__nba_sequent__TOP__1___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__product_valid = 0U;
        } else if (vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__busy) {
            if (vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__product_valid) {
                vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__score 
                    = (0x00ffffffU & (((1U & (vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__extended_sum 
                                              >> 0x18U)) 
                                       != (1U & (vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__extended_sum 
                                                 >> 0x17U)))
                                       ? ((0x01000000U 
                                           & vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__extended_sum)
                                           ? 0x00800000U
                                           : 0x007fffffU)
                                       : vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__extended_sum));
            }
            if (vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__drain) {
                vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__done = 1U;
                __Vinline__nba_sequent__TOP__1___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__drain = 0U;
                __Vinline__nba_sequent__TOP__1___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__busy = 0U;
                __Vinline__nba_sequent__TOP__1___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__product_valid = 0U;
            } else {
                vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__product_reg 
                    = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__product;
                __Vinline__nba_sequent__TOP__1___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__product_valid = 1U;
                if ((0U == (IData)(vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__count))) {
                    __Vinline__nba_sequent__TOP__1___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__drain = 1U;
                } else {
                    __Vinline__nba_sequent__TOP__1___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__count 
                        = (7U & ((IData)(vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__count) 
                                 - (IData)(1U)));
                }
            }
        } else if (vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__start) {
            vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__captured_feature_regs 
                = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__feature_regs;
            vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__captured_weights 
                = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__weights;
            __Vinline__nba_sequent__TOP__1___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__count = 7U;
            vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__score 
                = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__bias;
            __Vinline__nba_sequent__TOP__1___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__busy = 1U;
            __Vinline__nba_sequent__TOP__1___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__product_valid = 0U;
            __Vinline__nba_sequent__TOP__1___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__drain = 0U;
        }
        vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__drain 
            = __Vinline__nba_sequent__TOP__1___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__drain;
        vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__product_valid 
            = __Vinline__nba_sequent__TOP__1___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__product_valid;
        vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__busy 
            = __Vinline__nba_sequent__TOP__1___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__busy;
        vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__count 
            = __Vinline__nba_sequent__TOP__1___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__count;
        vlSelfRef.parametrised_note_classifier_fsm__DOT__mac_b_busy 
            = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__busy;
        vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__product 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,10, vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__captured_feature_regs
                                                              [vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__count])), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,10, vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__captured_weights
                                                          [vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__count]))));
        vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__extended_sum 
            = (0x01ffffffU & (((0x01000000U & (vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__score 
                                               << 1U)) 
                               | vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__score) 
                              + ((0x01f00000U & ((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__product_reg 
                                                                >> 0x00000013U)))) 
                                                 << 0x00000014U)) 
                                 | vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__product_reg)));
        vlSelfRef.parametrised_note_classifier_fsm__DOT__mac_b_score 
            = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__score;
        vlSelfRef.parametrised_note_classifier_fsm__DOT__u_compare__DOT__b 
            = vlSelfRef.parametrised_note_classifier_fsm__DOT__mac_b_score;
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__2___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__drain 
            = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__drain;
        __Vinline__nba_sequent__TOP__2___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__product_valid 
            = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__product_valid;
        __Vinline__nba_sequent__TOP__2___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__busy 
            = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__busy;
        __Vinline__nba_sequent__TOP__2___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__count 
            = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__count;
        vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__done = 0U;
        if (vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__rst) {
            __Vinline__nba_sequent__TOP__2___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__count = 7U;
            vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__score = 0U;
            __Vinline__nba_sequent__TOP__2___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__busy = 0U;
            __Vinline__nba_sequent__TOP__2___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__drain = 0U;
            __Vinline__nba_sequent__TOP__2___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__product_valid = 0U;
        } else if (vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__busy) {
            if (vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__product_valid) {
                vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__score 
                    = (0x00ffffffU & (((1U & (vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__extended_sum 
                                              >> 0x18U)) 
                                       != (1U & (vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__extended_sum 
                                                 >> 0x17U)))
                                       ? ((0x01000000U 
                                           & vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__extended_sum)
                                           ? 0x00800000U
                                           : 0x007fffffU)
                                       : vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__extended_sum));
            }
            if (vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__drain) {
                vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__done = 1U;
                __Vinline__nba_sequent__TOP__2___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__drain = 0U;
                __Vinline__nba_sequent__TOP__2___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__busy = 0U;
                __Vinline__nba_sequent__TOP__2___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__product_valid = 0U;
            } else {
                vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__product_reg 
                    = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__product;
                __Vinline__nba_sequent__TOP__2___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__product_valid = 1U;
                if ((0U == (IData)(vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__count))) {
                    __Vinline__nba_sequent__TOP__2___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__drain = 1U;
                } else {
                    __Vinline__nba_sequent__TOP__2___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__count 
                        = (7U & ((IData)(vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__count) 
                                 - (IData)(1U)));
                }
            }
        } else if (vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__start) {
            vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__captured_feature_regs 
                = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__feature_regs;
            vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__captured_weights 
                = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__weights;
            __Vinline__nba_sequent__TOP__2___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__count = 7U;
            vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__score 
                = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__bias;
            __Vinline__nba_sequent__TOP__2___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__busy = 1U;
            __Vinline__nba_sequent__TOP__2___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__product_valid = 0U;
            __Vinline__nba_sequent__TOP__2___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__drain = 0U;
        }
        vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__drain 
            = __Vinline__nba_sequent__TOP__2___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__drain;
        vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__product_valid 
            = __Vinline__nba_sequent__TOP__2___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__product_valid;
        vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__busy 
            = __Vinline__nba_sequent__TOP__2___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__busy;
        vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__count 
            = __Vinline__nba_sequent__TOP__2___Vdly__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__count;
        vlSelfRef.parametrised_note_classifier_fsm__DOT__mac_c_busy 
            = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__busy;
        vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__product 
            = (0x000fffffU & VL_MULS_III(20, (0x000fffffU 
                                              & VL_EXTENDS_II(20,10, vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__captured_feature_regs
                                                              [vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__count])), 
                                         (0x000fffffU 
                                          & VL_EXTENDS_II(20,10, vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__captured_weights
                                                          [vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__count]))));
        vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__extended_sum 
            = (0x01ffffffU & (((0x01000000U & (vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__score 
                                               << 1U)) 
                               | vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__score) 
                              + ((0x01f00000U & ((- (IData)(
                                                            (1U 
                                                             & (vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__product_reg 
                                                                >> 0x00000013U)))) 
                                                 << 0x00000014U)) 
                                 | vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__product_reg)));
        vlSelfRef.parametrised_note_classifier_fsm__DOT__mac_c_score 
            = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__score;
        vlSelfRef.parametrised_note_classifier_fsm__DOT__u_compare__DOT__c 
            = vlSelfRef.parametrised_note_classifier_fsm__DOT__mac_c_score;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.parametrised_note_classifier_fsm__DOT__valid = 0U;
        if ((1U & (~ (IData)(vlSelfRef.parametrised_note_classifier_fsm__DOT__rst)))) {
            if ((((IData)(vlSelfRef.parametrised_note_classifier_fsm__DOT__mac_a_done) 
                  & (IData)(vlSelfRef.parametrised_note_classifier_fsm__DOT__mac_b_done)) 
                 & (IData)(vlSelfRef.parametrised_note_classifier_fsm__DOT__mac_c_done))) {
                vlSelfRef.parametrised_note_classifier_fsm__DOT__valid = 1U;
            }
        }
        if (vlSelfRef.parametrised_note_classifier_fsm__DOT__rst) {
            vlSelfRef.parametrised_note_classifier_fsm__DOT__class_index = 3U;
        } else if ((((IData)(vlSelfRef.parametrised_note_classifier_fsm__DOT__mac_a_done) 
                     & (IData)(vlSelfRef.parametrised_note_classifier_fsm__DOT__mac_b_done)) 
                    & (IData)(vlSelfRef.parametrised_note_classifier_fsm__DOT__mac_c_done))) {
            vlSelfRef.parametrised_note_classifier_fsm__DOT__class_index 
                = vlSelfRef.parametrised_note_classifier_fsm__DOT__biggest;
        }
        vlSelfRef.valid = vlSelfRef.parametrised_note_classifier_fsm__DOT__valid;
        vlSelfRef.class_index = vlSelfRef.parametrised_note_classifier_fsm__DOT__class_index;
    }
    if ((0x000000000000000eULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.parametrised_note_classifier_fsm__DOT__u_compare__DOT__biggest 
            = ((VL_GTES_III(24, vlSelfRef.parametrised_note_classifier_fsm__DOT__u_compare__DOT__b, vlSelfRef.parametrised_note_classifier_fsm__DOT__u_compare__DOT__c)
                 ? 1U : 2U) & (- (IData)((1U & (~ (
                                                   VL_GTES_III(24, vlSelfRef.parametrised_note_classifier_fsm__DOT__u_compare__DOT__a, vlSelfRef.parametrised_note_classifier_fsm__DOT__u_compare__DOT__b) 
                                                   & VL_GTES_III(24, vlSelfRef.parametrised_note_classifier_fsm__DOT__u_compare__DOT__a, vlSelfRef.parametrised_note_classifier_fsm__DOT__u_compare__DOT__c)))))));
        vlSelfRef.parametrised_note_classifier_fsm__DOT__biggest 
            = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_compare__DOT__biggest;
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.parametrised_note_classifier_fsm__DOT__mac_a_done 
            = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__done;
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.parametrised_note_classifier_fsm__DOT__mac_b_done 
            = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__done;
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.parametrised_note_classifier_fsm__DOT__mac_c_done 
            = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__done;
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
            VL_FATAL_MT("/home/advait/classical-guitar-string-fret-localisation/fpga/rtl/parametrised_note_classifier_fsm.sv", 13, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
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
            VL_FATAL_MT("/home/advait/classical-guitar-string-fret-localisation/fpga/rtl/parametrised_note_classifier_fsm.sv", 13, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/home/advait/classical-guitar-string-fret-localisation/fpga/rtl/parametrised_note_classifier_fsm.sv", 13, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
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
    if (VL_UNLIKELY(((vlSelfRef.start & 0xfeU)))) {
        Verilated::overWidthError("start");
    }
}
#endif  // VL_DEBUG
