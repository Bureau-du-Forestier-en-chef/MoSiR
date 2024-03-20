/* Generated code for Python module 'networkx$algorithms$connectivity$kcutsets'
 * created by Nuitka version 1.9.2
 *
 * This code is in part copyright 2023 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_networkx$algorithms$connectivity$kcutsets" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_networkx$algorithms$connectivity$kcutsets;
PyDictObject *moduledict_networkx$algorithms$connectivity$kcutsets;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[101];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[101];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("networkx.algorithms.connectivity.kcutsets"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 101; i++) {
            mod_consts_hash[i] = DEEP_HASH(tstate, mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(PyThreadState *tstate) {
    createModuleConstants(tstate);
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_networkx$algorithms$connectivity$kcutsets(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 101; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_6e8ffacbb6b786b9373e245e8d5ef998;
static PyCodeObject *codeobj_8c6afdf6000db714daf773f9562880fb;
static PyCodeObject *codeobj_14f20312df76220900febdc08670a082;
static PyCodeObject *codeobj_7380d952a24c624fb968e61def2ec382;
static PyCodeObject *codeobj_923a4e06f7307f5e8db7d7b3bd03a83b;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[95]); CHECK_OBJECT(module_filename_obj);
    codeobj_6e8ffacbb6b786b9373e245e8d5ef998 = MAKE_CODE_OBJECT(module_filename_obj, 193, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[69], mod_consts[69], mod_consts[96], NULL, 1, 0, 0);
    codeobj_8c6afdf6000db714daf773f9562880fb = MAKE_CODE_OBJECT(module_filename_obj, 190, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[69], mod_consts[69], mod_consts[97], NULL, 1, 0, 0);
    codeobj_14f20312df76220900febdc08670a082 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[98], mod_consts[98], NULL, NULL, 0, 0, 0);
    codeobj_7380d952a24c624fb968e61def2ec382 = MAKE_CODE_OBJECT(module_filename_obj, 225, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[31], mod_consts[31], mod_consts[99], NULL, 2, 0, 0);
    codeobj_923a4e06f7307f5e8db7d7b3bd03a83b = MAKE_CODE_OBJECT(module_filename_obj, 25, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[67], mod_consts[67], mod_consts[100], NULL, 3, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_networkx$algorithms$connectivity$kcutsets$$$function__1_all_node_cuts$$$genobj__1_all_node_cuts(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_networkx$algorithms$connectivity$kcutsets$$$function__1_all_node_cuts$$$genobj__1_all_node_cuts$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_networkx$algorithms$connectivity$kcutsets$$$function__1_all_node_cuts$$$genobj__1_all_node_cuts$$$genexpr__2_genexpr(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__4_complex_call_helper_pos_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_networkx$algorithms$connectivity$kcutsets$$$function__1_all_node_cuts(PyObject *defaults);


static PyObject *MAKE_FUNCTION_networkx$algorithms$connectivity$kcutsets$$$function__2__is_separating_set();


// The module function definitions.
static PyObject *impl_networkx$algorithms$connectivity$kcutsets$$$function__1_all_node_cuts(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_G = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_k = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_flow_func = Nuitka_Cell_New1(python_pars[2]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    {
        struct Nuitka_CellObject *tmp_closure_1[3];

        tmp_closure_1[0] = par_G;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_flow_func;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_k;
        Py_INCREF(tmp_closure_1[2]);

        tmp_return_value = MAKE_GENERATOR_networkx$algorithms$connectivity$kcutsets$$$function__1_all_node_cuts$$$genobj__1_all_node_cuts(tmp_closure_1);

        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_k);
    Py_DECREF(par_k);
    par_k = NULL;
    CHECK_OBJECT(par_flow_func);
    Py_DECREF(par_flow_func);
    par_flow_func = NULL;
    goto function_return_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_G);
    Py_DECREF(par_G);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct networkx$algorithms$connectivity$kcutsets$$$function__1_all_node_cuts$$$genobj__1_all_node_cuts_locals {
    PyObject *var_cut_set;
    PyObject *var_seen;
    PyObject *var_H;
    struct Nuitka_CellObject *var_H_nodes;
    PyObject *var_mapping;
    PyObject *var_original_H_pred;
    PyObject *var_R;
    PyObject *var_kwargs;
    PyObject *var_X;
    PyObject *var_x;
    PyObject *var_non_adjacent;
    PyObject *var_v;
    PyObject *var_flow_value;
    PyObject *var_E1;
    PyObject *var_flowed_edges;
    PyObject *var_VE1;
    PyObject *var_incident_nodes;
    PyObject *var_saturated_edges;
    PyObject *var_R_closure;
    PyObject *var_L;
    PyObject *var_cmap;
    PyObject *var_inv_cmap;
    PyObject *var_n;
    PyObject *var_scc;
    PyObject *var_antichain;
    struct Nuitka_CellObject *var_S;
    PyObject *var_S_ancestors;
    PyObject *var_cutset;
    struct Nuitka_CellObject *var_u;
    PyObject *var_node_cut;
    PyObject *outline_0_var_n;
    PyObject *outline_0_var_d;
    PyObject *outline_1_var_u;
    PyObject *outline_1_var_w;
    PyObject *outline_1_var_d;
    PyObject *outline_2_var_edge;
    PyObject *outline_2_var_n;
    PyObject *outline_3_var_u;
    PyObject *outline_3_var_w;
    PyObject *outline_3_var_d;
    PyObject *outline_4_var_n;
    PyObject *outline_5_var_u;
    PyObject *outline_5_var__;
    PyObject *tmp_assign_unpack_1__assign_source;
    PyObject *tmp_assign_unpack_2__assign_source;
    PyObject *tmp_for_loop_1__for_iterator;
    PyObject *tmp_for_loop_1__iter_value;
    PyObject *tmp_for_loop_2__for_iterator;
    PyObject *tmp_for_loop_2__iter_value;
    PyObject *tmp_for_loop_3__for_iterator;
    PyObject *tmp_for_loop_3__iter_value;
    PyObject *tmp_for_loop_4__for_iterator;
    PyObject *tmp_for_loop_4__iter_value;
    PyObject *tmp_for_loop_5__for_iterator;
    PyObject *tmp_for_loop_5__iter_value;
    PyObject *tmp_for_loop_6__for_iterator;
    PyObject *tmp_for_loop_6__iter_value;
    PyObject *tmp_for_loop_7__for_iterator;
    PyObject *tmp_for_loop_7__iter_value;
    PyObject *tmp_for_loop_8__for_iterator;
    PyObject *tmp_for_loop_8__iter_value;
    PyObject *tmp_genexpr_1__$0;
    PyObject *tmp_genexpr_2__$0;
    PyObject *tmp_listcomp$tuple_unpack_1__element_1;
    PyObject *tmp_listcomp$tuple_unpack_1__element_2;
    PyObject *tmp_listcomp$tuple_unpack_1__element_3;
    PyObject *tmp_listcomp$tuple_unpack_1__source_iter;
    PyObject *tmp_listcomp$tuple_unpack_2__element_1;
    PyObject *tmp_listcomp$tuple_unpack_2__element_2;
    PyObject *tmp_listcomp$tuple_unpack_2__element_3;
    PyObject *tmp_listcomp$tuple_unpack_2__source_iter;
    PyObject *tmp_listcomp_1__$0;
    PyObject *tmp_listcomp_1__contraction;
    PyObject *tmp_listcomp_1__iter_value_0;
    PyObject *tmp_listcomp_2__$0;
    PyObject *tmp_listcomp_2__contraction;
    PyObject *tmp_listcomp_2__iter_value_0;
    PyObject *tmp_setcontraction$tuple_unpack_1__element_1;
    PyObject *tmp_setcontraction$tuple_unpack_1__element_2;
    PyObject *tmp_setcontraction$tuple_unpack_1__source_iter;
    PyObject *tmp_setcontraction$tuple_unpack_2__element_1;
    PyObject *tmp_setcontraction$tuple_unpack_2__element_2;
    PyObject *tmp_setcontraction$tuple_unpack_2__source_iter;
    PyObject *tmp_setcontraction_1__$0;
    PyObject *tmp_setcontraction_1__contraction;
    PyObject *tmp_setcontraction_1__iter_value_0;
    PyObject *tmp_setcontraction_2__$0;
    PyObject *tmp_setcontraction_2__contraction;
    PyObject *tmp_setcontraction_2__contraction_iter_0;
    PyObject *tmp_setcontraction_2__iter_value_0;
    PyObject *tmp_setcontraction_2__iter_value_1;
    PyObject *tmp_setcontraction_3__$0;
    PyObject *tmp_setcontraction_3__contraction;
    PyObject *tmp_setcontraction_3__iter_value_0;
    PyObject *tmp_setcontraction_4__$0;
    PyObject *tmp_setcontraction_4__contraction;
    PyObject *tmp_setcontraction_4__iter_value_0;
    PyObject *tmp_tuple_unpack_1__element_1;
    PyObject *tmp_tuple_unpack_1__element_2;
    PyObject *tmp_tuple_unpack_1__source_iter;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    int tmp_res;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *tmp_return_value;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    int exception_keeper_lineno_5;
    bool tmp_result;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    int exception_keeper_lineno_21;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    int exception_keeper_lineno_23;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    int exception_keeper_lineno_24;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    int exception_keeper_lineno_25;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    int exception_keeper_lineno_26;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    int exception_keeper_lineno_27;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    int exception_keeper_lineno_28;
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    int exception_keeper_lineno_29;
    PyObject *exception_keeper_type_30;
    PyObject *exception_keeper_value_30;
    PyTracebackObject *exception_keeper_tb_30;
    int exception_keeper_lineno_30;
    PyObject *exception_keeper_type_31;
    PyObject *exception_keeper_value_31;
    PyTracebackObject *exception_keeper_tb_31;
    int exception_keeper_lineno_31;
    PyObject *exception_keeper_type_32;
    PyObject *exception_keeper_value_32;
    PyTracebackObject *exception_keeper_tb_32;
    int exception_keeper_lineno_32;
    PyObject *exception_keeper_type_33;
    PyObject *exception_keeper_value_33;
    PyTracebackObject *exception_keeper_tb_33;
    int exception_keeper_lineno_33;
};
#endif

static PyObject *networkx$algorithms$connectivity$kcutsets$$$function__1_all_node_cuts$$$genobj__1_all_node_cuts_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct networkx$algorithms$connectivity$kcutsets$$$function__1_all_node_cuts$$$genobj__1_all_node_cuts_locals *generator_heap = (struct networkx$algorithms$connectivity$kcutsets$$$function__1_all_node_cuts$$$genobj__1_all_node_cuts_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 3: goto yield_return_3;
    case 2: goto yield_return_2;
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_cut_set = NULL;
    generator_heap->var_seen = NULL;
    generator_heap->var_H = NULL;
    generator_heap->var_H_nodes = Nuitka_Cell_Empty();
    generator_heap->var_mapping = NULL;
    generator_heap->var_original_H_pred = NULL;
    generator_heap->var_R = NULL;
    generator_heap->var_kwargs = NULL;
    generator_heap->var_X = NULL;
    generator_heap->var_x = NULL;
    generator_heap->var_non_adjacent = NULL;
    generator_heap->var_v = NULL;
    generator_heap->var_flow_value = NULL;
    generator_heap->var_E1 = NULL;
    generator_heap->var_flowed_edges = NULL;
    generator_heap->var_VE1 = NULL;
    generator_heap->var_incident_nodes = NULL;
    generator_heap->var_saturated_edges = NULL;
    generator_heap->var_R_closure = NULL;
    generator_heap->var_L = NULL;
    generator_heap->var_cmap = NULL;
    generator_heap->var_inv_cmap = NULL;
    generator_heap->var_n = NULL;
    generator_heap->var_scc = NULL;
    generator_heap->var_antichain = NULL;
    generator_heap->var_S = Nuitka_Cell_Empty();
    generator_heap->var_S_ancestors = NULL;
    generator_heap->var_cutset = NULL;
    generator_heap->var_u = Nuitka_Cell_Empty();
    generator_heap->var_node_cut = NULL;
    generator_heap->outline_0_var_n = NULL;
    generator_heap->outline_0_var_d = NULL;
    generator_heap->outline_1_var_u = NULL;
    generator_heap->outline_1_var_w = NULL;
    generator_heap->outline_1_var_d = NULL;
    generator_heap->outline_2_var_edge = NULL;
    generator_heap->outline_2_var_n = NULL;
    generator_heap->outline_3_var_u = NULL;
    generator_heap->outline_3_var_w = NULL;
    generator_heap->outline_3_var_d = NULL;
    generator_heap->outline_4_var_n = NULL;
    generator_heap->outline_5_var_u = NULL;
    generator_heap->outline_5_var__ = NULL;
    generator_heap->tmp_assign_unpack_1__assign_source = NULL;
    generator_heap->tmp_assign_unpack_2__assign_source = NULL;
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    generator_heap->tmp_for_loop_2__for_iterator = NULL;
    generator_heap->tmp_for_loop_2__iter_value = NULL;
    generator_heap->tmp_for_loop_3__for_iterator = NULL;
    generator_heap->tmp_for_loop_3__iter_value = NULL;
    generator_heap->tmp_for_loop_4__for_iterator = NULL;
    generator_heap->tmp_for_loop_4__iter_value = NULL;
    generator_heap->tmp_for_loop_5__for_iterator = NULL;
    generator_heap->tmp_for_loop_5__iter_value = NULL;
    generator_heap->tmp_for_loop_6__for_iterator = NULL;
    generator_heap->tmp_for_loop_6__iter_value = NULL;
    generator_heap->tmp_for_loop_7__for_iterator = NULL;
    generator_heap->tmp_for_loop_7__iter_value = NULL;
    generator_heap->tmp_for_loop_8__for_iterator = NULL;
    generator_heap->tmp_for_loop_8__iter_value = NULL;
    generator_heap->tmp_genexpr_1__$0 = NULL;
    generator_heap->tmp_genexpr_2__$0 = NULL;
    generator_heap->tmp_listcomp$tuple_unpack_1__element_1 = NULL;
    generator_heap->tmp_listcomp$tuple_unpack_1__element_2 = NULL;
    generator_heap->tmp_listcomp$tuple_unpack_1__element_3 = NULL;
    generator_heap->tmp_listcomp$tuple_unpack_1__source_iter = NULL;
    generator_heap->tmp_listcomp$tuple_unpack_2__element_1 = NULL;
    generator_heap->tmp_listcomp$tuple_unpack_2__element_2 = NULL;
    generator_heap->tmp_listcomp$tuple_unpack_2__element_3 = NULL;
    generator_heap->tmp_listcomp$tuple_unpack_2__source_iter = NULL;
    generator_heap->tmp_listcomp_1__$0 = NULL;
    generator_heap->tmp_listcomp_1__contraction = NULL;
    generator_heap->tmp_listcomp_1__iter_value_0 = NULL;
    generator_heap->tmp_listcomp_2__$0 = NULL;
    generator_heap->tmp_listcomp_2__contraction = NULL;
    generator_heap->tmp_listcomp_2__iter_value_0 = NULL;
    generator_heap->tmp_setcontraction$tuple_unpack_1__element_1 = NULL;
    generator_heap->tmp_setcontraction$tuple_unpack_1__element_2 = NULL;
    generator_heap->tmp_setcontraction$tuple_unpack_1__source_iter = NULL;
    generator_heap->tmp_setcontraction$tuple_unpack_2__element_1 = NULL;
    generator_heap->tmp_setcontraction$tuple_unpack_2__element_2 = NULL;
    generator_heap->tmp_setcontraction$tuple_unpack_2__source_iter = NULL;
    generator_heap->tmp_setcontraction_1__$0 = NULL;
    generator_heap->tmp_setcontraction_1__contraction = NULL;
    generator_heap->tmp_setcontraction_1__iter_value_0 = NULL;
    generator_heap->tmp_setcontraction_2__$0 = NULL;
    generator_heap->tmp_setcontraction_2__contraction = NULL;
    generator_heap->tmp_setcontraction_2__contraction_iter_0 = NULL;
    generator_heap->tmp_setcontraction_2__iter_value_0 = NULL;
    generator_heap->tmp_setcontraction_2__iter_value_1 = NULL;
    generator_heap->tmp_setcontraction_3__$0 = NULL;
    generator_heap->tmp_setcontraction_3__contraction = NULL;
    generator_heap->tmp_setcontraction_3__iter_value_0 = NULL;
    generator_heap->tmp_setcontraction_4__$0 = NULL;
    generator_heap->tmp_setcontraction_4__contraction = NULL;
    generator_heap->tmp_setcontraction_4__iter_value_0 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;
    generator_heap->tmp_return_value = NULL;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(tstate, codeobj_923a4e06f7307f5e8db7d7b3bd03a83b, module_networkx$algorithms$connectivity$kcutsets, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    generator->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

    assert(generator->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(tstate, generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_GENERATOR_EXCEPTION(tstate, generator);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_networkx$algorithms$connectivity$kcutsets, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 91;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[2]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 91;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[3]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 91;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        generator->m_frame->m_frame.f_lineno = 91;
        tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 91;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto frame_exception_exit_1;
        }
        generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (generator_heap->tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 91;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (generator_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_networkx$algorithms$connectivity$kcutsets, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 92;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto frame_exception_exit_1;
        }
        generator->m_frame->m_frame.f_lineno = 92;
        tmp_raise_type_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[4],
            PyTuple_GET_ITEM(mod_consts[5], 0)
        );

        if (tmp_raise_type_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 92;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto frame_exception_exit_1;
        }
        generator_heap->exception_type = tmp_raise_type_1;
        generator_heap->exception_lineno = 92;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
        generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_networkx$algorithms$connectivity$kcutsets, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 96;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[6]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 96;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[3]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 96;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = Nuitka_Cell_GET(generator->m_closure[0]);
        generator->m_frame->m_frame.f_lineno = 96;
        tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 96;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[7];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 96;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_sub_expr_left_1;
        nuitka_digit tmp_sub_expr_right_1;
        PyObject *tmp_len_arg_1;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_networkx$algorithms$connectivity$kcutsets, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 97;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[3]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 97;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_3 = Nuitka_Cell_GET(generator->m_closure[0]);
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[3]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 97;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto frame_exception_exit_1;
        }

        tmp_len_arg_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_sub_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 97;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_1 = 1;
        tmp_args_element_value_4 = BINARY_OPERATION_SUB_OBJECT_LONG_DIGIT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        assert(!(tmp_args_element_value_4 == NULL));
        generator->m_frame->m_frame.f_lineno = 97;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_args_element_value_4);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 97;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 97;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->tmp_for_loop_1__for_iterator == NULL);
        generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
        tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_2 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                generator_heap->exception_lineno = 97;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
            generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
        tmp_assign_source_3 = generator_heap->tmp_for_loop_1__iter_value;
        {
            PyObject *old = generator_heap->var_cut_set;
            generator_heap->var_cut_set = tmp_assign_source_3;
            Py_INCREF(generator_heap->var_cut_set);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_3;
        PyObject *tmp_set_arg_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_cut_set);
        tmp_set_arg_1 = generator_heap->var_cut_set;
        tmp_expression_value_3 = PySet_New(tmp_set_arg_1);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 98;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_set_arg_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_3;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_set_arg_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 98;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
        Py_DECREF(tmp_yield_result_1);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 97;
        generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    generator_heap->tmp_return_value = Py_None;
    Py_INCREF(generator_heap->tmp_return_value);
    goto frame_return_exit_1;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = MAKE_LIST_EMPTY(0);
        assert(generator_heap->var_seen == NULL);
        generator_heap->var_seen = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_networkx$algorithms$connectivity$kcutsets, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 105;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[3]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 105;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_5 = Nuitka_Cell_GET(generator->m_closure[0]);
        generator->m_frame->m_frame.f_lineno = 105;
        tmp_assign_source_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_5);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 105;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_H == NULL);
        generator_heap->var_H = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(generator_heap->var_H);
        tmp_expression_value_4 = generator_heap->var_H;
        tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[10]);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 106;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(generator_heap->var_H_nodes) == NULL);
        PyCell_SET(generator_heap->var_H_nodes, tmp_assign_source_6);

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(generator_heap->var_H);
        tmp_expression_value_6 = generator_heap->var_H;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[11]);
        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 107;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[12];
        tmp_assign_source_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 107;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_mapping == NULL);
        generator_heap->var_mapping = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_8;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_networkx$algorithms$connectivity$kcutsets, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 110;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[13]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 110;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(generator_heap->var_H);
        tmp_expression_value_8 = generator_heap->var_H;
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[14]);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_5);

            generator_heap->exception_lineno = 110;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto frame_exception_exit_1;
        }
        generator->m_frame->m_frame.f_lineno = 110;
        tmp_assign_source_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 110;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_original_H_pred == NULL);
        generator_heap->var_original_H_pred = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_networkx$algorithms$connectivity$kcutsets, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 111;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(generator_heap->var_H);
        tmp_args_element_value_7 = generator_heap->var_H;
        tmp_args_element_value_8 = mod_consts[16];
        generator->m_frame->m_frame.f_lineno = 111;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 111;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_R == NULL);
        generator_heap->var_R = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[16];
        tmp_dict_value_1 = mod_consts[16];
        tmp_assign_source_10 = _PyDict_NewPresized( 2 );
        generator_heap->tmp_res = PyDict_SetItem(tmp_assign_source_10, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(generator_heap->tmp_res != 0));
        tmp_dict_key_1 = mod_consts[17];
        CHECK_OBJECT(generator_heap->var_R);
        tmp_dict_value_1 = generator_heap->var_R;
        generator_heap->tmp_res = PyDict_SetItem(tmp_assign_source_10, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(generator_heap->tmp_res != 0));
        assert(generator_heap->var_kwargs == NULL);
        generator_heap->var_kwargs = tmp_assign_source_10;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[18]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 114;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_2 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = GET_STRING_DICT_VALUE(moduledict_networkx$algorithms$connectivity$kcutsets, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_assign_source_11 == NULL)) {
            tmp_assign_source_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 115;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(generator->m_closure[1]);
            PyCell_SET(generator->m_closure[1], tmp_assign_source_11);
            Py_INCREF(tmp_assign_source_11);
            Py_XDECREF(old);
        }

    }
    branch_no_3:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[18]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 116;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_3 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_cmp_expr_right_3 = GET_STRING_DICT_VALUE(moduledict_networkx$algorithms$connectivity$kcutsets, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_cmp_expr_right_3 == NULL)) {
            tmp_cmp_expr_right_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
        }

        if (tmp_cmp_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 116;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    generator_heap->tmp_dictset_value = Py_True;
    CHECK_OBJECT(generator_heap->var_kwargs);
    generator_heap->tmp_dictset_dict = generator_heap->var_kwargs;
    generator_heap->tmp_dictset_key = mod_consts[21];
    assert(PyDict_CheckExact(generator_heap->tmp_dictset_dict));
    generator_heap->tmp_res = PyDict_SetItem(generator_heap->tmp_dictset_dict, generator_heap->tmp_dictset_key, generator_heap->tmp_dictset_value);

    assert(!(generator_heap->tmp_res != 0));
    branch_no_4:;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[22]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 120;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_4 = Nuitka_Cell_GET(generator->m_closure[2]);
        tmp_cmp_expr_right_4 = Py_None;
        tmp_condition_result_5 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_networkx$algorithms$connectivity$kcutsets, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 121;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[23]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 121;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_7);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[3]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 121;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_0_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {
            Py_DECREF(tmp_called_value_7);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[18]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 121;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_dict_value_0_1 = Nuitka_Cell_GET(generator->m_closure[1]);
        generator->m_frame->m_frame.f_lineno = 121;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_7, args, kw_values, mod_consts[24]);
        }

        Py_DECREF(tmp_called_value_7);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 121;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(generator->m_closure[2]);
            PyCell_SET(generator->m_closure[2], tmp_assign_source_12);
            Py_XDECREF(old);
        }

    }
    branch_no_5:;
    {
        PyObject *tmp_assign_source_13;
        // Tried code:
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_called_value_8;
            PyObject *tmp_kw_call_arg_value_0_2;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_kw_call_dict_value_0_2;
            PyObject *tmp_called_value_9;
            PyObject *tmp_kw_call_dict_value_1_1;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_stop_value_1;
            tmp_called_value_8 = LOOKUP_BUILTIN(mod_consts[25]);
            assert(tmp_called_value_8 != NULL);
            if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[3]);
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

                generator_heap->exception_lineno = 124;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto try_except_handler_3;
            }

            tmp_called_instance_2 = Nuitka_Cell_GET(generator->m_closure[0]);
            generator->m_frame->m_frame.f_lineno = 124;
            tmp_kw_call_arg_value_0_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[26]);
            if (tmp_kw_call_arg_value_0_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 124;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto try_except_handler_3;
            }
            tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_networkx$algorithms$connectivity$kcutsets, (Nuitka_StringObject *)mod_consts[27]);

            if (unlikely(tmp_called_value_9 == NULL)) {
                tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[27]);
            }

            if (tmp_called_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                Py_DECREF(tmp_kw_call_arg_value_0_2);

                generator_heap->exception_lineno = 124;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto try_except_handler_3;
            }
            generator->m_frame->m_frame.f_lineno = 124;
            tmp_kw_call_dict_value_0_2 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_9, mod_consts[28]);

            if (tmp_kw_call_dict_value_0_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                Py_DECREF(tmp_kw_call_arg_value_0_2);

                generator_heap->exception_lineno = 124;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto try_except_handler_3;
            }
            tmp_kw_call_dict_value_1_1 = Py_True;
            generator->m_frame->m_frame.f_lineno = 124;
            {
                PyObject *args[] = {tmp_kw_call_arg_value_0_2};
                PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_1};
                tmp_expression_value_10 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_8, args, kw_values, mod_consts[29]);
            }

            Py_DECREF(tmp_kw_call_arg_value_0_2);
            Py_DECREF(tmp_kw_call_dict_value_0_2);
            if (tmp_expression_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 124;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto try_except_handler_3;
            }
            if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {
                Py_DECREF(tmp_expression_value_10);
                FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[22]);
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

                generator_heap->exception_lineno = 124;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto try_except_handler_3;
            }

            tmp_stop_value_1 = Nuitka_Cell_GET(generator->m_closure[2]);
            tmp_subscript_value_2 = MAKE_SLICE_OBJECT1(tmp_stop_value_1);
            assert(!(tmp_subscript_value_2 == NULL));
            tmp_iter_arg_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_10, tmp_subscript_value_2);
            Py_DECREF(tmp_expression_value_10);
            Py_DECREF(tmp_subscript_value_2);
            if (tmp_iter_arg_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 124;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto try_except_handler_3;
            }
            tmp_assign_source_14 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
            Py_DECREF(tmp_iter_arg_2);
            if (tmp_assign_source_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 124;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto try_except_handler_3;
            }
            assert(generator_heap->tmp_setcontraction_1__$0 == NULL);
            generator_heap->tmp_setcontraction_1__$0 = tmp_assign_source_14;
        }
        {
            PyObject *tmp_assign_source_15;
            tmp_assign_source_15 = PySet_New(NULL);
            assert(generator_heap->tmp_setcontraction_1__contraction == NULL);
            generator_heap->tmp_setcontraction_1__contraction = tmp_assign_source_15;
        }
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_16;
            CHECK_OBJECT(generator_heap->tmp_setcontraction_1__$0);
            tmp_next_source_2 = generator_heap->tmp_setcontraction_1__$0;
            tmp_assign_source_16 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_16 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                    generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                    generator_heap->exception_lineno = 124;
                    goto try_except_handler_4;
                }
            }

            {
                PyObject *old = generator_heap->tmp_setcontraction_1__iter_value_0;
                generator_heap->tmp_setcontraction_1__iter_value_0 = tmp_assign_source_16;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_iter_arg_3;
            CHECK_OBJECT(generator_heap->tmp_setcontraction_1__iter_value_0);
            tmp_iter_arg_3 = generator_heap->tmp_setcontraction_1__iter_value_0;
            tmp_assign_source_17 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
            if (tmp_assign_source_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 124;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto try_except_handler_5;
            }
            {
                PyObject *old = generator_heap->tmp_setcontraction$tuple_unpack_1__source_iter;
                generator_heap->tmp_setcontraction$tuple_unpack_1__source_iter = tmp_assign_source_17;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_18;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT(generator_heap->tmp_setcontraction$tuple_unpack_1__source_iter);
            tmp_unpack_1 = generator_heap->tmp_setcontraction$tuple_unpack_1__source_iter;
            tmp_assign_source_18 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 2);
            if (tmp_assign_source_18 == NULL) {
                if (!HAS_ERROR_OCCURRED(tstate)) {
                    generator_heap->exception_type = PyExc_StopIteration;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = NULL;
                    generator_heap->exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                }


                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                generator_heap->exception_lineno = 124;
                goto try_except_handler_6;
            }
            {
                PyObject *old = generator_heap->tmp_setcontraction$tuple_unpack_1__element_1;
                generator_heap->tmp_setcontraction$tuple_unpack_1__element_1 = tmp_assign_source_18;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT(generator_heap->tmp_setcontraction$tuple_unpack_1__source_iter);
            tmp_unpack_2 = generator_heap->tmp_setcontraction$tuple_unpack_1__source_iter;
            tmp_assign_source_19 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 2);
            if (tmp_assign_source_19 == NULL) {
                if (!HAS_ERROR_OCCURRED(tstate)) {
                    generator_heap->exception_type = PyExc_StopIteration;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = NULL;
                    generator_heap->exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                }


                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                generator_heap->exception_lineno = 124;
                goto try_except_handler_6;
            }
            {
                PyObject *old = generator_heap->tmp_setcontraction$tuple_unpack_1__element_2;
                generator_heap->tmp_setcontraction$tuple_unpack_1__element_2 = tmp_assign_source_19;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_1;
            CHECK_OBJECT(generator_heap->tmp_setcontraction$tuple_unpack_1__source_iter);
            tmp_iterator_name_1 = generator_heap->tmp_setcontraction$tuple_unpack_1__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

            generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

            if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
                PyObject *error = GET_ERROR_OCCURRED(tstate);

                if (error != NULL) {
                    if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                        CLEAR_ERROR_OCCURRED(tstate);
                    } else {
                        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                        generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                        generator_heap->exception_lineno = 124;
                        goto try_except_handler_6;
                    }
                }
            } else {
                Py_DECREF(generator_heap->tmp_iterator_attempt);

                generator_heap->exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                generator_heap->exception_value = mod_consts[30];
                Py_INCREF(generator_heap->exception_value);
                generator_heap->exception_tb = NULL;

                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                generator_heap->exception_lineno = 124;
                goto try_except_handler_6;
            }
        }
        goto try_end_2;
        // Exception handler code:
        try_except_handler_6:;
        generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        CHECK_OBJECT(generator_heap->tmp_setcontraction$tuple_unpack_1__source_iter);
        Py_DECREF(generator_heap->tmp_setcontraction$tuple_unpack_1__source_iter);
        generator_heap->tmp_setcontraction$tuple_unpack_1__source_iter = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_2;
        generator_heap->exception_value = generator_heap->exception_keeper_value_2;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

        goto try_except_handler_5;
        // End of try:
        try_end_2:;
        goto try_end_3;
        // Exception handler code:
        try_except_handler_5:;
        generator_heap->exception_keeper_type_3 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_3 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_3 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        Py_XDECREF(generator_heap->tmp_setcontraction$tuple_unpack_1__element_1);
        generator_heap->tmp_setcontraction$tuple_unpack_1__element_1 = NULL;
        Py_XDECREF(generator_heap->tmp_setcontraction$tuple_unpack_1__element_2);
        generator_heap->tmp_setcontraction$tuple_unpack_1__element_2 = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_3;
        generator_heap->exception_value = generator_heap->exception_keeper_value_3;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_3;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

        goto try_except_handler_4;
        // End of try:
        try_end_3:;
        CHECK_OBJECT(generator_heap->tmp_setcontraction$tuple_unpack_1__source_iter);
        Py_DECREF(generator_heap->tmp_setcontraction$tuple_unpack_1__source_iter);
        generator_heap->tmp_setcontraction$tuple_unpack_1__source_iter = NULL;
        {
            PyObject *tmp_assign_source_20;
            CHECK_OBJECT(generator_heap->tmp_setcontraction$tuple_unpack_1__element_1);
            tmp_assign_source_20 = generator_heap->tmp_setcontraction$tuple_unpack_1__element_1;
            {
                PyObject *old = generator_heap->outline_0_var_n;
                generator_heap->outline_0_var_n = tmp_assign_source_20;
                Py_INCREF(generator_heap->outline_0_var_n);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(generator_heap->tmp_setcontraction$tuple_unpack_1__element_1);
        generator_heap->tmp_setcontraction$tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_21;
            CHECK_OBJECT(generator_heap->tmp_setcontraction$tuple_unpack_1__element_2);
            tmp_assign_source_21 = generator_heap->tmp_setcontraction$tuple_unpack_1__element_2;
            {
                PyObject *old = generator_heap->outline_0_var_d;
                generator_heap->outline_0_var_d = tmp_assign_source_21;
                Py_INCREF(generator_heap->outline_0_var_d);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(generator_heap->tmp_setcontraction$tuple_unpack_1__element_2);
        generator_heap->tmp_setcontraction$tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_add_set_1;
            PyObject *tmp_add_value_1;
            CHECK_OBJECT(generator_heap->tmp_setcontraction_1__contraction);
            tmp_add_set_1 = generator_heap->tmp_setcontraction_1__contraction;
            CHECK_OBJECT(generator_heap->outline_0_var_n);
            tmp_add_value_1 = generator_heap->outline_0_var_n;
            assert(PySet_Check(tmp_add_set_1));
            generator_heap->tmp_res = PySet_Add(tmp_add_set_1, tmp_add_value_1);
            if (generator_heap->tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 124;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto try_except_handler_4;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 124;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_4;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(generator_heap->tmp_setcontraction_1__contraction);
        tmp_assign_source_13 = generator_heap->tmp_setcontraction_1__contraction;
        Py_INCREF(tmp_assign_source_13);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT(generator_heap->tmp_setcontraction_1__$0);
        Py_DECREF(generator_heap->tmp_setcontraction_1__$0);
        generator_heap->tmp_setcontraction_1__$0 = NULL;
        CHECK_OBJECT(generator_heap->tmp_setcontraction_1__contraction);
        Py_DECREF(generator_heap->tmp_setcontraction_1__contraction);
        generator_heap->tmp_setcontraction_1__contraction = NULL;
        Py_XDECREF(generator_heap->tmp_setcontraction_1__iter_value_0);
        generator_heap->tmp_setcontraction_1__iter_value_0 = NULL;
        goto try_return_handler_3;
        // Exception handler code:
        try_except_handler_4:;
        generator_heap->exception_keeper_type_4 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_4 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_4 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        CHECK_OBJECT(generator_heap->tmp_setcontraction_1__$0);
        Py_DECREF(generator_heap->tmp_setcontraction_1__$0);
        generator_heap->tmp_setcontraction_1__$0 = NULL;
        CHECK_OBJECT(generator_heap->tmp_setcontraction_1__contraction);
        Py_DECREF(generator_heap->tmp_setcontraction_1__contraction);
        generator_heap->tmp_setcontraction_1__contraction = NULL;
        Py_XDECREF(generator_heap->tmp_setcontraction_1__iter_value_0);
        generator_heap->tmp_setcontraction_1__iter_value_0 = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_4;
        generator_heap->exception_value = generator_heap->exception_keeper_value_4;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_4;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

        goto try_except_handler_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_XDECREF(generator_heap->outline_0_var_n);
        generator_heap->outline_0_var_n = NULL;
        Py_XDECREF(generator_heap->outline_0_var_d);
        generator_heap->outline_0_var_d = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_3:;
        generator_heap->exception_keeper_type_5 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_5 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_5 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_5 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        Py_XDECREF(generator_heap->outline_0_var_n);
        generator_heap->outline_0_var_n = NULL;
        Py_XDECREF(generator_heap->outline_0_var_d);
        generator_heap->outline_0_var_d = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_5;
        generator_heap->exception_value = generator_heap->exception_keeper_value_5;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_5;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_5;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        generator_heap->exception_lineno = 124;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(generator_heap->var_X == NULL);
        generator_heap->var_X = tmp_assign_source_13;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_called_value_10;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        int tmp_truth_name_1;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_networkx$algorithms$connectivity$kcutsets, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[31]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 126;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[3]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 126;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_9 = Nuitka_Cell_GET(generator->m_closure[0]);
        CHECK_OBJECT(generator_heap->var_X);
        tmp_args_element_value_10 = generator_heap->var_X;
        generator->m_frame->m_frame.f_lineno = 126;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_10, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 126;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_call_result_1);

            generator_heap->exception_lineno = 126;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_list_arg_value_1;
        PyObject *tmp_item_value_1;
        CHECK_OBJECT(generator_heap->var_seen);
        tmp_list_arg_value_1 = generator_heap->var_seen;
        CHECK_OBJECT(generator_heap->var_X);
        tmp_item_value_1 = generator_heap->var_X;
        generator_heap->tmp_result = LIST_APPEND0(tmp_list_arg_value_1, tmp_item_value_1);
        assert(!(generator_heap->tmp_result == false));
    }
    {
        PyObject *tmp_expression_value_11;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_2;
        CHECK_OBJECT(generator_heap->var_X);
        tmp_expression_value_11 = generator_heap->var_X;
        Py_INCREF(tmp_expression_value_11);
        generator->m_yield_return_index = 2;
        return tmp_expression_value_11;
        yield_return_2:
        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 128;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto frame_exception_exit_1;
        }
        tmp_yield_result_2 = yield_return_value;
        Py_DECREF(tmp_yield_result_2);
    }
    branch_no_6:;
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_iter_arg_4;
        CHECK_OBJECT(generator_heap->var_X);
        tmp_iter_arg_4 = generator_heap->var_X;
        tmp_assign_source_22 = MAKE_ITERATOR(tstate, tmp_iter_arg_4);
        if (tmp_assign_source_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 130;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->tmp_for_loop_2__for_iterator == NULL);
        generator_heap->tmp_for_loop_2__for_iterator = tmp_assign_source_22;
    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
        tmp_next_source_3 = generator_heap->tmp_for_loop_2__for_iterator;
        tmp_assign_source_23 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_23 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                generator_heap->exception_lineno = 130;
                goto try_except_handler_7;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_2__iter_value;
            generator_heap->tmp_for_loop_2__iter_value = tmp_assign_source_23;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT(generator_heap->tmp_for_loop_2__iter_value);
        tmp_assign_source_24 = generator_heap->tmp_for_loop_2__iter_value;
        {
            PyObject *old = generator_heap->var_x;
            generator_heap->var_x = tmp_assign_source_24;
            Py_INCREF(generator_heap->var_x);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        PyObject *tmp_sub_expr_left_3;
        PyObject *tmp_sub_expr_right_3;
        PyObject *tmp_set_arg_2;
        PyObject *tmp_set_arg_3;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_3;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[3]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 133;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_7;
        }

        tmp_set_arg_2 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_sub_expr_left_3 = PySet_New(tmp_set_arg_2);
        if (tmp_sub_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 133;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_7;
        }
        if (generator_heap->var_X == NULL) {
            Py_DECREF(tmp_sub_expr_left_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[32]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 133;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_7;
        }

        tmp_sub_expr_right_3 = generator_heap->var_X;
        tmp_sub_expr_left_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
        Py_DECREF(tmp_sub_expr_left_3);
        if (tmp_sub_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 133;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_7;
        }
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
            Py_DECREF(tmp_sub_expr_left_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[3]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 133;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_7;
        }

        tmp_expression_value_12 = Nuitka_Cell_GET(generator->m_closure[0]);
        CHECK_OBJECT(generator_heap->var_x);
        tmp_subscript_value_3 = generator_heap->var_x;
        tmp_set_arg_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_3);
        if (tmp_set_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_sub_expr_left_2);

            generator_heap->exception_lineno = 133;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_7;
        }
        tmp_sub_expr_right_2 = PySet_New(tmp_set_arg_3);
        Py_DECREF(tmp_set_arg_3);
        if (tmp_sub_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_sub_expr_left_2);

            generator_heap->exception_lineno = 133;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_7;
        }
        tmp_assign_source_25 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        Py_DECREF(tmp_sub_expr_left_2);
        Py_DECREF(tmp_sub_expr_right_2);
        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 133;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_7;
        }
        {
            PyObject *old = generator_heap->var_non_adjacent;
            generator_heap->var_non_adjacent = tmp_assign_source_25;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_iter_arg_5;
        CHECK_OBJECT(generator_heap->var_non_adjacent);
        tmp_iter_arg_5 = generator_heap->var_non_adjacent;
        tmp_assign_source_26 = MAKE_ITERATOR(tstate, tmp_iter_arg_5);
        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 134;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_7;
        }
        {
            PyObject *old = generator_heap->tmp_for_loop_3__for_iterator;
            generator_heap->tmp_for_loop_3__for_iterator = tmp_assign_source_26;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_4:;
    {
        PyObject *tmp_next_source_4;
        PyObject *tmp_assign_source_27;
        CHECK_OBJECT(generator_heap->tmp_for_loop_3__for_iterator);
        tmp_next_source_4 = generator_heap->tmp_for_loop_3__for_iterator;
        tmp_assign_source_27 = ITERATOR_NEXT(tmp_next_source_4);
        if (tmp_assign_source_27 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_4;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                generator_heap->exception_lineno = 134;
                goto try_except_handler_8;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_3__iter_value;
            generator_heap->tmp_for_loop_3__iter_value = tmp_assign_source_27;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_28;
        CHECK_OBJECT(generator_heap->tmp_for_loop_3__iter_value);
        tmp_assign_source_28 = generator_heap->tmp_for_loop_3__iter_value;
        {
            PyObject *old = generator_heap->var_v;
            generator_heap->var_v = tmp_assign_source_28;
            Py_INCREF(generator_heap->var_v);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[18]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 137;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_8;
        }

        tmp_dircall_arg1_1 = Nuitka_Cell_GET(generator->m_closure[1]);
        if (generator_heap->var_H == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[33]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 137;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_8;
        }

        tmp_tuple_element_1 = generator_heap->var_H;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_string_concat_values_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_format_value_1;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_subscript_value_4;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_string_concat_values_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_format_value_2;
            PyObject *tmp_expression_value_14;
            PyObject *tmp_subscript_value_5;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(generator_heap->var_mapping);
            tmp_expression_value_13 = generator_heap->var_mapping;
            CHECK_OBJECT(generator_heap->var_x);
            tmp_subscript_value_4 = generator_heap->var_x;
            tmp_format_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_4);
            if (tmp_format_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 137;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[34];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 137;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto tuple_build_exception_1;
            }
            tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[35];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_2);
            tmp_tuple_element_1 = PyUnicode_Join(mod_consts[34], tmp_string_concat_values_1);
            Py_DECREF(tmp_string_concat_values_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 137;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_dircall_arg2_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(generator_heap->var_mapping);
            tmp_expression_value_14 = generator_heap->var_mapping;
            CHECK_OBJECT(generator_heap->var_v);
            tmp_subscript_value_5 = generator_heap->var_v;
            tmp_format_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_5);
            if (tmp_format_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 137;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[34];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 137;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto tuple_build_exception_1;
            }
            tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 0, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[36];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 1, tmp_tuple_element_3);
            tmp_tuple_element_1 = PyUnicode_Join(mod_consts[34], tmp_string_concat_values_2);
            Py_DECREF(tmp_string_concat_values_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 137;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_dircall_arg2_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_dircall_arg2_1);
        goto try_except_handler_8;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        if (generator_heap->var_kwargs == NULL) {
            Py_DECREF(tmp_dircall_arg2_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[37]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 137;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_8;
        }

        tmp_dircall_arg3_1 = generator_heap->var_kwargs;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_29 = impl___main__$$$function__4_complex_call_helper_pos_star_dict(tstate, dir_call_args);
        }
        if (tmp_assign_source_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 137;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_8;
        }
        {
            PyObject *old = generator_heap->var_R;
            generator_heap->var_R = tmp_assign_source_29;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_6;
        CHECK_OBJECT(generator_heap->var_R);
        tmp_expression_value_16 = generator_heap->var_R;
        tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[11]);
        if (tmp_expression_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 138;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_8;
        }
        tmp_subscript_value_6 = mod_consts[38];
        tmp_assign_source_30 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_15, tmp_subscript_value_6);
        Py_DECREF(tmp_expression_value_15);
        if (tmp_assign_source_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 138;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_8;
        }
        {
            PyObject *old = generator_heap->var_flow_value;
            generator_heap->var_flow_value = tmp_assign_source_30;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(generator_heap->var_flow_value);
        tmp_cmp_expr_left_5 = generator_heap->var_flow_value;
        if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[22]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 140;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_8;
        }

        tmp_cmp_expr_right_5 = Nuitka_Cell_GET(generator->m_closure[2]);
        tmp_condition_result_7 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 140;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_8;
        }
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    // Tried code:
    {
        PyObject *tmp_assign_source_31;
        // Tried code:
        {
            PyObject *tmp_assign_source_32;
            PyObject *tmp_iter_arg_6;
            PyObject *tmp_called_value_11;
            PyObject *tmp_expression_value_17;
            CHECK_OBJECT(generator_heap->var_R);
            tmp_expression_value_17 = generator_heap->var_R;
            tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[39]);
            if (tmp_called_value_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 143;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto try_except_handler_10;
            }
            generator->m_frame->m_frame.f_lineno = 143;
            tmp_iter_arg_6 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_11, &PyTuple_GET_ITEM(mod_consts[40], 0), mod_consts[41]);
            Py_DECREF(tmp_called_value_11);
            if (tmp_iter_arg_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 143;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto try_except_handler_10;
            }
            tmp_assign_source_32 = MAKE_ITERATOR(tstate, tmp_iter_arg_6);
            Py_DECREF(tmp_iter_arg_6);
            if (tmp_assign_source_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 142;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto try_except_handler_10;
            }
            {
                PyObject *old = generator_heap->tmp_listcomp_1__$0;
                generator_heap->tmp_listcomp_1__$0 = tmp_assign_source_32;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_33;
            tmp_assign_source_33 = MAKE_LIST_EMPTY(0);
            {
                PyObject *old = generator_heap->tmp_listcomp_1__contraction;
                generator_heap->tmp_listcomp_1__contraction = tmp_assign_source_33;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        loop_start_5:;
        {
            PyObject *tmp_next_source_5;
            PyObject *tmp_assign_source_34;
            CHECK_OBJECT(generator_heap->tmp_listcomp_1__$0);
            tmp_next_source_5 = generator_heap->tmp_listcomp_1__$0;
            tmp_assign_source_34 = ITERATOR_NEXT(tmp_next_source_5);
            if (tmp_assign_source_34 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_5;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                    generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                    generator_heap->exception_lineno = 142;
                    goto try_except_handler_11;
                }
            }

            {
                PyObject *old = generator_heap->tmp_listcomp_1__iter_value_0;
                generator_heap->tmp_listcomp_1__iter_value_0 = tmp_assign_source_34;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_35;
            PyObject *tmp_iter_arg_7;
            CHECK_OBJECT(generator_heap->tmp_listcomp_1__iter_value_0);
            tmp_iter_arg_7 = generator_heap->tmp_listcomp_1__iter_value_0;
            tmp_assign_source_35 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_7);
            if (tmp_assign_source_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 142;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto try_except_handler_12;
            }
            {
                PyObject *old = generator_heap->tmp_listcomp$tuple_unpack_1__source_iter;
                generator_heap->tmp_listcomp$tuple_unpack_1__source_iter = tmp_assign_source_35;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_36;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_3 = generator_heap->tmp_listcomp$tuple_unpack_1__source_iter;
            tmp_assign_source_36 = UNPACK_NEXT(tstate, tmp_unpack_3, 0, 3);
            if (tmp_assign_source_36 == NULL) {
                if (!HAS_ERROR_OCCURRED(tstate)) {
                    generator_heap->exception_type = PyExc_StopIteration;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = NULL;
                    generator_heap->exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                }


                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                generator_heap->exception_lineno = 142;
                goto try_except_handler_13;
            }
            {
                PyObject *old = generator_heap->tmp_listcomp$tuple_unpack_1__element_1;
                generator_heap->tmp_listcomp$tuple_unpack_1__element_1 = tmp_assign_source_36;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_37;
            PyObject *tmp_unpack_4;
            CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_4 = generator_heap->tmp_listcomp$tuple_unpack_1__source_iter;
            tmp_assign_source_37 = UNPACK_NEXT(tstate, tmp_unpack_4, 1, 3);
            if (tmp_assign_source_37 == NULL) {
                if (!HAS_ERROR_OCCURRED(tstate)) {
                    generator_heap->exception_type = PyExc_StopIteration;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = NULL;
                    generator_heap->exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                }


                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                generator_heap->exception_lineno = 142;
                goto try_except_handler_13;
            }
            {
                PyObject *old = generator_heap->tmp_listcomp$tuple_unpack_1__element_2;
                generator_heap->tmp_listcomp$tuple_unpack_1__element_2 = tmp_assign_source_37;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_38;
            PyObject *tmp_unpack_5;
            CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_5 = generator_heap->tmp_listcomp$tuple_unpack_1__source_iter;
            tmp_assign_source_38 = UNPACK_NEXT(tstate, tmp_unpack_5, 2, 3);
            if (tmp_assign_source_38 == NULL) {
                if (!HAS_ERROR_OCCURRED(tstate)) {
                    generator_heap->exception_type = PyExc_StopIteration;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = NULL;
                    generator_heap->exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                }


                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                generator_heap->exception_lineno = 142;
                goto try_except_handler_13;
            }
            {
                PyObject *old = generator_heap->tmp_listcomp$tuple_unpack_1__element_3;
                generator_heap->tmp_listcomp$tuple_unpack_1__element_3 = tmp_assign_source_38;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_2;
            CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_iterator_name_2 = generator_heap->tmp_listcomp$tuple_unpack_1__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

            generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

            if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
                PyObject *error = GET_ERROR_OCCURRED(tstate);

                if (error != NULL) {
                    if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                        CLEAR_ERROR_OCCURRED(tstate);
                    } else {
                        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                        generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                        generator_heap->exception_lineno = 142;
                        goto try_except_handler_13;
                    }
                }
            } else {
                Py_DECREF(generator_heap->tmp_iterator_attempt);

                generator_heap->exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                generator_heap->exception_value = mod_consts[42];
                Py_INCREF(generator_heap->exception_value);
                generator_heap->exception_tb = NULL;

                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                generator_heap->exception_lineno = 142;
                goto try_except_handler_13;
            }
        }
        goto try_end_4;
        // Exception handler code:
        try_except_handler_13:;
        generator_heap->exception_keeper_type_6 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_6 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_6 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_6 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_1__source_iter);
        Py_DECREF(generator_heap->tmp_listcomp$tuple_unpack_1__source_iter);
        generator_heap->tmp_listcomp$tuple_unpack_1__source_iter = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_6;
        generator_heap->exception_value = generator_heap->exception_keeper_value_6;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_6;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_6;

        goto try_except_handler_12;
        // End of try:
        try_end_4:;
        goto try_end_5;
        // Exception handler code:
        try_except_handler_12:;
        generator_heap->exception_keeper_type_7 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_7 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_7 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_7 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        Py_XDECREF(generator_heap->tmp_listcomp$tuple_unpack_1__element_1);
        generator_heap->tmp_listcomp$tuple_unpack_1__element_1 = NULL;
        Py_XDECREF(generator_heap->tmp_listcomp$tuple_unpack_1__element_2);
        generator_heap->tmp_listcomp$tuple_unpack_1__element_2 = NULL;
        Py_XDECREF(generator_heap->tmp_listcomp$tuple_unpack_1__element_3);
        generator_heap->tmp_listcomp$tuple_unpack_1__element_3 = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_7;
        generator_heap->exception_value = generator_heap->exception_keeper_value_7;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_7;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_7;

        goto try_except_handler_11;
        // End of try:
        try_end_5:;
        CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_1__source_iter);
        Py_DECREF(generator_heap->tmp_listcomp$tuple_unpack_1__source_iter);
        generator_heap->tmp_listcomp$tuple_unpack_1__source_iter = NULL;
        {
            PyObject *tmp_assign_source_39;
            CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_1__element_1);
            tmp_assign_source_39 = generator_heap->tmp_listcomp$tuple_unpack_1__element_1;
            {
                PyObject *old = generator_heap->outline_1_var_u;
                generator_heap->outline_1_var_u = tmp_assign_source_39;
                Py_INCREF(generator_heap->outline_1_var_u);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(generator_heap->tmp_listcomp$tuple_unpack_1__element_1);
        generator_heap->tmp_listcomp$tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_40;
            CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_1__element_2);
            tmp_assign_source_40 = generator_heap->tmp_listcomp$tuple_unpack_1__element_2;
            {
                PyObject *old = generator_heap->outline_1_var_w;
                generator_heap->outline_1_var_w = tmp_assign_source_40;
                Py_INCREF(generator_heap->outline_1_var_w);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(generator_heap->tmp_listcomp$tuple_unpack_1__element_2);
        generator_heap->tmp_listcomp$tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_assign_source_41;
            CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_1__element_3);
            tmp_assign_source_41 = generator_heap->tmp_listcomp$tuple_unpack_1__element_3;
            {
                PyObject *old = generator_heap->outline_1_var_d;
                generator_heap->outline_1_var_d = tmp_assign_source_41;
                Py_INCREF(generator_heap->outline_1_var_d);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(generator_heap->tmp_listcomp$tuple_unpack_1__element_3);
        generator_heap->tmp_listcomp$tuple_unpack_1__element_3 = NULL;

        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_cmp_expr_left_6;
            PyObject *tmp_cmp_expr_right_6;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_subscript_value_7;
            CHECK_OBJECT(generator_heap->outline_1_var_d);
            tmp_expression_value_18 = generator_heap->outline_1_var_d;
            tmp_subscript_value_7 = mod_consts[43];
            tmp_cmp_expr_left_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_18, tmp_subscript_value_7);
            if (tmp_cmp_expr_left_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 143;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto try_except_handler_11;
            }
            tmp_cmp_expr_right_6 = mod_consts[44];
            tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
            Py_DECREF(tmp_cmp_expr_left_6);
            if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 143;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto try_except_handler_11;
            }
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto branch_yes_8;
            } else {
                goto branch_no_8;
            }
        }
        branch_yes_8:;
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_tuple_element_4;
            CHECK_OBJECT(generator_heap->tmp_listcomp_1__contraction);
            tmp_append_list_1 = generator_heap->tmp_listcomp_1__contraction;
            CHECK_OBJECT(generator_heap->outline_1_var_u);
            tmp_tuple_element_4 = generator_heap->outline_1_var_u;
            tmp_append_value_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_append_value_1, 0, tmp_tuple_element_4);
            CHECK_OBJECT(generator_heap->outline_1_var_w);
            tmp_tuple_element_4 = generator_heap->outline_1_var_w;
            PyTuple_SET_ITEM0(tmp_append_value_1, 1, tmp_tuple_element_4);
            generator_heap->tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (generator_heap->tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 142;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto try_except_handler_11;
            }
        }
        branch_no_8:;
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 142;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_11;
        }
        goto loop_start_5;
        loop_end_5:;
        CHECK_OBJECT(generator_heap->tmp_listcomp_1__contraction);
        tmp_assign_source_31 = generator_heap->tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_31);
        goto try_return_handler_11;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        CHECK_OBJECT(generator_heap->tmp_listcomp_1__$0);
        Py_DECREF(generator_heap->tmp_listcomp_1__$0);
        generator_heap->tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(generator_heap->tmp_listcomp_1__contraction);
        Py_DECREF(generator_heap->tmp_listcomp_1__contraction);
        generator_heap->tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(generator_heap->tmp_listcomp_1__iter_value_0);
        generator_heap->tmp_listcomp_1__iter_value_0 = NULL;
        goto try_return_handler_10;
        // Exception handler code:
        try_except_handler_11:;
        generator_heap->exception_keeper_type_8 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_8 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_8 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_8 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        CHECK_OBJECT(generator_heap->tmp_listcomp_1__$0);
        Py_DECREF(generator_heap->tmp_listcomp_1__$0);
        generator_heap->tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(generator_heap->tmp_listcomp_1__contraction);
        Py_DECREF(generator_heap->tmp_listcomp_1__contraction);
        generator_heap->tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(generator_heap->tmp_listcomp_1__iter_value_0);
        generator_heap->tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_8;
        generator_heap->exception_value = generator_heap->exception_keeper_value_8;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_8;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_8;

        goto try_except_handler_10;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        Py_XDECREF(generator_heap->outline_1_var_u);
        generator_heap->outline_1_var_u = NULL;
        Py_XDECREF(generator_heap->outline_1_var_w);
        generator_heap->outline_1_var_w = NULL;
        Py_XDECREF(generator_heap->outline_1_var_d);
        generator_heap->outline_1_var_d = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_10:;
        generator_heap->exception_keeper_type_9 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_9 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_9 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_9 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        Py_XDECREF(generator_heap->outline_1_var_u);
        generator_heap->outline_1_var_u = NULL;
        Py_XDECREF(generator_heap->outline_1_var_w);
        generator_heap->outline_1_var_w = NULL;
        Py_XDECREF(generator_heap->outline_1_var_d);
        generator_heap->outline_1_var_d = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_9;
        generator_heap->exception_value = generator_heap->exception_keeper_value_9;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_9;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_9;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        generator_heap->exception_lineno = 142;
        goto try_except_handler_9;
        outline_result_2:;
        {
            PyObject *old = generator_heap->tmp_assign_unpack_1__assign_source;
            generator_heap->tmp_assign_unpack_1__assign_source = tmp_assign_source_31;
            Py_XDECREF(old);
        }

    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_9:;
    generator_heap->exception_keeper_type_10 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_10 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_10 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_10 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_assign_unpack_1__assign_source);
    generator_heap->tmp_assign_unpack_1__assign_source = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_10;
    generator_heap->exception_value = generator_heap->exception_keeper_value_10;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_10;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_10;

    goto try_except_handler_8;
    // End of try:
    try_end_6:;
    {
        PyObject *tmp_assign_source_42;
        CHECK_OBJECT(generator_heap->tmp_assign_unpack_1__assign_source);
        tmp_assign_source_42 = generator_heap->tmp_assign_unpack_1__assign_source;
        {
            PyObject *old = generator_heap->var_E1;
            generator_heap->var_E1 = tmp_assign_source_42;
            Py_INCREF(generator_heap->var_E1);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_43;
        CHECK_OBJECT(generator_heap->tmp_assign_unpack_1__assign_source);
        tmp_assign_source_43 = generator_heap->tmp_assign_unpack_1__assign_source;
        {
            PyObject *old = generator_heap->var_flowed_edges;
            generator_heap->var_flowed_edges = tmp_assign_source_43;
            Py_INCREF(generator_heap->var_flowed_edges);
            Py_XDECREF(old);
        }

    }
    CHECK_OBJECT(generator_heap->tmp_assign_unpack_1__assign_source);
    Py_DECREF(generator_heap->tmp_assign_unpack_1__assign_source);
    generator_heap->tmp_assign_unpack_1__assign_source = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_44;
        // Tried code:
        {
            PyObject *tmp_assign_source_45;
            PyObject *tmp_iter_arg_8;
            CHECK_OBJECT(generator_heap->var_E1);
            tmp_iter_arg_8 = generator_heap->var_E1;
            tmp_assign_source_45 = MAKE_ITERATOR(tstate, tmp_iter_arg_8);
            if (tmp_assign_source_45 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 145;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto try_except_handler_15;
            }
            {
                PyObject *old = generator_heap->tmp_setcontraction_2__$0;
                generator_heap->tmp_setcontraction_2__$0 = tmp_assign_source_45;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_46;
            tmp_assign_source_46 = PySet_New(NULL);
            {
                PyObject *old = generator_heap->tmp_setcontraction_2__contraction;
                generator_heap->tmp_setcontraction_2__contraction = tmp_assign_source_46;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        loop_start_6:;
        {
            PyObject *tmp_next_source_6;
            PyObject *tmp_assign_source_47;
            CHECK_OBJECT(generator_heap->tmp_setcontraction_2__$0);
            tmp_next_source_6 = generator_heap->tmp_setcontraction_2__$0;
            tmp_assign_source_47 = ITERATOR_NEXT(tmp_next_source_6);
            if (tmp_assign_source_47 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_6;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                    generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                    generator_heap->exception_lineno = 145;
                    goto try_except_handler_16;
                }
            }

            {
                PyObject *old = generator_heap->tmp_setcontraction_2__iter_value_1;
                generator_heap->tmp_setcontraction_2__iter_value_1 = tmp_assign_source_47;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_48;
            CHECK_OBJECT(generator_heap->tmp_setcontraction_2__iter_value_1);
            tmp_assign_source_48 = generator_heap->tmp_setcontraction_2__iter_value_1;
            {
                PyObject *old = generator_heap->outline_2_var_edge;
                generator_heap->outline_2_var_edge = tmp_assign_source_48;
                Py_INCREF(generator_heap->outline_2_var_edge);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_49;
            PyObject *tmp_iter_arg_9;
            CHECK_OBJECT(generator_heap->outline_2_var_edge);
            tmp_iter_arg_9 = generator_heap->outline_2_var_edge;
            tmp_assign_source_49 = MAKE_ITERATOR(tstate, tmp_iter_arg_9);
            if (tmp_assign_source_49 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 145;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto try_except_handler_16;
            }
            {
                PyObject *old = generator_heap->tmp_setcontraction_2__contraction_iter_0;
                generator_heap->tmp_setcontraction_2__contraction_iter_0 = tmp_assign_source_49;
                Py_XDECREF(old);
            }

        }
        loop_start_7:;
        {
            PyObject *tmp_next_source_7;
            PyObject *tmp_assign_source_50;
            CHECK_OBJECT(generator_heap->tmp_setcontraction_2__contraction_iter_0);
            tmp_next_source_7 = generator_heap->tmp_setcontraction_2__contraction_iter_0;
            tmp_assign_source_50 = ITERATOR_NEXT(tmp_next_source_7);
            if (tmp_assign_source_50 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_7;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                    generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                    generator_heap->exception_lineno = 145;
                    goto try_except_handler_16;
                }
            }

            {
                PyObject *old = generator_heap->tmp_setcontraction_2__iter_value_0;
                generator_heap->tmp_setcontraction_2__iter_value_0 = tmp_assign_source_50;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_51;
            CHECK_OBJECT(generator_heap->tmp_setcontraction_2__iter_value_0);
            tmp_assign_source_51 = generator_heap->tmp_setcontraction_2__iter_value_0;
            {
                PyObject *old = generator_heap->outline_2_var_n;
                generator_heap->outline_2_var_n = tmp_assign_source_51;
                Py_INCREF(generator_heap->outline_2_var_n);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_add_set_2;
            PyObject *tmp_add_value_2;
            CHECK_OBJECT(generator_heap->tmp_setcontraction_2__contraction);
            tmp_add_set_2 = generator_heap->tmp_setcontraction_2__contraction;
            CHECK_OBJECT(generator_heap->outline_2_var_n);
            tmp_add_value_2 = generator_heap->outline_2_var_n;
            assert(PySet_Check(tmp_add_set_2));
            generator_heap->tmp_res = PySet_Add(tmp_add_set_2, tmp_add_value_2);
            if (generator_heap->tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 145;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto try_except_handler_16;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 145;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_16;
        }
        goto loop_start_7;
        loop_end_7:;
        CHECK_OBJECT(generator_heap->tmp_setcontraction_2__contraction_iter_0);
        Py_DECREF(generator_heap->tmp_setcontraction_2__contraction_iter_0);
        generator_heap->tmp_setcontraction_2__contraction_iter_0 = NULL;
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 145;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_16;
        }
        goto loop_start_6;
        loop_end_6:;
        CHECK_OBJECT(generator_heap->tmp_setcontraction_2__contraction);
        tmp_assign_source_44 = generator_heap->tmp_setcontraction_2__contraction;
        Py_INCREF(tmp_assign_source_44);
        goto try_return_handler_16;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_16:;
        CHECK_OBJECT(generator_heap->tmp_setcontraction_2__$0);
        Py_DECREF(generator_heap->tmp_setcontraction_2__$0);
        generator_heap->tmp_setcontraction_2__$0 = NULL;
        CHECK_OBJECT(generator_heap->tmp_setcontraction_2__contraction);
        Py_DECREF(generator_heap->tmp_setcontraction_2__contraction);
        generator_heap->tmp_setcontraction_2__contraction = NULL;
        Py_XDECREF(generator_heap->tmp_setcontraction_2__iter_value_0);
        generator_heap->tmp_setcontraction_2__iter_value_0 = NULL;
        Py_XDECREF(generator_heap->tmp_setcontraction_2__contraction_iter_0);
        generator_heap->tmp_setcontraction_2__contraction_iter_0 = NULL;
        Py_XDECREF(generator_heap->tmp_setcontraction_2__iter_value_1);
        generator_heap->tmp_setcontraction_2__iter_value_1 = NULL;
        goto try_return_handler_15;
        // Exception handler code:
        try_except_handler_16:;
        generator_heap->exception_keeper_type_11 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_11 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_11 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_11 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        CHECK_OBJECT(generator_heap->tmp_setcontraction_2__$0);
        Py_DECREF(generator_heap->tmp_setcontraction_2__$0);
        generator_heap->tmp_setcontraction_2__$0 = NULL;
        CHECK_OBJECT(generator_heap->tmp_setcontraction_2__contraction);
        Py_DECREF(generator_heap->tmp_setcontraction_2__contraction);
        generator_heap->tmp_setcontraction_2__contraction = NULL;
        Py_XDECREF(generator_heap->tmp_setcontraction_2__iter_value_0);
        generator_heap->tmp_setcontraction_2__iter_value_0 = NULL;
        Py_XDECREF(generator_heap->tmp_setcontraction_2__contraction_iter_0);
        generator_heap->tmp_setcontraction_2__contraction_iter_0 = NULL;
        Py_XDECREF(generator_heap->tmp_setcontraction_2__iter_value_1);
        generator_heap->tmp_setcontraction_2__iter_value_1 = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_11;
        generator_heap->exception_value = generator_heap->exception_keeper_value_11;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_11;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_11;

        goto try_except_handler_15;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        Py_XDECREF(generator_heap->outline_2_var_edge);
        generator_heap->outline_2_var_edge = NULL;
        Py_XDECREF(generator_heap->outline_2_var_n);
        generator_heap->outline_2_var_n = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_15:;
        generator_heap->exception_keeper_type_12 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_12 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_12 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_12 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        Py_XDECREF(generator_heap->outline_2_var_edge);
        generator_heap->outline_2_var_edge = NULL;
        Py_XDECREF(generator_heap->outline_2_var_n);
        generator_heap->outline_2_var_n = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_12;
        generator_heap->exception_value = generator_heap->exception_keeper_value_12;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_12;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_12;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        generator_heap->exception_lineno = 145;
        goto try_except_handler_14;
        outline_result_3:;
        {
            PyObject *old = generator_heap->tmp_assign_unpack_2__assign_source;
            generator_heap->tmp_assign_unpack_2__assign_source = tmp_assign_source_44;
            Py_XDECREF(old);
        }

    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_14:;
    generator_heap->exception_keeper_type_13 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_13 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_13 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_13 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_assign_unpack_2__assign_source);
    generator_heap->tmp_assign_unpack_2__assign_source = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_13;
    generator_heap->exception_value = generator_heap->exception_keeper_value_13;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_13;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_13;

    goto try_except_handler_8;
    // End of try:
    try_end_7:;
    {
        PyObject *tmp_assign_source_52;
        CHECK_OBJECT(generator_heap->tmp_assign_unpack_2__assign_source);
        tmp_assign_source_52 = generator_heap->tmp_assign_unpack_2__assign_source;
        {
            PyObject *old = generator_heap->var_VE1;
            generator_heap->var_VE1 = tmp_assign_source_52;
            Py_INCREF(generator_heap->var_VE1);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_53;
        CHECK_OBJECT(generator_heap->tmp_assign_unpack_2__assign_source);
        tmp_assign_source_53 = generator_heap->tmp_assign_unpack_2__assign_source;
        {
            PyObject *old = generator_heap->var_incident_nodes;
            generator_heap->var_incident_nodes = tmp_assign_source_53;
            Py_INCREF(generator_heap->var_incident_nodes);
            Py_XDECREF(old);
        }

    }
    CHECK_OBJECT(generator_heap->tmp_assign_unpack_2__assign_source);
    Py_DECREF(generator_heap->tmp_assign_unpack_2__assign_source);
    generator_heap->tmp_assign_unpack_2__assign_source = NULL;
    {
        PyObject *tmp_assign_source_54;
        // Tried code:
        {
            PyObject *tmp_assign_source_55;
            PyObject *tmp_iter_arg_10;
            PyObject *tmp_called_value_12;
            PyObject *tmp_expression_value_19;
            CHECK_OBJECT(generator_heap->var_R);
            tmp_expression_value_19 = generator_heap->var_R;
            tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[39]);
            if (tmp_called_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 151;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto try_except_handler_17;
            }
            generator->m_frame->m_frame.f_lineno = 151;
            tmp_iter_arg_10 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_12, &PyTuple_GET_ITEM(mod_consts[40], 0), mod_consts[41]);
            Py_DECREF(tmp_called_value_12);
            if (tmp_iter_arg_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 151;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto try_except_handler_17;
            }
            tmp_assign_source_55 = MAKE_ITERATOR(tstate, tmp_iter_arg_10);
            Py_DECREF(tmp_iter_arg_10);
            if (tmp_assign_source_55 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 149;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto try_except_handler_17;
            }
            {
                PyObject *old = generator_heap->tmp_listcomp_2__$0;
                generator_heap->tmp_listcomp_2__$0 = tmp_assign_source_55;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_56;
            tmp_assign_source_56 = MAKE_LIST_EMPTY(0);
            {
                PyObject *old = generator_heap->tmp_listcomp_2__contraction;
                generator_heap->tmp_listcomp_2__contraction = tmp_assign_source_56;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        loop_start_8:;
        {
            PyObject *tmp_next_source_8;
            PyObject *tmp_assign_source_57;
            CHECK_OBJECT(generator_heap->tmp_listcomp_2__$0);
            tmp_next_source_8 = generator_heap->tmp_listcomp_2__$0;
            tmp_assign_source_57 = ITERATOR_NEXT(tmp_next_source_8);
            if (tmp_assign_source_57 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_8;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                    generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                    generator_heap->exception_lineno = 149;
                    goto try_except_handler_18;
                }
            }

            {
                PyObject *old = generator_heap->tmp_listcomp_2__iter_value_0;
                generator_heap->tmp_listcomp_2__iter_value_0 = tmp_assign_source_57;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_58;
            PyObject *tmp_iter_arg_11;
            CHECK_OBJECT(generator_heap->tmp_listcomp_2__iter_value_0);
            tmp_iter_arg_11 = generator_heap->tmp_listcomp_2__iter_value_0;
            tmp_assign_source_58 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_11);
            if (tmp_assign_source_58 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 149;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto try_except_handler_19;
            }
            {
                PyObject *old = generator_heap->tmp_listcomp$tuple_unpack_2__source_iter;
                generator_heap->tmp_listcomp$tuple_unpack_2__source_iter = tmp_assign_source_58;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_59;
            PyObject *tmp_unpack_6;
            CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_2__source_iter);
            tmp_unpack_6 = generator_heap->tmp_listcomp$tuple_unpack_2__source_iter;
            tmp_assign_source_59 = UNPACK_NEXT(tstate, tmp_unpack_6, 0, 3);
            if (tmp_assign_source_59 == NULL) {
                if (!HAS_ERROR_OCCURRED(tstate)) {
                    generator_heap->exception_type = PyExc_StopIteration;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = NULL;
                    generator_heap->exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                }


                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                generator_heap->exception_lineno = 149;
                goto try_except_handler_20;
            }
            {
                PyObject *old = generator_heap->tmp_listcomp$tuple_unpack_2__element_1;
                generator_heap->tmp_listcomp$tuple_unpack_2__element_1 = tmp_assign_source_59;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_60;
            PyObject *tmp_unpack_7;
            CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_2__source_iter);
            tmp_unpack_7 = generator_heap->tmp_listcomp$tuple_unpack_2__source_iter;
            tmp_assign_source_60 = UNPACK_NEXT(tstate, tmp_unpack_7, 1, 3);
            if (tmp_assign_source_60 == NULL) {
                if (!HAS_ERROR_OCCURRED(tstate)) {
                    generator_heap->exception_type = PyExc_StopIteration;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = NULL;
                    generator_heap->exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                }


                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                generator_heap->exception_lineno = 149;
                goto try_except_handler_20;
            }
            {
                PyObject *old = generator_heap->tmp_listcomp$tuple_unpack_2__element_2;
                generator_heap->tmp_listcomp$tuple_unpack_2__element_2 = tmp_assign_source_60;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_61;
            PyObject *tmp_unpack_8;
            CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_2__source_iter);
            tmp_unpack_8 = generator_heap->tmp_listcomp$tuple_unpack_2__source_iter;
            tmp_assign_source_61 = UNPACK_NEXT(tstate, tmp_unpack_8, 2, 3);
            if (tmp_assign_source_61 == NULL) {
                if (!HAS_ERROR_OCCURRED(tstate)) {
                    generator_heap->exception_type = PyExc_StopIteration;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = NULL;
                    generator_heap->exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                }


                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                generator_heap->exception_lineno = 149;
                goto try_except_handler_20;
            }
            {
                PyObject *old = generator_heap->tmp_listcomp$tuple_unpack_2__element_3;
                generator_heap->tmp_listcomp$tuple_unpack_2__element_3 = tmp_assign_source_61;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_3;
            CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_2__source_iter);
            tmp_iterator_name_3 = generator_heap->tmp_listcomp$tuple_unpack_2__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT(tmp_iterator_name_3); assert(HAS_ITERNEXT(tmp_iterator_name_3));

            generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_3)->tp_iternext)(tmp_iterator_name_3);

            if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
                PyObject *error = GET_ERROR_OCCURRED(tstate);

                if (error != NULL) {
                    if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                        CLEAR_ERROR_OCCURRED(tstate);
                    } else {
                        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                        generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                        generator_heap->exception_lineno = 149;
                        goto try_except_handler_20;
                    }
                }
            } else {
                Py_DECREF(generator_heap->tmp_iterator_attempt);

                generator_heap->exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                generator_heap->exception_value = mod_consts[42];
                Py_INCREF(generator_heap->exception_value);
                generator_heap->exception_tb = NULL;

                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                generator_heap->exception_lineno = 149;
                goto try_except_handler_20;
            }
        }
        goto try_end_8;
        // Exception handler code:
        try_except_handler_20:;
        generator_heap->exception_keeper_type_14 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_14 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_14 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_14 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_2__source_iter);
        Py_DECREF(generator_heap->tmp_listcomp$tuple_unpack_2__source_iter);
        generator_heap->tmp_listcomp$tuple_unpack_2__source_iter = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_14;
        generator_heap->exception_value = generator_heap->exception_keeper_value_14;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_14;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_14;

        goto try_except_handler_19;
        // End of try:
        try_end_8:;
        goto try_end_9;
        // Exception handler code:
        try_except_handler_19:;
        generator_heap->exception_keeper_type_15 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_15 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_15 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_15 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        Py_XDECREF(generator_heap->tmp_listcomp$tuple_unpack_2__element_1);
        generator_heap->tmp_listcomp$tuple_unpack_2__element_1 = NULL;
        Py_XDECREF(generator_heap->tmp_listcomp$tuple_unpack_2__element_2);
        generator_heap->tmp_listcomp$tuple_unpack_2__element_2 = NULL;
        Py_XDECREF(generator_heap->tmp_listcomp$tuple_unpack_2__element_3);
        generator_heap->tmp_listcomp$tuple_unpack_2__element_3 = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_15;
        generator_heap->exception_value = generator_heap->exception_keeper_value_15;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_15;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_15;

        goto try_except_handler_18;
        // End of try:
        try_end_9:;
        CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_2__source_iter);
        Py_DECREF(generator_heap->tmp_listcomp$tuple_unpack_2__source_iter);
        generator_heap->tmp_listcomp$tuple_unpack_2__source_iter = NULL;
        {
            PyObject *tmp_assign_source_62;
            CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_2__element_1);
            tmp_assign_source_62 = generator_heap->tmp_listcomp$tuple_unpack_2__element_1;
            {
                PyObject *old = generator_heap->outline_3_var_u;
                generator_heap->outline_3_var_u = tmp_assign_source_62;
                Py_INCREF(generator_heap->outline_3_var_u);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(generator_heap->tmp_listcomp$tuple_unpack_2__element_1);
        generator_heap->tmp_listcomp$tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_63;
            CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_2__element_2);
            tmp_assign_source_63 = generator_heap->tmp_listcomp$tuple_unpack_2__element_2;
            {
                PyObject *old = generator_heap->outline_3_var_w;
                generator_heap->outline_3_var_w = tmp_assign_source_63;
                Py_INCREF(generator_heap->outline_3_var_w);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(generator_heap->tmp_listcomp$tuple_unpack_2__element_2);
        generator_heap->tmp_listcomp$tuple_unpack_2__element_2 = NULL;

        {
            PyObject *tmp_assign_source_64;
            CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_2__element_3);
            tmp_assign_source_64 = generator_heap->tmp_listcomp$tuple_unpack_2__element_3;
            {
                PyObject *old = generator_heap->outline_3_var_d;
                generator_heap->outline_3_var_d = tmp_assign_source_64;
                Py_INCREF(generator_heap->outline_3_var_d);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(generator_heap->tmp_listcomp$tuple_unpack_2__element_3);
        generator_heap->tmp_listcomp$tuple_unpack_2__element_3 = NULL;

        {
            nuitka_bool tmp_condition_result_9;
            int tmp_or_left_truth_1;
            nuitka_bool tmp_or_left_value_1;
            nuitka_bool tmp_or_right_value_1;
            PyObject *tmp_cmp_expr_left_7;
            PyObject *tmp_cmp_expr_right_7;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_subscript_value_8;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_subscript_value_9;
            PyObject *tmp_cmp_expr_left_8;
            PyObject *tmp_cmp_expr_right_8;
            PyObject *tmp_expression_value_22;
            PyObject *tmp_subscript_value_10;
            CHECK_OBJECT(generator_heap->outline_3_var_d);
            tmp_expression_value_20 = generator_heap->outline_3_var_d;
            tmp_subscript_value_8 = mod_consts[16];
            tmp_cmp_expr_left_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_20, tmp_subscript_value_8);
            if (tmp_cmp_expr_left_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 152;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto try_except_handler_18;
            }
            CHECK_OBJECT(generator_heap->outline_3_var_d);
            tmp_expression_value_21 = generator_heap->outline_3_var_d;
            tmp_subscript_value_9 = mod_consts[43];
            tmp_cmp_expr_right_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_21, tmp_subscript_value_9);
            if (tmp_cmp_expr_right_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                Py_DECREF(tmp_cmp_expr_left_7);

                generator_heap->exception_lineno = 152;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto try_except_handler_18;
            }
            tmp_or_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
            Py_DECREF(tmp_cmp_expr_left_7);
            Py_DECREF(tmp_cmp_expr_right_7);
            if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 152;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto try_except_handler_18;
            }
            tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
            if (tmp_or_left_truth_1 == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 152;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto try_except_handler_18;
            }
            if (tmp_or_left_truth_1 == 1) {
                goto or_left_1;
            } else {
                goto or_right_1;
            }
            or_right_1:;
            CHECK_OBJECT(generator_heap->outline_3_var_d);
            tmp_expression_value_22 = generator_heap->outline_3_var_d;
            tmp_subscript_value_10 = mod_consts[16];
            tmp_cmp_expr_left_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_22, tmp_subscript_value_10);
            if (tmp_cmp_expr_left_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 152;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto try_except_handler_18;
            }
            tmp_cmp_expr_right_8 = mod_consts[44];
            tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
            Py_DECREF(tmp_cmp_expr_left_8);
            if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 152;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto try_except_handler_18;
            }
            tmp_condition_result_9 = tmp_or_right_value_1;
            goto or_end_1;
            or_left_1:;
            tmp_condition_result_9 = tmp_or_left_value_1;
            or_end_1:;
            if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
                goto branch_yes_9;
            } else {
                goto branch_no_9;
            }
        }
        branch_yes_9:;
        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            PyObject *tmp_tuple_element_5;
            CHECK_OBJECT(generator_heap->tmp_listcomp_2__contraction);
            tmp_append_list_2 = generator_heap->tmp_listcomp_2__contraction;
            CHECK_OBJECT(generator_heap->outline_3_var_u);
            tmp_tuple_element_5 = generator_heap->outline_3_var_u;
            tmp_append_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_append_value_2, 0, tmp_tuple_element_5);
            CHECK_OBJECT(generator_heap->outline_3_var_w);
            tmp_tuple_element_5 = generator_heap->outline_3_var_w;
            PyTuple_SET_ITEM0(tmp_append_value_2, 1, tmp_tuple_element_5);
            CHECK_OBJECT(generator_heap->outline_3_var_d);
            tmp_tuple_element_5 = generator_heap->outline_3_var_d;
            PyTuple_SET_ITEM0(tmp_append_value_2, 2, tmp_tuple_element_5);
            generator_heap->tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
            if (generator_heap->tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 149;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto try_except_handler_18;
            }
        }
        branch_no_9:;
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 149;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_18;
        }
        goto loop_start_8;
        loop_end_8:;
        CHECK_OBJECT(generator_heap->tmp_listcomp_2__contraction);
        tmp_assign_source_54 = generator_heap->tmp_listcomp_2__contraction;
        Py_INCREF(tmp_assign_source_54);
        goto try_return_handler_18;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_18:;
        CHECK_OBJECT(generator_heap->tmp_listcomp_2__$0);
        Py_DECREF(generator_heap->tmp_listcomp_2__$0);
        generator_heap->tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(generator_heap->tmp_listcomp_2__contraction);
        Py_DECREF(generator_heap->tmp_listcomp_2__contraction);
        generator_heap->tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(generator_heap->tmp_listcomp_2__iter_value_0);
        generator_heap->tmp_listcomp_2__iter_value_0 = NULL;
        goto try_return_handler_17;
        // Exception handler code:
        try_except_handler_18:;
        generator_heap->exception_keeper_type_16 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_16 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_16 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_16 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        CHECK_OBJECT(generator_heap->tmp_listcomp_2__$0);
        Py_DECREF(generator_heap->tmp_listcomp_2__$0);
        generator_heap->tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(generator_heap->tmp_listcomp_2__contraction);
        Py_DECREF(generator_heap->tmp_listcomp_2__contraction);
        generator_heap->tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(generator_heap->tmp_listcomp_2__iter_value_0);
        generator_heap->tmp_listcomp_2__iter_value_0 = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_16;
        generator_heap->exception_value = generator_heap->exception_keeper_value_16;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_16;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_16;

        goto try_except_handler_17;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_17:;
        Py_XDECREF(generator_heap->outline_3_var_u);
        generator_heap->outline_3_var_u = NULL;
        Py_XDECREF(generator_heap->outline_3_var_w);
        generator_heap->outline_3_var_w = NULL;
        Py_XDECREF(generator_heap->outline_3_var_d);
        generator_heap->outline_3_var_d = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_17:;
        generator_heap->exception_keeper_type_17 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_17 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_17 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_17 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        Py_XDECREF(generator_heap->outline_3_var_u);
        generator_heap->outline_3_var_u = NULL;
        Py_XDECREF(generator_heap->outline_3_var_w);
        generator_heap->outline_3_var_w = NULL;
        Py_XDECREF(generator_heap->outline_3_var_d);
        generator_heap->outline_3_var_d = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_17;
        generator_heap->exception_value = generator_heap->exception_keeper_value_17;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_17;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_17;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        generator_heap->exception_lineno = 149;
        goto try_except_handler_8;
        outline_result_4:;
        {
            PyObject *old = generator_heap->var_saturated_edges;
            generator_heap->var_saturated_edges = tmp_assign_source_54;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_11;
        CHECK_OBJECT(generator_heap->var_R);
        tmp_called_instance_3 = generator_heap->var_R;
        CHECK_OBJECT(generator_heap->var_saturated_edges);
        tmp_args_element_value_11 = generator_heap->var_saturated_edges;
        generator->m_frame->m_frame.f_lineno = 154;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[45], tmp_args_element_value_11);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 154;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_12;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_networkx$algorithms$connectivity$kcutsets, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 155;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(generator_heap->var_R);
        tmp_args_element_value_12 = generator_heap->var_R;
        generator->m_frame->m_frame.f_lineno = 155;
        tmp_assign_source_65 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts[46], tmp_args_element_value_12);
        if (tmp_assign_source_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 155;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_8;
        }
        {
            PyObject *old = generator_heap->var_R_closure;
            generator_heap->var_R_closure = tmp_assign_source_65;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_13;
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_networkx$algorithms$connectivity$kcutsets, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 158;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(generator_heap->var_R);
        tmp_args_element_value_13 = generator_heap->var_R;
        generator->m_frame->m_frame.f_lineno = 158;
        tmp_assign_source_66 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_5, mod_consts[47], tmp_args_element_value_13);
        if (tmp_assign_source_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 158;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_8;
        }
        {
            PyObject *old = generator_heap->var_L;
            generator_heap->var_L = tmp_assign_source_66;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_subscript_value_11;
        CHECK_OBJECT(generator_heap->var_L);
        tmp_expression_value_24 = generator_heap->var_L;
        tmp_expression_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[11]);
        if (tmp_expression_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 159;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_8;
        }
        tmp_subscript_value_11 = mod_consts[12];
        tmp_assign_source_67 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_23, tmp_subscript_value_11);
        Py_DECREF(tmp_expression_value_23);
        if (tmp_assign_source_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 159;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_8;
        }
        {
            PyObject *old = generator_heap->var_cmap;
            generator_heap->var_cmap = tmp_assign_source_67;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_called_value_13;
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_networkx$algorithms$connectivity$kcutsets, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[48]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 160;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_8;
        }
        generator->m_frame->m_frame.f_lineno = 160;
        tmp_assign_source_68 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_13, mod_consts[49]);

        if (tmp_assign_source_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 160;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_8;
        }
        {
            PyObject *old = generator_heap->var_inv_cmap;
            generator_heap->var_inv_cmap = tmp_assign_source_68;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_iter_arg_12;
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_25;
        CHECK_OBJECT(generator_heap->var_cmap);
        tmp_expression_value_25 = generator_heap->var_cmap;
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[50]);
        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 161;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_8;
        }
        generator->m_frame->m_frame.f_lineno = 161;
        tmp_iter_arg_12 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_14);
        Py_DECREF(tmp_called_value_14);
        if (tmp_iter_arg_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 161;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_8;
        }
        tmp_assign_source_69 = MAKE_ITERATOR(tstate, tmp_iter_arg_12);
        Py_DECREF(tmp_iter_arg_12);
        if (tmp_assign_source_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 161;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_8;
        }
        {
            PyObject *old = generator_heap->tmp_for_loop_4__for_iterator;
            generator_heap->tmp_for_loop_4__for_iterator = tmp_assign_source_69;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_9:;
    {
        PyObject *tmp_next_source_9;
        PyObject *tmp_assign_source_70;
        CHECK_OBJECT(generator_heap->tmp_for_loop_4__for_iterator);
        tmp_next_source_9 = generator_heap->tmp_for_loop_4__for_iterator;
        tmp_assign_source_70 = ITERATOR_NEXT(tmp_next_source_9);
        if (tmp_assign_source_70 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_9;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                generator_heap->exception_lineno = 161;
                goto try_except_handler_21;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_4__iter_value;
            generator_heap->tmp_for_loop_4__iter_value = tmp_assign_source_70;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_iter_arg_13;
        CHECK_OBJECT(generator_heap->tmp_for_loop_4__iter_value);
        tmp_iter_arg_13 = generator_heap->tmp_for_loop_4__iter_value;
        tmp_assign_source_71 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_13);
        if (tmp_assign_source_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 161;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_22;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__source_iter;
            generator_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_71;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_unpack_9;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_9 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_72 = UNPACK_NEXT(tstate, tmp_unpack_9, 0, 2);
        if (tmp_assign_source_72 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            generator_heap->exception_lineno = 161;
            goto try_except_handler_23;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__element_1;
            generator_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_72;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_unpack_10;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_10 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_73 = UNPACK_NEXT(tstate, tmp_unpack_10, 1, 2);
        if (tmp_assign_source_73 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            generator_heap->exception_lineno = 161;
            goto try_except_handler_23;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__element_2;
            generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_73;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_4;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_4 = generator_heap->tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_4); assert(HAS_ITERNEXT(tmp_iterator_name_4));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_4)->tp_iternext)(tmp_iterator_name_4);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                    generator_heap->exception_lineno = 161;
                    goto try_except_handler_23;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[30];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            generator_heap->exception_lineno = 161;
            goto try_except_handler_23;
        }
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_23:;
    generator_heap->exception_keeper_type_18 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_18 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_18 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_18 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_18;
    generator_heap->exception_value = generator_heap->exception_keeper_value_18;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_18;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_18;

    goto try_except_handler_22;
    // End of try:
    try_end_10:;
    goto try_end_11;
    // Exception handler code:
    try_except_handler_22:;
    generator_heap->exception_keeper_type_19 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_19 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_19 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_19 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_19;
    generator_heap->exception_value = generator_heap->exception_keeper_value_19;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_19;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_19;

    goto try_except_handler_21;
    // End of try:
    try_end_11:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_74;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_1);
        tmp_assign_source_74 = generator_heap->tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = generator_heap->var_n;
            generator_heap->var_n = tmp_assign_source_74;
            Py_INCREF(generator_heap->var_n);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_75;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_2);
        tmp_assign_source_75 = generator_heap->tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = generator_heap->var_scc;
            generator_heap->var_scc = tmp_assign_source_75;
            Py_INCREF(generator_heap->var_scc);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_subscript_value_12;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_14;
        CHECK_OBJECT(generator_heap->var_inv_cmap);
        tmp_expression_value_27 = generator_heap->var_inv_cmap;
        CHECK_OBJECT(generator_heap->var_scc);
        tmp_subscript_value_12 = generator_heap->var_scc;
        tmp_expression_value_26 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_27, tmp_subscript_value_12);
        if (tmp_expression_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 162;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_21;
        }
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[51]);
        Py_DECREF(tmp_expression_value_26);
        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 162;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_21;
        }
        CHECK_OBJECT(generator_heap->var_n);
        tmp_args_element_value_14 = generator_heap->var_n;
        generator->m_frame->m_frame.f_lineno = 162;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_14);
        Py_DECREF(tmp_called_value_15);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 162;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_21;
        }
        Py_DECREF(tmp_call_result_3);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 161;
        generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
        goto try_except_handler_21;
    }
    goto loop_start_9;
    loop_end_9:;
    goto try_end_12;
    // Exception handler code:
    try_except_handler_21:;
    generator_heap->exception_keeper_type_20 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_20 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_20 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_20 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_for_loop_4__iter_value);
    generator_heap->tmp_for_loop_4__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_4__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_4__for_iterator);
    generator_heap->tmp_for_loop_4__for_iterator = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_20;
    generator_heap->exception_value = generator_heap->exception_keeper_value_20;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_20;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_20;

    goto try_except_handler_8;
    // End of try:
    try_end_12:;
    Py_XDECREF(generator_heap->tmp_for_loop_4__iter_value);
    generator_heap->tmp_for_loop_4__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_4__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_4__for_iterator);
    generator_heap->tmp_for_loop_4__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_76;
        // Tried code:
        {
            PyObject *tmp_assign_source_77;
            PyObject *tmp_iter_arg_14;
            CHECK_OBJECT(generator_heap->var_VE1);
            tmp_iter_arg_14 = generator_heap->var_VE1;
            tmp_assign_source_77 = MAKE_ITERATOR(tstate, tmp_iter_arg_14);
            if (tmp_assign_source_77 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 164;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto try_except_handler_24;
            }
            {
                PyObject *old = generator_heap->tmp_setcontraction_3__$0;
                generator_heap->tmp_setcontraction_3__$0 = tmp_assign_source_77;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_78;
            tmp_assign_source_78 = PySet_New(NULL);
            {
                PyObject *old = generator_heap->tmp_setcontraction_3__contraction;
                generator_heap->tmp_setcontraction_3__contraction = tmp_assign_source_78;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        loop_start_10:;
        {
            PyObject *tmp_next_source_10;
            PyObject *tmp_assign_source_79;
            CHECK_OBJECT(generator_heap->tmp_setcontraction_3__$0);
            tmp_next_source_10 = generator_heap->tmp_setcontraction_3__$0;
            tmp_assign_source_79 = ITERATOR_NEXT(tmp_next_source_10);
            if (tmp_assign_source_79 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_10;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                    generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                    generator_heap->exception_lineno = 164;
                    goto try_except_handler_25;
                }
            }

            {
                PyObject *old = generator_heap->tmp_setcontraction_3__iter_value_0;
                generator_heap->tmp_setcontraction_3__iter_value_0 = tmp_assign_source_79;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_80;
            CHECK_OBJECT(generator_heap->tmp_setcontraction_3__iter_value_0);
            tmp_assign_source_80 = generator_heap->tmp_setcontraction_3__iter_value_0;
            {
                PyObject *old = generator_heap->outline_4_var_n;
                generator_heap->outline_4_var_n = tmp_assign_source_80;
                Py_INCREF(generator_heap->outline_4_var_n);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_add_set_3;
            PyObject *tmp_add_value_3;
            PyObject *tmp_expression_value_28;
            PyObject *tmp_subscript_value_13;
            CHECK_OBJECT(generator_heap->tmp_setcontraction_3__contraction);
            tmp_add_set_3 = generator_heap->tmp_setcontraction_3__contraction;
            CHECK_OBJECT(generator_heap->var_cmap);
            tmp_expression_value_28 = generator_heap->var_cmap;
            CHECK_OBJECT(generator_heap->outline_4_var_n);
            tmp_subscript_value_13 = generator_heap->outline_4_var_n;
            tmp_add_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_28, tmp_subscript_value_13);
            if (tmp_add_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 164;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto try_except_handler_25;
            }
            assert(PySet_Check(tmp_add_set_3));
            generator_heap->tmp_res = PySet_Add(tmp_add_set_3, tmp_add_value_3);
            Py_DECREF(tmp_add_value_3);
            if (generator_heap->tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 164;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto try_except_handler_25;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 164;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_25;
        }
        goto loop_start_10;
        loop_end_10:;
        CHECK_OBJECT(generator_heap->tmp_setcontraction_3__contraction);
        tmp_assign_source_76 = generator_heap->tmp_setcontraction_3__contraction;
        Py_INCREF(tmp_assign_source_76);
        goto try_return_handler_25;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_25:;
        CHECK_OBJECT(generator_heap->tmp_setcontraction_3__$0);
        Py_DECREF(generator_heap->tmp_setcontraction_3__$0);
        generator_heap->tmp_setcontraction_3__$0 = NULL;
        CHECK_OBJECT(generator_heap->tmp_setcontraction_3__contraction);
        Py_DECREF(generator_heap->tmp_setcontraction_3__contraction);
        generator_heap->tmp_setcontraction_3__contraction = NULL;
        Py_XDECREF(generator_heap->tmp_setcontraction_3__iter_value_0);
        generator_heap->tmp_setcontraction_3__iter_value_0 = NULL;
        goto try_return_handler_24;
        // Exception handler code:
        try_except_handler_25:;
        generator_heap->exception_keeper_type_21 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_21 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_21 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_21 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        CHECK_OBJECT(generator_heap->tmp_setcontraction_3__$0);
        Py_DECREF(generator_heap->tmp_setcontraction_3__$0);
        generator_heap->tmp_setcontraction_3__$0 = NULL;
        CHECK_OBJECT(generator_heap->tmp_setcontraction_3__contraction);
        Py_DECREF(generator_heap->tmp_setcontraction_3__contraction);
        generator_heap->tmp_setcontraction_3__contraction = NULL;
        Py_XDECREF(generator_heap->tmp_setcontraction_3__iter_value_0);
        generator_heap->tmp_setcontraction_3__iter_value_0 = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_21;
        generator_heap->exception_value = generator_heap->exception_keeper_value_21;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_21;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_21;

        goto try_except_handler_24;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_24:;
        Py_XDECREF(generator_heap->outline_4_var_n);
        generator_heap->outline_4_var_n = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_24:;
        generator_heap->exception_keeper_type_22 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_22 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_22 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_22 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        Py_XDECREF(generator_heap->outline_4_var_n);
        generator_heap->outline_4_var_n = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_22;
        generator_heap->exception_value = generator_heap->exception_keeper_value_22;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_22;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_22;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        generator_heap->exception_lineno = 164;
        goto try_except_handler_8;
        outline_result_5:;
        {
            PyObject *old = generator_heap->var_VE1;
            assert(old != NULL);
            generator_heap->var_VE1 = tmp_assign_source_76;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_iter_arg_15;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_value_15;
        tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_networkx$algorithms$connectivity$kcutsets, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_6 == NULL)) {
            tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 168;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(generator_heap->var_L);
        tmp_args_element_value_15 = generator_heap->var_L;
        generator->m_frame->m_frame.f_lineno = 168;
        tmp_iter_arg_15 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_6, mod_consts[52], tmp_args_element_value_15);
        if (tmp_iter_arg_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 168;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_8;
        }
        tmp_assign_source_81 = MAKE_ITERATOR(tstate, tmp_iter_arg_15);
        Py_DECREF(tmp_iter_arg_15);
        if (tmp_assign_source_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 168;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_8;
        }
        {
            PyObject *old = generator_heap->tmp_for_loop_5__for_iterator;
            generator_heap->tmp_for_loop_5__for_iterator = tmp_assign_source_81;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_11:;
    {
        PyObject *tmp_next_source_11;
        PyObject *tmp_assign_source_82;
        CHECK_OBJECT(generator_heap->tmp_for_loop_5__for_iterator);
        tmp_next_source_11 = generator_heap->tmp_for_loop_5__for_iterator;
        tmp_assign_source_82 = ITERATOR_NEXT(tmp_next_source_11);
        if (tmp_assign_source_82 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_11;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                generator_heap->exception_lineno = 168;
                goto try_except_handler_26;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_5__iter_value;
            generator_heap->tmp_for_loop_5__iter_value = tmp_assign_source_82;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_83;
        CHECK_OBJECT(generator_heap->tmp_for_loop_5__iter_value);
        tmp_assign_source_83 = generator_heap->tmp_for_loop_5__iter_value;
        {
            PyObject *old = generator_heap->var_antichain;
            generator_heap->var_antichain = tmp_assign_source_83;
            Py_INCREF(generator_heap->var_antichain);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_10;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_set_arg_4;
        PyObject *tmp_args_element_value_16;
        CHECK_OBJECT(generator_heap->var_antichain);
        tmp_set_arg_4 = generator_heap->var_antichain;
        tmp_expression_value_29 = PySet_New(tmp_set_arg_4);
        if (tmp_expression_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 171;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_26;
        }
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[53]);
        Py_DECREF(tmp_expression_value_29);
        assert(!(tmp_called_value_16 == NULL));
        if (generator_heap->var_VE1 == NULL) {
            Py_DECREF(tmp_called_value_16);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[54]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 171;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_26;
        }

        tmp_args_element_value_16 = generator_heap->var_VE1;
        generator->m_frame->m_frame.f_lineno = 171;
        tmp_operand_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_16);
        Py_DECREF(tmp_called_value_16);
        if (tmp_operand_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 171;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_26;
        }
        generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (generator_heap->tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 171;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_26;
        }
        tmp_condition_result_10 = (generator_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    goto loop_start_11;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_84;
        tmp_assign_source_84 = PySet_New(NULL);
        {
            PyObject *old = Nuitka_Cell_GET(generator_heap->var_S);
            PyCell_SET(generator_heap->var_S, tmp_assign_source_84);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_iter_arg_16;
        CHECK_OBJECT(generator_heap->var_antichain);
        tmp_iter_arg_16 = generator_heap->var_antichain;
        tmp_assign_source_85 = MAKE_ITERATOR(tstate, tmp_iter_arg_16);
        if (tmp_assign_source_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 179;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_26;
        }
        {
            PyObject *old = generator_heap->tmp_for_loop_6__for_iterator;
            generator_heap->tmp_for_loop_6__for_iterator = tmp_assign_source_85;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_12:;
    {
        PyObject *tmp_next_source_12;
        PyObject *tmp_assign_source_86;
        CHECK_OBJECT(generator_heap->tmp_for_loop_6__for_iterator);
        tmp_next_source_12 = generator_heap->tmp_for_loop_6__for_iterator;
        tmp_assign_source_86 = ITERATOR_NEXT(tmp_next_source_12);
        if (tmp_assign_source_86 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_12;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                generator_heap->exception_lineno = 179;
                goto try_except_handler_27;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_6__iter_value;
            generator_heap->tmp_for_loop_6__iter_value = tmp_assign_source_86;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_87;
        CHECK_OBJECT(generator_heap->tmp_for_loop_6__iter_value);
        tmp_assign_source_87 = generator_heap->tmp_for_loop_6__iter_value;
        {
            PyObject *old = generator_heap->var_scc;
            generator_heap->var_scc = tmp_assign_source_87;
            Py_INCREF(generator_heap->var_scc);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_subscript_value_14;
        if (Nuitka_Cell_GET(generator_heap->var_S) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[55]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 180;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_27;
        }

        tmp_expression_value_30 = Nuitka_Cell_GET(generator_heap->var_S);
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[56]);
        if (tmp_called_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 180;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_27;
        }
        CHECK_OBJECT(generator_heap->var_inv_cmap);
        tmp_expression_value_31 = generator_heap->var_inv_cmap;
        CHECK_OBJECT(generator_heap->var_scc);
        tmp_subscript_value_14 = generator_heap->var_scc;
        tmp_args_element_value_17 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_31, tmp_subscript_value_14);
        if (tmp_args_element_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_17);

            generator_heap->exception_lineno = 180;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_27;
        }
        generator->m_frame->m_frame.f_lineno = 180;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_17);
        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_args_element_value_17);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 180;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_27;
        }
        Py_DECREF(tmp_call_result_4);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 179;
        generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
        goto try_except_handler_27;
    }
    goto loop_start_12;
    loop_end_12:;
    goto try_end_13;
    // Exception handler code:
    try_except_handler_27:;
    generator_heap->exception_keeper_type_23 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_23 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_23 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_23 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_for_loop_6__iter_value);
    generator_heap->tmp_for_loop_6__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_6__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_6__for_iterator);
    generator_heap->tmp_for_loop_6__for_iterator = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_23;
    generator_heap->exception_value = generator_heap->exception_keeper_value_23;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_23;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_23;

    goto try_except_handler_26;
    // End of try:
    try_end_13:;
    Py_XDECREF(generator_heap->tmp_for_loop_6__iter_value);
    generator_heap->tmp_for_loop_6__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_6__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_6__for_iterator);
    generator_heap->tmp_for_loop_6__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_88;
        tmp_assign_source_88 = PySet_New(NULL);
        {
            PyObject *old = generator_heap->var_S_ancestors;
            generator_heap->var_S_ancestors = tmp_assign_source_88;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_iter_arg_17;
        if (Nuitka_Cell_GET(generator_heap->var_S) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[55]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 182;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_26;
        }

        tmp_iter_arg_17 = Nuitka_Cell_GET(generator_heap->var_S);
        tmp_assign_source_89 = MAKE_ITERATOR(tstate, tmp_iter_arg_17);
        if (tmp_assign_source_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 182;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_26;
        }
        {
            PyObject *old = generator_heap->tmp_for_loop_7__for_iterator;
            generator_heap->tmp_for_loop_7__for_iterator = tmp_assign_source_89;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_13:;
    {
        PyObject *tmp_next_source_13;
        PyObject *tmp_assign_source_90;
        CHECK_OBJECT(generator_heap->tmp_for_loop_7__for_iterator);
        tmp_next_source_13 = generator_heap->tmp_for_loop_7__for_iterator;
        tmp_assign_source_90 = ITERATOR_NEXT(tmp_next_source_13);
        if (tmp_assign_source_90 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_13;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                generator_heap->exception_lineno = 182;
                goto try_except_handler_28;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_7__iter_value;
            generator_heap->tmp_for_loop_7__iter_value = tmp_assign_source_90;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_91;
        CHECK_OBJECT(generator_heap->tmp_for_loop_7__iter_value);
        tmp_assign_source_91 = generator_heap->tmp_for_loop_7__iter_value;
        {
            PyObject *old = generator_heap->var_n;
            generator_heap->var_n = tmp_assign_source_91;
            Py_INCREF(generator_heap->var_n);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_subscript_value_15;
        if (generator_heap->var_S_ancestors == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[57]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 183;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_28;
        }

        tmp_expression_value_32 = generator_heap->var_S_ancestors;
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[56]);
        if (tmp_called_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 183;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_28;
        }
        if (generator_heap->var_R_closure == NULL) {
            Py_DECREF(tmp_called_value_18);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[58]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 183;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_28;
        }

        tmp_expression_value_34 = generator_heap->var_R_closure;
        tmp_expression_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts[14]);
        if (tmp_expression_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_18);

            generator_heap->exception_lineno = 183;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_28;
        }
        CHECK_OBJECT(generator_heap->var_n);
        tmp_subscript_value_15 = generator_heap->var_n;
        tmp_args_element_value_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_33, tmp_subscript_value_15);
        Py_DECREF(tmp_expression_value_33);
        if (tmp_args_element_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_18);

            generator_heap->exception_lineno = 183;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_28;
        }
        generator->m_frame->m_frame.f_lineno = 183;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_18);
        Py_DECREF(tmp_called_value_18);
        Py_DECREF(tmp_args_element_value_18);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 183;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_28;
        }
        Py_DECREF(tmp_call_result_5);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 182;
        generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
        goto try_except_handler_28;
    }
    goto loop_start_13;
    loop_end_13:;
    goto try_end_14;
    // Exception handler code:
    try_except_handler_28:;
    generator_heap->exception_keeper_type_24 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_24 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_24 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_24 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_for_loop_7__iter_value);
    generator_heap->tmp_for_loop_7__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_7__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_7__for_iterator);
    generator_heap->tmp_for_loop_7__for_iterator = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_24;
    generator_heap->exception_value = generator_heap->exception_keeper_value_24;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_24;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_24;

    goto try_except_handler_26;
    // End of try:
    try_end_14:;
    Py_XDECREF(generator_heap->tmp_for_loop_7__iter_value);
    generator_heap->tmp_for_loop_7__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_7__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_7__for_iterator);
    generator_heap->tmp_for_loop_7__for_iterator = NULL;
    {
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_19;
        if (Nuitka_Cell_GET(generator_heap->var_S) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[55]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 184;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_26;
        }

        tmp_expression_value_35 = Nuitka_Cell_GET(generator_heap->var_S);
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts[56]);
        if (tmp_called_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 184;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_26;
        }
        if (generator_heap->var_S_ancestors == NULL) {
            Py_DECREF(tmp_called_value_19);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[57]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 184;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_26;
        }

        tmp_args_element_value_19 = generator_heap->var_S_ancestors;
        generator->m_frame->m_frame.f_lineno = 184;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_19);
        Py_DECREF(tmp_called_value_19);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 184;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_26;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        bool tmp_condition_result_11;
        int tmp_or_left_truth_2;
        bool tmp_or_left_value_2;
        bool tmp_or_right_value_2;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        PyObject *tmp_string_concat_values_3;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_format_value_3;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_subscript_value_16;
        PyObject *tmp_format_spec_3;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        PyObject *tmp_string_concat_values_4;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_format_value_4;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_subscript_value_17;
        PyObject *tmp_format_spec_4;
        CHECK_OBJECT(generator_heap->var_mapping);
        tmp_expression_value_36 = generator_heap->var_mapping;
        CHECK_OBJECT(generator_heap->var_x);
        tmp_subscript_value_16 = generator_heap->var_x;
        tmp_format_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_36, tmp_subscript_value_16);
        if (tmp_format_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 185;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_26;
        }
        tmp_format_spec_3 = mod_consts[34];
        tmp_tuple_element_6 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
        Py_DECREF(tmp_format_value_3);
        if (tmp_tuple_element_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 185;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_26;
        }
        tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_string_concat_values_3, 0, tmp_tuple_element_6);
        tmp_tuple_element_6 = mod_consts[35];
        PyTuple_SET_ITEM0(tmp_string_concat_values_3, 1, tmp_tuple_element_6);
        tmp_cmp_expr_left_9 = PyUnicode_Join(mod_consts[34], tmp_string_concat_values_3);
        Py_DECREF(tmp_string_concat_values_3);
        if (tmp_cmp_expr_left_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 185;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_26;
        }
        if (Nuitka_Cell_GET(generator_heap->var_S) == NULL) {
            Py_DECREF(tmp_cmp_expr_left_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[55]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 185;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_26;
        }

        tmp_cmp_expr_right_9 = Nuitka_Cell_GET(generator_heap->var_S);
        generator_heap->tmp_res = PySequence_Contains(tmp_cmp_expr_right_9, tmp_cmp_expr_left_9);
        Py_DECREF(tmp_cmp_expr_left_9);
        if (generator_heap->tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 185;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_26;
        }
        tmp_or_left_value_2 = (generator_heap->tmp_res == 0) ? true : false;
        tmp_or_left_truth_2 = tmp_or_left_value_2 != false ? 1 : 0;
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        CHECK_OBJECT(generator_heap->var_mapping);
        tmp_expression_value_37 = generator_heap->var_mapping;
        CHECK_OBJECT(generator_heap->var_v);
        tmp_subscript_value_17 = generator_heap->var_v;
        tmp_format_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_37, tmp_subscript_value_17);
        if (tmp_format_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 185;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_26;
        }
        tmp_format_spec_4 = mod_consts[34];
        tmp_tuple_element_7 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
        Py_DECREF(tmp_format_value_4);
        if (tmp_tuple_element_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 185;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_26;
        }
        tmp_string_concat_values_4 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_string_concat_values_4, 0, tmp_tuple_element_7);
        tmp_tuple_element_7 = mod_consts[36];
        PyTuple_SET_ITEM0(tmp_string_concat_values_4, 1, tmp_tuple_element_7);
        tmp_cmp_expr_left_10 = PyUnicode_Join(mod_consts[34], tmp_string_concat_values_4);
        Py_DECREF(tmp_string_concat_values_4);
        if (tmp_cmp_expr_left_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 185;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_26;
        }
        if (Nuitka_Cell_GET(generator_heap->var_S) == NULL) {
            Py_DECREF(tmp_cmp_expr_left_10);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[55]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 185;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_26;
        }

        tmp_cmp_expr_right_10 = Nuitka_Cell_GET(generator_heap->var_S);
        generator_heap->tmp_res = PySequence_Contains(tmp_cmp_expr_right_10, tmp_cmp_expr_left_10);
        Py_DECREF(tmp_cmp_expr_left_10);
        if (generator_heap->tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 185;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_26;
        }
        tmp_or_right_value_2 = (generator_heap->tmp_res == 1) ? true : false;
        tmp_condition_result_11 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_condition_result_11 = tmp_or_left_value_2;
        or_end_2:;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    goto loop_start_11;
    branch_no_11:;
    {
        PyObject *tmp_assign_source_92;
        tmp_assign_source_92 = PySet_New(NULL);
        {
            PyObject *old = generator_heap->var_cutset;
            generator_heap->var_cutset = tmp_assign_source_92;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_iter_arg_18;
        if (Nuitka_Cell_GET(generator_heap->var_S) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[55]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 189;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_26;
        }

        tmp_iter_arg_18 = Nuitka_Cell_GET(generator_heap->var_S);
        tmp_assign_source_93 = MAKE_ITERATOR(tstate, tmp_iter_arg_18);
        if (tmp_assign_source_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 189;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_26;
        }
        {
            PyObject *old = generator_heap->tmp_for_loop_8__for_iterator;
            generator_heap->tmp_for_loop_8__for_iterator = tmp_assign_source_93;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_14:;
    {
        PyObject *tmp_next_source_14;
        PyObject *tmp_assign_source_94;
        CHECK_OBJECT(generator_heap->tmp_for_loop_8__for_iterator);
        tmp_next_source_14 = generator_heap->tmp_for_loop_8__for_iterator;
        tmp_assign_source_94 = ITERATOR_NEXT(tmp_next_source_14);
        if (tmp_assign_source_94 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_14;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                generator_heap->exception_lineno = 189;
                goto try_except_handler_29;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_8__iter_value;
            generator_heap->tmp_for_loop_8__iter_value = tmp_assign_source_94;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_95;
        CHECK_OBJECT(generator_heap->tmp_for_loop_8__iter_value);
        tmp_assign_source_95 = generator_heap->tmp_for_loop_8__iter_value;
        {
            PyObject *old = Nuitka_Cell_GET(generator_heap->var_u);
            PyCell_SET(generator_heap->var_u, tmp_assign_source_95);
            Py_INCREF(tmp_assign_source_95);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_20;
        if (generator_heap->var_cutset == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[59]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 190;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_29;
        }

        tmp_expression_value_38 = generator_heap->var_cutset;
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts[56]);
        if (tmp_called_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 190;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_29;
        }
        {
            PyObject *tmp_assign_source_96;
            PyObject *tmp_iter_arg_19;
            PyObject *tmp_expression_value_39;
            PyObject *tmp_subscript_value_18;
            CHECK_OBJECT(generator_heap->var_original_H_pred);
            tmp_expression_value_39 = generator_heap->var_original_H_pred;
            CHECK_OBJECT(Nuitka_Cell_GET(generator_heap->var_u));
            tmp_subscript_value_18 = Nuitka_Cell_GET(generator_heap->var_u);
            tmp_iter_arg_19 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_39, tmp_subscript_value_18);
            if (tmp_iter_arg_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 190;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto try_except_handler_29;
            }
            tmp_assign_source_96 = MAKE_ITERATOR(tstate, tmp_iter_arg_19);
            Py_DECREF(tmp_iter_arg_19);
            if (tmp_assign_source_96 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 190;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto try_except_handler_29;
            }
            {
                PyObject *old = generator_heap->tmp_genexpr_1__$0;
                generator_heap->tmp_genexpr_1__$0 = tmp_assign_source_96;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[3];

            tmp_closure_1[0] = generator_heap->var_S;
            Py_INCREF(tmp_closure_1[0]);
            tmp_closure_1[1] = Nuitka_Cell_New0(generator_heap->tmp_genexpr_1__$0);
            tmp_closure_1[2] = generator_heap->var_u;
            Py_INCREF(tmp_closure_1[2]);

            tmp_args_element_value_20 = MAKE_GENERATOR_networkx$algorithms$connectivity$kcutsets$$$function__1_all_node_cuts$$$genobj__1_all_node_cuts$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_30;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_30:;
        CHECK_OBJECT(generator_heap->tmp_genexpr_1__$0);
        Py_DECREF(generator_heap->tmp_genexpr_1__$0);
        generator_heap->tmp_genexpr_1__$0 = NULL;
        goto outline_result_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_6:;
        generator->m_frame->m_frame.f_lineno = 190;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_20, tmp_args_element_value_20);
        Py_DECREF(tmp_called_value_20);
        Py_DECREF(tmp_args_element_value_20);
        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 190;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_29;
        }
        Py_DECREF(tmp_call_result_7);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 189;
        generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
        goto try_except_handler_29;
    }
    goto loop_start_14;
    loop_end_14:;
    goto try_end_15;
    // Exception handler code:
    try_except_handler_29:;
    generator_heap->exception_keeper_type_25 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_25 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_25 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_25 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_for_loop_8__iter_value);
    generator_heap->tmp_for_loop_8__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_8__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_8__for_iterator);
    generator_heap->tmp_for_loop_8__for_iterator = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_25;
    generator_heap->exception_value = generator_heap->exception_keeper_value_25;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_25;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_25;

    goto try_except_handler_26;
    // End of try:
    try_end_15:;
    Py_XDECREF(generator_heap->tmp_for_loop_8__iter_value);
    generator_heap->tmp_for_loop_8__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_8__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_8__for_iterator);
    generator_heap->tmp_for_loop_8__for_iterator = NULL;
    {
        bool tmp_condition_result_12;
        PyObject *tmp_any_arg_1;
        PyObject *tmp_capi_result_1;
        {
            PyObject *tmp_assign_source_97;
            PyObject *tmp_iter_arg_20;
            if (generator_heap->var_cutset == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[59]);
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

                generator_heap->exception_lineno = 193;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto try_except_handler_26;
            }

            tmp_iter_arg_20 = generator_heap->var_cutset;
            tmp_assign_source_97 = MAKE_ITERATOR(tstate, tmp_iter_arg_20);
            if (tmp_assign_source_97 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 193;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto try_except_handler_26;
            }
            {
                PyObject *old = generator_heap->tmp_genexpr_2__$0;
                generator_heap->tmp_genexpr_2__$0 = tmp_assign_source_97;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_2[2];

            tmp_closure_2[0] = generator_heap->var_H_nodes;
            Py_INCREF(tmp_closure_2[0]);
            tmp_closure_2[1] = Nuitka_Cell_New0(generator_heap->tmp_genexpr_2__$0);

            tmp_any_arg_1 = MAKE_GENERATOR_networkx$algorithms$connectivity$kcutsets$$$function__1_all_node_cuts$$$genobj__1_all_node_cuts$$$genexpr__2_genexpr(tmp_closure_2);

            goto try_return_handler_31;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_31:;
        CHECK_OBJECT(generator_heap->tmp_genexpr_2__$0);
        Py_DECREF(generator_heap->tmp_genexpr_2__$0);
        generator_heap->tmp_genexpr_2__$0 = NULL;
        goto outline_result_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_7:;
        tmp_capi_result_1 = BUILTIN_ANY(tstate, tmp_any_arg_1);
        Py_DECREF(tmp_any_arg_1);
        if (tmp_capi_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 193;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_26;
        }
        tmp_condition_result_12 = CHECK_IF_TRUE(tmp_capi_result_1) == 1;
        Py_DECREF(tmp_capi_result_1);
        if (tmp_condition_result_12 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    goto loop_start_11;
    branch_no_12:;
    {
        PyObject *tmp_assign_source_98;
        // Tried code:
        {
            PyObject *tmp_assign_source_99;
            PyObject *tmp_iter_arg_21;
            if (generator_heap->var_cutset == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[59]);
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

                generator_heap->exception_lineno = 195;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto try_except_handler_32;
            }

            tmp_iter_arg_21 = generator_heap->var_cutset;
            tmp_assign_source_99 = MAKE_ITERATOR(tstate, tmp_iter_arg_21);
            if (tmp_assign_source_99 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 195;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto try_except_handler_32;
            }
            {
                PyObject *old = generator_heap->tmp_setcontraction_4__$0;
                generator_heap->tmp_setcontraction_4__$0 = tmp_assign_source_99;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_100;
            tmp_assign_source_100 = PySet_New(NULL);
            {
                PyObject *old = generator_heap->tmp_setcontraction_4__contraction;
                generator_heap->tmp_setcontraction_4__contraction = tmp_assign_source_100;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        loop_start_15:;
        {
            PyObject *tmp_next_source_15;
            PyObject *tmp_assign_source_101;
            CHECK_OBJECT(generator_heap->tmp_setcontraction_4__$0);
            tmp_next_source_15 = generator_heap->tmp_setcontraction_4__$0;
            tmp_assign_source_101 = ITERATOR_NEXT(tmp_next_source_15);
            if (tmp_assign_source_101 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_15;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                    generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                    generator_heap->exception_lineno = 195;
                    goto try_except_handler_33;
                }
            }

            {
                PyObject *old = generator_heap->tmp_setcontraction_4__iter_value_0;
                generator_heap->tmp_setcontraction_4__iter_value_0 = tmp_assign_source_101;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_102;
            PyObject *tmp_iter_arg_22;
            CHECK_OBJECT(generator_heap->tmp_setcontraction_4__iter_value_0);
            tmp_iter_arg_22 = generator_heap->tmp_setcontraction_4__iter_value_0;
            tmp_assign_source_102 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_22);
            if (tmp_assign_source_102 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 195;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto try_except_handler_34;
            }
            {
                PyObject *old = generator_heap->tmp_setcontraction$tuple_unpack_2__source_iter;
                generator_heap->tmp_setcontraction$tuple_unpack_2__source_iter = tmp_assign_source_102;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_103;
            PyObject *tmp_unpack_11;
            CHECK_OBJECT(generator_heap->tmp_setcontraction$tuple_unpack_2__source_iter);
            tmp_unpack_11 = generator_heap->tmp_setcontraction$tuple_unpack_2__source_iter;
            tmp_assign_source_103 = UNPACK_NEXT(tstate, tmp_unpack_11, 0, 2);
            if (tmp_assign_source_103 == NULL) {
                if (!HAS_ERROR_OCCURRED(tstate)) {
                    generator_heap->exception_type = PyExc_StopIteration;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = NULL;
                    generator_heap->exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                }


                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                generator_heap->exception_lineno = 195;
                goto try_except_handler_35;
            }
            {
                PyObject *old = generator_heap->tmp_setcontraction$tuple_unpack_2__element_1;
                generator_heap->tmp_setcontraction$tuple_unpack_2__element_1 = tmp_assign_source_103;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_104;
            PyObject *tmp_unpack_12;
            CHECK_OBJECT(generator_heap->tmp_setcontraction$tuple_unpack_2__source_iter);
            tmp_unpack_12 = generator_heap->tmp_setcontraction$tuple_unpack_2__source_iter;
            tmp_assign_source_104 = UNPACK_NEXT(tstate, tmp_unpack_12, 1, 2);
            if (tmp_assign_source_104 == NULL) {
                if (!HAS_ERROR_OCCURRED(tstate)) {
                    generator_heap->exception_type = PyExc_StopIteration;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = NULL;
                    generator_heap->exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                }


                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                generator_heap->exception_lineno = 195;
                goto try_except_handler_35;
            }
            {
                PyObject *old = generator_heap->tmp_setcontraction$tuple_unpack_2__element_2;
                generator_heap->tmp_setcontraction$tuple_unpack_2__element_2 = tmp_assign_source_104;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_5;
            CHECK_OBJECT(generator_heap->tmp_setcontraction$tuple_unpack_2__source_iter);
            tmp_iterator_name_5 = generator_heap->tmp_setcontraction$tuple_unpack_2__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT(tmp_iterator_name_5); assert(HAS_ITERNEXT(tmp_iterator_name_5));

            generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_5)->tp_iternext)(tmp_iterator_name_5);

            if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
                PyObject *error = GET_ERROR_OCCURRED(tstate);

                if (error != NULL) {
                    if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                        CLEAR_ERROR_OCCURRED(tstate);
                    } else {
                        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                        generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                        generator_heap->exception_lineno = 195;
                        goto try_except_handler_35;
                    }
                }
            } else {
                Py_DECREF(generator_heap->tmp_iterator_attempt);

                generator_heap->exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                generator_heap->exception_value = mod_consts[30];
                Py_INCREF(generator_heap->exception_value);
                generator_heap->exception_tb = NULL;

                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                generator_heap->exception_lineno = 195;
                goto try_except_handler_35;
            }
        }
        goto try_end_16;
        // Exception handler code:
        try_except_handler_35:;
        generator_heap->exception_keeper_type_26 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_26 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_26 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_26 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        CHECK_OBJECT(generator_heap->tmp_setcontraction$tuple_unpack_2__source_iter);
        Py_DECREF(generator_heap->tmp_setcontraction$tuple_unpack_2__source_iter);
        generator_heap->tmp_setcontraction$tuple_unpack_2__source_iter = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_26;
        generator_heap->exception_value = generator_heap->exception_keeper_value_26;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_26;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_26;

        goto try_except_handler_34;
        // End of try:
        try_end_16:;
        goto try_end_17;
        // Exception handler code:
        try_except_handler_34:;
        generator_heap->exception_keeper_type_27 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_27 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_27 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_27 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        Py_XDECREF(generator_heap->tmp_setcontraction$tuple_unpack_2__element_1);
        generator_heap->tmp_setcontraction$tuple_unpack_2__element_1 = NULL;
        Py_XDECREF(generator_heap->tmp_setcontraction$tuple_unpack_2__element_2);
        generator_heap->tmp_setcontraction$tuple_unpack_2__element_2 = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_27;
        generator_heap->exception_value = generator_heap->exception_keeper_value_27;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_27;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_27;

        goto try_except_handler_33;
        // End of try:
        try_end_17:;
        CHECK_OBJECT(generator_heap->tmp_setcontraction$tuple_unpack_2__source_iter);
        Py_DECREF(generator_heap->tmp_setcontraction$tuple_unpack_2__source_iter);
        generator_heap->tmp_setcontraction$tuple_unpack_2__source_iter = NULL;
        {
            PyObject *tmp_assign_source_105;
            CHECK_OBJECT(generator_heap->tmp_setcontraction$tuple_unpack_2__element_1);
            tmp_assign_source_105 = generator_heap->tmp_setcontraction$tuple_unpack_2__element_1;
            {
                PyObject *old = generator_heap->outline_5_var_u;
                generator_heap->outline_5_var_u = tmp_assign_source_105;
                Py_INCREF(generator_heap->outline_5_var_u);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(generator_heap->tmp_setcontraction$tuple_unpack_2__element_1);
        generator_heap->tmp_setcontraction$tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_106;
            CHECK_OBJECT(generator_heap->tmp_setcontraction$tuple_unpack_2__element_2);
            tmp_assign_source_106 = generator_heap->tmp_setcontraction$tuple_unpack_2__element_2;
            {
                PyObject *old = generator_heap->outline_5_var__;
                generator_heap->outline_5_var__ = tmp_assign_source_106;
                Py_INCREF(generator_heap->outline_5_var__);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(generator_heap->tmp_setcontraction$tuple_unpack_2__element_2);
        generator_heap->tmp_setcontraction$tuple_unpack_2__element_2 = NULL;

        {
            PyObject *tmp_add_set_4;
            PyObject *tmp_add_value_4;
            PyObject *tmp_expression_value_40;
            PyObject *tmp_expression_value_41;
            PyObject *tmp_subscript_value_19;
            PyObject *tmp_subscript_value_20;
            CHECK_OBJECT(generator_heap->tmp_setcontraction_4__contraction);
            tmp_add_set_4 = generator_heap->tmp_setcontraction_4__contraction;
            if (Nuitka_Cell_GET(generator_heap->var_H_nodes) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[60]);
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

                generator_heap->exception_lineno = 195;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto try_except_handler_33;
            }

            tmp_expression_value_41 = Nuitka_Cell_GET(generator_heap->var_H_nodes);
            CHECK_OBJECT(generator_heap->outline_5_var_u);
            tmp_subscript_value_19 = generator_heap->outline_5_var_u;
            tmp_expression_value_40 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_41, tmp_subscript_value_19);
            if (tmp_expression_value_40 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 195;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto try_except_handler_33;
            }
            tmp_subscript_value_20 = mod_consts[61];
            tmp_add_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_40, tmp_subscript_value_20);
            Py_DECREF(tmp_expression_value_40);
            if (tmp_add_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 195;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto try_except_handler_33;
            }
            assert(PySet_Check(tmp_add_set_4));
            generator_heap->tmp_res = PySet_Add(tmp_add_set_4, tmp_add_value_4);
            Py_DECREF(tmp_add_value_4);
            if (generator_heap->tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 195;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto try_except_handler_33;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 195;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_33;
        }
        goto loop_start_15;
        loop_end_15:;
        CHECK_OBJECT(generator_heap->tmp_setcontraction_4__contraction);
        tmp_assign_source_98 = generator_heap->tmp_setcontraction_4__contraction;
        Py_INCREF(tmp_assign_source_98);
        goto try_return_handler_33;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_33:;
        CHECK_OBJECT(generator_heap->tmp_setcontraction_4__$0);
        Py_DECREF(generator_heap->tmp_setcontraction_4__$0);
        generator_heap->tmp_setcontraction_4__$0 = NULL;
        CHECK_OBJECT(generator_heap->tmp_setcontraction_4__contraction);
        Py_DECREF(generator_heap->tmp_setcontraction_4__contraction);
        generator_heap->tmp_setcontraction_4__contraction = NULL;
        Py_XDECREF(generator_heap->tmp_setcontraction_4__iter_value_0);
        generator_heap->tmp_setcontraction_4__iter_value_0 = NULL;
        goto try_return_handler_32;
        // Exception handler code:
        try_except_handler_33:;
        generator_heap->exception_keeper_type_28 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_28 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_28 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_28 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        CHECK_OBJECT(generator_heap->tmp_setcontraction_4__$0);
        Py_DECREF(generator_heap->tmp_setcontraction_4__$0);
        generator_heap->tmp_setcontraction_4__$0 = NULL;
        CHECK_OBJECT(generator_heap->tmp_setcontraction_4__contraction);
        Py_DECREF(generator_heap->tmp_setcontraction_4__contraction);
        generator_heap->tmp_setcontraction_4__contraction = NULL;
        Py_XDECREF(generator_heap->tmp_setcontraction_4__iter_value_0);
        generator_heap->tmp_setcontraction_4__iter_value_0 = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_28;
        generator_heap->exception_value = generator_heap->exception_keeper_value_28;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_28;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_28;

        goto try_except_handler_32;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_32:;
        Py_XDECREF(generator_heap->outline_5_var_u);
        generator_heap->outline_5_var_u = NULL;
        Py_XDECREF(generator_heap->outline_5_var__);
        generator_heap->outline_5_var__ = NULL;
        goto outline_result_8;
        // Exception handler code:
        try_except_handler_32:;
        generator_heap->exception_keeper_type_29 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_29 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_29 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_29 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        Py_XDECREF(generator_heap->outline_5_var_u);
        generator_heap->outline_5_var_u = NULL;
        Py_XDECREF(generator_heap->outline_5_var__);
        generator_heap->outline_5_var__ = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_29;
        generator_heap->exception_value = generator_heap->exception_keeper_value_29;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_29;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_29;

        goto outline_exception_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_6:;
        generator_heap->exception_lineno = 195;
        goto try_except_handler_26;
        outline_result_8:;
        {
            PyObject *old = generator_heap->var_node_cut;
            generator_heap->var_node_cut = tmp_assign_source_98;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        PyObject *tmp_len_arg_2;
        CHECK_OBJECT(generator_heap->var_node_cut);
        tmp_len_arg_2 = generator_heap->var_node_cut;
        tmp_cmp_expr_left_11 = BUILTIN_LEN(tstate, tmp_len_arg_2);
        if (tmp_cmp_expr_left_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 197;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_26;
        }
        if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {
            Py_DECREF(tmp_cmp_expr_left_11);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[22]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 197;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_26;
        }

        tmp_cmp_expr_right_11 = Nuitka_Cell_GET(generator->m_closure[2]);
        tmp_condition_result_13 = RICH_COMPARE_EQ_NBOOL_LONG_OBJECT(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
        Py_DECREF(tmp_cmp_expr_left_11);
        if (tmp_condition_result_13 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 197;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_26;
        }
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        bool tmp_condition_result_14;
        int tmp_or_left_truth_3;
        bool tmp_or_left_value_3;
        bool tmp_or_right_value_3;
        PyObject *tmp_cmp_expr_left_12;
        PyObject *tmp_cmp_expr_right_12;
        PyObject *tmp_cmp_expr_left_13;
        PyObject *tmp_cmp_expr_right_13;
        CHECK_OBJECT(generator_heap->var_x);
        tmp_cmp_expr_left_12 = generator_heap->var_x;
        CHECK_OBJECT(generator_heap->var_node_cut);
        tmp_cmp_expr_right_12 = generator_heap->var_node_cut;
        generator_heap->tmp_res = PySequence_Contains(tmp_cmp_expr_right_12, tmp_cmp_expr_left_12);
        if (generator_heap->tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 200;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_26;
        }
        tmp_or_left_value_3 = (generator_heap->tmp_res == 1) ? true : false;
        tmp_or_left_truth_3 = tmp_or_left_value_3 != false ? 1 : 0;
        if (tmp_or_left_truth_3 == 1) {
            goto or_left_3;
        } else {
            goto or_right_3;
        }
        or_right_3:;
        CHECK_OBJECT(generator_heap->var_v);
        tmp_cmp_expr_left_13 = generator_heap->var_v;
        CHECK_OBJECT(generator_heap->var_node_cut);
        tmp_cmp_expr_right_13 = generator_heap->var_node_cut;
        generator_heap->tmp_res = PySequence_Contains(tmp_cmp_expr_right_13, tmp_cmp_expr_left_13);
        if (generator_heap->tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 200;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_26;
        }
        tmp_or_right_value_3 = (generator_heap->tmp_res == 1) ? true : false;
        tmp_condition_result_14 = tmp_or_right_value_3;
        goto or_end_3;
        or_left_3:;
        tmp_condition_result_14 = tmp_or_left_value_3;
        or_end_3:;
        if (tmp_condition_result_14 != false) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    goto loop_start_11;
    branch_no_14:;
    {
        bool tmp_condition_result_15;
        PyObject *tmp_cmp_expr_left_14;
        PyObject *tmp_cmp_expr_right_14;
        CHECK_OBJECT(generator_heap->var_node_cut);
        tmp_cmp_expr_left_14 = generator_heap->var_node_cut;
        if (generator_heap->var_seen == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[62]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 202;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_26;
        }

        tmp_cmp_expr_right_14 = generator_heap->var_seen;
        generator_heap->tmp_res = PySequence_Contains(tmp_cmp_expr_right_14, tmp_cmp_expr_left_14);
        if (generator_heap->tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 202;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_26;
        }
        tmp_condition_result_15 = (generator_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_expression_value_42;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_3;
        CHECK_OBJECT(generator_heap->var_node_cut);
        tmp_expression_value_42 = generator_heap->var_node_cut;
        Py_INCREF(tmp_expression_value_42);
        generator->m_yield_return_index = 3;
        return tmp_expression_value_42;
        yield_return_3:
        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 203;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_26;
        }
        tmp_yield_result_3 = yield_return_value;
        Py_DECREF(tmp_yield_result_3);
    }
    {
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_21;
        if (generator_heap->var_seen == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[62]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 204;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_26;
        }

        tmp_expression_value_43 = generator_heap->var_seen;
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts[51]);
        if (tmp_called_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 204;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_26;
        }
        CHECK_OBJECT(generator_heap->var_node_cut);
        tmp_args_element_value_21 = generator_heap->var_node_cut;
        generator->m_frame->m_frame.f_lineno = 204;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_21, tmp_args_element_value_21);
        Py_DECREF(tmp_called_value_21);
        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 204;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_26;
        }
        Py_DECREF(tmp_call_result_8);
    }
    branch_no_15:;
    branch_no_13:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 168;
        generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
        goto try_except_handler_26;
    }
    goto loop_start_11;
    loop_end_11:;
    goto try_end_18;
    // Exception handler code:
    try_except_handler_26:;
    generator_heap->exception_keeper_type_30 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_30 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_30 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_30 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_for_loop_5__iter_value);
    generator_heap->tmp_for_loop_5__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_5__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_5__for_iterator);
    generator_heap->tmp_for_loop_5__for_iterator = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_30;
    generator_heap->exception_value = generator_heap->exception_keeper_value_30;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_30;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_30;

    goto try_except_handler_8;
    // End of try:
    try_end_18:;
    Py_XDECREF(generator_heap->tmp_for_loop_5__iter_value);
    generator_heap->tmp_for_loop_5__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_5__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_5__for_iterator);
    generator_heap->tmp_for_loop_5__for_iterator = NULL;
    {
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_string_concat_values_5;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_format_value_5;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_subscript_value_21;
        PyObject *tmp_format_spec_5;
        PyObject *tmp_kwargs_value_1;
        if (generator_heap->var_H == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[33]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 213;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_8;
        }

        tmp_expression_value_44 = generator_heap->var_H;
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts[63]);
        if (tmp_called_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 213;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(generator_heap->var_mapping);
        tmp_expression_value_45 = generator_heap->var_mapping;
        CHECK_OBJECT(generator_heap->var_x);
        tmp_subscript_value_21 = generator_heap->var_x;
        tmp_format_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_45, tmp_subscript_value_21);
        if (tmp_format_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_22);

            generator_heap->exception_lineno = 213;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_8;
        }
        tmp_format_spec_5 = mod_consts[34];
        tmp_tuple_element_9 = BUILTIN_FORMAT(tstate, tmp_format_value_5, tmp_format_spec_5);
        Py_DECREF(tmp_format_value_5);
        if (tmp_tuple_element_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_22);

            generator_heap->exception_lineno = 213;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_8;
        }
        tmp_string_concat_values_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_string_concat_values_5, 0, tmp_tuple_element_9);
        tmp_tuple_element_9 = mod_consts[35];
        PyTuple_SET_ITEM0(tmp_string_concat_values_5, 1, tmp_tuple_element_9);
        tmp_tuple_element_8 = PyUnicode_Join(mod_consts[34], tmp_string_concat_values_5);
        Py_DECREF(tmp_string_concat_values_5);
        if (tmp_tuple_element_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_22);

            generator_heap->exception_lineno = 213;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_8;
        }
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_string_concat_values_6;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_format_value_6;
            PyObject *tmp_expression_value_46;
            PyObject *tmp_subscript_value_22;
            PyObject *tmp_format_spec_6;
            PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_8);
            CHECK_OBJECT(generator_heap->var_mapping);
            tmp_expression_value_46 = generator_heap->var_mapping;
            CHECK_OBJECT(generator_heap->var_v);
            tmp_subscript_value_22 = generator_heap->var_v;
            tmp_format_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_46, tmp_subscript_value_22);
            if (tmp_format_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 213;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto tuple_build_exception_2;
            }
            tmp_format_spec_6 = mod_consts[34];
            tmp_tuple_element_10 = BUILTIN_FORMAT(tstate, tmp_format_value_6, tmp_format_spec_6);
            Py_DECREF(tmp_format_value_6);
            if (tmp_tuple_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 213;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto tuple_build_exception_2;
            }
            tmp_string_concat_values_6 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_string_concat_values_6, 0, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[36];
            PyTuple_SET_ITEM0(tmp_string_concat_values_6, 1, tmp_tuple_element_10);
            tmp_tuple_element_8 = PyUnicode_Join(mod_consts[34], tmp_string_concat_values_6);
            Py_DECREF(tmp_string_concat_values_6);
            if (tmp_tuple_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 213;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_args_value_1, 1, tmp_tuple_element_8);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_called_value_22);
        Py_DECREF(tmp_args_value_1);
        goto try_except_handler_8;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[64]);
        generator->m_frame->m_frame.f_lineno = 213;
        tmp_call_result_9 = CALL_FUNCTION(tstate, tmp_called_value_22, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_22);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_call_result_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 213;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_string_concat_values_7;
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_format_value_7;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_subscript_value_23;
        PyObject *tmp_format_spec_7;
        PyObject *tmp_kwargs_value_2;
        if (generator_heap->var_H == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[33]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 214;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_8;
        }

        tmp_expression_value_47 = generator_heap->var_H;
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts[63]);
        if (tmp_called_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 214;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(generator_heap->var_mapping);
        tmp_expression_value_48 = generator_heap->var_mapping;
        CHECK_OBJECT(generator_heap->var_v);
        tmp_subscript_value_23 = generator_heap->var_v;
        tmp_format_value_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_48, tmp_subscript_value_23);
        if (tmp_format_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_23);

            generator_heap->exception_lineno = 214;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_8;
        }
        tmp_format_spec_7 = mod_consts[34];
        tmp_tuple_element_12 = BUILTIN_FORMAT(tstate, tmp_format_value_7, tmp_format_spec_7);
        Py_DECREF(tmp_format_value_7);
        if (tmp_tuple_element_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_23);

            generator_heap->exception_lineno = 214;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_8;
        }
        tmp_string_concat_values_7 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_string_concat_values_7, 0, tmp_tuple_element_12);
        tmp_tuple_element_12 = mod_consts[35];
        PyTuple_SET_ITEM0(tmp_string_concat_values_7, 1, tmp_tuple_element_12);
        tmp_tuple_element_11 = PyUnicode_Join(mod_consts[34], tmp_string_concat_values_7);
        Py_DECREF(tmp_string_concat_values_7);
        if (tmp_tuple_element_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_23);

            generator_heap->exception_lineno = 214;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_8;
        }
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_string_concat_values_8;
            PyObject *tmp_tuple_element_13;
            PyObject *tmp_format_value_8;
            PyObject *tmp_expression_value_49;
            PyObject *tmp_subscript_value_24;
            PyObject *tmp_format_spec_8;
            PyTuple_SET_ITEM(tmp_args_value_2, 0, tmp_tuple_element_11);
            CHECK_OBJECT(generator_heap->var_mapping);
            tmp_expression_value_49 = generator_heap->var_mapping;
            CHECK_OBJECT(generator_heap->var_x);
            tmp_subscript_value_24 = generator_heap->var_x;
            tmp_format_value_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_49, tmp_subscript_value_24);
            if (tmp_format_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 214;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto tuple_build_exception_3;
            }
            tmp_format_spec_8 = mod_consts[34];
            tmp_tuple_element_13 = BUILTIN_FORMAT(tstate, tmp_format_value_8, tmp_format_spec_8);
            Py_DECREF(tmp_format_value_8);
            if (tmp_tuple_element_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 214;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto tuple_build_exception_3;
            }
            tmp_string_concat_values_8 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_string_concat_values_8, 0, tmp_tuple_element_13);
            tmp_tuple_element_13 = mod_consts[36];
            PyTuple_SET_ITEM0(tmp_string_concat_values_8, 1, tmp_tuple_element_13);
            tmp_tuple_element_11 = PyUnicode_Join(mod_consts[34], tmp_string_concat_values_8);
            Py_DECREF(tmp_string_concat_values_8);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 214;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_args_value_2, 1, tmp_tuple_element_11);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_args_value_2);
        goto try_except_handler_8;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_kwargs_value_2 = DICT_COPY(mod_consts[64]);
        generator->m_frame->m_frame.f_lineno = 214;
        tmp_call_result_10 = CALL_FUNCTION(tstate, tmp_called_value_23, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_called_value_23);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_call_result_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 214;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_14;
        PyObject *tmp_string_concat_values_9;
        PyObject *tmp_tuple_element_15;
        PyObject *tmp_format_value_9;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_subscript_value_25;
        PyObject *tmp_format_spec_9;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(generator_heap->var_R);
        tmp_expression_value_50 = generator_heap->var_R;
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts[63]);
        if (tmp_called_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 216;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(generator_heap->var_mapping);
        tmp_expression_value_51 = generator_heap->var_mapping;
        CHECK_OBJECT(generator_heap->var_x);
        tmp_subscript_value_25 = generator_heap->var_x;
        tmp_format_value_9 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_51, tmp_subscript_value_25);
        if (tmp_format_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_24);

            generator_heap->exception_lineno = 216;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_8;
        }
        tmp_format_spec_9 = mod_consts[34];
        tmp_tuple_element_15 = BUILTIN_FORMAT(tstate, tmp_format_value_9, tmp_format_spec_9);
        Py_DECREF(tmp_format_value_9);
        if (tmp_tuple_element_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_24);

            generator_heap->exception_lineno = 216;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_8;
        }
        tmp_string_concat_values_9 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_string_concat_values_9, 0, tmp_tuple_element_15);
        tmp_tuple_element_15 = mod_consts[35];
        PyTuple_SET_ITEM0(tmp_string_concat_values_9, 1, tmp_tuple_element_15);
        tmp_tuple_element_14 = PyUnicode_Join(mod_consts[34], tmp_string_concat_values_9);
        Py_DECREF(tmp_string_concat_values_9);
        if (tmp_tuple_element_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_24);

            generator_heap->exception_lineno = 216;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_8;
        }
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_string_concat_values_10;
            PyObject *tmp_tuple_element_16;
            PyObject *tmp_format_value_10;
            PyObject *tmp_expression_value_52;
            PyObject *tmp_subscript_value_26;
            PyObject *tmp_format_spec_10;
            PyTuple_SET_ITEM(tmp_args_value_3, 0, tmp_tuple_element_14);
            CHECK_OBJECT(generator_heap->var_mapping);
            tmp_expression_value_52 = generator_heap->var_mapping;
            CHECK_OBJECT(generator_heap->var_v);
            tmp_subscript_value_26 = generator_heap->var_v;
            tmp_format_value_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_52, tmp_subscript_value_26);
            if (tmp_format_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 216;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto tuple_build_exception_4;
            }
            tmp_format_spec_10 = mod_consts[34];
            tmp_tuple_element_16 = BUILTIN_FORMAT(tstate, tmp_format_value_10, tmp_format_spec_10);
            Py_DECREF(tmp_format_value_10);
            if (tmp_tuple_element_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 216;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto tuple_build_exception_4;
            }
            tmp_string_concat_values_10 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_string_concat_values_10, 0, tmp_tuple_element_16);
            tmp_tuple_element_16 = mod_consts[36];
            PyTuple_SET_ITEM0(tmp_string_concat_values_10, 1, tmp_tuple_element_16);
            tmp_tuple_element_14 = PyUnicode_Join(mod_consts[34], tmp_string_concat_values_10);
            Py_DECREF(tmp_string_concat_values_10);
            if (tmp_tuple_element_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 216;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_args_value_3, 1, tmp_tuple_element_14);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_called_value_24);
        Py_DECREF(tmp_args_value_3);
        goto try_except_handler_8;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_kwargs_value_3 = DICT_COPY(mod_consts[64]);
        generator->m_frame->m_frame.f_lineno = 216;
        tmp_call_result_11 = CALL_FUNCTION(tstate, tmp_called_value_24, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_24);
        Py_DECREF(tmp_args_value_3);
        Py_DECREF(tmp_kwargs_value_3);
        if (tmp_call_result_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 216;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_value_4;
        PyObject *tmp_tuple_element_17;
        PyObject *tmp_string_concat_values_11;
        PyObject *tmp_tuple_element_18;
        PyObject *tmp_format_value_11;
        PyObject *tmp_expression_value_54;
        PyObject *tmp_subscript_value_27;
        PyObject *tmp_format_spec_11;
        PyObject *tmp_kwargs_value_4;
        CHECK_OBJECT(generator_heap->var_R);
        tmp_expression_value_53 = generator_heap->var_R;
        tmp_called_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts[63]);
        if (tmp_called_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 217;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(generator_heap->var_mapping);
        tmp_expression_value_54 = generator_heap->var_mapping;
        CHECK_OBJECT(generator_heap->var_v);
        tmp_subscript_value_27 = generator_heap->var_v;
        tmp_format_value_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_54, tmp_subscript_value_27);
        if (tmp_format_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_25);

            generator_heap->exception_lineno = 217;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_8;
        }
        tmp_format_spec_11 = mod_consts[34];
        tmp_tuple_element_18 = BUILTIN_FORMAT(tstate, tmp_format_value_11, tmp_format_spec_11);
        Py_DECREF(tmp_format_value_11);
        if (tmp_tuple_element_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_25);

            generator_heap->exception_lineno = 217;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_8;
        }
        tmp_string_concat_values_11 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_string_concat_values_11, 0, tmp_tuple_element_18);
        tmp_tuple_element_18 = mod_consts[36];
        PyTuple_SET_ITEM0(tmp_string_concat_values_11, 1, tmp_tuple_element_18);
        tmp_tuple_element_17 = PyUnicode_Join(mod_consts[34], tmp_string_concat_values_11);
        Py_DECREF(tmp_string_concat_values_11);
        if (tmp_tuple_element_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_25);

            generator_heap->exception_lineno = 217;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_8;
        }
        tmp_args_value_4 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_string_concat_values_12;
            PyObject *tmp_tuple_element_19;
            PyObject *tmp_format_value_12;
            PyObject *tmp_expression_value_55;
            PyObject *tmp_subscript_value_28;
            PyObject *tmp_format_spec_12;
            PyTuple_SET_ITEM(tmp_args_value_4, 0, tmp_tuple_element_17);
            CHECK_OBJECT(generator_heap->var_mapping);
            tmp_expression_value_55 = generator_heap->var_mapping;
            CHECK_OBJECT(generator_heap->var_x);
            tmp_subscript_value_28 = generator_heap->var_x;
            tmp_format_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_55, tmp_subscript_value_28);
            if (tmp_format_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 217;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto tuple_build_exception_5;
            }
            tmp_format_spec_12 = mod_consts[34];
            tmp_tuple_element_19 = BUILTIN_FORMAT(tstate, tmp_format_value_12, tmp_format_spec_12);
            Py_DECREF(tmp_format_value_12);
            if (tmp_tuple_element_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 217;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto tuple_build_exception_5;
            }
            tmp_string_concat_values_12 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_string_concat_values_12, 0, tmp_tuple_element_19);
            tmp_tuple_element_19 = mod_consts[35];
            PyTuple_SET_ITEM0(tmp_string_concat_values_12, 1, tmp_tuple_element_19);
            tmp_tuple_element_17 = PyUnicode_Join(mod_consts[34], tmp_string_concat_values_12);
            Py_DECREF(tmp_string_concat_values_12);
            if (tmp_tuple_element_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 217;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_args_value_4, 1, tmp_tuple_element_17);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_called_value_25);
        Py_DECREF(tmp_args_value_4);
        goto try_except_handler_8;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_kwargs_value_4 = DICT_COPY(mod_consts[65]);
        generator->m_frame->m_frame.f_lineno = 217;
        tmp_call_result_12 = CALL_FUNCTION(tstate, tmp_called_value_25, tmp_args_value_4, tmp_kwargs_value_4);
        Py_DECREF(tmp_called_value_25);
        Py_DECREF(tmp_args_value_4);
        Py_DECREF(tmp_kwargs_value_4);
        if (tmp_call_result_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 217;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_called_value_26;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_call_result_13;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_20;
        PyObject *tmp_string_concat_values_13;
        PyObject *tmp_tuple_element_21;
        PyObject *tmp_format_value_13;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_subscript_value_29;
        PyObject *tmp_format_spec_13;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(generator_heap->var_R);
        tmp_expression_value_56 = generator_heap->var_R;
        tmp_called_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts[63]);
        if (tmp_called_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 218;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(generator_heap->var_mapping);
        tmp_expression_value_57 = generator_heap->var_mapping;
        CHECK_OBJECT(generator_heap->var_v);
        tmp_subscript_value_29 = generator_heap->var_v;
        tmp_format_value_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_57, tmp_subscript_value_29);
        if (tmp_format_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_26);

            generator_heap->exception_lineno = 218;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_8;
        }
        tmp_format_spec_13 = mod_consts[34];
        tmp_tuple_element_21 = BUILTIN_FORMAT(tstate, tmp_format_value_13, tmp_format_spec_13);
        Py_DECREF(tmp_format_value_13);
        if (tmp_tuple_element_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_26);

            generator_heap->exception_lineno = 218;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_8;
        }
        tmp_string_concat_values_13 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_string_concat_values_13, 0, tmp_tuple_element_21);
        tmp_tuple_element_21 = mod_consts[35];
        PyTuple_SET_ITEM0(tmp_string_concat_values_13, 1, tmp_tuple_element_21);
        tmp_tuple_element_20 = PyUnicode_Join(mod_consts[34], tmp_string_concat_values_13);
        Py_DECREF(tmp_string_concat_values_13);
        if (tmp_tuple_element_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_26);

            generator_heap->exception_lineno = 218;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_8;
        }
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_string_concat_values_14;
            PyObject *tmp_tuple_element_22;
            PyObject *tmp_format_value_14;
            PyObject *tmp_expression_value_58;
            PyObject *tmp_subscript_value_30;
            PyObject *tmp_format_spec_14;
            PyTuple_SET_ITEM(tmp_args_value_5, 0, tmp_tuple_element_20);
            CHECK_OBJECT(generator_heap->var_mapping);
            tmp_expression_value_58 = generator_heap->var_mapping;
            CHECK_OBJECT(generator_heap->var_x);
            tmp_subscript_value_30 = generator_heap->var_x;
            tmp_format_value_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_58, tmp_subscript_value_30);
            if (tmp_format_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 218;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto tuple_build_exception_6;
            }
            tmp_format_spec_14 = mod_consts[34];
            tmp_tuple_element_22 = BUILTIN_FORMAT(tstate, tmp_format_value_14, tmp_format_spec_14);
            Py_DECREF(tmp_format_value_14);
            if (tmp_tuple_element_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 218;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto tuple_build_exception_6;
            }
            tmp_string_concat_values_14 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_string_concat_values_14, 0, tmp_tuple_element_22);
            tmp_tuple_element_22 = mod_consts[36];
            PyTuple_SET_ITEM0(tmp_string_concat_values_14, 1, tmp_tuple_element_22);
            tmp_tuple_element_20 = PyUnicode_Join(mod_consts[34], tmp_string_concat_values_14);
            Py_DECREF(tmp_string_concat_values_14);
            if (tmp_tuple_element_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 218;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_args_value_5, 1, tmp_tuple_element_20);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_called_value_26);
        Py_DECREF(tmp_args_value_5);
        goto try_except_handler_8;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_kwargs_value_5 = DICT_COPY(mod_consts[64]);
        generator->m_frame->m_frame.f_lineno = 218;
        tmp_call_result_13 = CALL_FUNCTION(tstate, tmp_called_value_26, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_26);
        Py_DECREF(tmp_args_value_5);
        Py_DECREF(tmp_kwargs_value_5);
        if (tmp_call_result_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 218;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        PyObject *tmp_called_value_27;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_call_result_14;
        PyObject *tmp_args_value_6;
        PyObject *tmp_tuple_element_23;
        PyObject *tmp_string_concat_values_15;
        PyObject *tmp_tuple_element_24;
        PyObject *tmp_format_value_15;
        PyObject *tmp_expression_value_60;
        PyObject *tmp_subscript_value_31;
        PyObject *tmp_format_spec_15;
        PyObject *tmp_kwargs_value_6;
        CHECK_OBJECT(generator_heap->var_R);
        tmp_expression_value_59 = generator_heap->var_R;
        tmp_called_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts[63]);
        if (tmp_called_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 219;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(generator_heap->var_mapping);
        tmp_expression_value_60 = generator_heap->var_mapping;
        CHECK_OBJECT(generator_heap->var_x);
        tmp_subscript_value_31 = generator_heap->var_x;
        tmp_format_value_15 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_60, tmp_subscript_value_31);
        if (tmp_format_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_27);

            generator_heap->exception_lineno = 219;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_8;
        }
        tmp_format_spec_15 = mod_consts[34];
        tmp_tuple_element_24 = BUILTIN_FORMAT(tstate, tmp_format_value_15, tmp_format_spec_15);
        Py_DECREF(tmp_format_value_15);
        if (tmp_tuple_element_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_27);

            generator_heap->exception_lineno = 219;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_8;
        }
        tmp_string_concat_values_15 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_string_concat_values_15, 0, tmp_tuple_element_24);
        tmp_tuple_element_24 = mod_consts[36];
        PyTuple_SET_ITEM0(tmp_string_concat_values_15, 1, tmp_tuple_element_24);
        tmp_tuple_element_23 = PyUnicode_Join(mod_consts[34], tmp_string_concat_values_15);
        Py_DECREF(tmp_string_concat_values_15);
        if (tmp_tuple_element_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_27);

            generator_heap->exception_lineno = 219;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_8;
        }
        tmp_args_value_6 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_string_concat_values_16;
            PyObject *tmp_tuple_element_25;
            PyObject *tmp_format_value_16;
            PyObject *tmp_expression_value_61;
            PyObject *tmp_subscript_value_32;
            PyObject *tmp_format_spec_16;
            PyTuple_SET_ITEM(tmp_args_value_6, 0, tmp_tuple_element_23);
            CHECK_OBJECT(generator_heap->var_mapping);
            tmp_expression_value_61 = generator_heap->var_mapping;
            CHECK_OBJECT(generator_heap->var_v);
            tmp_subscript_value_32 = generator_heap->var_v;
            tmp_format_value_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_61, tmp_subscript_value_32);
            if (tmp_format_value_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 219;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto tuple_build_exception_7;
            }
            tmp_format_spec_16 = mod_consts[34];
            tmp_tuple_element_25 = BUILTIN_FORMAT(tstate, tmp_format_value_16, tmp_format_spec_16);
            Py_DECREF(tmp_format_value_16);
            if (tmp_tuple_element_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 219;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto tuple_build_exception_7;
            }
            tmp_string_concat_values_16 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_string_concat_values_16, 0, tmp_tuple_element_25);
            tmp_tuple_element_25 = mod_consts[35];
            PyTuple_SET_ITEM0(tmp_string_concat_values_16, 1, tmp_tuple_element_25);
            tmp_tuple_element_23 = PyUnicode_Join(mod_consts[34], tmp_string_concat_values_16);
            Py_DECREF(tmp_string_concat_values_16);
            if (tmp_tuple_element_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 219;
                generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_args_value_6, 1, tmp_tuple_element_23);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_called_value_27);
        Py_DECREF(tmp_args_value_6);
        goto try_except_handler_8;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_kwargs_value_6 = DICT_COPY(mod_consts[65]);
        generator->m_frame->m_frame.f_lineno = 219;
        tmp_call_result_14 = CALL_FUNCTION(tstate, tmp_called_value_27, tmp_args_value_6, tmp_kwargs_value_6);
        Py_DECREF(tmp_called_value_27);
        Py_DECREF(tmp_args_value_6);
        Py_DECREF(tmp_kwargs_value_6);
        if (tmp_call_result_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 219;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_called_instance_7;
        PyObject *tmp_call_result_15;
        PyObject *tmp_args_element_value_22;
        CHECK_OBJECT(generator_heap->var_R);
        tmp_called_instance_7 = generator_heap->var_R;
        CHECK_OBJECT(generator_heap->var_saturated_edges);
        tmp_args_element_value_22 = generator_heap->var_saturated_edges;
        generator->m_frame->m_frame.f_lineno = 222;
        tmp_call_result_15 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_7, mod_consts[66], tmp_args_element_value_22);
        if (tmp_call_result_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 222;
            generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_15);
    }
    branch_no_7:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 134;
        generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
        goto try_except_handler_8;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_19;
    // Exception handler code:
    try_except_handler_8:;
    generator_heap->exception_keeper_type_31 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_31 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_31 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_31 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_for_loop_3__iter_value);
    generator_heap->tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_3__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_3__for_iterator);
    generator_heap->tmp_for_loop_3__for_iterator = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_31;
    generator_heap->exception_value = generator_heap->exception_keeper_value_31;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_31;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_31;

    goto try_except_handler_7;
    // End of try:
    try_end_19:;
    Py_XDECREF(generator_heap->tmp_for_loop_3__iter_value);
    generator_heap->tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_3__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_3__for_iterator);
    generator_heap->tmp_for_loop_3__for_iterator = NULL;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 130;
        generator_heap->type_description_1 = "cccooocooooooooooooooooooooocooco";
        goto try_except_handler_7;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_20;
    // Exception handler code:
    try_except_handler_7:;
    generator_heap->exception_keeper_type_32 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_32 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_32 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_32 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_for_loop_2__iter_value);
    generator_heap->tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_2__for_iterator);
    generator_heap->tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_32;
    generator_heap->exception_value = generator_heap->exception_keeper_value_32;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_32;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_32;

    goto frame_exception_exit_1;
    // End of try:
    try_end_20:;

    // Release exception attached to the frame
    DROP_GENERATOR_EXCEPTION(generator);



    goto frame_no_exception_1;
    frame_return_exit_1:;

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(generator));
#endif
    Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

    goto try_return_handler_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(tstate, generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            generator->m_closure[0],
            generator->m_closure[2],
            generator->m_closure[1],
            generator_heap->var_cut_set,
            generator_heap->var_seen,
            generator_heap->var_H,
            generator_heap->var_H_nodes,
            generator_heap->var_mapping,
            generator_heap->var_original_H_pred,
            generator_heap->var_R,
            generator_heap->var_kwargs,
            generator_heap->var_X,
            generator_heap->var_x,
            generator_heap->var_non_adjacent,
            generator_heap->var_v,
            generator_heap->var_flow_value,
            generator_heap->var_E1,
            generator_heap->var_flowed_edges,
            generator_heap->var_VE1,
            generator_heap->var_incident_nodes,
            generator_heap->var_saturated_edges,
            generator_heap->var_R_closure,
            generator_heap->var_L,
            generator_heap->var_cmap,
            generator_heap->var_inv_cmap,
            generator_heap->var_n,
            generator_heap->var_scc,
            generator_heap->var_antichain,
            generator_heap->var_S,
            generator_heap->var_S_ancestors,
            generator_heap->var_cutset,
            generator_heap->var_u,
            generator_heap->var_node_cut
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(generator));
#endif
    Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_21;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(generator_heap->var_cut_set);
    generator_heap->var_cut_set = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_33 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_33 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_33 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_33 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_cut_set);
    generator_heap->var_cut_set = NULL;
    Py_XDECREF(generator_heap->var_seen);
    generator_heap->var_seen = NULL;
    Py_XDECREF(generator_heap->var_H);
    generator_heap->var_H = NULL;
    CHECK_OBJECT(generator_heap->var_H_nodes);
    Py_DECREF(generator_heap->var_H_nodes);
    generator_heap->var_H_nodes = NULL;
    Py_XDECREF(generator_heap->var_mapping);
    generator_heap->var_mapping = NULL;
    Py_XDECREF(generator_heap->var_original_H_pred);
    generator_heap->var_original_H_pred = NULL;
    Py_XDECREF(generator_heap->var_R);
    generator_heap->var_R = NULL;
    Py_XDECREF(generator_heap->var_kwargs);
    generator_heap->var_kwargs = NULL;
    Py_XDECREF(generator_heap->var_X);
    generator_heap->var_X = NULL;
    Py_XDECREF(generator_heap->var_x);
    generator_heap->var_x = NULL;
    Py_XDECREF(generator_heap->var_non_adjacent);
    generator_heap->var_non_adjacent = NULL;
    Py_XDECREF(generator_heap->var_v);
    generator_heap->var_v = NULL;
    Py_XDECREF(generator_heap->var_flow_value);
    generator_heap->var_flow_value = NULL;
    Py_XDECREF(generator_heap->var_E1);
    generator_heap->var_E1 = NULL;
    Py_XDECREF(generator_heap->var_flowed_edges);
    generator_heap->var_flowed_edges = NULL;
    Py_XDECREF(generator_heap->var_VE1);
    generator_heap->var_VE1 = NULL;
    Py_XDECREF(generator_heap->var_incident_nodes);
    generator_heap->var_incident_nodes = NULL;
    Py_XDECREF(generator_heap->var_saturated_edges);
    generator_heap->var_saturated_edges = NULL;
    Py_XDECREF(generator_heap->var_R_closure);
    generator_heap->var_R_closure = NULL;
    Py_XDECREF(generator_heap->var_L);
    generator_heap->var_L = NULL;
    Py_XDECREF(generator_heap->var_cmap);
    generator_heap->var_cmap = NULL;
    Py_XDECREF(generator_heap->var_inv_cmap);
    generator_heap->var_inv_cmap = NULL;
    Py_XDECREF(generator_heap->var_n);
    generator_heap->var_n = NULL;
    Py_XDECREF(generator_heap->var_scc);
    generator_heap->var_scc = NULL;
    Py_XDECREF(generator_heap->var_antichain);
    generator_heap->var_antichain = NULL;
    CHECK_OBJECT(generator_heap->var_S);
    Py_DECREF(generator_heap->var_S);
    generator_heap->var_S = NULL;
    Py_XDECREF(generator_heap->var_S_ancestors);
    generator_heap->var_S_ancestors = NULL;
    Py_XDECREF(generator_heap->var_cutset);
    generator_heap->var_cutset = NULL;
    CHECK_OBJECT(generator_heap->var_u);
    Py_DECREF(generator_heap->var_u);
    generator_heap->var_u = NULL;
    Py_XDECREF(generator_heap->var_node_cut);
    generator_heap->var_node_cut = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_33;
    generator_heap->exception_value = generator_heap->exception_keeper_value_33;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_33;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_33;

    goto function_exception_exit;
    // End of try:
    try_end_21:;
    Py_XDECREF(generator_heap->tmp_for_loop_2__iter_value);
    generator_heap->tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_2__for_iterator);
    generator_heap->tmp_for_loop_2__for_iterator = NULL;
    Py_XDECREF(generator_heap->var_seen);
    generator_heap->var_seen = NULL;
    Py_XDECREF(generator_heap->var_H);
    generator_heap->var_H = NULL;
    CHECK_OBJECT(generator_heap->var_H_nodes);
    Py_DECREF(generator_heap->var_H_nodes);
    generator_heap->var_H_nodes = NULL;
    CHECK_OBJECT(generator_heap->var_mapping);
    Py_DECREF(generator_heap->var_mapping);
    generator_heap->var_mapping = NULL;
    CHECK_OBJECT(generator_heap->var_original_H_pred);
    Py_DECREF(generator_heap->var_original_H_pred);
    generator_heap->var_original_H_pred = NULL;
    Py_XDECREF(generator_heap->var_R);
    generator_heap->var_R = NULL;
    Py_XDECREF(generator_heap->var_kwargs);
    generator_heap->var_kwargs = NULL;
    Py_XDECREF(generator_heap->var_X);
    generator_heap->var_X = NULL;
    Py_XDECREF(generator_heap->var_x);
    generator_heap->var_x = NULL;
    Py_XDECREF(generator_heap->var_non_adjacent);
    generator_heap->var_non_adjacent = NULL;
    Py_XDECREF(generator_heap->var_v);
    generator_heap->var_v = NULL;
    Py_XDECREF(generator_heap->var_flow_value);
    generator_heap->var_flow_value = NULL;
    Py_XDECREF(generator_heap->var_E1);
    generator_heap->var_E1 = NULL;
    Py_XDECREF(generator_heap->var_flowed_edges);
    generator_heap->var_flowed_edges = NULL;
    Py_XDECREF(generator_heap->var_VE1);
    generator_heap->var_VE1 = NULL;
    Py_XDECREF(generator_heap->var_incident_nodes);
    generator_heap->var_incident_nodes = NULL;
    Py_XDECREF(generator_heap->var_saturated_edges);
    generator_heap->var_saturated_edges = NULL;
    Py_XDECREF(generator_heap->var_R_closure);
    generator_heap->var_R_closure = NULL;
    Py_XDECREF(generator_heap->var_L);
    generator_heap->var_L = NULL;
    Py_XDECREF(generator_heap->var_cmap);
    generator_heap->var_cmap = NULL;
    Py_XDECREF(generator_heap->var_inv_cmap);
    generator_heap->var_inv_cmap = NULL;
    Py_XDECREF(generator_heap->var_n);
    generator_heap->var_n = NULL;
    Py_XDECREF(generator_heap->var_scc);
    generator_heap->var_scc = NULL;
    Py_XDECREF(generator_heap->var_antichain);
    generator_heap->var_antichain = NULL;
    CHECK_OBJECT(generator_heap->var_S);
    Py_DECREF(generator_heap->var_S);
    generator_heap->var_S = NULL;
    Py_XDECREF(generator_heap->var_S_ancestors);
    generator_heap->var_S_ancestors = NULL;
    Py_XDECREF(generator_heap->var_cutset);
    generator_heap->var_cutset = NULL;
    CHECK_OBJECT(generator_heap->var_u);
    Py_DECREF(generator_heap->var_u);
    generator_heap->var_u = NULL;
    Py_XDECREF(generator_heap->var_node_cut);
    generator_heap->var_node_cut = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(tstate, generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;
    NUITKA_CANNOT_GET_HERE("Generator must have exited already.");
    return NULL;

    function_return_exit:
#if PYTHON_VERSION >= 0x300
    generator->m_returned = generator_heap->tmp_return_value;
#endif

    return NULL;

}

static PyObject *MAKE_GENERATOR_networkx$algorithms$connectivity$kcutsets$$$function__1_all_node_cuts$$$genobj__1_all_node_cuts(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        networkx$algorithms$connectivity$kcutsets$$$function__1_all_node_cuts$$$genobj__1_all_node_cuts_context,
        module_networkx$algorithms$connectivity$kcutsets,
        mod_consts[67],
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        codeobj_923a4e06f7307f5e8db7d7b3bd03a83b,
        closure,
        3,
#if 1
        sizeof(struct networkx$algorithms$connectivity$kcutsets$$$function__1_all_node_cuts$$$genobj__1_all_node_cuts_locals)
#else
        0
#endif
    );
}



#if 1
struct networkx$algorithms$connectivity$kcutsets$$$function__1_all_node_cuts$$$genobj__1_all_node_cuts$$$genexpr__1_genexpr_locals {
    PyObject *var_w;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    int tmp_res;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};
#endif

static PyObject *networkx$algorithms$connectivity$kcutsets$$$function__1_all_node_cuts$$$genobj__1_all_node_cuts$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct networkx$algorithms$connectivity$kcutsets$$$function__1_all_node_cuts$$$genobj__1_all_node_cuts$$$genexpr__1_genexpr_locals *generator_heap = (struct networkx$algorithms$connectivity$kcutsets$$$function__1_all_node_cuts$$$genobj__1_all_node_cuts$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_w = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(tstate, codeobj_8c6afdf6000db714daf773f9562880fb, module_networkx$algorithms$connectivity$kcutsets, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    generator->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

    assert(generator->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(tstate, generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_GENERATOR_EXCEPTION(tstate, generator);

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[1]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "Nocc";
                generator_heap->exception_lineno = 190;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_w;
            generator_heap->var_w = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_w);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(generator_heap->var_w);
        tmp_cmp_expr_left_1 = generator_heap->var_w;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[55]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 190;
            generator_heap->type_description_1 = "Nocc";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_right_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        generator_heap->tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (generator_heap->tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 190;
            generator_heap->type_description_1 = "Nocc";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (generator_heap->tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_tuple_element_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[68]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 190;
            generator_heap->type_description_1 = "Nocc";
            goto try_except_handler_2;
        }

        tmp_tuple_element_1 = Nuitka_Cell_GET(generator->m_closure[2]);
        tmp_expression_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_expression_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(generator_heap->var_w);
        tmp_tuple_element_1 = generator_heap->var_w;
        PyTuple_SET_ITEM0(tmp_expression_value_1, 1, tmp_tuple_element_1);
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 190;
            generator_heap->type_description_1 = "Nocc";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
        Py_DECREF(tmp_yield_result_1);
    }
    branch_no_1:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 190;
        generator_heap->type_description_1 = "Nocc";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    // Release exception attached to the frame
    DROP_GENERATOR_EXCEPTION(generator);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(tstate, generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_w,
            generator->m_closure[0],
            generator->m_closure[2]
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(generator));
#endif
    Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_w);
    generator_heap->var_w = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_w);
    generator_heap->var_w = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(tstate, generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_networkx$algorithms$connectivity$kcutsets$$$function__1_all_node_cuts$$$genobj__1_all_node_cuts$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        networkx$algorithms$connectivity$kcutsets$$$function__1_all_node_cuts$$$genobj__1_all_node_cuts$$$genexpr__1_genexpr_context,
        module_networkx$algorithms$connectivity$kcutsets,
        mod_consts[69],
#if PYTHON_VERSION >= 0x350
        mod_consts[70],
#endif
        codeobj_8c6afdf6000db714daf773f9562880fb,
        closure,
        3,
#if 1
        sizeof(struct networkx$algorithms$connectivity$kcutsets$$$function__1_all_node_cuts$$$genobj__1_all_node_cuts$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}



#if 1
struct networkx$algorithms$connectivity$kcutsets$$$function__1_all_node_cuts$$$genobj__1_all_node_cuts$$$genexpr__2_genexpr_locals {
    PyObject *var_u;
    PyObject *var_w;
    PyObject *tmp_iter_value_0;
    PyObject *tmp_tuple_unpack_1__element_1;
    PyObject *tmp_tuple_unpack_1__element_2;
    PyObject *tmp_tuple_unpack_1__source_iter;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
};
#endif

static PyObject *networkx$algorithms$connectivity$kcutsets$$$function__1_all_node_cuts$$$genobj__1_all_node_cuts$$$genexpr__2_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct networkx$algorithms$connectivity$kcutsets$$$function__1_all_node_cuts$$$genobj__1_all_node_cuts$$$genexpr__2_genexpr_locals *generator_heap = (struct networkx$algorithms$connectivity$kcutsets$$$function__1_all_node_cuts$$$genobj__1_all_node_cuts$$$genexpr__2_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_u = NULL;
    generator_heap->var_w = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(tstate, codeobj_6e8ffacbb6b786b9373e245e8d5ef998, module_networkx$algorithms$connectivity$kcutsets, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    generator->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

    assert(generator->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(tstate, generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_GENERATOR_EXCEPTION(tstate, generator);

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[1]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "Nooc";
                generator_heap->exception_lineno = 193;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_iter_arg_1 = generator_heap->tmp_iter_value_0;
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 193;
            generator_heap->type_description_1 = "Nooc";
            goto try_except_handler_3;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__source_iter;
            generator_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "Nooc";
            generator_heap->exception_lineno = 193;
            goto try_except_handler_4;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__element_1;
            generator_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 2);
        if (tmp_assign_source_4 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "Nooc";
            generator_heap->exception_lineno = 193;
            goto try_except_handler_4;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__element_2;
            generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "Nooc";
                    generator_heap->exception_lineno = 193;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[30];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "Nooc";
            generator_heap->exception_lineno = 193;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_1);
        tmp_assign_source_5 = generator_heap->tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = generator_heap->var_u;
            generator_heap->var_u = tmp_assign_source_5;
            Py_INCREF(generator_heap->var_u);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_2);
        tmp_assign_source_6 = generator_heap->tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = generator_heap->var_w;
            generator_heap->var_w = tmp_assign_source_6;
            Py_INCREF(generator_heap->var_w);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_subscript_value_4;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[60]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 193;
            generator_heap->type_description_1 = "Nooc";
            goto try_except_handler_2;
        }

        tmp_expression_value_3 = Nuitka_Cell_GET(generator->m_closure[0]);
        CHECK_OBJECT(generator_heap->var_u);
        tmp_subscript_value_1 = generator_heap->var_u;
        tmp_expression_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 193;
            generator_heap->type_description_1 = "Nooc";
            goto try_except_handler_2;
        }
        tmp_subscript_value_2 = mod_consts[61];
        tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 193;
            generator_heap->type_description_1 = "Nooc";
            goto try_except_handler_2;
        }
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
            Py_DECREF(tmp_cmp_expr_left_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[60]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 193;
            generator_heap->type_description_1 = "Nooc";
            goto try_except_handler_2;
        }

        tmp_expression_value_5 = Nuitka_Cell_GET(generator->m_closure[0]);
        CHECK_OBJECT(generator_heap->var_w);
        tmp_subscript_value_3 = generator_heap->var_w;
        tmp_expression_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_3);
        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            generator_heap->exception_lineno = 193;
            generator_heap->type_description_1 = "Nooc";
            goto try_except_handler_2;
        }
        tmp_subscript_value_4 = mod_consts[61];
        tmp_cmp_expr_right_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_4);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            generator_heap->exception_lineno = 193;
            generator_heap->type_description_1 = "Nooc";
            goto try_except_handler_2;
        }
        tmp_expression_value_1 = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 193;
            generator_heap->type_description_1 = "Nooc";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_subscript_value_1, sizeof(PyObject *), &tmp_subscript_value_2, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_subscript_value_3, sizeof(PyObject *), &tmp_subscript_value_4, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), &tmp_subscript_value_1, sizeof(PyObject *), &tmp_subscript_value_2, sizeof(PyObject *), &tmp_expression_value_4, sizeof(PyObject *), &tmp_expression_value_5, sizeof(PyObject *), &tmp_subscript_value_3, sizeof(PyObject *), &tmp_subscript_value_4, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 193;
            generator_heap->type_description_1 = "Nooc";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
        Py_DECREF(tmp_yield_result_1);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 193;
        generator_heap->type_description_1 = "Nooc";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_3 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_3 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_3 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_3;
    generator_heap->exception_value = generator_heap->exception_keeper_value_3;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_3;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

    // Release exception attached to the frame
    DROP_GENERATOR_EXCEPTION(generator);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(tstate, generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_u,
            generator_heap->var_w,
            generator->m_closure[0]
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(generator));
#endif
    Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_4 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_4 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_4 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_u);
    generator_heap->var_u = NULL;
    Py_XDECREF(generator_heap->var_w);
    generator_heap->var_w = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_4;
    generator_heap->exception_value = generator_heap->exception_keeper_value_4;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_4;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:
    try_end_4:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_u);
    generator_heap->var_u = NULL;
    Py_XDECREF(generator_heap->var_w);
    generator_heap->var_w = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(tstate, generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_networkx$algorithms$connectivity$kcutsets$$$function__1_all_node_cuts$$$genobj__1_all_node_cuts$$$genexpr__2_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        networkx$algorithms$connectivity$kcutsets$$$function__1_all_node_cuts$$$genobj__1_all_node_cuts$$$genexpr__2_genexpr_context,
        module_networkx$algorithms$connectivity$kcutsets,
        mod_consts[69],
#if PYTHON_VERSION >= 0x350
        mod_consts[70],
#endif
        codeobj_6e8ffacbb6b786b9373e245e8d5ef998,
        closure,
        2,
#if 1
        sizeof(struct networkx$algorithms$connectivity$kcutsets$$$function__1_all_node_cuts$$$genobj__1_all_node_cuts$$$genexpr__2_genexpr_locals)
#else
        0
#endif
    );
}


static PyObject *impl_networkx$algorithms$connectivity$kcutsets$$$function__2__is_separating_set(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_G = python_pars[0];
    PyObject *par_cut = python_pars[1];
    PyObject *var_H = NULL;
    struct Nuitka_FrameObject *frame_7380d952a24c624fb968e61def2ec382;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_7380d952a24c624fb968e61def2ec382 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_7380d952a24c624fb968e61def2ec382)) {
        Py_XDECREF(cache_frame_7380d952a24c624fb968e61def2ec382);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7380d952a24c624fb968e61def2ec382 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7380d952a24c624fb968e61def2ec382 = MAKE_FUNCTION_FRAME(tstate, codeobj_7380d952a24c624fb968e61def2ec382, module_networkx$algorithms$connectivity$kcutsets, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7380d952a24c624fb968e61def2ec382->m_type_description == NULL);
    frame_7380d952a24c624fb968e61def2ec382 = cache_frame_7380d952a24c624fb968e61def2ec382;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_7380d952a24c624fb968e61def2ec382);
    assert(Py_REFCNT(frame_7380d952a24c624fb968e61def2ec382) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_sub_expr_left_1;
        nuitka_digit tmp_sub_expr_right_1;
        PyObject *tmp_len_arg_2;
        CHECK_OBJECT(par_cut);
        tmp_len_arg_1 = par_cut;
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_G);
        tmp_len_arg_2 = par_G;
        tmp_sub_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_2);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 227;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_1 = 1;
        tmp_cmp_expr_right_1 = BINARY_OPERATION_SUB_OBJECT_LONG_DIGIT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        assert(!(tmp_cmp_expr_right_1 == NULL));
        tmp_condition_result_1 = RICH_COMPARE_EQ_CBOOL_LONG_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_networkx$algorithms$connectivity$kcutsets, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_G);
        tmp_args_element_value_1 = par_G;
        CHECK_OBJECT(par_cut);
        tmp_args_element_value_2 = par_cut;
        tmp_args_element_value_3 = MAKE_LIST_EMPTY(0);
        frame_7380d952a24c624fb968e61def2ec382->m_frame.f_lineno = 230;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS3(
                tstate,
                tmp_called_instance_1,
                mod_consts[71],
                call_args
            );
        }

        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_H == NULL);
        var_H = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_4;
        int tmp_truth_name_1;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_networkx$algorithms$connectivity$kcutsets, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_H);
        tmp_args_element_value_4 = var_H;
        frame_7380d952a24c624fb968e61def2ec382->m_frame.f_lineno = 231;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[2], tmp_args_element_value_4);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 231;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_2:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7380d952a24c624fb968e61def2ec382, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7380d952a24c624fb968e61def2ec382->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7380d952a24c624fb968e61def2ec382, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7380d952a24c624fb968e61def2ec382,
        type_description_1,
        par_G,
        par_cut,
        var_H
    );


    // Release cached frame if used for exception.
    if (frame_7380d952a24c624fb968e61def2ec382 == cache_frame_7380d952a24c624fb968e61def2ec382) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7380d952a24c624fb968e61def2ec382);
        cache_frame_7380d952a24c624fb968e61def2ec382 = NULL;
    }

    assertFrameObject(frame_7380d952a24c624fb968e61def2ec382);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_H);
    var_H = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_H);
    var_H = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_G);
    Py_DECREF(par_G);
    CHECK_OBJECT(par_cut);
    Py_DECREF(par_cut);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_G);
    Py_DECREF(par_G);
    CHECK_OBJECT(par_cut);
    Py_DECREF(par_cut);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_networkx$algorithms$connectivity$kcutsets$$$function__1_all_node_cuts(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_networkx$algorithms$connectivity$kcutsets$$$function__1_all_node_cuts,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_923a4e06f7307f5e8db7d7b3bd03a83b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_networkx$algorithms$connectivity$kcutsets,
        mod_consts[0],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_networkx$algorithms$connectivity$kcutsets$$$function__2__is_separating_set() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_networkx$algorithms$connectivity$kcutsets$$$function__2__is_separating_set,
        mod_consts[31],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7380d952a24c624fb968e61def2ec382,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_networkx$algorithms$connectivity$kcutsets,
        mod_consts[72],
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(PyThreadState *tstate, char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

static function_impl_code const function_table_networkx$algorithms$connectivity$kcutsets[] = {
    impl_networkx$algorithms$connectivity$kcutsets$$$function__1_all_node_cuts,
    impl_networkx$algorithms$connectivity$kcutsets$$$function__2__is_separating_set,
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTuple(args, "O:reduce_compiled_function", &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        PyThreadState *tstate = PyThreadState_GET();

        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_networkx$algorithms$connectivity$kcutsets);

    if (unlikely(offset == -1)) {
        PyThreadState *tstate = PyThreadState_GET();
#if 0
        PRINT_STRING("Looking for:");
        PRINT_ITEM(func);
        PRINT_NEW_LINE();
#endif
        SET_CURRENT_EXCEPTION_TYPE0_STR(tstate, PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);


    PyObject *result = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
#if PYTHON_VERSION >= 0x300
    PyTuple_SET_ITEM0(result, 3, function->m_kwdefaults ? function->m_kwdefaults : Py_None);
#else
    PyTuple_SET_ITEM0(result, 3, Py_None);
#endif
    PyTuple_SET_ITEM0(result, 4, function->m_doc != NULL ? function->m_doc : Py_None);

    if (offset == -5) {
        CHECK_OBJECT(function->m_constant_return_value);
        PyTuple_SET_ITEM0(result, 5, function->m_constant_return_value);
    } else {
        PyTuple_SET_ITEM0(result, 5, Py_None);
    }

#if PYTHON_VERSION >= 0x300
    PyTuple_SET_ITEM0(result, 6, function->m_qualname);
#else
    PyTuple_SET_ITEM0(result, 6, Py_None);
#endif

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS, NULL};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *function_index;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *kw_defaults;
    PyObject *doc;
    PyObject *constant_return_value;
    PyObject *function_qualname;

    if (!PyArg_ParseTuple(args, "OOOOOO:create_compiled_function", &function_index, &code_object_desc, &defaults, &kw_defaults, &doc, &constant_return_value, &function_qualname, NULL)) {
        return NULL;
    }

#if PYTHON_VERSION >= 0x300
    if (kw_defaults == Py_None) {
        kw_defaults = NULL;
    }
#endif

    return (PyObject *)Nuitka_Function_CreateFunctionViaCodeIndex(
        module_networkx$algorithms$connectivity$kcutsets,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        function_table_networkx$algorithms$connectivity$kcutsets,
        sizeof(function_table_networkx$algorithms$connectivity$kcutsets) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_networkx$algorithms$connectivity$kcutsets(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("networkx$algorithms$connectivity$kcutsets");

    // Store the module for future use.
    module_networkx$algorithms$connectivity$kcutsets = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants(tstate);

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("networkx$algorithms$connectivity$kcutsets: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("networkx$algorithms$connectivity$kcutsets: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initnetworkx$algorithms$connectivity$kcutsets\n");

    moduledict_networkx$algorithms$connectivity$kcutsets = MODULE_DICT(module_networkx$algorithms$connectivity$kcutsets);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_networkx$algorithms$connectivity$kcutsets,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_networkx$algorithms$connectivity$kcutsets,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[34]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_networkx$algorithms$connectivity$kcutsets, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_networkx$algorithms$connectivity$kcutsets,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_networkx$algorithms$connectivity$kcutsets, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_networkx$algorithms$connectivity$kcutsets,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_networkx$algorithms$connectivity$kcutsets, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_networkx$algorithms$connectivity$kcutsets,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_networkx$algorithms$connectivity$kcutsets);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_networkx$algorithms$connectivity$kcutsets, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_networkx$algorithms$connectivity$kcutsets, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_networkx$algorithms$connectivity$kcutsets, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_networkx$algorithms$connectivity$kcutsets, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_networkx$algorithms$connectivity$kcutsets);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_networkx$algorithms$connectivity$kcutsets, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_14f20312df76220900febdc08670a082;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[73];
        UPDATE_STRING_DICT0(moduledict_networkx$algorithms$connectivity$kcutsets, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_networkx$algorithms$connectivity$kcutsets, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_2);
    }
    frame_14f20312df76220900febdc08670a082 = MAKE_MODULE_FRAME(codeobj_14f20312df76220900febdc08670a082, module_networkx$algorithms$connectivity$kcutsets);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_14f20312df76220900febdc08670a082);
    assert(Py_REFCNT(frame_14f20312df76220900febdc08670a082) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_networkx$algorithms$connectivity$kcutsets, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[76]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[77], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_networkx$algorithms$connectivity$kcutsets, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[76]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[78], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_networkx$algorithms$connectivity$kcutsets, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[13];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_networkx$algorithms$connectivity$kcutsets;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[44];
        frame_14f20312df76220900febdc08670a082->m_frame.f_lineno = 4;
        tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_networkx$algorithms$connectivity$kcutsets, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[80];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_networkx$algorithms$connectivity$kcutsets;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[81];
        tmp_level_value_2 = mod_consts[44];
        frame_14f20312df76220900febdc08670a082->m_frame.f_lineno = 5;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_networkx$algorithms$connectivity$kcutsets,
                mod_consts[48],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[48]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_networkx$algorithms$connectivity$kcutsets, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[82];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_networkx$algorithms$connectivity$kcutsets;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[83];
        tmp_level_value_3 = mod_consts[44];
        frame_14f20312df76220900febdc08670a082->m_frame.f_lineno = 6;
        tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_networkx$algorithms$connectivity$kcutsets,
                mod_consts[8],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[8]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_networkx$algorithms$connectivity$kcutsets, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[84];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_networkx$algorithms$connectivity$kcutsets;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[85];
        tmp_level_value_4 = mod_consts[44];
        frame_14f20312df76220900febdc08670a082->m_frame.f_lineno = 7;
        tmp_import_name_from_3 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_networkx$algorithms$connectivity$kcutsets,
                mod_consts[27],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[27]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_networkx$algorithms$connectivity$kcutsets, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[86];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_networkx$algorithms$connectivity$kcutsets;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = Py_None;
        tmp_level_value_5 = mod_consts[44];
        frame_14f20312df76220900febdc08670a082->m_frame.f_lineno = 9;
        tmp_assign_source_8 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_networkx$algorithms$connectivity$kcutsets, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[87];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_networkx$algorithms$connectivity$kcutsets;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[88];
        tmp_level_value_6 = mod_consts[44];
        frame_14f20312df76220900febdc08670a082->m_frame.f_lineno = 10;
        tmp_assign_source_9 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_networkx$algorithms$connectivity$kcutsets,
                mod_consts[15],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[15]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_networkx$algorithms$connectivity$kcutsets, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_networkx$algorithms$connectivity$kcutsets,
                mod_consts[89],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[89]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_networkx$algorithms$connectivity$kcutsets, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_6,
                (PyObject *)moduledict_networkx$algorithms$connectivity$kcutsets,
                mod_consts[20],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[20]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_networkx$algorithms$connectivity$kcutsets, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_12);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[90];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_networkx$algorithms$connectivity$kcutsets;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[91];
        tmp_level_value_7 = mod_consts[7];
        frame_14f20312df76220900febdc08670a082->m_frame.f_lineno = 16;
        tmp_import_name_from_7 = IMPORT_MODULE5(tstate, tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_7,
                (PyObject *)moduledict_networkx$algorithms$connectivity$kcutsets,
                mod_consts[9],
                mod_consts[44]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[9]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_networkx$algorithms$connectivity$kcutsets, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = GET_STRING_DICT_VALUE(moduledict_networkx$algorithms$connectivity$kcutsets, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_assign_source_14 == NULL)) {
            tmp_assign_source_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[89]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_networkx$algorithms$connectivity$kcutsets, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = MAKE_LIST1(mod_consts[67]);
        UPDATE_STRING_DICT1(moduledict_networkx$algorithms$connectivity$kcutsets, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_defaults_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_networkx$algorithms$connectivity$kcutsets, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        tmp_defaults_1 = mod_consts[94];
        Py_INCREF(tmp_defaults_1);


        tmp_args_element_value_1 = MAKE_FUNCTION_networkx$algorithms$connectivity$kcutsets$$$function__1_all_node_cuts(tmp_defaults_1);

        frame_14f20312df76220900febdc08670a082->m_frame.f_lineno = 24;
        tmp_assign_source_16 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[93], tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_networkx$algorithms$connectivity$kcutsets, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_16);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_14f20312df76220900febdc08670a082, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_14f20312df76220900febdc08670a082->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_14f20312df76220900febdc08670a082, exception_lineno);
    }



    assertFrameObject(frame_14f20312df76220900febdc08670a082);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_17;


        tmp_assign_source_17 = MAKE_FUNCTION_networkx$algorithms$connectivity$kcutsets$$$function__2__is_separating_set();

        UPDATE_STRING_DICT1(moduledict_networkx$algorithms$connectivity$kcutsets, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_17);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("networkx$algorithms$connectivity$kcutsets", false);

    Py_INCREF(module_networkx$algorithms$connectivity$kcutsets);
    return module_networkx$algorithms$connectivity$kcutsets;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_networkx$algorithms$connectivity$kcutsets, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("networkx$algorithms$connectivity$kcutsets", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
