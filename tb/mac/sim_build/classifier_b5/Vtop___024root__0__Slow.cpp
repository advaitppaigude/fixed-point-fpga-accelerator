// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__b5_f2_fsm_v1_pipelined__DOT__clk__0 
        = vlSelfRef.b5_f2_fsm_v1_pipelined__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__b5_f2_fsm_v1_pipelined__DOT__u_mac_a__DOT__clk__0 
        = vlSelfRef.b5_f2_fsm_v1_pipelined__DOT__u_mac_a__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__b5_f2_fsm_v1_pipelined__DOT__u_mac_b__DOT__clk__0 
        = vlSelfRef.b5_f2_fsm_v1_pipelined__DOT__u_mac_b__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__b5_f2_fsm_v1_pipelined__DOT__u_mac_c__DOT__clk__0 
        = vlSelfRef.b5_f2_fsm_v1_pipelined__DOT__u_mac_c__DOT__clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.b5_f2_fsm_v1_pipelined__DOT__u_mac_a__DOT__flush = 0U;
    vlSelfRef.b5_f2_fsm_v1_pipelined__DOT__u_mac_b__DOT__flush = 0U;
    vlSelfRef.b5_f2_fsm_v1_pipelined__DOT__u_mac_c__DOT__flush = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.b5_f2_fsm_v1_pipelined__DOT__u_mac_a__DOT__flush = 0U;
    vlSelfRef.b5_f2_fsm_v1_pipelined__DOT__u_mac_b__DOT__flush = 0U;
    vlSelfRef.b5_f2_fsm_v1_pipelined__DOT__u_mac_c__DOT__flush = 0U;
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
            VL_FATAL_MT("/home/advait/classical-guitar-string-fret-localisation/fpga/rtl/b5_f2_fsm_v1_pipelined.sv", 13, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
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
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge b5_f2_fsm_v1_pipelined.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge b5_f2_fsm_v1_pipelined.u_mac_a.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge b5_f2_fsm_v1_pipelined.u_mac_b.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(posedge b5_f2_fsm_v1_pipelined.u_mac_c.clk)\n");
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
        vlSelf->feature_regs[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2972308008127568066ull);
    }
    for (int __Vi0 = 0; __Vi0 < 24; ++__Vi0) {
        vlSelf->weights[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15258019614976312503ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->biases[__Vi0] = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 15469516661481283275ull);
    }
    vlSelf->class_index = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3685058656731122562ull);
    vlSelf->valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4944192500720994163ull);
    vlSelf->b5_f2_fsm_v1_pipelined__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3744361483445131814ull);
    vlSelf->b5_f2_fsm_v1_pipelined__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8943565055529241259ull);
    vlSelf->b5_f2_fsm_v1_pipelined__DOT__start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7612766176051464548ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->b5_f2_fsm_v1_pipelined__DOT__feature_regs[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1505066269395132528ull);
    }
    for (int __Vi0 = 0; __Vi0 < 24; ++__Vi0) {
        vlSelf->b5_f2_fsm_v1_pipelined__DOT__weights[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4818878427400416645ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->b5_f2_fsm_v1_pipelined__DOT__biases[__Vi0] = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 12100685935354077961ull);
    }
    vlSelf->b5_f2_fsm_v1_pipelined__DOT__class_index = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13550469346089526461ull);
    vlSelf->b5_f2_fsm_v1_pipelined__DOT__valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9376878885017706263ull);
    vlSelf->b5_f2_fsm_v1_pipelined__DOT__mac_a_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8988941196539415977ull);
    vlSelf->b5_f2_fsm_v1_pipelined__DOT__mac_a_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6931890065545510617ull);
    vlSelf->b5_f2_fsm_v1_pipelined__DOT__mac_a_score = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 18367412291636030335ull);
    vlSelf->b5_f2_fsm_v1_pipelined__DOT__mac_b_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9197158106404325687ull);
    vlSelf->b5_f2_fsm_v1_pipelined__DOT__mac_b_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3096195406732631694ull);
    vlSelf->b5_f2_fsm_v1_pipelined__DOT__mac_b_score = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 9239133661757574631ull);
    vlSelf->b5_f2_fsm_v1_pipelined__DOT__mac_c_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6678475190322620514ull);
    vlSelf->b5_f2_fsm_v1_pipelined__DOT__mac_c_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12048750437530689103ull);
    vlSelf->b5_f2_fsm_v1_pipelined__DOT__mac_c_score = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 15684437752186873520ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->b5_f2_fsm_v1_pipelined__DOT____Vcellinp__u_mac_a__weights[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->b5_f2_fsm_v1_pipelined__DOT____Vcellinp__u_mac_b__weights[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->b5_f2_fsm_v1_pipelined__DOT____Vcellinp__u_mac_c__weights[__Vi0] = 0;
    }
    vlSelf->b5_f2_fsm_v1_pipelined__DOT__biggest = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 14716282522540496299ull);
    vlSelf->b5_f2_fsm_v1_pipelined__DOT__u_mac_a__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12593497205864639168ull);
    vlSelf->b5_f2_fsm_v1_pipelined__DOT__u_mac_a__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15009031505564910453ull);
    vlSelf->b5_f2_fsm_v1_pipelined__DOT__u_mac_a__DOT__flush = 0U;
    ;
    vlSelf->b5_f2_fsm_v1_pipelined__DOT__u_mac_a__DOT__start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2857653453650707529ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->b5_f2_fsm_v1_pipelined__DOT__u_mac_a__DOT__feature_regs[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13959526659566389740ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->b5_f2_fsm_v1_pipelined__DOT__u_mac_a__DOT__weights[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9903321685976619786ull);
    }
    vlSelf->b5_f2_fsm_v1_pipelined__DOT__u_mac_a__DOT__bias = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 7781849981667217497ull);
    vlSelf->b5_f2_fsm_v1_pipelined__DOT__u_mac_a__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 423837792509176749ull);
    vlSelf->b5_f2_fsm_v1_pipelined__DOT__u_mac_a__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1563575077447365106ull);
    vlSelf->b5_f2_fsm_v1_pipelined__DOT__u_mac_a__DOT__score = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 11263694201354553526ull);
    vlSelf->b5_f2_fsm_v1_pipelined__DOT__u_mac_a__DOT__count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 4342794904227596506ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->b5_f2_fsm_v1_pipelined__DOT__u_mac_a__DOT__captured_feature_regs[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10930132647955148936ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->b5_f2_fsm_v1_pipelined__DOT__u_mac_a__DOT__captured_weights[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9116995958324513535ull);
    }
    vlSelf->b5_f2_fsm_v1_pipelined__DOT__u_mac_a__DOT__product = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 258178355735476662ull);
    vlSelf->b5_f2_fsm_v1_pipelined__DOT__u_mac_a__DOT__extended_sum = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 4739325708496584835ull);
    vlSelf->b5_f2_fsm_v1_pipelined__DOT__u_mac_a__DOT__product_reg = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2608081979682447092ull);
    vlSelf->b5_f2_fsm_v1_pipelined__DOT__u_mac_a__DOT__product_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14922916868275241216ull);
    vlSelf->b5_f2_fsm_v1_pipelined__DOT__u_mac_a__DOT__drain = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11252402008883350190ull);
    vlSelf->b5_f2_fsm_v1_pipelined__DOT__u_mac_b__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6445815476129317471ull);
    vlSelf->b5_f2_fsm_v1_pipelined__DOT__u_mac_b__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6909984089803508577ull);
    vlSelf->b5_f2_fsm_v1_pipelined__DOT__u_mac_b__DOT__flush = 0U;
    ;
    vlSelf->b5_f2_fsm_v1_pipelined__DOT__u_mac_b__DOT__start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8716966249329011804ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->b5_f2_fsm_v1_pipelined__DOT__u_mac_b__DOT__feature_regs[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16115560567572352206ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->b5_f2_fsm_v1_pipelined__DOT__u_mac_b__DOT__weights[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 6622115431394125310ull);
    }
    vlSelf->b5_f2_fsm_v1_pipelined__DOT__u_mac_b__DOT__bias = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 1768864567801986782ull);
    vlSelf->b5_f2_fsm_v1_pipelined__DOT__u_mac_b__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5590181098389940430ull);
    vlSelf->b5_f2_fsm_v1_pipelined__DOT__u_mac_b__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12393517978478156196ull);
    vlSelf->b5_f2_fsm_v1_pipelined__DOT__u_mac_b__DOT__score = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 6965860753345744899ull);
    vlSelf->b5_f2_fsm_v1_pipelined__DOT__u_mac_b__DOT__count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14808031761547470319ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->b5_f2_fsm_v1_pipelined__DOT__u_mac_b__DOT__captured_feature_regs[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5801177877245430479ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->b5_f2_fsm_v1_pipelined__DOT__u_mac_b__DOT__captured_weights[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16905416631137435848ull);
    }
    vlSelf->b5_f2_fsm_v1_pipelined__DOT__u_mac_b__DOT__product = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 17038810168594817414ull);
    vlSelf->b5_f2_fsm_v1_pipelined__DOT__u_mac_b__DOT__extended_sum = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 16281705864249061538ull);
    vlSelf->b5_f2_fsm_v1_pipelined__DOT__u_mac_b__DOT__product_reg = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 14877269667509559360ull);
    vlSelf->b5_f2_fsm_v1_pipelined__DOT__u_mac_b__DOT__product_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5102739890501954449ull);
    vlSelf->b5_f2_fsm_v1_pipelined__DOT__u_mac_b__DOT__drain = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16520253469771449959ull);
    vlSelf->b5_f2_fsm_v1_pipelined__DOT__u_mac_c__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5588841883165729026ull);
    vlSelf->b5_f2_fsm_v1_pipelined__DOT__u_mac_c__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16144231233923113122ull);
    vlSelf->b5_f2_fsm_v1_pipelined__DOT__u_mac_c__DOT__flush = 0U;
    ;
    vlSelf->b5_f2_fsm_v1_pipelined__DOT__u_mac_c__DOT__start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3010181220249771303ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->b5_f2_fsm_v1_pipelined__DOT__u_mac_c__DOT__feature_regs[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5134381356017185340ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->b5_f2_fsm_v1_pipelined__DOT__u_mac_c__DOT__weights[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14141382985910780427ull);
    }
    vlSelf->b5_f2_fsm_v1_pipelined__DOT__u_mac_c__DOT__bias = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 1144285121435605798ull);
    vlSelf->b5_f2_fsm_v1_pipelined__DOT__u_mac_c__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4716777909232965319ull);
    vlSelf->b5_f2_fsm_v1_pipelined__DOT__u_mac_c__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14106771412078990021ull);
    vlSelf->b5_f2_fsm_v1_pipelined__DOT__u_mac_c__DOT__score = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 7743868900322805799ull);
    vlSelf->b5_f2_fsm_v1_pipelined__DOT__u_mac_c__DOT__count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6557485508901580036ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->b5_f2_fsm_v1_pipelined__DOT__u_mac_c__DOT__captured_feature_regs[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12392424943188725967ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->b5_f2_fsm_v1_pipelined__DOT__u_mac_c__DOT__captured_weights[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14651919376784803812ull);
    }
    vlSelf->b5_f2_fsm_v1_pipelined__DOT__u_mac_c__DOT__product = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 3251726554170066678ull);
    vlSelf->b5_f2_fsm_v1_pipelined__DOT__u_mac_c__DOT__extended_sum = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 4594667436982604612ull);
    vlSelf->b5_f2_fsm_v1_pipelined__DOT__u_mac_c__DOT__product_reg = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 7443463761905930125ull);
    vlSelf->b5_f2_fsm_v1_pipelined__DOT__u_mac_c__DOT__product_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11551756864346652314ull);
    vlSelf->b5_f2_fsm_v1_pipelined__DOT__u_mac_c__DOT__drain = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5120730221532529901ull);
    vlSelf->b5_f2_fsm_v1_pipelined__DOT__u_compare__DOT__a = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 14302145712624847459ull);
    vlSelf->b5_f2_fsm_v1_pipelined__DOT__u_compare__DOT__b = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 543371352241534235ull);
    vlSelf->b5_f2_fsm_v1_pipelined__DOT__u_compare__DOT__c = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 15921381819361113911ull);
    vlSelf->b5_f2_fsm_v1_pipelined__DOT__u_compare__DOT__biggest = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15833801047624027190ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__b5_f2_fsm_v1_pipelined__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__b5_f2_fsm_v1_pipelined__DOT__u_mac_a__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__b5_f2_fsm_v1_pipelined__DOT__u_mac_b__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__b5_f2_fsm_v1_pipelined__DOT__u_mac_c__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
