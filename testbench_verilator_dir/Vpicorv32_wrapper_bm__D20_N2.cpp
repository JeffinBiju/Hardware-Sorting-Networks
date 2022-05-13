// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpicorv32_wrapper.h for the primary calling header

#include "Vpicorv32_wrapper_bm__D20_N2.h"
#include "Vpicorv32_wrapper__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vpicorv32_wrapper_bm__D20_N2) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vpicorv32_wrapper_bm__D20_N2::__Vconfigure(Vpicorv32_wrapper__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vpicorv32_wrapper_bm__D20_N2::~Vpicorv32_wrapper_bm__D20_N2() {
}

void Vpicorv32_wrapper_bm__D20_N2::_settle__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__1__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__0__KET____DOT__bm_i__1(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpicorv32_wrapper_bm__D20_N2::_settle__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__1__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__0__KET____DOT__bm_i__1\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__validity[0U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__x_valid_stage;
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[3U] 
        = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1;
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[1U] 
        = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2;
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[2U] 
        = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__1__KET____DOT__y1;
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[0U] 
        = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__1__KET____DOT__y2;
    this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp 
        = (((QData)((IData)(this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1)) 
            << 0x20U) | (QData)((IData)(this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2)));
    this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__outp 
        = (((QData)((IData)(this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1)) 
            << 0x20U) | (QData)((IData)(this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2)));
    this->__PVT__validity[1U] = this->__PVT__genblk1__BRA__0__KET____DOT__y_valid_ch;
    this->__PVT__validity[2U] = this->__PVT__genblk1__BRA__1__KET____DOT__y_valid_ch;
    this->__PVT__int_wires[0U][0U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][0x1cU];
    this->__PVT__int_wires[0U][1U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][0x1dU];
    this->__PVT__int_wires[0U][2U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][0x1eU];
    this->__PVT__int_wires[0U][3U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][0x1fU];
    this->__PVT__int_wires[1U][0U] = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[0U];
    this->__PVT__int_wires[1U][1U] = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[1U];
    this->__PVT__int_wires[1U][2U] = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[2U];
    this->__PVT__int_wires[1U][3U] = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[3U];
    this->__PVT__genblk1__BRA__1__KET____DOT__out[0U] 
        = (IData)(this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__outp);
    this->__PVT__genblk1__BRA__1__KET____DOT__out[1U] 
        = (IData)((this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__outp 
                   >> 0x20U));
    this->__PVT__genblk1__BRA__1__KET____DOT__out[2U] 
        = (IData)(this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp);
    this->__PVT__genblk1__BRA__1__KET____DOT__out[3U] 
        = (IData)((this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp 
                   >> 0x20U));
    this->__PVT__int_wires[2U][0U] = this->__PVT__genblk1__BRA__1__KET____DOT__out[0U];
    this->__PVT__int_wires[2U][1U] = this->__PVT__genblk1__BRA__1__KET____DOT__out[1U];
    this->__PVT__int_wires[2U][2U] = this->__PVT__genblk1__BRA__1__KET____DOT__out[2U];
    this->__PVT__int_wires[2U][3U] = this->__PVT__genblk1__BRA__1__KET____DOT__out[3U];
}

VL_INLINE_OPT void Vpicorv32_wrapper_bm__D20_N2::_sequent__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__1__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__0__KET____DOT__bm_i__9(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpicorv32_wrapper_bm__D20_N2::_sequent__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__1__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__0__KET____DOT__bm_i__9\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__1__KET____DOT__y1 
        = ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__rst)
            ? 0U : ((this->__PVT__int_wires[0U][2U] 
                     < this->__PVT__int_wires[0U][0U])
                     ? this->__PVT__int_wires[0U][0U]
                     : this->__PVT__int_wires[0U][2U]));
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__1__KET____DOT__y2 
        = ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__rst)
            ? 0U : ((this->__PVT__int_wires[0U][2U] 
                     < this->__PVT__int_wires[0U][0U])
                     ? this->__PVT__int_wires[0U][2U]
                     : this->__PVT__int_wires[0U][0U]));
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1 
        = ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__rst)
            ? 0U : ((this->__PVT__int_wires[0U][3U] 
                     < this->__PVT__int_wires[0U][1U])
                     ? this->__PVT__int_wires[0U][1U]
                     : this->__PVT__int_wires[0U][3U]));
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2 
        = ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__rst)
            ? 0U : ((this->__PVT__int_wires[0U][3U] 
                     < this->__PVT__int_wires[0U][1U])
                     ? this->__PVT__int_wires[0U][3U]
                     : this->__PVT__int_wires[0U][1U]));
    this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1 
        = ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__rst)
            ? 0U : ((this->__PVT__int_wires[1U][1U] 
                     < this->__PVT__int_wires[1U][0U])
                     ? this->__PVT__int_wires[1U][0U]
                     : this->__PVT__int_wires[1U][1U]));
    this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2 
        = ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__rst)
            ? 0U : ((this->__PVT__int_wires[1U][1U] 
                     < this->__PVT__int_wires[1U][0U])
                     ? this->__PVT__int_wires[1U][1U]
                     : this->__PVT__int_wires[1U][0U]));
    this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1 
        = ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__rst)
            ? 0U : ((this->__PVT__int_wires[1U][3U] 
                     < this->__PVT__int_wires[1U][2U])
                     ? this->__PVT__int_wires[1U][2U]
                     : this->__PVT__int_wires[1U][3U]));
    this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2 
        = ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__rst)
            ? 0U : ((this->__PVT__int_wires[1U][3U] 
                     < this->__PVT__int_wires[1U][2U])
                     ? this->__PVT__int_wires[1U][3U]
                     : this->__PVT__int_wires[1U][2U]));
    this->__PVT__genblk1__BRA__1__KET____DOT__y_valid_ch 
        = ((~ (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__rst)) 
           & this->__PVT__validity[1U]);
    this->__PVT__genblk1__BRA__1__KET____DOT__y_valid_ch 
        = ((~ (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__rst)) 
           & this->__PVT__validity[1U]);
    this->__PVT__genblk1__BRA__0__KET____DOT__y_valid_ch 
        = ((~ (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__rst)) 
           & this->__PVT__validity[0U]);
    this->__PVT__genblk1__BRA__0__KET____DOT__y_valid_ch 
        = ((~ (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__rst)) 
           & this->__PVT__validity[0U]);
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[2U] 
        = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__1__KET____DOT__y1;
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[0U] 
        = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__1__KET____DOT__y2;
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[3U] 
        = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1;
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[1U] 
        = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2;
    this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__outp 
        = (((QData)((IData)(this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1)) 
            << 0x20U) | (QData)((IData)(this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2)));
    this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp 
        = (((QData)((IData)(this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1)) 
            << 0x20U) | (QData)((IData)(this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2)));
    this->__PVT__validity[2U] = this->__PVT__genblk1__BRA__1__KET____DOT__y_valid_ch;
    this->__PVT__validity[1U] = this->__PVT__genblk1__BRA__0__KET____DOT__y_valid_ch;
    this->__PVT__int_wires[1U][0U] = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[0U];
    this->__PVT__int_wires[1U][1U] = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[1U];
    this->__PVT__int_wires[1U][2U] = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[2U];
    this->__PVT__int_wires[1U][3U] = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[3U];
    this->__PVT__genblk1__BRA__1__KET____DOT__out[0U] 
        = (IData)(this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__outp);
    this->__PVT__genblk1__BRA__1__KET____DOT__out[1U] 
        = (IData)((this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__outp 
                   >> 0x20U));
    this->__PVT__genblk1__BRA__1__KET____DOT__out[2U] 
        = (IData)(this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp);
    this->__PVT__genblk1__BRA__1__KET____DOT__out[3U] 
        = (IData)((this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp 
                   >> 0x20U));
    this->__PVT__int_wires[2U][0U] = this->__PVT__genblk1__BRA__1__KET____DOT__out[0U];
    this->__PVT__int_wires[2U][1U] = this->__PVT__genblk1__BRA__1__KET____DOT__out[1U];
    this->__PVT__int_wires[2U][2U] = this->__PVT__genblk1__BRA__1__KET____DOT__out[2U];
    this->__PVT__int_wires[2U][3U] = this->__PVT__genblk1__BRA__1__KET____DOT__out[3U];
}

