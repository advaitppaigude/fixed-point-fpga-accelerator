// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__parametrised_note_classifier_fsm__DOT__clk__0 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__clk__0 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__clk__0 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__clk__0 
        = vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__flush = 0U;
    vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__flush = 0U;
    vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__flush = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__flush = 0U;
    vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__flush = 0U;
    vlSelfRef.parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__flush = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("/home/advait/classical-guitar-string-fret-localisation/fpga/rtl/parametrised_note_classifier_fsm.sv", 13, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vtop___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vtop___024root___eval_triggers_vec__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers_vec__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtop___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___trigger_anySet__stl\n"); );
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

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vtop___024root___eval_phase__stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vtop___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtop___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vtop___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vtop___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vtop___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtop___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge parametrised_note_classifier_fsm.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge parametrised_note_classifier_fsm.u_mac_a.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge parametrised_note_classifier_fsm.u_mac_b.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(posedge parametrised_note_classifier_fsm.u_mac_c.clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9867861323841650631ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->feature_regs[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2972308008127568066ull);
    }
    for (int __Vi0 = 0; __Vi0 < 24; ++__Vi0) {
        vlSelf->weights[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 15258019614976312503ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->biases[__Vi0] = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 15469516661481283275ull);
    }
    vlSelf->class_index = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3685058656731122562ull);
    vlSelf->valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4944192500720994163ull);
    vlSelf->parametrised_note_classifier_fsm__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6858991325740092788ull);
    vlSelf->parametrised_note_classifier_fsm__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11692051557730937577ull);
    vlSelf->parametrised_note_classifier_fsm__DOT__start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 523348814915147949ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->parametrised_note_classifier_fsm__DOT__feature_regs[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12549209631332527127ull);
    }
    for (int __Vi0 = 0; __Vi0 < 24; ++__Vi0) {
        vlSelf->parametrised_note_classifier_fsm__DOT__weights[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3319598583446231406ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->parametrised_note_classifier_fsm__DOT__biases[__Vi0] = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 12029971482452278978ull);
    }
    vlSelf->parametrised_note_classifier_fsm__DOT__class_index = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5652536078688222614ull);
    vlSelf->parametrised_note_classifier_fsm__DOT__valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16873134232981713729ull);
    vlSelf->parametrised_note_classifier_fsm__DOT__mac_a_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3695916791916290144ull);
    vlSelf->parametrised_note_classifier_fsm__DOT__mac_a_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9632058114163153971ull);
    vlSelf->parametrised_note_classifier_fsm__DOT__mac_a_score = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 1542679368717944239ull);
    vlSelf->parametrised_note_classifier_fsm__DOT__mac_b_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10511888010211608706ull);
    vlSelf->parametrised_note_classifier_fsm__DOT__mac_b_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1969029864484446041ull);
    vlSelf->parametrised_note_classifier_fsm__DOT__mac_b_score = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 1925780482697614546ull);
    vlSelf->parametrised_note_classifier_fsm__DOT__mac_c_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12467649466657610550ull);
    vlSelf->parametrised_note_classifier_fsm__DOT__mac_c_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2369440673020942878ull);
    vlSelf->parametrised_note_classifier_fsm__DOT__mac_c_score = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 12969575690509074826ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->parametrised_note_classifier_fsm__DOT____Vcellinp__u_mac_a__weights[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->parametrised_note_classifier_fsm__DOT____Vcellinp__u_mac_b__weights[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->parametrised_note_classifier_fsm__DOT____Vcellinp__u_mac_c__weights[__Vi0] = 0;
    }
    vlSelf->parametrised_note_classifier_fsm__DOT__biggest = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 868227148142724567ull);
    vlSelf->parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 682889149187443023ull);
    vlSelf->parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4621349944676673132ull);
    vlSelf->parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__flush = 0U;
    ;
    vlSelf->parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6586527784510369019ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__feature_regs[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6217173448532248786ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__weights[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16297596218839713191ull);
    }
    vlSelf->parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__bias = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 14241970932851022992ull);
    vlSelf->parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14786230824877310437ull);
    vlSelf->parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16019667647463863454ull);
    vlSelf->parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__score = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 11257702275542977863ull);
    vlSelf->parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 16821444421364514748ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__captured_feature_regs[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16347460516809031839ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__captured_weights[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 11435137382041674876ull);
    }
    vlSelf->parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__product = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 1674422210723168212ull);
    vlSelf->parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__extended_sum = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 13476019012507651718ull);
    vlSelf->parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__product_reg = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 7533576198639251040ull);
    vlSelf->parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__product_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15275489896396046745ull);
    vlSelf->parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__drain = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 349048528249621954ull);
    vlSelf->parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1714874544810366392ull);
    vlSelf->parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14155282788537700294ull);
    vlSelf->parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__flush = 0U;
    ;
    vlSelf->parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5509732344567849985ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__feature_regs[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17886527213526574078ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__weights[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 1909119583358850777ull);
    }
    vlSelf->parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__bias = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 11617636407546722362ull);
    vlSelf->parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4668504179912743459ull);
    vlSelf->parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13206900219657455195ull);
    vlSelf->parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__score = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 11449226743242948357ull);
    vlSelf->parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 2806638092409166583ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__captured_feature_regs[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13699541865324054414ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__captured_weights[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7580245634730241660ull);
    }
    vlSelf->parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__product = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 13593652085981552199ull);
    vlSelf->parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__extended_sum = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 9370270312559260875ull);
    vlSelf->parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__product_reg = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 9548134325442581660ull);
    vlSelf->parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__product_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12561000680515539190ull);
    vlSelf->parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__drain = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 902246160641101445ull);
    vlSelf->parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7335403909553649236ull);
    vlSelf->parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10016466873988274635ull);
    vlSelf->parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__flush = 0U;
    ;
    vlSelf->parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6259290748408117671ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__feature_regs[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 10846607472320899004ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__weights[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 332308715288603372ull);
    }
    vlSelf->parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__bias = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 5161450912319802176ull);
    vlSelf->parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13822847203679305209ull);
    vlSelf->parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1414520879831183603ull);
    vlSelf->parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__score = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 9653605269419624087ull);
    vlSelf->parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4656921720446120787ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__captured_feature_regs[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 5624430615293151263ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__captured_weights[__Vi0] = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 13488937808329520703ull);
    }
    vlSelf->parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__product = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 2707973532775577390ull);
    vlSelf->parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__extended_sum = VL_SCOPED_RAND_RESET_I(25, __VscopeHash, 3188971403750074219ull);
    vlSelf->parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__product_reg = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 8263927540904934706ull);
    vlSelf->parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__product_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11496657719786269336ull);
    vlSelf->parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__drain = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4062979106879066636ull);
    vlSelf->parametrised_note_classifier_fsm__DOT__u_compare__DOT__a = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 15594320536042571011ull);
    vlSelf->parametrised_note_classifier_fsm__DOT__u_compare__DOT__b = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 14613029522382748936ull);
    vlSelf->parametrised_note_classifier_fsm__DOT__u_compare__DOT__c = VL_SCOPED_RAND_RESET_I(24, __VscopeHash, 1155397223194660118ull);
    vlSelf->parametrised_note_classifier_fsm__DOT__u_compare__DOT__biggest = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1448600643478214422ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__parametrised_note_classifier_fsm__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__parametrised_note_classifier_fsm__DOT__u_mac_a__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__parametrised_note_classifier_fsm__DOT__u_mac_b__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__parametrised_note_classifier_fsm__DOT__u_mac_c__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
