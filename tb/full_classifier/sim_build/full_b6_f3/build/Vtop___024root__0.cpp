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
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__mac_a_busy 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__busy;
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__mac_a_done 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__done;
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__mac_b_busy 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__busy;
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__mac_b_done 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__done;
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__mac_c_busy 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__busy;
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__mac_c_done 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__done;
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__extended_sum 
        = (0x0001ffffU & (((0x00010000U & ((IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__score) 
                                           << 1U)) 
                           | (IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__score)) 
                          + ((0x0001f000U & ((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__product_reg) 
                                                            >> 0x0000000bU)))) 
                                             << 0x0000000cU)) 
                             | (IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__product_reg))));
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__extended_sum 
        = (0x0001ffffU & (((0x00010000U & ((IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__score) 
                                           << 1U)) 
                           | (IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__score)) 
                          + ((0x0001f000U & ((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__product_reg) 
                                                            >> 0x0000000bU)))) 
                                             << 0x0000000cU)) 
                             | (IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__product_reg))));
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__extended_sum 
        = (0x0001ffffU & (((0x00010000U & ((IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__score) 
                                           << 1U)) 
                           | (IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__score)) 
                          + ((0x0001f000U & ((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__product_reg) 
                                                            >> 0x0000000bU)))) 
                                             << 0x0000000cU)) 
                             | (IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__product_reg))));
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__product 
        = (0x00000fffU & VL_MULS_III(12, (0x00000fffU 
                                          & VL_EXTENDS_II(12,6, vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__captured_feature_regs
                                                          [vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__count])), 
                                     (0x00000fffU & 
                                      VL_EXTENDS_II(12,6, vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__captured_weights
                                                    [vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__count]))));
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__product 
        = (0x00000fffU & VL_MULS_III(12, (0x00000fffU 
                                          & VL_EXTENDS_II(12,6, vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__captured_feature_regs
                                                          [vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__count])), 
                                     (0x00000fffU & 
                                      VL_EXTENDS_II(12,6, vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__captured_weights
                                                    [vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__count]))));
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__product 
        = (0x00000fffU & VL_MULS_III(12, (0x00000fffU 
                                          & VL_EXTENDS_II(12,6, vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__captured_feature_regs
                                                          [vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__count])), 
                                     (0x00000fffU & 
                                      VL_EXTENDS_II(12,6, vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__captured_weights
                                                    [vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__count]))));
    vlSelfRef.full_classifier__DOT__class_index = vlSelfRef.full_classifier__DOT__u_classifier__DOT__class_index;
    vlSelfRef.full_classifier__DOT__valid = vlSelfRef.full_classifier__DOT__u_classifier__DOT__valid;
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__mac_a_score 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__score;
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__mac_b_score 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__score;
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__mac_c_score 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__score;
    vlSelfRef.full_classifier__DOT__clk = vlSelfRef.clk;
    vlSelfRef.full_classifier__DOT__rst = vlSelfRef.rst;
    vlSelfRef.full_classifier__DOT__start = vlSelfRef.start;
    vlSelfRef.full_classifier__DOT__features = vlSelfRef.features;
    vlSelfRef.full_classifier__DOT__note = vlSelfRef.note;
    vlSelfRef.class_index = vlSelfRef.full_classifier__DOT__class_index;
    vlSelfRef.valid = vlSelfRef.full_classifier__DOT__valid;
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_compare__DOT__a 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__mac_a_score;
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_compare__DOT__b 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__mac_b_score;
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_compare__DOT__c 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__mac_c_score;
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__clk 
        = vlSelfRef.full_classifier__DOT__clk;
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__rst 
        = vlSelfRef.full_classifier__DOT__rst;
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__start 
        = vlSelfRef.full_classifier__DOT__start;
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__feature_regs 
        = vlSelfRef.full_classifier__DOT__features;
    vlSelfRef.full_classifier__DOT__u_load__DOT__note 
        = vlSelfRef.full_classifier__DOT__note;
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_compare__DOT__biggest 
        = ((VL_GTES_III(16, (IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_compare__DOT__b), (IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_compare__DOT__c))
             ? 1U : 2U) & (- (IData)((1U & (~ (VL_GTES_III(16, (IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_compare__DOT__a), (IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_compare__DOT__b)) 
                                               & VL_GTES_III(16, (IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_compare__DOT__a), (IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_compare__DOT__c))))))));
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__clk 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__clk;
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__clk 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__clk;
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__clk 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__clk;
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__rst 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__rst;
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__rst 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__rst;
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__rst 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__rst;
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__start 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__start;
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__start 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__start;
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__start 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__start;
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__feature_regs 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__feature_regs;
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__feature_regs 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__feature_regs;
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__feature_regs 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__feature_regs;
    vlSelfRef.full_classifier__DOT__u_load__DOT__bias_base 
        = VL_MULS_III(32, (IData)(3U), (IData)(vlSelfRef.full_classifier__DOT__u_load__DOT__note));
    vlSelfRef.full_classifier__DOT__u_load__DOT__weight_base 
        = VL_MULS_III(32, (IData)(0x00000018U), (IData)(vlSelfRef.full_classifier__DOT__u_load__DOT__note));
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__biggest 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_compare__DOT__biggest;
    vlSelfRef.full_classifier__DOT__u_load__DOT__biases_a 
        = (vlSelfRef.full_classifier__DOT__u_load__DOT__bias_rom
           [(0x0000000fU & vlSelfRef.full_classifier__DOT__u_load__DOT__bias_base)] 
           & (- (IData)((0x0eU >= (0x0000000fU & vlSelfRef.full_classifier__DOT__u_load__DOT__bias_base)))));
    vlSelfRef.full_classifier__DOT__u_load__DOT__biases_b 
        = (vlSelfRef.full_classifier__DOT__u_load__DOT__bias_rom
           [(0x0000000fU & ((IData)(1U) + vlSelfRef.full_classifier__DOT__u_load__DOT__bias_base))] 
           & (- (IData)((0x0eU >= (0x0000000fU & ((IData)(1U) 
                                                  + vlSelfRef.full_classifier__DOT__u_load__DOT__bias_base))))));
    vlSelfRef.full_classifier__DOT__u_load__DOT__biases_c 
        = (vlSelfRef.full_classifier__DOT__u_load__DOT__bias_rom
           [(0x0000000fU & ((IData)(2U) + vlSelfRef.full_classifier__DOT__u_load__DOT__bias_base))] 
           & (- (IData)((0x0eU >= (0x0000000fU & ((IData)(2U) 
                                                  + vlSelfRef.full_classifier__DOT__u_load__DOT__bias_base))))));
    vlSelfRef.full_classifier__DOT__u_load__DOT__weights_a[0U] 
        = (vlSelfRef.full_classifier__DOT__u_load__DOT__weight_rom
           [(0x0000007fU & vlSelfRef.full_classifier__DOT__u_load__DOT__weight_base)] 
           & (- (IData)((0x77U >= (0x0000007fU & vlSelfRef.full_classifier__DOT__u_load__DOT__weight_base)))));
    vlSelfRef.full_classifier__DOT__u_load__DOT__weights_a[1U] 
        = (vlSelfRef.full_classifier__DOT__u_load__DOT__weight_rom
           [(0x0000007fU & ((IData)(1U) + vlSelfRef.full_classifier__DOT__u_load__DOT__weight_base))] 
           & (- (IData)((0x77U >= (0x0000007fU & ((IData)(1U) 
                                                  + vlSelfRef.full_classifier__DOT__u_load__DOT__weight_base))))));
    vlSelfRef.full_classifier__DOT__u_load__DOT__weights_a[2U] 
        = (vlSelfRef.full_classifier__DOT__u_load__DOT__weight_rom
           [(0x0000007fU & ((IData)(2U) + vlSelfRef.full_classifier__DOT__u_load__DOT__weight_base))] 
           & (- (IData)((0x77U >= (0x0000007fU & ((IData)(2U) 
                                                  + vlSelfRef.full_classifier__DOT__u_load__DOT__weight_base))))));
    vlSelfRef.full_classifier__DOT__u_load__DOT__weights_a[3U] 
        = (vlSelfRef.full_classifier__DOT__u_load__DOT__weight_rom
           [(0x0000007fU & ((IData)(3U) + vlSelfRef.full_classifier__DOT__u_load__DOT__weight_base))] 
           & (- (IData)((0x77U >= (0x0000007fU & ((IData)(3U) 
                                                  + vlSelfRef.full_classifier__DOT__u_load__DOT__weight_base))))));
    vlSelfRef.full_classifier__DOT__u_load__DOT__weights_a[4U] 
        = (vlSelfRef.full_classifier__DOT__u_load__DOT__weight_rom
           [(0x0000007fU & ((IData)(4U) + vlSelfRef.full_classifier__DOT__u_load__DOT__weight_base))] 
           & (- (IData)((0x77U >= (0x0000007fU & ((IData)(4U) 
                                                  + vlSelfRef.full_classifier__DOT__u_load__DOT__weight_base))))));
    vlSelfRef.full_classifier__DOT__u_load__DOT__weights_a[5U] 
        = (vlSelfRef.full_classifier__DOT__u_load__DOT__weight_rom
           [(0x0000007fU & ((IData)(5U) + vlSelfRef.full_classifier__DOT__u_load__DOT__weight_base))] 
           & (- (IData)((0x77U >= (0x0000007fU & ((IData)(5U) 
                                                  + vlSelfRef.full_classifier__DOT__u_load__DOT__weight_base))))));
    vlSelfRef.full_classifier__DOT__u_load__DOT__weights_a[6U] 
        = (vlSelfRef.full_classifier__DOT__u_load__DOT__weight_rom
           [(0x0000007fU & ((IData)(6U) + vlSelfRef.full_classifier__DOT__u_load__DOT__weight_base))] 
           & (- (IData)((0x77U >= (0x0000007fU & ((IData)(6U) 
                                                  + vlSelfRef.full_classifier__DOT__u_load__DOT__weight_base))))));
    vlSelfRef.full_classifier__DOT__u_load__DOT__weights_a[7U] 
        = (vlSelfRef.full_classifier__DOT__u_load__DOT__weight_rom
           [(0x0000007fU & ((IData)(7U) + vlSelfRef.full_classifier__DOT__u_load__DOT__weight_base))] 
           & (- (IData)((0x77U >= (0x0000007fU & ((IData)(7U) 
                                                  + vlSelfRef.full_classifier__DOT__u_load__DOT__weight_base))))));
    vlSelfRef.full_classifier__DOT__u_load__DOT__weights_b[0U] 
        = (vlSelfRef.full_classifier__DOT__u_load__DOT__weight_rom
           [(0x0000007fU & ((IData)(8U) + vlSelfRef.full_classifier__DOT__u_load__DOT__weight_base))] 
           & (- (IData)((0x77U >= (0x0000007fU & ((IData)(8U) 
                                                  + vlSelfRef.full_classifier__DOT__u_load__DOT__weight_base))))));
    vlSelfRef.full_classifier__DOT__u_load__DOT__weights_b[1U] 
        = (vlSelfRef.full_classifier__DOT__u_load__DOT__weight_rom
           [(0x0000007fU & ((IData)(9U) + vlSelfRef.full_classifier__DOT__u_load__DOT__weight_base))] 
           & (- (IData)((0x77U >= (0x0000007fU & ((IData)(9U) 
                                                  + vlSelfRef.full_classifier__DOT__u_load__DOT__weight_base))))));
    vlSelfRef.full_classifier__DOT__u_load__DOT__weights_b[2U] 
        = (vlSelfRef.full_classifier__DOT__u_load__DOT__weight_rom
           [(0x0000007fU & ((IData)(0x0aU) + vlSelfRef.full_classifier__DOT__u_load__DOT__weight_base))] 
           & (- (IData)((0x77U >= (0x0000007fU & ((IData)(0x0aU) 
                                                  + vlSelfRef.full_classifier__DOT__u_load__DOT__weight_base))))));
    vlSelfRef.full_classifier__DOT__u_load__DOT__weights_b[3U] 
        = (vlSelfRef.full_classifier__DOT__u_load__DOT__weight_rom
           [(0x0000007fU & ((IData)(0x0bU) + vlSelfRef.full_classifier__DOT__u_load__DOT__weight_base))] 
           & (- (IData)((0x77U >= (0x0000007fU & ((IData)(0x0bU) 
                                                  + vlSelfRef.full_classifier__DOT__u_load__DOT__weight_base))))));
    vlSelfRef.full_classifier__DOT__u_load__DOT__weights_b[4U] 
        = (vlSelfRef.full_classifier__DOT__u_load__DOT__weight_rom
           [(0x0000007fU & ((IData)(0x0cU) + vlSelfRef.full_classifier__DOT__u_load__DOT__weight_base))] 
           & (- (IData)((0x77U >= (0x0000007fU & ((IData)(0x0cU) 
                                                  + vlSelfRef.full_classifier__DOT__u_load__DOT__weight_base))))));
    vlSelfRef.full_classifier__DOT__u_load__DOT__weights_b[5U] 
        = (vlSelfRef.full_classifier__DOT__u_load__DOT__weight_rom
           [(0x0000007fU & ((IData)(0x0dU) + vlSelfRef.full_classifier__DOT__u_load__DOT__weight_base))] 
           & (- (IData)((0x77U >= (0x0000007fU & ((IData)(0x0dU) 
                                                  + vlSelfRef.full_classifier__DOT__u_load__DOT__weight_base))))));
    vlSelfRef.full_classifier__DOT__u_load__DOT__weights_b[6U] 
        = (vlSelfRef.full_classifier__DOT__u_load__DOT__weight_rom
           [(0x0000007fU & ((IData)(0x0eU) + vlSelfRef.full_classifier__DOT__u_load__DOT__weight_base))] 
           & (- (IData)((0x77U >= (0x0000007fU & ((IData)(0x0eU) 
                                                  + vlSelfRef.full_classifier__DOT__u_load__DOT__weight_base))))));
    vlSelfRef.full_classifier__DOT__u_load__DOT__weights_b[7U] 
        = (vlSelfRef.full_classifier__DOT__u_load__DOT__weight_rom
           [(0x0000007fU & ((IData)(0x0fU) + vlSelfRef.full_classifier__DOT__u_load__DOT__weight_base))] 
           & (- (IData)((0x77U >= (0x0000007fU & ((IData)(0x0fU) 
                                                  + vlSelfRef.full_classifier__DOT__u_load__DOT__weight_base))))));
    vlSelfRef.full_classifier__DOT__u_load__DOT__weights_c[0U] 
        = (vlSelfRef.full_classifier__DOT__u_load__DOT__weight_rom
           [(0x0000007fU & ((IData)(0x10U) + vlSelfRef.full_classifier__DOT__u_load__DOT__weight_base))] 
           & (- (IData)((0x77U >= (0x0000007fU & ((IData)(0x10U) 
                                                  + vlSelfRef.full_classifier__DOT__u_load__DOT__weight_base))))));
    vlSelfRef.full_classifier__DOT__u_load__DOT__weights_c[1U] 
        = (vlSelfRef.full_classifier__DOT__u_load__DOT__weight_rom
           [(0x0000007fU & ((IData)(0x11U) + vlSelfRef.full_classifier__DOT__u_load__DOT__weight_base))] 
           & (- (IData)((0x77U >= (0x0000007fU & ((IData)(0x11U) 
                                                  + vlSelfRef.full_classifier__DOT__u_load__DOT__weight_base))))));
    vlSelfRef.full_classifier__DOT__u_load__DOT__weights_c[2U] 
        = (vlSelfRef.full_classifier__DOT__u_load__DOT__weight_rom
           [(0x0000007fU & ((IData)(0x12U) + vlSelfRef.full_classifier__DOT__u_load__DOT__weight_base))] 
           & (- (IData)((0x77U >= (0x0000007fU & ((IData)(0x12U) 
                                                  + vlSelfRef.full_classifier__DOT__u_load__DOT__weight_base))))));
    vlSelfRef.full_classifier__DOT__u_load__DOT__weights_c[3U] 
        = (vlSelfRef.full_classifier__DOT__u_load__DOT__weight_rom
           [(0x0000007fU & ((IData)(0x13U) + vlSelfRef.full_classifier__DOT__u_load__DOT__weight_base))] 
           & (- (IData)((0x77U >= (0x0000007fU & ((IData)(0x13U) 
                                                  + vlSelfRef.full_classifier__DOT__u_load__DOT__weight_base))))));
    vlSelfRef.full_classifier__DOT__u_load__DOT__weights_c[4U] 
        = (vlSelfRef.full_classifier__DOT__u_load__DOT__weight_rom
           [(0x0000007fU & ((IData)(0x14U) + vlSelfRef.full_classifier__DOT__u_load__DOT__weight_base))] 
           & (- (IData)((0x77U >= (0x0000007fU & ((IData)(0x14U) 
                                                  + vlSelfRef.full_classifier__DOT__u_load__DOT__weight_base))))));
    vlSelfRef.full_classifier__DOT__u_load__DOT__weights_c[5U] 
        = (vlSelfRef.full_classifier__DOT__u_load__DOT__weight_rom
           [(0x0000007fU & ((IData)(0x15U) + vlSelfRef.full_classifier__DOT__u_load__DOT__weight_base))] 
           & (- (IData)((0x77U >= (0x0000007fU & ((IData)(0x15U) 
                                                  + vlSelfRef.full_classifier__DOT__u_load__DOT__weight_base))))));
    vlSelfRef.full_classifier__DOT__u_load__DOT__weights_c[6U] 
        = (vlSelfRef.full_classifier__DOT__u_load__DOT__weight_rom
           [(0x0000007fU & ((IData)(0x16U) + vlSelfRef.full_classifier__DOT__u_load__DOT__weight_base))] 
           & (- (IData)((0x77U >= (0x0000007fU & ((IData)(0x16U) 
                                                  + vlSelfRef.full_classifier__DOT__u_load__DOT__weight_base))))));
    vlSelfRef.full_classifier__DOT__u_load__DOT__weights_c[7U] 
        = (vlSelfRef.full_classifier__DOT__u_load__DOT__weight_rom
           [(0x0000007fU & ((IData)(0x17U) + vlSelfRef.full_classifier__DOT__u_load__DOT__weight_base))] 
           & (- (IData)((0x77U >= (0x0000007fU & ((IData)(0x17U) 
                                                  + vlSelfRef.full_classifier__DOT__u_load__DOT__weight_base))))));
    vlSelfRef.full_classifier__DOT__biases_a = vlSelfRef.full_classifier__DOT__u_load__DOT__biases_a;
    vlSelfRef.full_classifier__DOT__biases_b = vlSelfRef.full_classifier__DOT__u_load__DOT__biases_b;
    vlSelfRef.full_classifier__DOT__biases_c = vlSelfRef.full_classifier__DOT__u_load__DOT__biases_c;
    vlSelfRef.full_classifier__DOT__weights_a = vlSelfRef.full_classifier__DOT__u_load__DOT__weights_a;
    vlSelfRef.full_classifier__DOT__weights_b = vlSelfRef.full_classifier__DOT__u_load__DOT__weights_b;
    vlSelfRef.full_classifier__DOT__weights_c = vlSelfRef.full_classifier__DOT__u_load__DOT__weights_c;
    vlSelfRef.full_classifier__DOT__biases[0U] = vlSelfRef.full_classifier__DOT__biases_a;
    vlSelfRef.full_classifier__DOT__biases[1U] = vlSelfRef.full_classifier__DOT__biases_b;
    vlSelfRef.full_classifier__DOT__biases[2U] = vlSelfRef.full_classifier__DOT__biases_c;
    vlSelfRef.full_classifier__DOT__weights[0U] = vlSelfRef.full_classifier__DOT__weights_a[0U];
    vlSelfRef.full_classifier__DOT__weights[1U] = vlSelfRef.full_classifier__DOT__weights_a[1U];
    vlSelfRef.full_classifier__DOT__weights[2U] = vlSelfRef.full_classifier__DOT__weights_a[2U];
    vlSelfRef.full_classifier__DOT__weights[3U] = vlSelfRef.full_classifier__DOT__weights_a[3U];
    vlSelfRef.full_classifier__DOT__weights[4U] = vlSelfRef.full_classifier__DOT__weights_a[4U];
    vlSelfRef.full_classifier__DOT__weights[5U] = vlSelfRef.full_classifier__DOT__weights_a[5U];
    vlSelfRef.full_classifier__DOT__weights[6U] = vlSelfRef.full_classifier__DOT__weights_a[6U];
    vlSelfRef.full_classifier__DOT__weights[7U] = vlSelfRef.full_classifier__DOT__weights_a[7U];
    vlSelfRef.full_classifier__DOT__weights[8U] = vlSelfRef.full_classifier__DOT__weights_b[0U];
    vlSelfRef.full_classifier__DOT__weights[9U] = vlSelfRef.full_classifier__DOT__weights_b[1U];
    vlSelfRef.full_classifier__DOT__weights[10U] = vlSelfRef.full_classifier__DOT__weights_b[2U];
    vlSelfRef.full_classifier__DOT__weights[11U] = vlSelfRef.full_classifier__DOT__weights_b[3U];
    vlSelfRef.full_classifier__DOT__weights[12U] = vlSelfRef.full_classifier__DOT__weights_b[4U];
    vlSelfRef.full_classifier__DOT__weights[13U] = vlSelfRef.full_classifier__DOT__weights_b[5U];
    vlSelfRef.full_classifier__DOT__weights[14U] = vlSelfRef.full_classifier__DOT__weights_b[6U];
    vlSelfRef.full_classifier__DOT__weights[15U] = vlSelfRef.full_classifier__DOT__weights_b[7U];
    vlSelfRef.full_classifier__DOT__weights[16U] = vlSelfRef.full_classifier__DOT__weights_c[0U];
    vlSelfRef.full_classifier__DOT__weights[17U] = vlSelfRef.full_classifier__DOT__weights_c[1U];
    vlSelfRef.full_classifier__DOT__weights[18U] = vlSelfRef.full_classifier__DOT__weights_c[2U];
    vlSelfRef.full_classifier__DOT__weights[19U] = vlSelfRef.full_classifier__DOT__weights_c[3U];
    vlSelfRef.full_classifier__DOT__weights[20U] = vlSelfRef.full_classifier__DOT__weights_c[4U];
    vlSelfRef.full_classifier__DOT__weights[21U] = vlSelfRef.full_classifier__DOT__weights_c[5U];
    vlSelfRef.full_classifier__DOT__weights[22U] = vlSelfRef.full_classifier__DOT__weights_c[6U];
    vlSelfRef.full_classifier__DOT__weights[23U] = vlSelfRef.full_classifier__DOT__weights_c[7U];
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__biases 
        = vlSelfRef.full_classifier__DOT__biases;
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__weights 
        = vlSelfRef.full_classifier__DOT__weights;
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__bias 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__biases[0U];
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__bias 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__biases[1U];
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__bias 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__biases[2U];
    vlSelfRef.full_classifier__DOT__u_classifier__DOT____Vcellinp__u_mac_a__weights[0U] 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__weights[0U];
    vlSelfRef.full_classifier__DOT__u_classifier__DOT____Vcellinp__u_mac_a__weights[1U] 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__weights[1U];
    vlSelfRef.full_classifier__DOT__u_classifier__DOT____Vcellinp__u_mac_a__weights[2U] 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__weights[2U];
    vlSelfRef.full_classifier__DOT__u_classifier__DOT____Vcellinp__u_mac_a__weights[3U] 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__weights[3U];
    vlSelfRef.full_classifier__DOT__u_classifier__DOT____Vcellinp__u_mac_a__weights[4U] 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__weights[4U];
    vlSelfRef.full_classifier__DOT__u_classifier__DOT____Vcellinp__u_mac_a__weights[5U] 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__weights[5U];
    vlSelfRef.full_classifier__DOT__u_classifier__DOT____Vcellinp__u_mac_a__weights[6U] 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__weights[6U];
    vlSelfRef.full_classifier__DOT__u_classifier__DOT____Vcellinp__u_mac_a__weights[7U] 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__weights[7U];
    vlSelfRef.full_classifier__DOT__u_classifier__DOT____Vcellinp__u_mac_b__weights[0U] 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__weights[8U];
    vlSelfRef.full_classifier__DOT__u_classifier__DOT____Vcellinp__u_mac_b__weights[1U] 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__weights[9U];
    vlSelfRef.full_classifier__DOT__u_classifier__DOT____Vcellinp__u_mac_b__weights[2U] 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__weights[10U];
    vlSelfRef.full_classifier__DOT__u_classifier__DOT____Vcellinp__u_mac_b__weights[3U] 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__weights[11U];
    vlSelfRef.full_classifier__DOT__u_classifier__DOT____Vcellinp__u_mac_b__weights[4U] 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__weights[12U];
    vlSelfRef.full_classifier__DOT__u_classifier__DOT____Vcellinp__u_mac_b__weights[5U] 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__weights[13U];
    vlSelfRef.full_classifier__DOT__u_classifier__DOT____Vcellinp__u_mac_b__weights[6U] 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__weights[14U];
    vlSelfRef.full_classifier__DOT__u_classifier__DOT____Vcellinp__u_mac_b__weights[7U] 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__weights[15U];
    vlSelfRef.full_classifier__DOT__u_classifier__DOT____Vcellinp__u_mac_c__weights[0U] 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__weights[16U];
    vlSelfRef.full_classifier__DOT__u_classifier__DOT____Vcellinp__u_mac_c__weights[1U] 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__weights[17U];
    vlSelfRef.full_classifier__DOT__u_classifier__DOT____Vcellinp__u_mac_c__weights[2U] 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__weights[18U];
    vlSelfRef.full_classifier__DOT__u_classifier__DOT____Vcellinp__u_mac_c__weights[3U] 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__weights[19U];
    vlSelfRef.full_classifier__DOT__u_classifier__DOT____Vcellinp__u_mac_c__weights[4U] 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__weights[20U];
    vlSelfRef.full_classifier__DOT__u_classifier__DOT____Vcellinp__u_mac_c__weights[5U] 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__weights[21U];
    vlSelfRef.full_classifier__DOT__u_classifier__DOT____Vcellinp__u_mac_c__weights[6U] 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__weights[22U];
    vlSelfRef.full_classifier__DOT__u_classifier__DOT____Vcellinp__u_mac_c__weights[7U] 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__weights[23U];
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__weights 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT____Vcellinp__u_mac_a__weights;
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__weights 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT____Vcellinp__u_mac_b__weights;
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__weights 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT____Vcellinp__u_mac_c__weights;
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
                                                    (((((IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__clk) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__clk__0))) 
                                                       << 3U) 
                                                      | (((IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__clk) 
                                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__clk__0))) 
                                                         << 2U)) 
                                                     | ((((IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__clk) 
                                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__clk__0))) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__full_classifier__DOT__u_classifier__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__full_classifier__DOT__u_classifier__DOT__clk__0 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__clk__0 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__clk__0 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__clk__0 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__clk;
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
    CData/*2:0*/ __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__count;
    __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__count = 0;
    CData/*0:0*/ __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__busy;
    __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__busy = 0;
    CData/*0:0*/ __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__drain;
    __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__drain = 0;
    CData/*0:0*/ __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__product_valid;
    __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__product_valid = 0;
    // Body
    __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__drain 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__drain;
    __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__product_valid 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__product_valid;
    __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__busy 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__busy;
    __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__count 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__count;
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__done = 0U;
    if (vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__rst) {
        __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__count = 7U;
        vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__score = 0U;
        __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__busy = 0U;
        __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__drain = 0U;
        __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__product_valid = 0U;
    } else if (vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__busy) {
        if (vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__product_valid) {
            vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__score 
                = (0x0000ffffU & (((1U & (vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__extended_sum 
                                          >> 0x10U)) 
                                   != (1U & (vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__extended_sum 
                                             >> 0x0fU)))
                                   ? ((0x00010000U 
                                       & vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__extended_sum)
                                       ? 0x8000U : 0x7fffU)
                                   : vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__extended_sum));
        }
        if (vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__drain) {
            vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__done = 1U;
            __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__drain = 0U;
            __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__busy = 0U;
            __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__product_valid = 0U;
        } else {
            vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__product_reg 
                = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__product;
            __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__product_valid = 1U;
            if ((0U == (IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__count))) {
                __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__drain = 1U;
            } else {
                __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__count 
                    = (7U & ((IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__count) 
                             - (IData)(1U)));
            }
        }
    } else if (vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__start) {
        vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__captured_feature_regs 
            = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__feature_regs;
        vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__captured_weights 
            = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__weights;
        __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__count = 7U;
        vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__score 
            = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__bias;
        __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__busy = 1U;
        __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__product_valid = 0U;
        __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__drain = 0U;
    }
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__drain 
        = __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__drain;
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__product_valid 
        = __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__product_valid;
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__busy 
        = __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__busy;
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__count 
        = __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__count;
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__mac_a_busy 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__busy;
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__product 
        = (0x00000fffU & VL_MULS_III(12, (0x00000fffU 
                                          & VL_EXTENDS_II(12,6, vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__captured_feature_regs
                                                          [vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__count])), 
                                     (0x00000fffU & 
                                      VL_EXTENDS_II(12,6, vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__captured_weights
                                                    [vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__count]))));
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__extended_sum 
        = (0x0001ffffU & (((0x00010000U & ((IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__score) 
                                           << 1U)) 
                           | (IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__score)) 
                          + ((0x0001f000U & ((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__product_reg) 
                                                            >> 0x0000000bU)))) 
                                             << 0x0000000cU)) 
                             | (IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__product_reg))));
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__mac_a_score 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__score;
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_compare__DOT__a 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__mac_a_score;
}

