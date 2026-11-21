// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__b6_f3_fsm_v1_pipelined__DOT__clk__0 
        = vlSelfRef.b6_f3_fsm_v1_pipelined__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__b6_f3_fsm_v1_pipelined__DOT__u_mac_a__DOT__clk__0 
        = vlSelfRef.b6_f3_fsm_v1_pipelined__DOT__u_mac_a__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__b6_f3_fsm_v1_pipelined__DOT__u_mac_b__DOT__clk__0 
        = vlSelfRef.b6_f3_fsm_v1_pipelined__DOT__u_mac_b__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__b6_f3_fsm_v1_pipelined__DOT__u_mac_c__DOT__clk__0 
        = vlSelfRef.b6_f3_fsm_v1_pipelined__DOT__u_mac_c__DOT__clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.b6_f3_fsm_v1_pipelined__DOT__u_mac_a__DOT__flush = 0U;
    vlSelfRef.b6_f3_fsm_v1_pipelined__DOT__u_mac_b__DOT__flush = 0U;
    vlSelfRef.b6_f3_fsm_v1_pipelined__DOT__u_mac_c__DOT__flush = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.b6_f3_fsm_v1_pipelined__DOT__u_mac_a__DOT__flush = 0U;
    vlSelfRef.b6_f3_fsm_v1_pipelined__DOT__u_mac_b__DOT__flush = 0U;
    vlSelfRef.b6_f3_fsm_v1_pipelined__DOT__u_mac_c__DOT__flush = 0U;
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
            VL_FATAL_MT("/home/advait/classical-guitar-string-fret-localisation/fpga/rtl/b6_f3_fsm_v1_pipelined.sv", 13, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
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
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge b6_f3_fsm_v1_pipelined.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge b6_f3_fsm_v1_pipelined.u_mac_a.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge b6_f3_fsm_v1_pipelined.u_mac_b.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(posedge b6_f3_fsm_v1_pipelined.u_mac_c.clk)\n");
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
        vlSelf->feature_regs[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 2972308008127568066ull);
    }
    for (int __Vi0 = 0; __Vi0 < 24; ++__Vi0) {
        vlSelf->weights[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 15258019614976312503ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->biases[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15469516661481283275ull);
    }
    vlSelf->class_index = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3685058656731122562ull);
    vlSelf->valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4944192500720994163ull);
    vlSelf->b6_f3_fsm_v1_pipelined__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16891846955847814488ull);
    vlSelf->b6_f3_fsm_v1_pipelined__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5285772395518564608ull);
    vlSelf->b6_f3_fsm_v1_pipelined__DOT__start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16820304866326938721ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->b6_f3_fsm_v1_pipelined__DOT__feature_regs[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 9538362974907958491ull);
    }
    for (int __Vi0 = 0; __Vi0 < 24; ++__Vi0) {
        vlSelf->b6_f3_fsm_v1_pipelined__DOT__weights[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5224898672418829680ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->b6_f3_fsm_v1_pipelined__DOT__biases[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7237087789153650047ull);
    }
    vlSelf->b6_f3_fsm_v1_pipelined__DOT__class_index = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7606809028387867170ull);
    vlSelf->b6_f3_fsm_v1_pipelined__DOT__valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1071468215674607972ull);
    vlSelf->b6_f3_fsm_v1_pipelined__DOT__mac_a_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15430447967634774550ull);
    vlSelf->b6_f3_fsm_v1_pipelined__DOT__mac_a_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 183578876723342088ull);
    vlSelf->b6_f3_fsm_v1_pipelined__DOT__mac_a_score = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12381591830312781359ull);
    vlSelf->b6_f3_fsm_v1_pipelined__DOT__mac_b_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10638312916368549710ull);
    vlSelf->b6_f3_fsm_v1_pipelined__DOT__mac_b_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7761600143949111642ull);
    vlSelf->b6_f3_fsm_v1_pipelined__DOT__mac_b_score = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11335633788404220255ull);
    vlSelf->b6_f3_fsm_v1_pipelined__DOT__mac_c_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6965344464522989874ull);
    vlSelf->b6_f3_fsm_v1_pipelined__DOT__mac_c_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10278861199265693764ull);
    vlSelf->b6_f3_fsm_v1_pipelined__DOT__mac_c_score = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10642635763642665217ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->b6_f3_fsm_v1_pipelined__DOT____Vcellinp__u_mac_a__weights[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->b6_f3_fsm_v1_pipelined__DOT____Vcellinp__u_mac_b__weights[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->b6_f3_fsm_v1_pipelined__DOT____Vcellinp__u_mac_c__weights[__Vi0] = 0;
    }
    vlSelf->b6_f3_fsm_v1_pipelined__DOT__biggest = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 524471400651404650ull);
    vlSelf->b6_f3_fsm_v1_pipelined__DOT__u_mac_a__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18338182451859553881ull);
    vlSelf->b6_f3_fsm_v1_pipelined__DOT__u_mac_a__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 789334371981050736ull);
    vlSelf->b6_f3_fsm_v1_pipelined__DOT__u_mac_a__DOT__flush = 0U;
    ;
    vlSelf->b6_f3_fsm_v1_pipelined__DOT__u_mac_a__DOT__start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 976299306140914485ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->b6_f3_fsm_v1_pipelined__DOT__u_mac_a__DOT__feature_regs[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4151933525600938835ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->b6_f3_fsm_v1_pipelined__DOT__u_mac_a__DOT__weights[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5136006448320710363ull);
    }
    vlSelf->b6_f3_fsm_v1_pipelined__DOT__u_mac_a__DOT__bias = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15326660235398197662ull);
    vlSelf->b6_f3_fsm_v1_pipelined__DOT__u_mac_a__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2128585477053167143ull);
    vlSelf->b6_f3_fsm_v1_pipelined__DOT__u_mac_a__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5230783570860073800ull);
    vlSelf->b6_f3_fsm_v1_pipelined__DOT__u_mac_a__DOT__score = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3367710616414230412ull);
    vlSelf->b6_f3_fsm_v1_pipelined__DOT__u_mac_a__DOT__count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 15306529061973676865ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->b6_f3_fsm_v1_pipelined__DOT__u_mac_a__DOT__captured_feature_regs[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 11650732918588591318ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->b6_f3_fsm_v1_pipelined__DOT__u_mac_a__DOT__captured_weights[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 18310268288097437737ull);
    }
    vlSelf->b6_f3_fsm_v1_pipelined__DOT__u_mac_a__DOT__product = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 14806619738319462180ull);
    vlSelf->b6_f3_fsm_v1_pipelined__DOT__u_mac_a__DOT__extended_sum = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 6090098684498548231ull);
    vlSelf->b6_f3_fsm_v1_pipelined__DOT__u_mac_a__DOT__product_reg = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 6260002375484130442ull);
    vlSelf->b6_f3_fsm_v1_pipelined__DOT__u_mac_a__DOT__product_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14853746074195092451ull);
    vlSelf->b6_f3_fsm_v1_pipelined__DOT__u_mac_a__DOT__drain = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13418517436056749984ull);
    vlSelf->b6_f3_fsm_v1_pipelined__DOT__u_mac_b__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3938097524250210380ull);
    vlSelf->b6_f3_fsm_v1_pipelined__DOT__u_mac_b__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13737085818670707677ull);
    vlSelf->b6_f3_fsm_v1_pipelined__DOT__u_mac_b__DOT__flush = 0U;
    ;
    vlSelf->b6_f3_fsm_v1_pipelined__DOT__u_mac_b__DOT__start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1316099410202545464ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->b6_f3_fsm_v1_pipelined__DOT__u_mac_b__DOT__feature_regs[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7654877106941555421ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->b6_f3_fsm_v1_pipelined__DOT__u_mac_b__DOT__weights[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6282414051818415517ull);
    }
    vlSelf->b6_f3_fsm_v1_pipelined__DOT__u_mac_b__DOT__bias = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9525800973080566119ull);
    vlSelf->b6_f3_fsm_v1_pipelined__DOT__u_mac_b__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13749535030669712626ull);
    vlSelf->b6_f3_fsm_v1_pipelined__DOT__u_mac_b__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16902848051522168452ull);
    vlSelf->b6_f3_fsm_v1_pipelined__DOT__u_mac_b__DOT__score = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1518800683760677345ull);
    vlSelf->b6_f3_fsm_v1_pipelined__DOT__u_mac_b__DOT__count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7145794877253917235ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->b6_f3_fsm_v1_pipelined__DOT__u_mac_b__DOT__captured_feature_regs[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 5213796764877501764ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->b6_f3_fsm_v1_pipelined__DOT__u_mac_b__DOT__captured_weights[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 13704159079272728054ull);
    }
    vlSelf->b6_f3_fsm_v1_pipelined__DOT__u_mac_b__DOT__product = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 3624080238041103435ull);
    vlSelf->b6_f3_fsm_v1_pipelined__DOT__u_mac_b__DOT__extended_sum = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 2354482150058936852ull);
    vlSelf->b6_f3_fsm_v1_pipelined__DOT__u_mac_b__DOT__product_reg = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 11906101563653152936ull);
    vlSelf->b6_f3_fsm_v1_pipelined__DOT__u_mac_b__DOT__product_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9030800877085772336ull);
    vlSelf->b6_f3_fsm_v1_pipelined__DOT__u_mac_b__DOT__drain = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 668005724166693088ull);
    vlSelf->b6_f3_fsm_v1_pipelined__DOT__u_mac_c__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 187543919622463093ull);
    vlSelf->b6_f3_fsm_v1_pipelined__DOT__u_mac_c__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14003432614377415017ull);
    vlSelf->b6_f3_fsm_v1_pipelined__DOT__u_mac_c__DOT__flush = 0U;
    ;
    vlSelf->b6_f3_fsm_v1_pipelined__DOT__u_mac_c__DOT__start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9981422335643695433ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->b6_f3_fsm_v1_pipelined__DOT__u_mac_c__DOT__feature_regs[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7877927192153297352ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->b6_f3_fsm_v1_pipelined__DOT__u_mac_c__DOT__weights[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4733742060879570417ull);
    }
    vlSelf->b6_f3_fsm_v1_pipelined__DOT__u_mac_c__DOT__bias = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1356878999759841391ull);
    vlSelf->b6_f3_fsm_v1_pipelined__DOT__u_mac_c__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7530005913888060447ull);
    vlSelf->b6_f3_fsm_v1_pipelined__DOT__u_mac_c__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15131327246643738753ull);
    vlSelf->b6_f3_fsm_v1_pipelined__DOT__u_mac_c__DOT__score = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12599701691667324686ull);
    vlSelf->b6_f3_fsm_v1_pipelined__DOT__u_mac_c__DOT__count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 7924933804719005231ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->b6_f3_fsm_v1_pipelined__DOT__u_mac_c__DOT__captured_feature_regs[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 4716219831021958494ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->b6_f3_fsm_v1_pipelined__DOT__u_mac_c__DOT__captured_weights[__Vi0] = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 10143209735675452363ull);
    }
    vlSelf->b6_f3_fsm_v1_pipelined__DOT__u_mac_c__DOT__product = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 8406597323212437593ull);
    vlSelf->b6_f3_fsm_v1_pipelined__DOT__u_mac_c__DOT__extended_sum = VL_SCOPED_RAND_RESET_I(17, __VscopeHash, 9568091393122608398ull);
    vlSelf->b6_f3_fsm_v1_pipelined__DOT__u_mac_c__DOT__product_reg = VL_SCOPED_RAND_RESET_I(12, __VscopeHash, 5629872729414834255ull);
    vlSelf->b6_f3_fsm_v1_pipelined__DOT__u_mac_c__DOT__product_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4955422981126292694ull);
    vlSelf->b6_f3_fsm_v1_pipelined__DOT__u_mac_c__DOT__drain = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13038167624900488734ull);
    vlSelf->b6_f3_fsm_v1_pipelined__DOT__u_compare__DOT__a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15680615338742793402ull);
    vlSelf->b6_f3_fsm_v1_pipelined__DOT__u_compare__DOT__b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 660438791796277812ull);
    vlSelf->b6_f3_fsm_v1_pipelined__DOT__u_compare__DOT__c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17012583822596537556ull);
    vlSelf->b6_f3_fsm_v1_pipelined__DOT__u_compare__DOT__biggest = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3830919427468426291ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__b6_f3_fsm_v1_pipelined__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__b6_f3_fsm_v1_pipelined__DOT__u_mac_a__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__b6_f3_fsm_v1_pipelined__DOT__u_mac_b__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__b6_f3_fsm_v1_pipelined__DOT__u_mac_c__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
