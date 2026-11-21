// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__full_classifier__DOT__u_classifier__DOT__clk__0 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__clk__0 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__clk__0 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__clk__0 
        = vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_READMEM_N(true, 5, 120, 0, "rom/b6_f3_weights.mem"s
                 ,  &(vlSelfRef.full_classifier__DOT__u_load__DOT__weight_rom)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 14, 15, 0, "rom/b6_f3_biases.mem"s
                 ,  &(vlSelfRef.full_classifier__DOT__u_load__DOT__bias_rom)
                 , 0, ~0ULL);
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__flush = 0U;
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__flush = 0U;
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__flush = 0U;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_READMEM_N(true, 5, 120, 0, "rom/b6_f3_weights.mem"s
                 ,  &(vlSelfRef.full_classifier__DOT__u_load__DOT__weight_rom)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 14, 15, 0, "rom/b6_f3_biases.mem"s
                 ,  &(vlSelfRef.full_classifier__DOT__u_load__DOT__bias_rom)
                 , 0, ~0ULL);
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__flush = 0U;
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__flush = 0U;
    vlSelfRef.full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__flush = 0U;
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
            VL_FATAL_MT("/home/advait/classical-guitar-string-fret-localisation/fpga/rtl/full_classifier.sv", 1, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
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
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge full_classifier.u_classifier.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge full_classifier.u_classifier.u_mac_a.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @(posedge full_classifier.u_classifier.u_mac_b.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @(posedge full_classifier.u_classifier.u_mac_c.clk)\n");
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
    vlSelf->note = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 11872357773436436022ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->features[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2354603054726409950ull);
    }
    vlSelf->class_index = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3685058656731122562ull);
    vlSelf->valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4944192500720994163ull);
    vlSelf->full_classifier__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15900741834355643717ull);
    vlSelf->full_classifier__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11557544837794576268ull);
    vlSelf->full_classifier__DOT__start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17640279384606903111ull);
    vlSelf->full_classifier__DOT__note = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 6036569808009742313ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->full_classifier__DOT__features[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8794711353232975995ull);
    }
    vlSelf->full_classifier__DOT__class_index = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8334638215732918227ull);
    vlSelf->full_classifier__DOT__valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13563913055175233046ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->full_classifier__DOT__weights_a[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8611742894512457402ull);
    }
    vlSelf->full_classifier__DOT__biases_a = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 14802056454288854712ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->full_classifier__DOT__weights_b[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 12417698274280046705ull);
    }
    vlSelf->full_classifier__DOT__biases_b = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 3017873177906454445ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->full_classifier__DOT__weights_c[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17826240085386741539ull);
    }
    vlSelf->full_classifier__DOT__biases_c = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 14123308919231269196ull);
    for (int __Vi0 = 0; __Vi0 < 24; ++__Vi0) {
        vlSelf->full_classifier__DOT__weights[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15076681061939729093ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->full_classifier__DOT__biases[__Vi0] = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 4248405031554453820ull);
    }
    vlSelf->full_classifier__DOT__u_load__DOT__note = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5801913546920164860ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->full_classifier__DOT__u_load__DOT__weights_a[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3543849800049100637ull);
    }
    vlSelf->full_classifier__DOT__u_load__DOT__biases_a = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 9015022734688081013ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->full_classifier__DOT__u_load__DOT__weights_b[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3367356972821880160ull);
    }
    vlSelf->full_classifier__DOT__u_load__DOT__biases_b = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 15644088148080693721ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->full_classifier__DOT__u_load__DOT__weights_c[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5502834528745343775ull);
    }
    vlSelf->full_classifier__DOT__u_load__DOT__biases_c = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 7683101890186130865ull);
    for (int __Vi0 = 0; __Vi0 < 120; ++__Vi0) {
        vlSelf->full_classifier__DOT__u_load__DOT__weight_rom[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 16935545090980805825ull);
    }
    for (int __Vi0 = 0; __Vi0 < 15; ++__Vi0) {
        vlSelf->full_classifier__DOT__u_load__DOT__bias_rom[__Vi0] = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 7426948821891677077ull);
    }
    vlSelf->full_classifier__DOT__u_load__DOT__weight_base = 0;
    vlSelf->full_classifier__DOT__u_load__DOT__bias_base = 0;
    vlSelf->full_classifier__DOT__u_classifier__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15047498952615728314ull);
    vlSelf->full_classifier__DOT__u_classifier__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17863560712532076836ull);
    vlSelf->full_classifier__DOT__u_classifier__DOT__start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11552511312634869187ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->full_classifier__DOT__u_classifier__DOT__feature_regs[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15624875874038262778ull);
    }
    for (int __Vi0 = 0; __Vi0 < 24; ++__Vi0) {
        vlSelf->full_classifier__DOT__u_classifier__DOT__weights[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 17499447540664032554ull);
    }
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->full_classifier__DOT__u_classifier__DOT__biases[__Vi0] = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 4456397109652065107ull);
    }
    vlSelf->full_classifier__DOT__u_classifier__DOT__class_index = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 685702614585911038ull);
    vlSelf->full_classifier__DOT__u_classifier__DOT__valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3795310442453317105ull);
    vlSelf->full_classifier__DOT__u_classifier__DOT__mac_a_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13007036671028333359ull);
    vlSelf->full_classifier__DOT__u_classifier__DOT__mac_a_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13284902898831859050ull);
    vlSelf->full_classifier__DOT__u_classifier__DOT__mac_a_score = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 11178705685623153381ull);
    vlSelf->full_classifier__DOT__u_classifier__DOT__mac_b_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3525152499690583493ull);
    vlSelf->full_classifier__DOT__u_classifier__DOT__mac_b_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14498706632431327229ull);
    vlSelf->full_classifier__DOT__u_classifier__DOT__mac_b_score = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 13474499734630560400ull);
    vlSelf->full_classifier__DOT__u_classifier__DOT__mac_c_busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1454280299490553532ull);
    vlSelf->full_classifier__DOT__u_classifier__DOT__mac_c_done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6164537505568638684ull);
    vlSelf->full_classifier__DOT__u_classifier__DOT__mac_c_score = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 9556933316097556181ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->full_classifier__DOT__u_classifier__DOT____Vcellinp__u_mac_a__weights[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->full_classifier__DOT__u_classifier__DOT____Vcellinp__u_mac_b__weights[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->full_classifier__DOT__u_classifier__DOT____Vcellinp__u_mac_c__weights[__Vi0] = 0;
    }
    vlSelf->full_classifier__DOT__u_classifier__DOT__biggest = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11746625135664069272ull);
    vlSelf->full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2130255587223809361ull);
    vlSelf->full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 83939834971441202ull);
    vlSelf->full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__flush = 0U;
    ;
    vlSelf->full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5833975519545699555ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__feature_regs[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 1203513901145725355ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__weights[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4419105795903287711ull);
    }
    vlSelf->full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__bias = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 11209435980641736949ull);
    vlSelf->full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6630623914852301676ull);
    vlSelf->full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4815650155805412184ull);
    vlSelf->full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__score = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 2469439305712406775ull);
    vlSelf->full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 3944692339469335589ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__captured_feature_regs[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 2520490168537143166ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__captured_weights[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3861974413791424872ull);
    }
    vlSelf->full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__product = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 2843230853557681997ull);
    vlSelf->full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__extended_sum = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 6604694107711573258ull);
    vlSelf->full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__product_reg = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 4741836341718275447ull);
    vlSelf->full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__product_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15312613945866258439ull);
    vlSelf->full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__drain = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7835024178033716506ull);
    vlSelf->full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6352567926862671962ull);
    vlSelf->full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12992399280059717420ull);
    vlSelf->full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__flush = 0U;
    ;
    vlSelf->full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16660830844004971148ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__feature_regs[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 10883542740130754164ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__weights[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 18152590819856751434ull);
    }
    vlSelf->full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__bias = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 5587296553793265766ull);
    vlSelf->full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17443363655297449292ull);
    vlSelf->full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7695335635951027579ull);
    vlSelf->full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__score = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 3812651140057430886ull);
    vlSelf->full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 8126345200930833820ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__captured_feature_regs[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 15938637562818149595ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__captured_weights[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 8813805851832320718ull);
    }
    vlSelf->full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__product = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 12418131942458556363ull);
    vlSelf->full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__extended_sum = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 14844949225198211665ull);
    vlSelf->full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__product_reg = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 18372598172006096633ull);
    vlSelf->full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__product_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3387290975157351980ull);
    vlSelf->full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__drain = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10776009737606361889ull);
    vlSelf->full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11538673074040361525ull);
    vlSelf->full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10314005824625789264ull);
    vlSelf->full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__flush = 0U;
    ;
    vlSelf->full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9745434053992400297ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__feature_regs[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 5265931661798909738ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__weights[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 4450424284345296623ull);
    }
    vlSelf->full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__bias = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 17818975972125731569ull);
    vlSelf->full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16270227365610019220ull);
    vlSelf->full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13699740317175690984ull);
    vlSelf->full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__score = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 618001159740980615ull);
    vlSelf->full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__count = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 14962716613240384514ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__captured_feature_regs[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 13673447270157983556ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__captured_weights[__Vi0] = VL_SCOPED_RAND_RESET_I(5, __VscopeHash, 3520660838991001353ull);
    }
    vlSelf->full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__product = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 6604541809423475971ull);
    vlSelf->full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__extended_sum = VL_SCOPED_RAND_RESET_I(15, __VscopeHash, 7206101607184347175ull);
    vlSelf->full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__product_reg = VL_SCOPED_RAND_RESET_I(10, __VscopeHash, 16226333848201904709ull);
    vlSelf->full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__product_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11134834146059122375ull);
    vlSelf->full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__drain = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10055885496651267676ull);
    vlSelf->full_classifier__DOT__u_classifier__DOT__u_compare__DOT__a = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 15678742848003474489ull);
    vlSelf->full_classifier__DOT__u_classifier__DOT__u_compare__DOT__b = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 3114950337254923095ull);
    vlSelf->full_classifier__DOT__u_classifier__DOT__u_compare__DOT__c = VL_SCOPED_RAND_RESET_I(14, __VscopeHash, 13436400698808723639ull);
    vlSelf->full_classifier__DOT__u_classifier__DOT__u_compare__DOT__biggest = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 10437978781495506611ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__full_classifier__DOT__u_classifier__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__full_classifier__DOT__u_classifier__DOT__u_mac_a__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__full_classifier__DOT__u_classifier__DOT__u_mac_b__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__full_classifier__DOT__u_classifier__DOT__u_mac_c__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
}