void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__count;
    __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__count = 0;
    CData/*0:0*/ __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__busy;
    __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__busy = 0;
    CData/*0:0*/ __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__drain;
    __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__drain = 0;
    CData/*0:0*/ __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__product_valid;
    __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__product_valid = 0;
    // Body
    __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__drain 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__drain;
    __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__product_valid 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__product_valid;
    __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__busy 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__busy;
    __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__count 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__count;
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__done = 0U;
    if (vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__rst) {
        __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__count = 7U;
        vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__score = 0U;
        __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__busy = 0U;
        __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__drain = 0U;
        __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__product_valid = 0U;
    } else if (vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__busy) {
        if (vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__product_valid) {
            vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__score 
                = (0x0000ffffU & (((1U & (vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__extended_sum 
                                          >> 0x10U)) 
                                   != (1U & (vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__extended_sum 
                                             >> 0x0fU)))
                                   ? ((0x00010000U 
                                       & vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__extended_sum)
                                       ? 0x8000U : 0x7fffU)
                                   : vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__extended_sum));
        }
        if (vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__drain) {
            vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__done = 1U;
            __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__drain = 0U;
            __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__busy = 0U;
            __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__product_valid = 0U;
        } else {
            vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__product_reg 
                = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__product;
            __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__product_valid = 1U;
            if ((0U == (IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__count))) {
                __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__drain = 1U;
            } else {
                __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__count 
                    = (7U & ((IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__count) 
                             - (IData)(1U)));
            }
        }
    } else if (vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__start) {
        vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__captured_feature_regs 
            = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__feature_regs;
        vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__captured_weights 
            = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__weights;
        __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__count = 7U;
        vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__score 
            = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__bias;
        __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__busy = 1U;
        __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__product_valid = 0U;
        __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__drain = 0U;
    }
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__drain 
        = __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__drain;
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__product_valid 
        = __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__product_valid;
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__busy 
        = __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__busy;
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__count 
        = __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__count;
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__mac_b_busy 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__busy;
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__product 
        = (0x00000fffU & VL_MULS_III(12, (0x00000fffU 
                                          & VL_EXTENDS_II(12,6, vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__captured_feature_regs
                                                          [vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__count])), 
                                     (0x00000fffU & 
                                      VL_EXTENDS_II(12,6, vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__captured_weights
                                                    [vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__count]))));
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__extended_sum 
        = (0x0001ffffU & (((0x00010000U & ((IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__score) 
                                           << 1U)) 
                           | (IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__score)) 
                          + ((0x0001f000U & ((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__product_reg) 
                                                            >> 0x0000000bU)))) 
                                             << 0x0000000cU)) 
                             | (IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__product_reg))));
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__mac_b_score 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__score;
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_compare__DOT__b 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__mac_b_score;
}