VL_INLINE_OPT void Vpicorv32_wrapper_bm__D20_N2::_combo__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__1__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__0__KET____DOT__bm_i__17(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpicorv32_wrapper_bm__D20_N2::_combo__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__1__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__0__KET____DOT__bm_i__17\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__validity[0U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__x_valid_stage;
}

VL_INLINE_OPT void Vpicorv32_wrapper_bm__D20_N2::_combo__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__1__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__0__KET____DOT__bm_i__25(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpicorv32_wrapper_bm__D20_N2::_combo__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__1__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__0__KET____DOT__bm_i__25\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__int_wires[0U][0U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][0x1cU];
    this->__PVT__int_wires[0U][1U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][0x1dU];
    this->__PVT__int_wires[0U][2U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][0x1eU];
    this->__PVT__int_wires[0U][3U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][0x1fU];
}

void Vpicorv32_wrapper_bm__D20_N2::_settle__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__1__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__1__KET____DOT__bm_i__2(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpicorv32_wrapper_bm__D20_N2::_settle__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__1__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__1__KET____DOT__bm_i__2\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__validity[0U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__x_valid_stage;
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[3U] 
        = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1;
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[1U] 
        = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2;
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[2U] 
        = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__1__KET____DOT__y1;
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[0U] 
        = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__1__KET____DOT__y2;
    this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp 
        = (((QData)((IData)(this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1)) 
            << 0x20U) | (QData)((IData)(this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2)));
    this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__outp 
        = (((QData)((IData)(this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1)) 
            << 0x20U) | (QData)((IData)(this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2)));
    this->__PVT__validity[1U] = this->__PVT__genblk1__BRA__0__KET____DOT__y_valid_ch;
    this->__PVT__validity[2U] = this->__PVT__genblk1__BRA__1__KET____DOT__y_valid_ch;
    this->__PVT__int_wires[0U][0U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][0x18U];
    this->__PVT__int_wires[0U][1U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][0x19U];
    this->__PVT__int_wires[0U][2U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][0x1aU];
    this->__PVT__int_wires[0U][3U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][0x1bU];
    this->__PVT__int_wires[1U][0U] = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[0U];
    this->__PVT__int_wires[1U][1U] = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[1U];
    this->__PVT__int_wires[1U][2U] = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[2U];
    this->__PVT__int_wires[1U][3U] = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[3U];
    this->__PVT__genblk1__BRA__1__KET____DOT__out[0U] 
        = (IData)(this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__outp);
    this->__PVT__genblk1__BRA__1__KET____DOT__out[1U] 
        = (IData)((this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__outp 
                   >> 0x20U));
    this->__PVT__genblk1__BRA__1__KET____DOT__out[2U] 
        = (IData)(this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp);
    this->__PVT__genblk1__BRA__1__KET____DOT__out[3U] 
        = (IData)((this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp 
                   >> 0x20U));
    this->__PVT__int_wires[2U][0U] = this->__PVT__genblk1__BRA__1__KET____DOT__out[0U];
    this->__PVT__int_wires[2U][1U] = this->__PVT__genblk1__BRA__1__KET____DOT__out[1U];
    this->__PVT__int_wires[2U][2U] = this->__PVT__genblk1__BRA__1__KET____DOT__out[2U];
    this->__PVT__int_wires[2U][3U] = this->__PVT__genblk1__BRA__1__KET____DOT__out[3U];
}

VL_INLINE_OPT void Vpicorv32_wrapper_bm__D20_N2::_sequent__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__1__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__1__KET____DOT__bm_i__10(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpicorv32_wrapper_bm__D20_N2::_sequent__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__1__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__1__KET____DOT__bm_i__10\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__1__KET____DOT__y1 
        = ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__rst)
            ? 0U : ((this->__PVT__int_wires[0U][2U] 
                     < this->__PVT__int_wires[0U][0U])
                     ? this->__PVT__int_wires[0U][2U]
                     : this->__PVT__int_wires[0U][0U]));
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__1__KET____DOT__y2 
        = ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__rst)
            ? 0U : ((this->__PVT__int_wires[0U][2U] 
                     < this->__PVT__int_wires[0U][0U])
                     ? this->__PVT__int_wires[0U][0U]
                     : this->__PVT__int_wires[0U][2U]));
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1 
        = ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__rst)
            ? 0U : ((this->__PVT__int_wires[0U][3U] 
                     < this->__PVT__int_wires[0U][1U])
                     ? this->__PVT__int_wires[0U][3U]
                     : this->__PVT__int_wires[0U][1U]));
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2 
        = ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__rst)
            ? 0U : ((this->__PVT__int_wires[0U][3U] 
                     < this->__PVT__int_wires[0U][1U])
                     ? this->__PVT__int_wires[0U][1U]
                     : this->__PVT__int_wires[0U][3U]));
    this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1 
        = ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__rst)
            ? 0U : ((this->__PVT__int_wires[1U][1U] 
                     < this->__PVT__int_wires[1U][0U])
                     ? this->__PVT__int_wires[1U][1U]
                     : this->__PVT__int_wires[1U][0U]));
    this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2 
        = ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__rst)
            ? 0U : ((this->__PVT__int_wires[1U][1U] 
                     < this->__PVT__int_wires[1U][0U])
                     ? this->__PVT__int_wires[1U][0U]
                     : this->__PVT__int_wires[1U][1U]));
    this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1 
        = ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__rst)
            ? 0U : ((this->__PVT__int_wires[1U][3U] 
                     < this->__PVT__int_wires[1U][2U])
                     ? this->__PVT__int_wires[1U][3U]
                     : this->__PVT__int_wires[1U][2U]));
    this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2 
        = ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__rst)
            ? 0U : ((this->__PVT__int_wires[1U][3U] 
                     < this->__PVT__int_wires[1U][2U])
                     ? this->__PVT__int_wires[1U][2U]
                     : this->__PVT__int_wires[1U][3U]));
    this->__PVT__genblk1__BRA__1__KET____DOT__y_valid_ch 
        = ((~ (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__rst)) 
           & this->__PVT__validity[1U]);
    this->__PVT__genblk1__BRA__1__KET____DOT__y_valid_ch 
        = ((~ (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__rst)) 
           & this->__PVT__validity[1U]);
    this->__PVT__genblk1__BRA__0__KET____DOT__y_valid_ch 
        = ((~ (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__rst)) 
           & this->__PVT__validity[0U]);
    this->__PVT__genblk1__BRA__0__KET____DOT__y_valid_ch 
        = ((~ (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__rst)) 
           & this->__PVT__validity[0U]);
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[2U] 
        = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__1__KET____DOT__y1;
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[0U] 
        = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__1__KET____DOT__y2;
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[3U] 
        = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1;
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[1U] 
        = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2;
    this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__outp 
        = (((QData)((IData)(this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1)) 
            << 0x20U) | (QData)((IData)(this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2)));
    this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp 
        = (((QData)((IData)(this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1)) 
            << 0x20U) | (QData)((IData)(this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2)));
    this->__PVT__validity[2U] = this->__PVT__genblk1__BRA__1__KET____DOT__y_valid_ch;
    this->__PVT__validity[1U] = this->__PVT__genblk1__BRA__0__KET____DOT__y_valid_ch;
    this->__PVT__int_wires[1U][0U] = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[0U];
    this->__PVT__int_wires[1U][1U] = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[1U];
    this->__PVT__int_wires[1U][2U] = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[2U];
    this->__PVT__int_wires[1U][3U] = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[3U];
    this->__PVT__genblk1__BRA__1__KET____DOT__out[0U] 
        = (IData)(this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__outp);
    this->__PVT__genblk1__BRA__1__KET____DOT__out[1U] 
        = (IData)((this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__outp 
                   >> 0x20U));
    this->__PVT__genblk1__BRA__1__KET____DOT__out[2U] 
        = (IData)(this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp);
    this->__PVT__genblk1__BRA__1__KET____DOT__out[3U] 
        = (IData)((this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp 
                   >> 0x20U));
    this->__PVT__int_wires[2U][0U] = this->__PVT__genblk1__BRA__1__KET____DOT__out[0U];
    this->__PVT__int_wires[2U][1U] = this->__PVT__genblk1__BRA__1__KET____DOT__out[1U];
    this->__PVT__int_wires[2U][2U] = this->__PVT__genblk1__BRA__1__KET____DOT__out[2U];
    this->__PVT__int_wires[2U][3U] = this->__PVT__genblk1__BRA__1__KET____DOT__out[3U];
}

