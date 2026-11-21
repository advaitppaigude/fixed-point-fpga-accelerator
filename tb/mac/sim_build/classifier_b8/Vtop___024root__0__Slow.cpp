// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__b8_f4_fsm_v1_pipelined__DOT__clk__0 
        = vlSelfRef.b8_f4_fsm_v1_pipelined__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__b8_f4_fsm_v1_pipelined__DOT__u_mac_a__DOT__clk__0 
        = vlSelfRef.b8_f4_fsm_v1_pipelined__DOT__u_mac_a__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__b8_f4_fsm_v1_pipelined__DOT__u_mac_b__DOT__clk__0 
        = vlSelfRef.b8_f4_fsm_v1_pipelined__DOT__u_mac_b__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__b8_f4_fsm_v1_pipelined__DOT__u_mac_c__DOT__clk__0 
        = vlSelfRef.b8_f4_fsm_v1_pipelined__DOT__u_mac_c__DOT__clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.b8_f4_fsm_v1_pipelined__DOT__u_mac_a__DOT__flush = 0U;
    vlSelfRef.b8_f4_fsm_v1_pipelined__DOT__u_mac_b__DOT__flush = 0U;
    vlSelfRef.b8_f4_fsm_v1_pipelined__DOT__u_mac_c__DOT__flush = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.b8_f4_fsm_v1_pipelined__DOT__u_mac_a__DOT__flush = 0U;
    vlSelfRef.b8_f4_fsm_v1_pipelined__DOT__u_mac_b__DOT__flush = 0U;
    vlSelfRef.b8_f4_fsm_v1_pipelined__DOT__u_mac_c__DOT__flush = 0U;
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
            VL_FATAL_MT("/home/advait/classical-guitar-string-fret-localisation/fpga/rtl/b8_f4_fsm_v1_pipelined.sv", 13, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
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
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge b8_f4_fsm_v1_pipelined.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge b8_f4_fsm_v1_pipelined.u_mac_a.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge b8_f4_fsm_v1_pipelined.u_mac_b.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(posedge b8_f4_fsm_v1_pipelined.u_mac_c.clk)\n");
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
        vlSelf->feature_regs[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2972308008127568066ull);
    }
    for (int __Vi0 = 0; __Vi0 < 24; ++__Vi0) {
        vlSelf->weights[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15258019614976312503ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->biases[__Vi0] = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 15469516661481283275ull);
    }
    vlSelf->class_index = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3685058656731122562ull);
    vlSelf->valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4944192500720994163ull);
    vlSelf->b8_f4_fsm_v1_pipelined__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6643107526346929744ull);
    vlSelf->b8_f4_fsm_v1_pipelined__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10344645479190069385ull);
    vlSelf->b8_f4_fsm_v1_pipelined__DOT__start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11901737895694168550ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->b8_f4_fsm_v1_pipelined__DOT__feature_regs[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13387858592194634342ull);
    }
    for (int __Vi0 = 0; __Vi0 < 24; ++__Vi0) {
        vlSelf->b8_f4_fsm_v1_pipelined__DOT__weights[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14618480659042554122ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->b8_f4_fsm_v1_pipelined__DOT__biases[__Vi0] = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 9442360234466654239ull);
    }
    vlSelf->b8_f4_fsm_v1_pipelined__DOT__class_index = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2074661517038940797ull);
    vlSelf->b8_f4_fsm_v1_pipelined__DOT__valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16607213495778768861ull);
    vlSelf->b8_f4_fsm_v1_pipelined__DOT__mac_a_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7488638193277487733ull);
    vlSelf->b8_f4_fsm_v1_pipelined__DOT__mac_a_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6067591257674064265ull);
    vlSelf->b8_f4_fsm_v1_pipelined__DOT__mac_a_score = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 17493093067627429727ull);
    vlSelf->b8_f4_fsm_v1_pipelined__DOT__mac_b_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5341838684471484667ull);
    vlSelf->b8_f4_fsm_v1_pipelined__DOT__mac_b_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11325191454598589010ull);
    vlSelf->b8_f4_fsm_v1_pipelined__DOT__mac_b_score = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 15970806522855045286ull);
    vlSelf->b8_f4_fsm_v1_pipelined__DOT__mac_c_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3284870256573566084ull);
    vlSelf->b8_f4_fsm_v1_pipelined__DOT__mac_c_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14744533170202154222ull);
    vlSelf->b8_f4_fsm_v1_pipelined__DOT__mac_c_score = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 15616084420120732852ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->b8_f4_fsm_v1_pipelined__DOT____Vcellinp__u_mac_a__weights[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->b8_f4_fsm_v1_pipelined__DOT____Vcellinp__u_mac_b__weights[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->b8_f4_fsm_v1_pipelined__DOT____Vcellinp__u_mac_c__weights[__Vi0] = 0;
    }
    vlSelf->b8_f4_fsm_v1_pipelined__DOT__biggest = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11109395959664402952ull);
    vlSelf->b8_f4_fsm_v1_pipelined__DOT__u_mac_a__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9535577818081117513ull);
    vlSelf->b8_f4_fsm_v1_pipelined__DOT__u_mac_a__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3374513441029419031ull);
    vlSelf->b8_f4_fsm_v1_pipelined__DOT__u_mac_a__DOT__flush = 0U;
    ;
    vlSelf->b8_f4_fsm_v1_pipelined__DOT__u_mac_a__DOT__start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12298237713375049066ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->b8_f4_fsm_v1_pipelined__DOT__u_mac_a__DOT__feature_regs[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7047891462151245742ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->b8_f4_fsm_v1_pipelined__DOT__u_mac_a__DOT__weights[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16904157497473310364ull);
    }
    vlSelf->b8_f4_fsm_v1_pipelined__DOT__u_mac_a__DOT__bias = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 4632729747372114513ull);
    vlSelf->b8_f4_fsm_v1_pipelined__DOT__u_mac_a__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4859160990583612734ull);
    vlSelf->b8_f4_fsm_v1_pipelined__DOT__u_mac_a__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7961827356673809545ull);
    vlSelf->b8_f4_fsm_v1_pipelined__DOT__u_mac_a__DOT__score = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 502955959455429506ull);
    vlSelf->b8_f4_fsm_v1_pipelined__DOT__u_mac_a__DOT__count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6754091290550482513ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->b8_f4_fsm_v1_pipelined__DOT__u_mac_a__DOT__captured_feature_regs[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6856537586094580313ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->b8_f4_fsm_v1_pipelined__DOT__u_mac_a__DOT__captured_weights[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7202013648077954127ull);
    }
    vlSelf->b8_f4_fsm_v1_pipelined__DOT__u_mac_a__DOT__product = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5626667098386128872ull);
    vlSelf->b8_f4_fsm_v1_pipelined__DOT__u_mac_a__DOT__extended_sum = VL_SCOPED_RAND_RESET_I(21, __VscopeHash, 8377760384024496611ull);
    vlSelf->b8_f4_fsm_v1_pipelined__DOT__u_mac_a__DOT__product_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17307686238707776750ull);
    vlSelf->b8_f4_fsm_v1_pipelined__DOT__u_mac_a__DOT__product_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7195587995423878783ull);
    vlSelf->b8_f4_fsm_v1_pipelined__DOT__u_mac_a__DOT__drain = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5205906593686097887ull);
    vlSelf->b8_f4_fsm_v1_pipelined__DOT__u_mac_b__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1863594341420267037ull);
    vlSelf->b8_f4_fsm_v1_pipelined__DOT__u_mac_b__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17142583720556477513ull);
    vlSelf->b8_f4_fsm_v1_pipelined__DOT__u_mac_b__DOT__flush = 0U;
    ;
    vlSelf->b8_f4_fsm_v1_pipelined__DOT__u_mac_b__DOT__start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12796525249604962567ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->b8_f4_fsm_v1_pipelined__DOT__u_mac_b__DOT__feature_regs[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7070844605003606520ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->b8_f4_fsm_v1_pipelined__DOT__u_mac_b__DOT__weights[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15351546069907960685ull);
    }
    vlSelf->b8_f4_fsm_v1_pipelined__DOT__u_mac_b__DOT__bias = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 18237400584891476ull);
    vlSelf->b8_f4_fsm_v1_pipelined__DOT__u_mac_b__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8732483009093112280ull);
    vlSelf->b8_f4_fsm_v1_pipelined__DOT__u_mac_b__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16380762098897213678ull);
    vlSelf->b8_f4_fsm_v1_pipelined__DOT__u_mac_b__DOT__score = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 6650642666682862554ull);
    vlSelf->b8_f4_fsm_v1_pipelined__DOT__u_mac_b__DOT__count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 10028532156611753502ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->b8_f4_fsm_v1_pipelined__DOT__u_mac_b__DOT__captured_feature_regs[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 336023356579356488ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->b8_f4_fsm_v1_pipelined__DOT__u_mac_b__DOT__captured_weights[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16929614269434663601ull);
    }
    vlSelf->b8_f4_fsm_v1_pipelined__DOT__u_mac_b__DOT__product = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18262527509907307374ull);
    vlSelf->b8_f4_fsm_v1_pipelined__DOT__u_mac_b__DOT__extended_sum = VL_SCOPED_RAND_RESET_I(21, __VscopeHash, 15622577347857598325ull);
    vlSelf->b8_f4_fsm_v1_pipelined__DOT__u_mac_b__DOT__product_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9740647996690836632ull);
    vlSelf->b8_f4_fsm_v1_pipelined__DOT__u_mac_b__DOT__product_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12224834685469418656ull);
    vlSelf->b8_f4_fsm_v1_pipelined__DOT__u_mac_b__DOT__drain = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11561068574828368842ull);
    vlSelf->b8_f4_fsm_v1_pipelined__DOT__u_mac_c__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7054420246703804671ull);
    vlSelf->b8_f4_fsm_v1_pipelined__DOT__u_mac_c__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13607692382789726402ull);
    vlSelf->b8_f4_fsm_v1_pipelined__DOT__u_mac_c__DOT__flush = 0U;
    ;
    vlSelf->b8_f4_fsm_v1_pipelined__DOT__u_mac_c__DOT__start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16420184010554748554ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->b8_f4_fsm_v1_pipelined__DOT__u_mac_c__DOT__feature_regs[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2970575855660752893ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->b8_f4_fsm_v1_pipelined__DOT__u_mac_c__DOT__weights[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17242709810943916191ull);
    }
    vlSelf->b8_f4_fsm_v1_pipelined__DOT__u_mac_c__DOT__bias = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 12738904022515859092ull);
    vlSelf->b8_f4_fsm_v1_pipelined__DOT__u_mac_c__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11028736683343045474ull);
    vlSelf->b8_f4_fsm_v1_pipelined__DOT__u_mac_c__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707114310964360698ull);
    vlSelf->b8_f4_fsm_v1_pipelined__DOT__u_mac_c__DOT__score = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 5590157363710314869ull);
    vlSelf->b8_f4_fsm_v1_pipelined__DOT__u_mac_c__DOT__count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3605475145603199160ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->b8_f4_fsm_v1_pipelined__DOT__u_mac_c__DOT__captured_feature_regs[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16106503966146519663ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->b8_f4_fsm_v1_pipelined__DOT__u_mac_c__DOT__captured_weights[__Vi0] = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8956382925361734582ull);
    }
    vlSelf->b8_f4_fsm_v1_pipelined__DOT__u_mac_c__DOT__product = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 735799363138375981ull);
    vlSelf->b8_f4_fsm_v1_pipelined__DOT__u_mac_c__DOT__extended_sum = VL_SCOPED_RAND_RESET_I(21, __VscopeHash, 9015881250515478322ull);
    vlSelf->b8_f4_fsm_v1_pipelined__DOT__u_mac_c__DOT__product_reg = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18038725122212954988ull);
    vlSelf->b8_f4_fsm_v1_pipelined__DOT__u_mac_c__DOT__product_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16141894949909939903ull);
    vlSelf->b8_f4_fsm_v1_pipelined__DOT__u_mac_c__DOT__drain = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4140614220405858334ull);
    vlSelf->b8_f4_fsm_v1_pipelined__DOT__u_compare__DOT__a = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 7416785927340026855ull);
    vlSelf->b8_f4_fsm_v1_pipelined__DOT__u_compare__DOT__b = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 292338511460036720ull);
    vlSelf->b8_f4_fsm_v1_pipelined__DOT__u_compare__DOT__c = VL_SCOPED_RAND_RESET_I(20, __VscopeHash, 5185991694439138742ull);
    vlSelf->b8_f4_fsm_v1_pipelined__DOT__u_compare__DOT__biggest = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6681529668558912471ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__b8_f4_fsm_v1_pipelined__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__b8_f4_fsm_v1_pipelined__DOT__u_mac_a__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__b8_f4_fsm_v1_pipelined__DOT__u_mac_b__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__b8_f4_fsm_v1_pipelined__DOT__u_mac_c__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