void Vtop___024root___nba_sequent__TOP__2(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__2\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__count;
    __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__count = 0;
    CData/*0:0*/ __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__busy;
    __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__busy = 0;
    CData/*0:0*/ __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__drain;
    __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__drain = 0;
    CData/*0:0*/ __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__product_valid;
    __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__product_valid = 0;
    // Body
    __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__drain 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__drain;
    __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__product_valid 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__product_valid;
    __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__busy 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__busy;
    __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__count 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__count;
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__done = 0U;
    if (vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__rst) {
        __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__count = 7U;
        vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__score = 0U;
        __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__busy = 0U;
        __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__drain = 0U;
        __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__product_valid = 0U;
    } else if (vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__busy) {
        if (vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__product_valid) {
            vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__score 
                = (0x0000ffffU & (((1U & (vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__extended_sum 
                                          >> 0x10U)) 
                                   != (1U & (vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__extended_sum 
                                             >> 0x0fU)))
                                   ? ((0x00010000U 
                                       & vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__extended_sum)
                                       ? 0x8000U : 0x7fffU)
                                   : vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__extended_sum));
        }
        if (vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__drain) {
            vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__done = 1U;
            __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__drain = 0U;
            __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__busy = 0U;
            __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__product_valid = 0U;
        } else {
            vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__product_reg 
                = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__product;
            __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__product_valid = 1U;
            if ((0U == (IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__count))) {
                __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__drain = 1U;
            } else {
                __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__count 
                    = (7U & ((IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__count) 
                             - (IData)(1U)));
            }
        }
    } else if (vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__start) {
        vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__captured_feature_regs 
            = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__feature_regs;
        vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__captured_weights 
            = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__weights;
        __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__count = 7U;
        vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__score 
            = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__bias;
        __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__busy = 1U;
        __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__product_valid = 0U;
        __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__drain = 0U;
    }
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__drain 
        = __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__drain;
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__product_valid 
        = __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__product_valid;
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__busy 
        = __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__busy;
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__count 
        = __Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__count;
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__mac_c_busy 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__busy;
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__product 
        = (0x00000fffU & VL_MULS_III(12, (0x00000fffU 
                                          & VL_EXTENDS_II(12,6, vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__captured_feature_regs
                                                          [vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__count])), 
                                     (0x00000fffU & 
                                      VL_EXTENDS_II(12,6, vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__captured_weights
                                                    [vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__count]))));
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__extended_sum 
        = (0x0001ffffU & (((0x00010000U & ((IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__score) 
                                           << 1U)) 
                           | (IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__score)) 
                          + ((0x0001f000U & ((- (IData)(
                                                        (1U 
                                                         & ((IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__product_reg) 
                                                            >> 0x0000000bU)))) 
                                             << 0x0000000cU)) 
                             | (IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__product_reg))));
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__mac_c_score 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__score;
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_compare__DOT__c 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__mac_c_score;
}