VL_INLINE_OPT void Vpicorv32_wrapper_bm__D20_N2::_combo__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__1__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__1__KET____DOT__bm_i__26(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpicorv32_wrapper_bm__D20_N2::_combo__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__1__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__1__KET____DOT__bm_i__26\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__int_wires[0U][0U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][0x18U];
    this->__PVT__int_wires[0U][1U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][0x19U];
    this->__PVT__int_wires[0U][2U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][0x1aU];
    this->__PVT__int_wires[0U][3U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][0x1bU];
}

void Vpicorv32_wrapper_bm__D20_N2::_settle__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__1__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__2__KET____DOT__bm_i__3(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpicorv32_wrapper_bm__D20_N2::_settle__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__1__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__2__KET____DOT__bm_i__3\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__validity[0U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__x_valid_stage;
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[3U] 
        = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1;
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[1U] 
        = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2;
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[2U] 
        = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__1__KET____DOT__y1;
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[0U] 
        = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__1__KET____DOT__y2;
    this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp 
        = (((QData)((IData)(this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1)) 
            << 0x20U) | (QData)((IData)(this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2)));
    this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__outp 
        = (((QData)((IData)(this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1)) 
            << 0x20U) | (QData)((IData)(this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2)));
    this->__PVT__validity[1U] = this->__PVT__genblk1__BRA__0__KET____DOT__y_valid_ch;
    this->__PVT__validity[2U] = this->__PVT__genblk1__BRA__1__KET____DOT__y_valid_ch;
    this->__PVT__int_wires[0U][0U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][0x14U];
    this->__PVT__int_wires[0U][1U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][0x15U];
    this->__PVT__int_wires[0U][2U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][0x16U];
    this->__PVT__int_wires[0U][3U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][0x17U];
    this->__PVT__int_wires[1U][0U] = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[0U];
    this->__PVT__int_wires[1U][1U] = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[1U];
    this->__PVT__int_wires[1U][2U] = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[2U];
    this->__PVT__int_wires[1U][3U] = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[3U];
    this->__PVT__genblk1__BRA__1__KET____DOT__out[0U] 
        = (IData)(this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__outp);
    this->__PVT__genblk1__BRA__1__KET____DOT__out[1U] 
        = (IData)((this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__outp 
                   >> 0x20U));
    this->__PVT__genblk1__BRA__1__KET____DOT__out[2U] 
        = (IData)(this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp);
    this->__PVT__genblk1__BRA__1__KET____DOT__out[3U] 
        = (IData)((this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp 
                   >> 0x20U));
    this->__PVT__int_wires[2U][0U] = this->__PVT__genblk1__BRA__1__KET____DOT__out[0U];
    this->__PVT__int_wires[2U][1U] = this->__PVT__genblk1__BRA__1__KET____DOT__out[1U];
    this->__PVT__int_wires[2U][2U] = this->__PVT__genblk1__BRA__1__KET____DOT__out[2U];
    this->__PVT__int_wires[2U][3U] = this->__PVT__genblk1__BRA__1__KET____DOT__out[3U];
}

VL_INLINE_OPT void Vpicorv32_wrapper_bm__D20_N2::_combo__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__1__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__2__KET____DOT__bm_i__27(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpicorv32_wrapper_bm__D20_N2::_combo__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__1__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__2__KET____DOT__bm_i__27\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__int_wires[0U][0U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][0x14U];
    this->__PVT__int_wires[0U][1U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][0x15U];
    this->__PVT__int_wires[0U][2U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][0x16U];
    this->__PVT__int_wires[0U][3U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][0x17U];
}

void Vpicorv32_wrapper_bm__D20_N2::_settle__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__1__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__3__KET____DOT__bm_i__4(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpicorv32_wrapper_bm__D20_N2::_settle__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__1__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__3__KET____DOT__bm_i__4\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__validity[0U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__x_valid_stage;
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[3U] 
        = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1;
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[1U] 
        = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2;
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[2U] 
        = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__1__KET____DOT__y1;
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[0U] 
        = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__1__KET____DOT__y2;
    this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp 
        = (((QData)((IData)(this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1)) 
            << 0x20U) | (QData)((IData)(this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2)));
    this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__outp 
        = (((QData)((IData)(this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1)) 
            << 0x20U) | (QData)((IData)(this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2)));
    this->__PVT__validity[1U] = this->__PVT__genblk1__BRA__0__KET____DOT__y_valid_ch;
    this->__PVT__validity[2U] = this->__PVT__genblk1__BRA__1__KET____DOT__y_valid_ch;
    this->__PVT__int_wires[0U][0U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][0x10U];
    this->__PVT__int_wires[0U][1U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][0x11U];
    this->__PVT__int_wires[0U][2U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][0x12U];
    this->__PVT__int_wires[0U][3U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][0x13U];
    this->__PVT__int_wires[1U][0U] = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[0U];
    this->__PVT__int_wires[1U][1U] = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[1U];
    this->__PVT__int_wires[1U][2U] = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[2U];
    this->__PVT__int_wires[1U][3U] = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[3U];
    this->__PVT__genblk1__BRA__1__KET____DOT__out[0U] 
        = (IData)(this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__outp);
    this->__PVT__genblk1__BRA__1__KET____DOT__out[1U] 
        = (IData)((this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__outp 
                   >> 0x20U));
    this->__PVT__genblk1__BRA__1__KET____DOT__out[2U] 
        = (IData)(this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp);
    this->__PVT__genblk1__BRA__1__KET____DOT__out[3U] 
        = (IData)((this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp 
                   >> 0x20U));
    this->__PVT__int_wires[2U][0U] = this->__PVT__genblk1__BRA__1__KET____DOT__out[0U];
    this->__PVT__int_wires[2U][1U] = this->__PVT__genblk1__BRA__1__KET____DOT__out[1U];
    this->__PVT__int_wires[2U][2U] = this->__PVT__genblk1__BRA__1__KET____DOT__out[2U];
    this->__PVT__int_wires[2U][3U] = this->__PVT__genblk1__BRA__1__KET____DOT__out[3U];
}

VL_INLINE_OPT void Vpicorv32_wrapper_bm__D20_N2::_combo__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__1__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__3__KET____DOT__bm_i__28(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpicorv32_wrapper_bm__D20_N2::_combo__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__1__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__3__KET____DOT__bm_i__28\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__int_wires[0U][0U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][0x10U];
    this->__PVT__int_wires[0U][1U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][0x11U];
    this->__PVT__int_wires[0U][2U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][0x12U];
    this->__PVT__int_wires[0U][3U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][0x13U];
}

void Vpicorv32_wrapper_bm__D20_N2::_settle__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__1__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__4__KET____DOT__bm_i__5(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpicorv32_wrapper_bm__D20_N2::_settle__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__1__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__4__KET____DOT__bm_i__5\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__validity[0U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__x_valid_stage;
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[3U] 
        = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1;
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[1U] 
        = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2;
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[2U] 
        = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__1__KET____DOT__y1;
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[0U] 
        = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__1__KET____DOT__y2;
    this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp 
        = (((QData)((IData)(this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1)) 
            << 0x20U) | (QData)((IData)(this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2)));
    this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__outp 
        = (((QData)((IData)(this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1)) 
            << 0x20U) | (QData)((IData)(this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2)));
    this->__PVT__validity[1U] = this->__PVT__genblk1__BRA__0__KET____DOT__y_valid_ch;
    this->__PVT__validity[2U] = this->__PVT__genblk1__BRA__1__KET____DOT__y_valid_ch;
    this->__PVT__int_wires[0U][0U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][0xcU];
    this->__PVT__int_wires[0U][1U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][0xdU];
    this->__PVT__int_wires[0U][2U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][0xeU];
    this->__PVT__int_wires[0U][3U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][0xfU];
    this->__PVT__int_wires[1U][0U] = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[0U];
    this->__PVT__int_wires[1U][1U] = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[1U];
    this->__PVT__int_wires[1U][2U] = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[2U];
    this->__PVT__int_wires[1U][3U] = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[3U];
    this->__PVT__genblk1__BRA__1__KET____DOT__out[0U] 
        = (IData)(this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__outp);
    this->__PVT__genblk1__BRA__1__KET____DOT__out[1U] 
        = (IData)((this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__outp 
                   >> 0x20U));
    this->__PVT__genblk1__BRA__1__KET____DOT__out[2U] 
        = (IData)(this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp);
    this->__PVT__genblk1__BRA__1__KET____DOT__out[3U] 
        = (IData)((this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp 
                   >> 0x20U));
    this->__PVT__int_wires[2U][0U] = this->__PVT__genblk1__BRA__1__KET____DOT__out[0U];
    this->__PVT__int_wires[2U][1U] = this->__PVT__genblk1__BRA__1__KET____DOT__out[1U];
    this->__PVT__int_wires[2U][2U] = this->__PVT__genblk1__BRA__1__KET____DOT__out[2U];
    this->__PVT__int_wires[2U][3U] = this->__PVT__genblk1__BRA__1__KET____DOT__out[3U];
}

VL_INLINE_OPT void Vpicorv32_wrapper_bm__D20_N2::_combo__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__1__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__4__KET____DOT__bm_i__29(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpicorv32_wrapper_bm__D20_N2::_combo__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__1__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__4__KET____DOT__bm_i__29\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__int_wires[0U][0U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][0xcU];
    this->__PVT__int_wires[0U][1U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][0xdU];
    this->__PVT__int_wires[0U][2U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][0xeU];
    this->__PVT__int_wires[0U][3U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][0xfU];
}

void Vpicorv32_wrapper_bm__D20_N2::_settle__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__1__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__5__KET____DOT__bm_i__6(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpicorv32_wrapper_bm__D20_N2::_settle__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__1__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__5__KET____DOT__bm_i__6\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__validity[0U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__x_valid_stage;
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[3U] 
        = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1;
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[1U] 
        = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2;
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[2U] 
        = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__1__KET____DOT__y1;
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[0U] 
        = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__1__KET____DOT__y2;
    this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp 
        = (((QData)((IData)(this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1)) 
            << 0x20U) | (QData)((IData)(this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2)));
    this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__outp 
        = (((QData)((IData)(this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1)) 
            << 0x20U) | (QData)((IData)(this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2)));
    this->__PVT__validity[1U] = this->__PVT__genblk1__BRA__0__KET____DOT__y_valid_ch;
    this->__PVT__validity[2U] = this->__PVT__genblk1__BRA__1__KET____DOT__y_valid_ch;
    this->__PVT__int_wires[0U][0U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][8U];
    this->__PVT__int_wires[0U][1U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][9U];
    this->__PVT__int_wires[0U][2U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][0xaU];
    this->__PVT__int_wires[0U][3U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][0xbU];
    this->__PVT__int_wires[1U][0U] = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[0U];
    this->__PVT__int_wires[1U][1U] = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[1U];
    this->__PVT__int_wires[1U][2U] = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[2U];
    this->__PVT__int_wires[1U][3U] = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[3U];
    this->__PVT__genblk1__BRA__1__KET____DOT__out[0U] 
        = (IData)(this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__outp);
    this->__PVT__genblk1__BRA__1__KET____DOT__out[1U] 
        = (IData)((this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__outp 
                   >> 0x20U));
    this->__PVT__genblk1__BRA__1__KET____DOT__out[2U] 
        = (IData)(this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp);
    this->__PVT__genblk1__BRA__1__KET____DOT__out[3U] 
        = (IData)((this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp 
                   >> 0x20U));
    this->__PVT__int_wires[2U][0U] = this->__PVT__genblk1__BRA__1__KET____DOT__out[0U];
    this->__PVT__int_wires[2U][1U] = this->__PVT__genblk1__BRA__1__KET____DOT__out[1U];
    this->__PVT__int_wires[2U][2U] = this->__PVT__genblk1__BRA__1__KET____DOT__out[2U];
    this->__PVT__int_wires[2U][3U] = this->__PVT__genblk1__BRA__1__KET____DOT__out[3U];
}

VL_INLINE_OPT void Vpicorv32_wrapper_bm__D20_N2::_combo__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__1__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__5__KET____DOT__bm_i__30(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpicorv32_wrapper_bm__D20_N2::_combo__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__1__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__5__KET____DOT__bm_i__30\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__int_wires[0U][0U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][8U];
    this->__PVT__int_wires[0U][1U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][9U];
    this->__PVT__int_wires[0U][2U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][0xaU];
    this->__PVT__int_wires[0U][3U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][0xbU];
}

void Vpicorv32_wrapper_bm__D20_N2::_settle__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__1__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__6__KET____DOT__bm_i__7(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpicorv32_wrapper_bm__D20_N2::_settle__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__1__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__6__KET____DOT__bm_i__7\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__validity[0U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__x_valid_stage;
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[3U] 
        = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1;
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[1U] 
        = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2;
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[2U] 
        = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__1__KET____DOT__y1;
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[0U] 
        = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__1__KET____DOT__y2;
    this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp 
        = (((QData)((IData)(this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1)) 
            << 0x20U) | (QData)((IData)(this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2)));
    this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__outp 
        = (((QData)((IData)(this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1)) 
            << 0x20U) | (QData)((IData)(this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2)));
    this->__PVT__validity[1U] = this->__PVT__genblk1__BRA__0__KET____DOT__y_valid_ch;
    this->__PVT__validity[2U] = this->__PVT__genblk1__BRA__1__KET____DOT__y_valid_ch;
    this->__PVT__int_wires[0U][0U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][4U];
    this->__PVT__int_wires[0U][1U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][5U];
    this->__PVT__int_wires[0U][2U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][6U];
    this->__PVT__int_wires[0U][3U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][7U];
    this->__PVT__int_wires[1U][0U] = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[0U];
    this->__PVT__int_wires[1U][1U] = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[1U];
    this->__PVT__int_wires[1U][2U] = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[2U];
    this->__PVT__int_wires[1U][3U] = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[3U];
    this->__PVT__genblk1__BRA__1__KET____DOT__out[0U] 
        = (IData)(this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__outp);
    this->__PVT__genblk1__BRA__1__KET____DOT__out[1U] 
        = (IData)((this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__outp 
                   >> 0x20U));
    this->__PVT__genblk1__BRA__1__KET____DOT__out[2U] 
        = (IData)(this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp);
    this->__PVT__genblk1__BRA__1__KET____DOT__out[3U] 
        = (IData)((this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp 
                   >> 0x20U));
    this->__PVT__int_wires[2U][0U] = this->__PVT__genblk1__BRA__1__KET____DOT__out[0U];
    this->__PVT__int_wires[2U][1U] = this->__PVT__genblk1__BRA__1__KET____DOT__out[1U];
    this->__PVT__int_wires[2U][2U] = this->__PVT__genblk1__BRA__1__KET____DOT__out[2U];
    this->__PVT__int_wires[2U][3U] = this->__PVT__genblk1__BRA__1__KET____DOT__out[3U];
}

VL_INLINE_OPT void Vpicorv32_wrapper_bm__D20_N2::_combo__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__1__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__6__KET____DOT__bm_i__31(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpicorv32_wrapper_bm__D20_N2::_combo__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__1__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__6__KET____DOT__bm_i__31\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__int_wires[0U][0U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][4U];
    this->__PVT__int_wires[0U][1U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][5U];
    this->__PVT__int_wires[0U][2U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][6U];
    this->__PVT__int_wires[0U][3U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][7U];
}

void Vpicorv32_wrapper_bm__D20_N2::_settle__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__1__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__7__KET____DOT__bm_i__8(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpicorv32_wrapper_bm__D20_N2::_settle__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__1__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__7__KET____DOT__bm_i__8\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__validity[0U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__x_valid_stage;
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[3U] 
        = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1;
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[1U] 
        = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2;
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[2U] 
        = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__1__KET____DOT__y1;
    this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[0U] 
        = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__1__KET____DOT__y2;
    this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp 
        = (((QData)((IData)(this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1)) 
            << 0x20U) | (QData)((IData)(this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2)));
    this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__outp 
        = (((QData)((IData)(this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1)) 
            << 0x20U) | (QData)((IData)(this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2)));
    this->__PVT__validity[1U] = this->__PVT__genblk1__BRA__0__KET____DOT__y_valid_ch;
    this->__PVT__validity[2U] = this->__PVT__genblk1__BRA__1__KET____DOT__y_valid_ch;
    this->__PVT__int_wires[0U][0U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][0U];
    this->__PVT__int_wires[0U][1U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][1U];
    this->__PVT__int_wires[0U][2U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][2U];
    this->__PVT__int_wires[0U][3U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][3U];
    this->__PVT__int_wires[1U][0U] = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[0U];
    this->__PVT__int_wires[1U][1U] = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[1U];
    this->__PVT__int_wires[1U][2U] = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[2U];
    this->__PVT__int_wires[1U][3U] = this->__PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp[3U];
    this->__PVT__genblk1__BRA__1__KET____DOT__out[0U] 
        = (IData)(this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__outp);
    this->__PVT__genblk1__BRA__1__KET____DOT__out[1U] 
        = (IData)((this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__outp 
                   >> 0x20U));
    this->__PVT__genblk1__BRA__1__KET____DOT__out[2U] 
        = (IData)(this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp);
    this->__PVT__genblk1__BRA__1__KET____DOT__out[3U] 
        = (IData)((this->__PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp 
                   >> 0x20U));
    this->__PVT__int_wires[2U][0U] = this->__PVT__genblk1__BRA__1__KET____DOT__out[0U];
    this->__PVT__int_wires[2U][1U] = this->__PVT__genblk1__BRA__1__KET____DOT__out[1U];
    this->__PVT__int_wires[2U][2U] = this->__PVT__genblk1__BRA__1__KET____DOT__out[2U];
    this->__PVT__int_wires[2U][3U] = this->__PVT__genblk1__BRA__1__KET____DOT__out[3U];
}

VL_INLINE_OPT void Vpicorv32_wrapper_bm__D20_N2::_combo__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__1__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__7__KET____DOT__bm_i__32(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpicorv32_wrapper_bm__D20_N2::_combo__TOP__picorv32_wrapper__mem__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__genblk1__BRA__1__KET____DOT__sort_stage_inst__DOT__genblk1__BRA__7__KET____DOT__bm_i__32\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    this->__PVT__int_wires[0U][0U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][0U];
    this->__PVT__int_wires[0U][1U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][1U];
    this->__PVT__int_wires[0U][2U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][2U];
    this->__PVT__int_wires[0U][3U] = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__M__DOT__genblk3__DOT__genblk2__DOT__M__DOT__intm_wires
        [1U][3U];
}

void Vpicorv32_wrapper_bm__D20_N2::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vpicorv32_wrapper_bm__D20_N2::_ctor_var_reset\n"); );
    // Body
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__rst = VL_RAND_RESET_I(1);
    __PVT__x_valid = VL_RAND_RESET_I(1);
    __PVT__last_stage = VL_RAND_RESET_I(1);
    __PVT__ASCENDING = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, __PVT__c_in);
    VL_RAND_RESET_W(128, __PVT__c_out);
    __PVT__y_valid = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            VL_RAND_RESET_W(128, __PVT__int_wires[__Vi0]);
    }}
    { int __Vi0=0; for (; __Vi0<3; ++__Vi0) {
            __PVT__validity[__Vi0] = VL_RAND_RESET_I(1);
    }}
    __PVT__genblk1__BRA__0__KET____DOT__y_valid_ch = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, __PVT__genblk1__BRA__1__KET____DOT__out);
    __PVT__genblk1__BRA__1__KET____DOT__y_valid_ch = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(128, __PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp);
    __PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__validp = VL_RAND_RESET_I(3);
    __PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1 = VL_RAND_RESET_I(32);
    __PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2 = VL_RAND_RESET_I(32);
    __PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__1__KET____DOT__y1 = VL_RAND_RESET_I(32);
    __PVT__genblk1__BRA__0__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__1__KET____DOT__y2 = VL_RAND_RESET_I(32);
    __PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__outp = VL_RAND_RESET_Q(64);
    __PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__validp = VL_RAND_RESET_I(2);
    __PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__outp = VL_RAND_RESET_Q(64);
    __PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__validp = VL_RAND_RESET_I(2);
    __PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1 = VL_RAND_RESET_I(32);
    __PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__0__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2 = VL_RAND_RESET_I(32);
    __PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y1 = VL_RAND_RESET_I(32);
    __PVT__genblk1__BRA__1__KET____DOT__bm_chann_i__DOT__genblk1__BRA__1__KET____DOT__bm_chann_unit_i__DOT__genblk1__BRA__0__KET____DOT__y2 = VL_RAND_RESET_I(32);
}