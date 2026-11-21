// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__pipelined_parametrised_multiply_accumulate__DOT__clk__0 
        = vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
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
            VL_FATAL_MT("/home/advait/classical-guitar-string-fret-localisation/fpga/rtl/pipelined_parametrised_multiply_accumulate.sv", 1, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
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

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
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
            = (0x00007fffU & (((0x00004000U & ((IData)(vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__score) 
                                               << 1U)) 
                               | (IData)(vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__score)) 
                              + ((0x00007c00U & ((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__product_reg) 
                                                                >> 9U)))) 
                                                 << 0x0000000aU)) 
                                 | (IData)(vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__product_reg))));
        vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__product 
            = (0x000003ffU & VL_MULS_III(10, (0x000003ffU 
                                              & VL_EXTENDS_II(10,5, vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__captured_feature_regs
                                                              [vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__count])), 
                                         (0x000003ffU 
                                          & VL_EXTENDS_II(10,5, vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__captured_weights
                                                          [vlSelfRef.pipelined_parametrised_multiply_accumulate__DOT__count]))));
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
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge pipelined_parametrised_multiply_accumulate.clk)\n");
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
    vlSelf->flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8361382489806169962ull);
    vlSelf->start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9867861323841650631ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->feature_regs[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2972308008127568066ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->weights[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15258019614976312503ull);
    }
    vlSelf->bias = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 1514089838933587138ull);
    vlSelf->busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6386567572483775230ull);
    vlSelf->done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10296494685231209730ull);
    vlSelf->score = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 7812189054279681266ull);
    vlSelf->pipelined_parametrised_multiply_accumulate__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9070934668894912255ull);
    vlSelf->pipelined_parametrised_multiply_accumulate__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 982964973508979702ull);
    vlSelf->pipelined_parametrised_multiply_accumulate__DOT__flush = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2220375755168990581ull);
    vlSelf->pipelined_parametrised_multiply_accumulate__DOT__start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12931462819310127283ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->pipelined_parametrised_multiply_accumulate__DOT__feature_regs[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1388809014393163206ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->pipelined_parametrised_multiply_accumulate__DOT__weights[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 9816180120975759056ull);
    }
    vlSelf->pipelined_parametrised_multiply_accumulate__DOT__bias = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 15991143668734437067ull);
    vlSelf->pipelined_parametrised_multiply_accumulate__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7026445450195019266ull);
    vlSelf->pipelined_parametrised_multiply_accumulate__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 772902220620119496ull);
    vlSelf->pipelined_parametrised_multiply_accumulate__DOT__score = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 13927939806113060955ull);
    vlSelf->pipelined_parametrised_multiply_accumulate__DOT__count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6253411244152553065ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->pipelined_parametrised_multiply_accumulate__DOT__captured_feature_regs[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 14172242077979825655ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->pipelined_parametrised_multiply_accumulate__DOT__captured_weights[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16989699324355757698ull);
    }
    vlSelf->pipelined_parametrised_multiply_accumulate__DOT__product = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4085412508619551095ull);
    vlSelf->pipelined_parametrised_multiply_accumulate__DOT__extended_sum = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 7617582701803177009ull);
    vlSelf->pipelined_parametrised_multiply_accumulate__DOT__product_reg = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 305707486694067268ull);
    vlSelf->pipelined_parametrised_multiply_accumulate__DOT__product_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 503907005645550909ull);
    vlSelf->pipelined_parametrised_multiply_accumulate__DOT__drain = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3130125912852606286ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__pipelined_parametrised_multiply_accumulate__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