void Vtop___024root___nba_sequent__TOP__3(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__3\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__valid = 0U;
    if ((1U & (~ (IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__rst)))) {
        if ((((IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__mac_a_done) 
              & (IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__mac_b_done)) 
             & (IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__mac_c_done))) {
            vlSelfRef.full_classifier__DOT__u_classifier__DOT__valid = 1U;
        }
    }
    if (vlSelfRef.full_classifier__DOT__u_classifier__DOT__rst) {
        vlSelfRef.full_classifier__DOT__u_classifier__DOT__class_index = 3U;
    } else if ((((IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__mac_a_done) 
                 & (IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__mac_b_done)) 
                & (IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__mac_c_done))) {
        vlSelfRef.full_classifier__DOT__u_classifier__DOT__class_index 
            = vlSelfRef.full_classifier__DOT__u_classifier__DOT__biggest;
    }
    vlSelfRef.full_classifier__DOT__valid = vlSelfRef.full_classifier__DOT__u_classifier__DOT__valid;
    vlSelfRef.full_classifier__DOT__class_index = vlSelfRef.full_classifier__DOT__u_classifier__DOT__class_index;
    vlSelfRef.valid = vlSelfRef.full_classifier__DOT__valid;
    vlSelfRef.class_index = vlSelfRef.full_classifier__DOT__class_index;
}

void Vtop___024root___nba_comb__TOP__0(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_comb__TOP__0\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_compare__DOT__biggest 
        = ((VL_GTES_III(16, (IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_compare__DOT__b), (IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_compare__DOT__c))
             ? 1U : 2U) & (- (IData)((1U & (~ (VL_GTES_III(16, (IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_compare__DOT__a), (IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_compare__DOT__b)) 
                                               & VL_GTES_III(16, (IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_compare__DOT__a), (IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_compare__DOT__c))))))));
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__biggest 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_compare__DOT__biggest;
}

void Vtop___024root___nba_sequent__TOP__4(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__4\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__mac_a_done 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__done;
}

void Vtop___024root___nba_sequent__TOP__5(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__5\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__mac_b_done 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__done;
}

void Vtop___024root___nba_sequent__TOP__6(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__6\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__mac_c_done 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__done;
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vinline__nba_sequent__TOP__0___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__count;
    __Vinline__nba_sequent__TOP__0___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__count = 0;
    CData/*0:0*/ __Vinline__nba_sequent__TOP__0___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__busy;
    __Vinline__nba_sequent__TOP__0___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__busy = 0;
    CData/*0:0*/ __Vinline__nba_sequent__TOP__0___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__drain;
    __Vinline__nba_sequent__TOP__0___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__drain = 0;
    CData/*0:0*/ __Vinline__nba_sequent__TOP__0___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__product_valid;
    __Vinline__nba_sequent__TOP__0___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__product_valid = 0;
    CData/*2:0*/ __Vinline__nba_sequent__TOP__1___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__count;
    __Vinline__nba_sequent__TOP__1___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__count = 0;
    CData/*0:0*/ __Vinline__nba_sequent__TOP__1___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__busy;
    __Vinline__nba_sequent__TOP__1___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__busy = 0;
    CData/*0:0*/ __Vinline__nba_sequent__TOP__1___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__drain;
    __Vinline__nba_sequent__TOP__1___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__drain = 0;
    CData/*0:0*/ __Vinline__nba_sequent__TOP__1___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__product_valid;
    __Vinline__nba_sequent__TOP__1___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__product_valid = 0;
    CData/*2:0*/ __Vinline__nba_sequent__TOP__2___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__count;
    __Vinline__nba_sequent__TOP__2___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__count = 0;
    CData/*0:0*/ __Vinline__nba_sequent__TOP__2___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__busy;
    __Vinline__nba_sequent__TOP__2___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__busy = 0;
    CData/*0:0*/ __Vinline__nba_sequent__TOP__2___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__drain;
    __Vinline__nba_sequent__TOP__2___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__drain = 0;
    CData/*0:0*/ __Vinline__nba_sequent__TOP__2___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__product_valid;
    __Vinline__nba_sequent__TOP__2___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__product_valid = 0;
    // Body
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__0___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__drain 
            = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__drain;
        __Vinline__nba_sequent__TOP__0___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__product_valid 
            = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__product_valid;
        __Vinline__nba_sequent__TOP__0___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__busy 
            = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__busy;
        __Vinline__nba_sequent__TOP__0___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__count 
            = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__count;
        vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__done = 0U;
        if (vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__rst) {
            __Vinline__nba_sequent__TOP__0___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__count = 7U;
            vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__score = 0U;
            __Vinline__nba_sequent__TOP__0___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__busy = 0U;
            __Vinline__nba_sequent__TOP__0___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__drain = 0U;
            __Vinline__nba_sequent__TOP__0___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__product_valid = 0U;
        } else if (vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__busy) {
            if (vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__product_valid) {
                vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__score 
                    = (0x0000ffffU & (((1U & (vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__extended_sum 
                                              >> 0x10U)) 
                                       != (1U & (vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__extended_sum 
                                                 >> 0x0fU)))
                                       ? ((0x00010000U 
                                           & vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__extended_sum)
                                           ? 0x8000U
                                           : 0x7fffU)
                                       : vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__extended_sum));
            }
            if (vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__drain) {
                vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__done = 1U;
                __Vinline__nba_sequent__TOP__0___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__drain = 0U;
                __Vinline__nba_sequent__TOP__0___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__busy = 0U;
                __Vinline__nba_sequent__TOP__0___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__product_valid = 0U;
            } else {
                vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__product_reg 
                    = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__product;
                __Vinline__nba_sequent__TOP__0___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__product_valid = 1U;
                if ((0U == (IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__count))) {
                    __Vinline__nba_sequent__TOP__0___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__drain = 1U;
                } else {
                    __Vinline__nba_sequent__TOP__0___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__count 
                        = (7U & ((IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__count) 
                                 - (IData)(1U)));
                }
            }
        } else if (vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__start) {
            vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__captured_feature_regs 
                = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__feature_regs;
            vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__captured_weights 
                = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__weights;
            __Vinline__nba_sequent__TOP__0___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__count = 7U;
            vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__score 
                = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__bias;
            __Vinline__nba_sequent__TOP__0___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__busy = 1U;
            __Vinline__nba_sequent__TOP__0___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__product_valid = 0U;
            __Vinline__nba_sequent__TOP__0___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__drain = 0U;
        }
        vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__drain 
            = __Vinline__nba_sequent__TOP__0___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__drain;
        vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__product_valid 
            = __Vinline__nba_sequent__TOP__0___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__product_valid;
        vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__busy 
            = __Vinline__nba_sequent__TOP__0___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__busy;
        vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__count 
            = __Vinline__nba_sequent__TOP__0___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__count;
        vlSelfRef.full_classifier__DOT__u_classifier__DOT__mac_a_busy 
            = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__busy;
        vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__product 
            = (0x00000fffU & VL_MULS_III(12, (0x00000fffU 
                                              & VL_EXTENDS_II(12,6, vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__captured_feature_regs
                                                              [vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__count])), 
                                         (0x00000fffU 
                                          & VL_EXTENDS_II(12,6, vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__captured_weights
                                                          [vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__count]))));
        vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__extended_sum 
            = (0x0001ffffU & (((0x00010000U & ((IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__score) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__score)) 
                              + ((0x0001f000U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__product_reg) 
                                                                >> 0x0000000bU)))) 
                                                 << 0x0000000cU)) 
                                 | (IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__product_reg))));
        vlSelfRef.full_classifier__DOT__u_classifier__DOT__mac_a_score 
            = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__score;
        vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_compare__DOT__a 
            = vlSelfRef.full_classifier__DOT__u_classifier__DOT__mac_a_score;
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__1___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__drain 
            = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__drain;
        __Vinline__nba_sequent__TOP__1___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__product_valid 
            = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__product_valid;
        __Vinline__nba_sequent__TOP__1___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__busy 
            = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__busy;
        __Vinline__nba_sequent__TOP__1___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__count 
            = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__count;
        vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__done = 0U;
        if (vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__rst) {
            __Vinline__nba_sequent__TOP__1___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__count = 7U;
            vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__score = 0U;
            __Vinline__nba_sequent__TOP__1___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__busy = 0U;
            __Vinline__nba_sequent__TOP__1___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__drain = 0U;
            __Vinline__nba_sequent__TOP__1___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__product_valid = 0U;
        } else if (vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__busy) {
            if (vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__product_valid) {
                vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__score 
                    = (0x0000ffffU & (((1U & (vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__extended_sum 
                                              >> 0x10U)) 
                                       != (1U & (vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__extended_sum 
                                                 >> 0x0fU)))
                                       ? ((0x00010000U 
                                           & vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__extended_sum)
                                           ? 0x8000U
                                           : 0x7fffU)
                                       : vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__extended_sum));
            }
            if (vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__drain) {
                vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__done = 1U;
                __Vinline__nba_sequent__TOP__1___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__drain = 0U;
                __Vinline__nba_sequent__TOP__1___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__busy = 0U;
                __Vinline__nba_sequent__TOP__1___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__product_valid = 0U;
            } else {
                vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__product_reg 
                    = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__product;
                __Vinline__nba_sequent__TOP__1___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__product_valid = 1U;
                if ((0U == (IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__count))) {
                    __Vinline__nba_sequent__TOP__1___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__drain = 1U;
                } else {
                    __Vinline__nba_sequent__TOP__1___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__count 
                        = (7U & ((IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__count) 
                                 - (IData)(1U)));
                }
            }
        } else if (vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__start) {
            vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__captured_feature_regs 
                = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__feature_regs;
            vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__captured_weights 
                = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__weights;
            __Vinline__nba_sequent__TOP__1___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__count = 7U;
            vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__score 
                = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__bias;
            __Vinline__nba_sequent__TOP__1___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__busy = 1U;
            __Vinline__nba_sequent__TOP__1___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__product_valid = 0U;
            __Vinline__nba_sequent__TOP__1___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__drain = 0U;
        }
        vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__drain 
            = __Vinline__nba_sequent__TOP__1___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__drain;
        vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__product_valid 
            = __Vinline__nba_sequent__TOP__1___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__product_valid;
        vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__busy 
            = __Vinline__nba_sequent__TOP__1___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__busy;
        vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__count 
            = __Vinline__nba_sequent__TOP__1___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__count;
        vlSelfRef.full_classifier__DOT__u_classifier__DOT__mac_b_busy 
            = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__busy;
        vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__product 
            = (0x00000fffU & VL_MULS_III(12, (0x00000fffU 
                                              & VL_EXTENDS_II(12,6, vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__captured_feature_regs
                                                              [vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__count])), 
                                         (0x00000fffU 
                                          & VL_EXTENDS_II(12,6, vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__captured_weights
                                                          [vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__count]))));
        vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__extended_sum 
            = (0x0001ffffU & (((0x00010000U & ((IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__score) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__score)) 
                              + ((0x0001f000U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__product_reg) 
                                                                >> 0x0000000bU)))) 
                                                 << 0x0000000cU)) 
                                 | (IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__product_reg))));
        vlSelfRef.full_classifier__DOT__u_classifier__DOT__mac_b_score 
            = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__score;
        vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_compare__DOT__b 
            = vlSelfRef.full_classifier__DOT__u_classifier__DOT__mac_b_score;
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__2___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__drain 
            = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__drain;
        __Vinline__nba_sequent__TOP__2___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__product_valid 
            = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__product_valid;
        __Vinline__nba_sequent__TOP__2___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__busy 
            = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__busy;
        __Vinline__nba_sequent__TOP__2___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__count 
            = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__count;
        vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__done = 0U;
        if (vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__rst) {
            __Vinline__nba_sequent__TOP__2___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__count = 7U;
            vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__score = 0U;
            __Vinline__nba_sequent__TOP__2___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__busy = 0U;
            __Vinline__nba_sequent__TOP__2___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__drain = 0U;
            __Vinline__nba_sequent__TOP__2___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__product_valid = 0U;
        } else if (vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__busy) {
            if (vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__product_valid) {
                vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__score 
                    = (0x0000ffffU & (((1U & (vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__extended_sum 
                                              >> 0x10U)) 
                                       != (1U & (vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__extended_sum 
                                                 >> 0x0fU)))
                                       ? ((0x00010000U 
                                           & vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__extended_sum)
                                           ? 0x8000U
                                           : 0x7fffU)
                                       : vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__extended_sum));
            }
            if (vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__drain) {
                vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__done = 1U;
                __Vinline__nba_sequent__TOP__2___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__drain = 0U;
                __Vinline__nba_sequent__TOP__2___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__busy = 0U;
                __Vinline__nba_sequent__TOP__2___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__product_valid = 0U;
            } else {
                vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__product_reg 
                    = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__product;
                __Vinline__nba_sequent__TOP__2___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__product_valid = 1U;
                if ((0U == (IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__count))) {
                    __Vinline__nba_sequent__TOP__2___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__drain = 1U;
                } else {
                    __Vinline__nba_sequent__TOP__2___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__count 
                        = (7U & ((IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__count) 
                                 - (IData)(1U)));
                }
            }
        } else if (vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__start) {
            vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__captured_feature_regs 
                = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__feature_regs;
            vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__captured_weights 
                = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__weights;
            __Vinline__nba_sequent__TOP__2___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__count = 7U;
            vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__score 
                = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__bias;
            __Vinline__nba_sequent__TOP__2___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__busy = 1U;
            __Vinline__nba_sequent__TOP__2___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__product_valid = 0U;
            __Vinline__nba_sequent__TOP__2___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__drain = 0U;
        }
        vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__drain 
            = __Vinline__nba_sequent__TOP__2___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__drain;
        vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__product_valid 
            = __Vinline__nba_sequent__TOP__2___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__product_valid;
        vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__busy 
            = __Vinline__nba_sequent__TOP__2___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__busy;
        vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__count 
            = __Vinline__nba_sequent__TOP__2___Vdly__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__count;
        vlSelfRef.full_classifier__DOT__u_classifier__DOT__mac_c_busy 
            = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__busy;
        vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__product 
            = (0x00000fffU & VL_MULS_III(12, (0x00000fffU 
                                              & VL_EXTENDS_II(12,6, vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__captured_feature_regs
                                                              [vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__count])), 
                                         (0x00000fffU 
                                          & VL_EXTENDS_II(12,6, vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__captured_weights
                                                          [vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__count]))));
        vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__extended_sum 
            = (0x0001ffffU & (((0x00010000U & ((IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__score) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__score)) 
                              + ((0x0001f000U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__product_reg) 
                                                                >> 0x0000000bU)))) 
                                                 << 0x0000000cU)) 
                                 | (IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__product_reg))));
        vlSelfRef.full_classifier__DOT__u_classifier__DOT__mac_c_score 
            = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__score;
        vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_compare__DOT__c 
            = vlSelfRef.full_classifier__DOT__u_classifier__DOT__mac_c_score;
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.full_classifier__DOT__u_classifier__DOT__valid = 0U;
        if ((1U & (~ (IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__rst)))) {
            if ((((IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__mac_a_done) 
                  & (IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__mac_b_done)) 
                 & (IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__mac_c_done))) {
                vlSelfRef.full_classifier__DOT__u_classifier__DOT__valid = 1U;
            }
        }
        if (vlSelfRef.full_classifier__DOT__u_classifier__DOT__rst) {
            vlSelfRef.full_classifier__DOT__u_classifier__DOT__class_index = 3U;
        } else if ((((IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__mac_a_done) 
                     & (IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__mac_b_done)) 
                    & (IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__mac_c_done))) {
            vlSelfRef.full_classifier__DOT__u_classifier__DOT__class_index 
                = vlSelfRef.full_classifier__DOT__u_classifier__DOT__biggest;
        }
        vlSelfRef.full_classifier__DOT__valid = vlSelfRef.full_classifier__DOT__u_classifier__DOT__valid;
        vlSelfRef.full_classifier__DOT__class_index 
            = vlSelfRef.full_classifier__DOT__u_classifier__DOT__class_index;
        vlSelfRef.valid = vlSelfRef.full_classifier__DOT__valid;
        vlSelfRef.class_index = vlSelfRef.full_classifier__DOT__class_index;
    }
    if ((0x000000000000000eULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_compare__DOT__biggest 
            = ((VL_GTES_III(16, (IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_compare__DOT__b), (IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_compare__DOT__c))
                 ? 1U : 2U) & (- (IData)((1U & (~ (
                                                   VL_GTES_III(16, (IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_compare__DOT__a), (IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_compare__DOT__b)) 
                                                   & VL_GTES_III(16, (IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_compare__DOT__a), (IData)(vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_compare__DOT__c))))))));
        vlSelfRef.full_classifier__DOT__u_classifier__DOT__biggest 
            = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_compare__DOT__biggest;
    }
    if ((2ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.full_classifier__DOT__u_classifier__DOT__mac_a_done 
            = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__done;
    }
    if ((4ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.full_classifier__DOT__u_classifier__DOT__mac_b_done 
            = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__done;
    }
    if ((8ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.full_classifier__DOT__u_classifier__DOT__mac_c_done 
            = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__done;
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
            VL_FATAL_MT("/home/advait/classical-guitar-string-fret-localisation/fpga/rtl/full_classifier.sv", 1, "", "DIDNOTCONVERGE: Input combinational region did not converge after '--converge-limit' of 10000 tries");
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
            VL_FATAL_MT("/home/advait/classical-guitar-string-fret-localisation/fpga/rtl/full_classifier.sv", 1, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                VL_FATAL_MT("/home/advait/classical-guitar-string-fret-localisation/fpga/rtl/full_classifier.sv", 1, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
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
    if (VL_UNLIKELY(((vlSelfRef.note & 0xf8U)))) {
        Verilated::overWidthError("note");
    }
}
#endif  // VL_DEBUG
