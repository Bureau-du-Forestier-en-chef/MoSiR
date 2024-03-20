/* Generated code for Python module 'networkx$algorithms$community$modularity_max'
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

/* The "module_networkx$algorithms$community$modularity_max" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_networkx$algorithms$community$modularity_max;
PyDictObject *moduledict_networkx$algorithms$community$modularity_max;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[106];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[106];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("networkx.algorithms.community.modularity_max"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 106; i++) {
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
void checkModuleConstants_networkx$algorithms$community$modularity_max(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 106; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_62f7ebd572df756665364bf5e09b3f50;
static PyCodeObject *codeobj_fdccb1e148c8f1840bbce7f6074050aa;
static PyCodeObject *codeobj_ee70c7c73ef0c8e837e87c396c890da8;
static PyCodeObject *codeobj_eeb5f76efe49af74f8631722785f5b33;
static PyCodeObject *codeobj_e5c0677cf39035253cb365a9954f8c38;
static PyCodeObject *codeobj_2d216ce3ade5e5775a483a237d211480;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[100]); CHECK_OBJECT(module_filename_obj);
    codeobj_62f7ebd572df756665364bf5e09b3f50 = MAKE_CODE_OBJECT(module_filename_obj, 448, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[70], mod_consts[70], mod_consts[101], NULL, 1, 0, 0);
    codeobj_fdccb1e148c8f1840bbce7f6074050aa = MAKE_CODE_OBJECT(module_filename_obj, 91, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[15], mod_consts[15], NULL, NULL, 0, 0, 0);
    codeobj_ee70c7c73ef0c8e837e87c396c890da8 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[102], mod_consts[102], NULL, NULL, 0, 0, 0);
    codeobj_eeb5f76efe49af74f8631722785f5b33 = MAKE_CODE_OBJECT(module_filename_obj, 16, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[44], mod_consts[44], mod_consts[103], NULL, 3, 0, 0);
    codeobj_e5c0677cf39035253cb365a9954f8c38 = MAKE_CODE_OBJECT(module_filename_obj, 227, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[90], mod_consts[90], mod_consts[104], NULL, 5, 0, 0);
    codeobj_2d216ce3ade5e5775a483a237d211480 = MAKE_CODE_OBJECT(module_filename_obj, 357, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[91], mod_consts[91], mod_consts[105], NULL, 3, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_networkx$algorithms$community$modularity_max$$$function__1__greedy_modularity_communities_generator$$$genobj__1__greedy_modularity_communities_generator(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_networkx$algorithms$community$modularity_max$$$function__3_naive_greedy_modularity_communities$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_networkx$algorithms$community$modularity_max$$$function__1__greedy_modularity_communities_generator(PyObject *defaults);


static PyObject *MAKE_FUNCTION_networkx$algorithms$community$modularity_max$$$function__1__greedy_modularity_communities_generator$$$genobj__1__greedy_modularity_communities_generator$$$function__1_lambda();


static PyObject *MAKE_FUNCTION_networkx$algorithms$community$modularity_max$$$function__2_greedy_modularity_communities(PyObject *defaults);


static PyObject *MAKE_FUNCTION_networkx$algorithms$community$modularity_max$$$function__3_naive_greedy_modularity_communities(PyObject *defaults);


// The module function definitions.
static PyObject *impl_networkx$algorithms$community$modularity_max$$$function__1__greedy_modularity_communities_generator(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_G = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_weight = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_resolution = Nuitka_Cell_New1(python_pars[2]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[3];

        tmp_closure_1[0] = par_G;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_resolution;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_weight;
        Py_INCREF(tmp_closure_1[2]);

        tmp_return_value = MAKE_GENERATOR_networkx$algorithms$community$modularity_max$$$function__1__greedy_modularity_communities_generator$$$genobj__1__greedy_modularity_communities_generator(tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_G);
    Py_DECREF(par_G);
    CHECK_OBJECT(par_weight);
    Py_DECREF(par_weight);
    CHECK_OBJECT(par_resolution);
    Py_DECREF(par_resolution);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct networkx$algorithms$community$modularity_max$$$function__1__greedy_modularity_communities_generator$$$genobj__1__greedy_modularity_communities_generator_locals {
    PyObject *var_directed;
    PyObject *var_N;
    PyObject *var_m;
    PyObject *var_q0;
    PyObject *var_a;
    PyObject *var_b;
    PyObject *var_dq_dict;
    PyObject *var_u;
    PyObject *var_v;
    PyObject *var_wt;
    PyObject *var_nbrdict;
    PyObject *var_dq_heap;
    PyObject *var_H;
    PyObject *var_communities;
    PyObject *var_negdq;
    PyObject *var_dq;
    PyObject *var_u_nbrs;
    PyObject *var_v_nbrs;
    PyObject *var_all_nbrs;
    PyObject *var_both_nbrs;
    PyObject *var_w;
    PyObject *var_dq_vw;
    PyObject *var_row;
    PyObject *var_col;
    PyObject *var_dq_heap_row;
    PyObject *var_d_oldmax;
    PyObject *var_d;
    PyObject *var_d_negdq;
    PyObject *var_row_max;
    PyObject *var_dq_old;
    PyObject *var_d_old;
    PyObject *outline_0_var_node;
    PyObject *outline_0_var_deg_out;
    PyObject *outline_1_var_node;
    PyObject *outline_1_var_deg_in;
    PyObject *outline_2_var_node;
    PyObject *outline_2_var_deg;
    PyObject *outline_3_var_u;
    PyObject *outline_4_var_v;
    PyObject *outline_4_var_dq;
    PyObject *outline_5_var_n;
    PyObject *outline_6_var_n;
    PyObject *tmp_assign_unpack_1__assign_source;
    PyObject *tmp_dictcontraction$dictcontraction$tuple_unpack_1__element_1;
    PyObject *tmp_dictcontraction$dictcontraction$tuple_unpack_1__element_2;
    PyObject *tmp_dictcontraction$dictcontraction$tuple_unpack_1__source_iter;
    PyObject *tmp_dictcontraction$dictcontraction_1__$0;
    PyObject *tmp_dictcontraction$dictcontraction_1__contraction;
    PyObject *tmp_dictcontraction$dictcontraction_1__iter_value_0;
    PyObject *tmp_dictcontraction$tuple_unpack_1__element_1;
    PyObject *tmp_dictcontraction$tuple_unpack_1__element_2;
    PyObject *tmp_dictcontraction$tuple_unpack_1__source_iter;
    PyObject *tmp_dictcontraction$tuple_unpack_2__element_1;
    PyObject *tmp_dictcontraction$tuple_unpack_2__element_2;
    PyObject *tmp_dictcontraction$tuple_unpack_2__source_iter;
    PyObject *tmp_dictcontraction$tuple_unpack_3__element_1;
    PyObject *tmp_dictcontraction$tuple_unpack_3__element_2;
    PyObject *tmp_dictcontraction$tuple_unpack_3__source_iter;
    PyObject *tmp_dictcontraction_1__$0;
    PyObject *tmp_dictcontraction_1__contraction;
    PyObject *tmp_dictcontraction_1__iter_value_0;
    PyObject *tmp_dictcontraction_2__$0;
    PyObject *tmp_dictcontraction_2__contraction;
    PyObject *tmp_dictcontraction_2__iter_value_0;
    PyObject *tmp_dictcontraction_3__$0;
    PyObject *tmp_dictcontraction_3__contraction;
    PyObject *tmp_dictcontraction_3__iter_value_0;
    PyObject *tmp_dictcontraction_4__$0;
    PyObject *tmp_dictcontraction_4__contraction;
    PyObject *tmp_dictcontraction_4__iter_value_0;
    PyObject *tmp_dictcontraction_5__$0;
    PyObject *tmp_dictcontraction_5__contraction;
    PyObject *tmp_dictcontraction_5__iter_value_0;
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
    PyObject *tmp_inplace_assign_subscr_1__subscript;
    PyObject *tmp_inplace_assign_subscr_1__target;
    PyObject *tmp_inplace_assign_subscr_1__value;
    PyObject *tmp_inplace_assign_subscr_2__subscript;
    PyObject *tmp_inplace_assign_subscr_2__target;
    PyObject *tmp_inplace_assign_subscr_2__value;
    PyObject *tmp_inplace_assign_subscr_3__subscript;
    PyObject *tmp_inplace_assign_subscr_3__target;
    PyObject *tmp_inplace_assign_subscr_3__value;
    PyObject *tmp_inplace_assign_subscr_4__subscript;
    PyObject *tmp_inplace_assign_subscr_4__target;
    PyObject *tmp_inplace_assign_subscr_4__value;
    PyObject *tmp_listcomp_1__$0;
    PyObject *tmp_listcomp_1__contraction;
    PyObject *tmp_listcomp_1__iter_value_0;
    PyObject *tmp_tuple_unpack_1__element_1;
    PyObject *tmp_tuple_unpack_1__element_2;
    PyObject *tmp_tuple_unpack_1__element_3;
    PyObject *tmp_tuple_unpack_1__source_iter;
    PyObject *tmp_tuple_unpack_2__element_1;
    PyObject *tmp_tuple_unpack_2__element_2;
    PyObject *tmp_tuple_unpack_2__source_iter;
    PyObject *tmp_tuple_unpack_3__element_1;
    PyObject *tmp_tuple_unpack_3__element_2;
    PyObject *tmp_tuple_unpack_3__source_iter;
    PyObject *tmp_tuple_unpack_4__element_1;
    PyObject *tmp_tuple_unpack_4__element_2;
    PyObject *tmp_tuple_unpack_4__element_3;
    PyObject *tmp_tuple_unpack_4__source_iter;
    PyObject *tmp_tuple_unpack_5__element_1;
    PyObject *tmp_tuple_unpack_5__element_2;
    PyObject *tmp_tuple_unpack_5__source_iter;
    PyObject *tmp_tuple_unpack_6__element_1;
    PyObject *tmp_tuple_unpack_6__element_2;
    PyObject *tmp_tuple_unpack_6__source_iter;
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
    int tmp_res;
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
    bool tmp_result;
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
    char yield_tmps[1024];
    PyObject *exception_keeper_type_34;
    PyObject *exception_keeper_value_34;
    PyTracebackObject *exception_keeper_tb_34;
    int exception_keeper_lineno_34;
    PyObject *exception_keeper_type_35;
    PyObject *exception_keeper_value_35;
    PyTracebackObject *exception_keeper_tb_35;
    int exception_keeper_lineno_35;
    PyObject *exception_keeper_type_36;
    PyObject *exception_keeper_value_36;
    PyTracebackObject *exception_keeper_tb_36;
    int exception_keeper_lineno_36;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    PyObject *exception_keeper_type_37;
    PyObject *exception_keeper_value_37;
    PyTracebackObject *exception_keeper_tb_37;
    int exception_keeper_lineno_37;
    PyObject *exception_keeper_type_38;
    PyObject *exception_keeper_value_38;
    PyTracebackObject *exception_keeper_tb_38;
    int exception_keeper_lineno_38;
    PyObject *exception_keeper_type_39;
    PyObject *exception_keeper_value_39;
    PyTracebackObject *exception_keeper_tb_39;
    int exception_keeper_lineno_39;
    PyObject *exception_keeper_type_40;
    PyObject *exception_keeper_value_40;
    PyTracebackObject *exception_keeper_tb_40;
    int exception_keeper_lineno_40;
    PyObject *exception_keeper_type_41;
    PyObject *exception_keeper_value_41;
    PyTracebackObject *exception_keeper_tb_41;
    int exception_keeper_lineno_41;
    PyObject *exception_keeper_type_42;
    PyObject *exception_keeper_value_42;
    PyTracebackObject *exception_keeper_tb_42;
    int exception_keeper_lineno_42;
    PyObject *exception_keeper_type_43;
    PyObject *exception_keeper_value_43;
    PyTracebackObject *exception_keeper_tb_43;
    int exception_keeper_lineno_43;
    PyObject *exception_keeper_type_44;
    PyObject *exception_keeper_value_44;
    PyTracebackObject *exception_keeper_tb_44;
    int exception_keeper_lineno_44;
    PyObject *exception_keeper_type_45;
    PyObject *exception_keeper_value_45;
    PyTracebackObject *exception_keeper_tb_45;
    int exception_keeper_lineno_45;
    PyObject *exception_keeper_type_46;
    PyObject *exception_keeper_value_46;
    PyTracebackObject *exception_keeper_tb_46;
    int exception_keeper_lineno_46;
    PyObject *exception_keeper_type_47;
    PyObject *exception_keeper_value_47;
    PyTracebackObject *exception_keeper_tb_47;
    int exception_keeper_lineno_47;
    PyObject *exception_keeper_type_48;
    PyObject *exception_keeper_value_48;
    PyTracebackObject *exception_keeper_tb_48;
    int exception_keeper_lineno_48;
};
#endif

static PyObject *networkx$algorithms$community$modularity_max$$$function__1__greedy_modularity_communities_generator$$$genobj__1__greedy_modularity_communities_generator_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct networkx$algorithms$community$modularity_max$$$function__1__greedy_modularity_communities_generator$$$genobj__1__greedy_modularity_communities_generator_locals *generator_heap = (struct networkx$algorithms$community$modularity_max$$$function__1__greedy_modularity_communities_generator$$$genobj__1__greedy_modularity_communities_generator_locals *)generator->m_heap_storage;
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
    generator_heap->var_directed = NULL;
    generator_heap->var_N = NULL;
    generator_heap->var_m = NULL;
    generator_heap->var_q0 = NULL;
    generator_heap->var_a = NULL;
    generator_heap->var_b = NULL;
    generator_heap->var_dq_dict = NULL;
    generator_heap->var_u = NULL;
    generator_heap->var_v = NULL;
    generator_heap->var_wt = NULL;
    generator_heap->var_nbrdict = NULL;
    generator_heap->var_dq_heap = NULL;
    generator_heap->var_H = NULL;
    generator_heap->var_communities = NULL;
    generator_heap->var_negdq = NULL;
    generator_heap->var_dq = NULL;
    generator_heap->var_u_nbrs = NULL;
    generator_heap->var_v_nbrs = NULL;
    generator_heap->var_all_nbrs = NULL;
    generator_heap->var_both_nbrs = NULL;
    generator_heap->var_w = NULL;
    generator_heap->var_dq_vw = NULL;
    generator_heap->var_row = NULL;
    generator_heap->var_col = NULL;
    generator_heap->var_dq_heap_row = NULL;
    generator_heap->var_d_oldmax = NULL;
    generator_heap->var_d = NULL;
    generator_heap->var_d_negdq = NULL;
    generator_heap->var_row_max = NULL;
    generator_heap->var_dq_old = NULL;
    generator_heap->var_d_old = NULL;
    generator_heap->outline_0_var_node = NULL;
    generator_heap->outline_0_var_deg_out = NULL;
    generator_heap->outline_1_var_node = NULL;
    generator_heap->outline_1_var_deg_in = NULL;
    generator_heap->outline_2_var_node = NULL;
    generator_heap->outline_2_var_deg = NULL;
    generator_heap->outline_3_var_u = NULL;
    generator_heap->outline_4_var_v = NULL;
    generator_heap->outline_4_var_dq = NULL;
    generator_heap->outline_5_var_n = NULL;
    generator_heap->outline_6_var_n = NULL;
    generator_heap->tmp_assign_unpack_1__assign_source = NULL;
    generator_heap->tmp_dictcontraction$dictcontraction$tuple_unpack_1__element_1 = NULL;
    generator_heap->tmp_dictcontraction$dictcontraction$tuple_unpack_1__element_2 = NULL;
    generator_heap->tmp_dictcontraction$dictcontraction$tuple_unpack_1__source_iter = NULL;
    generator_heap->tmp_dictcontraction$dictcontraction_1__$0 = NULL;
    generator_heap->tmp_dictcontraction$dictcontraction_1__contraction = NULL;
    generator_heap->tmp_dictcontraction$dictcontraction_1__iter_value_0 = NULL;
    generator_heap->tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
    generator_heap->tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
    generator_heap->tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
    generator_heap->tmp_dictcontraction$tuple_unpack_2__element_1 = NULL;
    generator_heap->tmp_dictcontraction$tuple_unpack_2__element_2 = NULL;
    generator_heap->tmp_dictcontraction$tuple_unpack_2__source_iter = NULL;
    generator_heap->tmp_dictcontraction$tuple_unpack_3__element_1 = NULL;
    generator_heap->tmp_dictcontraction$tuple_unpack_3__element_2 = NULL;
    generator_heap->tmp_dictcontraction$tuple_unpack_3__source_iter = NULL;
    generator_heap->tmp_dictcontraction_1__$0 = NULL;
    generator_heap->tmp_dictcontraction_1__contraction = NULL;
    generator_heap->tmp_dictcontraction_1__iter_value_0 = NULL;
    generator_heap->tmp_dictcontraction_2__$0 = NULL;
    generator_heap->tmp_dictcontraction_2__contraction = NULL;
    generator_heap->tmp_dictcontraction_2__iter_value_0 = NULL;
    generator_heap->tmp_dictcontraction_3__$0 = NULL;
    generator_heap->tmp_dictcontraction_3__contraction = NULL;
    generator_heap->tmp_dictcontraction_3__iter_value_0 = NULL;
    generator_heap->tmp_dictcontraction_4__$0 = NULL;
    generator_heap->tmp_dictcontraction_4__contraction = NULL;
    generator_heap->tmp_dictcontraction_4__iter_value_0 = NULL;
    generator_heap->tmp_dictcontraction_5__$0 = NULL;
    generator_heap->tmp_dictcontraction_5__contraction = NULL;
    generator_heap->tmp_dictcontraction_5__iter_value_0 = NULL;
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
    generator_heap->tmp_inplace_assign_subscr_1__subscript = NULL;
    generator_heap->tmp_inplace_assign_subscr_1__target = NULL;
    generator_heap->tmp_inplace_assign_subscr_1__value = NULL;
    generator_heap->tmp_inplace_assign_subscr_2__subscript = NULL;
    generator_heap->tmp_inplace_assign_subscr_2__target = NULL;
    generator_heap->tmp_inplace_assign_subscr_2__value = NULL;
    generator_heap->tmp_inplace_assign_subscr_3__subscript = NULL;
    generator_heap->tmp_inplace_assign_subscr_3__target = NULL;
    generator_heap->tmp_inplace_assign_subscr_3__value = NULL;
    generator_heap->tmp_inplace_assign_subscr_4__subscript = NULL;
    generator_heap->tmp_inplace_assign_subscr_4__target = NULL;
    generator_heap->tmp_inplace_assign_subscr_4__value = NULL;
    generator_heap->tmp_listcomp_1__$0 = NULL;
    generator_heap->tmp_listcomp_1__contraction = NULL;
    generator_heap->tmp_listcomp_1__iter_value_0 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_3 = NULL;
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    generator_heap->tmp_tuple_unpack_2__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_2__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_2__source_iter = NULL;
    generator_heap->tmp_tuple_unpack_3__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_3__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_3__source_iter = NULL;
    generator_heap->tmp_tuple_unpack_4__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_4__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_4__element_3 = NULL;
    generator_heap->tmp_tuple_unpack_4__source_iter = NULL;
    generator_heap->tmp_tuple_unpack_5__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_5__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_5__source_iter = NULL;
    generator_heap->tmp_tuple_unpack_6__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_6__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_6__source_iter = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(tstate, codeobj_eeb5f76efe49af74f8631722785f5b33, module_networkx$algorithms$community$modularity_max, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[1]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 73;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        generator->m_frame->m_frame.f_lineno = 73;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[2]);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 73;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_directed == NULL);
        generator_heap->var_directed = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[1]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 74;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = Nuitka_Cell_GET(generator->m_closure[0]);
        generator->m_frame->m_frame.f_lineno = 74;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[3]);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 74;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_N == NULL);
        generator_heap->var_N = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[1]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 77;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[4]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 77;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[5]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 77;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(generator->m_closure[2]);
        generator->m_frame->m_frame.f_lineno = 77;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 77;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_m == NULL);
        generator_heap->var_m = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        tmp_truediv_expr_left_1 = mod_consts[6];
        CHECK_OBJECT(generator_heap->var_m);
        tmp_truediv_expr_right_1 = generator_heap->var_m;
        tmp_assign_source_4 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 78;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_q0 == NULL);
        generator_heap->var_q0 = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(generator_heap->var_directed);
        tmp_truth_name_1 = CHECK_IF_TRUE(generator_heap->var_directed);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 83;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_5;
        // Tried code:
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_value_2;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_kw_call_value_0_1;
            if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[1]);
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

                generator_heap->exception_lineno = 84;
                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                goto try_except_handler_2;
            }

            tmp_expression_value_2 = Nuitka_Cell_GET(generator->m_closure[0]);
            tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[7]);
            if (tmp_called_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 84;
                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                goto try_except_handler_2;
            }
            if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {
                Py_DECREF(tmp_called_value_2);
                FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[5]);
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

                generator_heap->exception_lineno = 84;
                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                goto try_except_handler_2;
            }

            tmp_kw_call_value_0_1 = Nuitka_Cell_GET(generator->m_closure[2]);
            generator->m_frame->m_frame.f_lineno = 84;
            {
                PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

                tmp_iter_arg_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_2, kw_values, mod_consts[8]);
            }

            Py_DECREF(tmp_called_value_2);
            if (tmp_iter_arg_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 84;
                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_6 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 84;
                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                goto try_except_handler_2;
            }
            assert(generator_heap->tmp_dictcontraction_1__$0 == NULL);
            generator_heap->tmp_dictcontraction_1__$0 = tmp_assign_source_6;
        }
        {
            PyObject *tmp_assign_source_7;
            tmp_assign_source_7 = MAKE_DICT_EMPTY();
            assert(generator_heap->tmp_dictcontraction_1__contraction == NULL);
            generator_heap->tmp_dictcontraction_1__contraction = tmp_assign_source_7;
        }
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT(generator_heap->tmp_dictcontraction_1__$0);
            tmp_next_source_1 = generator_heap->tmp_dictcontraction_1__$0;
            tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_8 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                    generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                    generator_heap->exception_lineno = 84;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = generator_heap->tmp_dictcontraction_1__iter_value_0;
                generator_heap->tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_8;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT(generator_heap->tmp_dictcontraction_1__iter_value_0);
            tmp_iter_arg_2 = generator_heap->tmp_dictcontraction_1__iter_value_0;
            tmp_assign_source_9 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 84;
                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                goto try_except_handler_4;
            }
            {
                PyObject *old = generator_heap->tmp_dictcontraction$tuple_unpack_1__source_iter;
                generator_heap->tmp_dictcontraction$tuple_unpack_1__source_iter = tmp_assign_source_9;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT(generator_heap->tmp_dictcontraction$tuple_unpack_1__source_iter);
            tmp_unpack_1 = generator_heap->tmp_dictcontraction$tuple_unpack_1__source_iter;
            tmp_assign_source_10 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 2);
            if (tmp_assign_source_10 == NULL) {
                if (!HAS_ERROR_OCCURRED(tstate)) {
                    generator_heap->exception_type = PyExc_StopIteration;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = NULL;
                    generator_heap->exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                }


                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                generator_heap->exception_lineno = 84;
                goto try_except_handler_5;
            }
            {
                PyObject *old = generator_heap->tmp_dictcontraction$tuple_unpack_1__element_1;
                generator_heap->tmp_dictcontraction$tuple_unpack_1__element_1 = tmp_assign_source_10;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT(generator_heap->tmp_dictcontraction$tuple_unpack_1__source_iter);
            tmp_unpack_2 = generator_heap->tmp_dictcontraction$tuple_unpack_1__source_iter;
            tmp_assign_source_11 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 2);
            if (tmp_assign_source_11 == NULL) {
                if (!HAS_ERROR_OCCURRED(tstate)) {
                    generator_heap->exception_type = PyExc_StopIteration;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = NULL;
                    generator_heap->exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                }


                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                generator_heap->exception_lineno = 84;
                goto try_except_handler_5;
            }
            {
                PyObject *old = generator_heap->tmp_dictcontraction$tuple_unpack_1__element_2;
                generator_heap->tmp_dictcontraction$tuple_unpack_1__element_2 = tmp_assign_source_11;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_1;
            CHECK_OBJECT(generator_heap->tmp_dictcontraction$tuple_unpack_1__source_iter);
            tmp_iterator_name_1 = generator_heap->tmp_dictcontraction$tuple_unpack_1__source_iter;
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

                        generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                        generator_heap->exception_lineno = 84;
                        goto try_except_handler_5;
                    }
                }
            } else {
                Py_DECREF(generator_heap->tmp_iterator_attempt);

                generator_heap->exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                generator_heap->exception_value = mod_consts[9];
                Py_INCREF(generator_heap->exception_value);
                generator_heap->exception_tb = NULL;

                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                generator_heap->exception_lineno = 84;
                goto try_except_handler_5;
            }
        }
        goto try_end_1;
        // Exception handler code:
        try_except_handler_5:;
        generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        CHECK_OBJECT(generator_heap->tmp_dictcontraction$tuple_unpack_1__source_iter);
        Py_DECREF(generator_heap->tmp_dictcontraction$tuple_unpack_1__source_iter);
        generator_heap->tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_1;
        generator_heap->exception_value = generator_heap->exception_keeper_value_1;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

        goto try_except_handler_4;
        // End of try:
        try_end_1:;
        goto try_end_2;
        // Exception handler code:
        try_except_handler_4:;
        generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        Py_XDECREF(generator_heap->tmp_dictcontraction$tuple_unpack_1__element_1);
        generator_heap->tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
        Py_XDECREF(generator_heap->tmp_dictcontraction$tuple_unpack_1__element_2);
        generator_heap->tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_2;
        generator_heap->exception_value = generator_heap->exception_keeper_value_2;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        try_end_2:;
        CHECK_OBJECT(generator_heap->tmp_dictcontraction$tuple_unpack_1__source_iter);
        Py_DECREF(generator_heap->tmp_dictcontraction$tuple_unpack_1__source_iter);
        generator_heap->tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
        {
            PyObject *tmp_assign_source_12;
            CHECK_OBJECT(generator_heap->tmp_dictcontraction$tuple_unpack_1__element_1);
            tmp_assign_source_12 = generator_heap->tmp_dictcontraction$tuple_unpack_1__element_1;
            {
                PyObject *old = generator_heap->outline_0_var_node;
                generator_heap->outline_0_var_node = tmp_assign_source_12;
                Py_INCREF(generator_heap->outline_0_var_node);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(generator_heap->tmp_dictcontraction$tuple_unpack_1__element_1);
        generator_heap->tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_13;
            CHECK_OBJECT(generator_heap->tmp_dictcontraction$tuple_unpack_1__element_2);
            tmp_assign_source_13 = generator_heap->tmp_dictcontraction$tuple_unpack_1__element_2;
            {
                PyObject *old = generator_heap->outline_0_var_deg_out;
                generator_heap->outline_0_var_deg_out = tmp_assign_source_13;
                Py_INCREF(generator_heap->outline_0_var_deg_out);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(generator_heap->tmp_dictcontraction$tuple_unpack_1__element_2);
        generator_heap->tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_dictset38_key_1;
            PyObject *tmp_dictset38_value_1;
            PyObject *tmp_mult_expr_left_1;
            PyObject *tmp_mult_expr_right_1;
            PyObject *tmp_dictset38_dict_1;
            CHECK_OBJECT(generator_heap->outline_0_var_node);
            tmp_dictset38_key_1 = generator_heap->outline_0_var_node;
            CHECK_OBJECT(generator_heap->outline_0_var_deg_out);
            tmp_mult_expr_left_1 = generator_heap->outline_0_var_deg_out;
            if (generator_heap->var_q0 == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[10]);
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

                generator_heap->exception_lineno = 84;
                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                goto try_except_handler_3;
            }

            tmp_mult_expr_right_1 = generator_heap->var_q0;
            tmp_dictset38_value_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
            if (tmp_dictset38_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 84;
                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                goto try_except_handler_3;
            }
            CHECK_OBJECT(generator_heap->tmp_dictcontraction_1__contraction);
            tmp_dictset38_dict_1 = generator_heap->tmp_dictcontraction_1__contraction;
            assert(PyDict_CheckExact(tmp_dictset38_dict_1));
            generator_heap->tmp_res = PyDict_SetItem(tmp_dictset38_dict_1, tmp_dictset38_key_1, tmp_dictset38_value_1);

            Py_DECREF(tmp_dictset38_value_1);
            if (generator_heap->tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 84;
                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 84;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(generator_heap->tmp_dictcontraction_1__contraction);
        tmp_assign_source_5 = generator_heap->tmp_dictcontraction_1__contraction;
        Py_INCREF(tmp_assign_source_5);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(generator_heap->tmp_dictcontraction_1__$0);
        Py_DECREF(generator_heap->tmp_dictcontraction_1__$0);
        generator_heap->tmp_dictcontraction_1__$0 = NULL;
        CHECK_OBJECT(generator_heap->tmp_dictcontraction_1__contraction);
        Py_DECREF(generator_heap->tmp_dictcontraction_1__contraction);
        generator_heap->tmp_dictcontraction_1__contraction = NULL;
        Py_XDECREF(generator_heap->tmp_dictcontraction_1__iter_value_0);
        generator_heap->tmp_dictcontraction_1__iter_value_0 = NULL;
        goto try_return_handler_2;
        // Exception handler code:
        try_except_handler_3:;
        generator_heap->exception_keeper_type_3 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_3 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_3 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        CHECK_OBJECT(generator_heap->tmp_dictcontraction_1__$0);
        Py_DECREF(generator_heap->tmp_dictcontraction_1__$0);
        generator_heap->tmp_dictcontraction_1__$0 = NULL;
        CHECK_OBJECT(generator_heap->tmp_dictcontraction_1__contraction);
        Py_DECREF(generator_heap->tmp_dictcontraction_1__contraction);
        generator_heap->tmp_dictcontraction_1__contraction = NULL;
        Py_XDECREF(generator_heap->tmp_dictcontraction_1__iter_value_0);
        generator_heap->tmp_dictcontraction_1__iter_value_0 = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_3;
        generator_heap->exception_value = generator_heap->exception_keeper_value_3;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_3;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(generator_heap->outline_0_var_node);
        generator_heap->outline_0_var_node = NULL;
        Py_XDECREF(generator_heap->outline_0_var_deg_out);
        generator_heap->outline_0_var_deg_out = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        generator_heap->exception_keeper_type_4 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_4 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_4 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        Py_XDECREF(generator_heap->outline_0_var_node);
        generator_heap->outline_0_var_node = NULL;
        Py_XDECREF(generator_heap->outline_0_var_deg_out);
        generator_heap->outline_0_var_deg_out = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_4;
        generator_heap->exception_value = generator_heap->exception_keeper_value_4;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_4;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        generator_heap->exception_lineno = 84;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(generator_heap->var_a == NULL);
        generator_heap->var_a = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_14;
        // Tried code:
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_iter_arg_3;
            PyObject *tmp_called_value_3;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_kw_call_value_0_2;
            if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[1]);
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

                generator_heap->exception_lineno = 85;
                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }

            tmp_expression_value_3 = Nuitka_Cell_GET(generator->m_closure[0]);
            tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[11]);
            if (tmp_called_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 85;
                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {
                Py_DECREF(tmp_called_value_3);
                FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[5]);
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

                generator_heap->exception_lineno = 85;
                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }

            tmp_kw_call_value_0_2 = Nuitka_Cell_GET(generator->m_closure[2]);
            generator->m_frame->m_frame.f_lineno = 85;
            {
                PyObject *kw_values[1] = {tmp_kw_call_value_0_2};

                tmp_iter_arg_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_3, kw_values, mod_consts[8]);
            }

            Py_DECREF(tmp_called_value_3);
            if (tmp_iter_arg_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 85;
                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            tmp_assign_source_15 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
            Py_DECREF(tmp_iter_arg_3);
            if (tmp_assign_source_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 85;
                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                goto try_except_handler_6;
            }
            assert(generator_heap->tmp_dictcontraction_2__$0 == NULL);
            generator_heap->tmp_dictcontraction_2__$0 = tmp_assign_source_15;
        }
        {
            PyObject *tmp_assign_source_16;
            tmp_assign_source_16 = MAKE_DICT_EMPTY();
            assert(generator_heap->tmp_dictcontraction_2__contraction == NULL);
            generator_heap->tmp_dictcontraction_2__contraction = tmp_assign_source_16;
        }
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_17;
            CHECK_OBJECT(generator_heap->tmp_dictcontraction_2__$0);
            tmp_next_source_2 = generator_heap->tmp_dictcontraction_2__$0;
            tmp_assign_source_17 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_17 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                    generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                    generator_heap->exception_lineno = 85;
                    goto try_except_handler_7;
                }
            }

            {
                PyObject *old = generator_heap->tmp_dictcontraction_2__iter_value_0;
                generator_heap->tmp_dictcontraction_2__iter_value_0 = tmp_assign_source_17;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_18;
            PyObject *tmp_iter_arg_4;
            CHECK_OBJECT(generator_heap->tmp_dictcontraction_2__iter_value_0);
            tmp_iter_arg_4 = generator_heap->tmp_dictcontraction_2__iter_value_0;
            tmp_assign_source_18 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
            if (tmp_assign_source_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 85;
                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                goto try_except_handler_8;
            }
            {
                PyObject *old = generator_heap->tmp_dictcontraction$tuple_unpack_2__source_iter;
                generator_heap->tmp_dictcontraction$tuple_unpack_2__source_iter = tmp_assign_source_18;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT(generator_heap->tmp_dictcontraction$tuple_unpack_2__source_iter);
            tmp_unpack_3 = generator_heap->tmp_dictcontraction$tuple_unpack_2__source_iter;
            tmp_assign_source_19 = UNPACK_NEXT(tstate, tmp_unpack_3, 0, 2);
            if (tmp_assign_source_19 == NULL) {
                if (!HAS_ERROR_OCCURRED(tstate)) {
                    generator_heap->exception_type = PyExc_StopIteration;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = NULL;
                    generator_heap->exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                }


                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                generator_heap->exception_lineno = 85;
                goto try_except_handler_9;
            }
            {
                PyObject *old = generator_heap->tmp_dictcontraction$tuple_unpack_2__element_1;
                generator_heap->tmp_dictcontraction$tuple_unpack_2__element_1 = tmp_assign_source_19;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_20;
            PyObject *tmp_unpack_4;
            CHECK_OBJECT(generator_heap->tmp_dictcontraction$tuple_unpack_2__source_iter);
            tmp_unpack_4 = generator_heap->tmp_dictcontraction$tuple_unpack_2__source_iter;
            tmp_assign_source_20 = UNPACK_NEXT(tstate, tmp_unpack_4, 1, 2);
            if (tmp_assign_source_20 == NULL) {
                if (!HAS_ERROR_OCCURRED(tstate)) {
                    generator_heap->exception_type = PyExc_StopIteration;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = NULL;
                    generator_heap->exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                }


                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                generator_heap->exception_lineno = 85;
                goto try_except_handler_9;
            }
            {
                PyObject *old = generator_heap->tmp_dictcontraction$tuple_unpack_2__element_2;
                generator_heap->tmp_dictcontraction$tuple_unpack_2__element_2 = tmp_assign_source_20;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_2;
            CHECK_OBJECT(generator_heap->tmp_dictcontraction$tuple_unpack_2__source_iter);
            tmp_iterator_name_2 = generator_heap->tmp_dictcontraction$tuple_unpack_2__source_iter;
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

                        generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                        generator_heap->exception_lineno = 85;
                        goto try_except_handler_9;
                    }
                }
            } else {
                Py_DECREF(generator_heap->tmp_iterator_attempt);

                generator_heap->exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                generator_heap->exception_value = mod_consts[9];
                Py_INCREF(generator_heap->exception_value);
                generator_heap->exception_tb = NULL;

                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                generator_heap->exception_lineno = 85;
                goto try_except_handler_9;
            }
        }
        goto try_end_3;
        // Exception handler code:
        try_except_handler_9:;
        generator_heap->exception_keeper_type_5 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_5 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_5 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_5 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        CHECK_OBJECT(generator_heap->tmp_dictcontraction$tuple_unpack_2__source_iter);
        Py_DECREF(generator_heap->tmp_dictcontraction$tuple_unpack_2__source_iter);
        generator_heap->tmp_dictcontraction$tuple_unpack_2__source_iter = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_5;
        generator_heap->exception_value = generator_heap->exception_keeper_value_5;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_5;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_5;

        goto try_except_handler_8;
        // End of try:
        try_end_3:;
        goto try_end_4;
        // Exception handler code:
        try_except_handler_8:;
        generator_heap->exception_keeper_type_6 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_6 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_6 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_6 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        Py_XDECREF(generator_heap->tmp_dictcontraction$tuple_unpack_2__element_1);
        generator_heap->tmp_dictcontraction$tuple_unpack_2__element_1 = NULL;
        Py_XDECREF(generator_heap->tmp_dictcontraction$tuple_unpack_2__element_2);
        generator_heap->tmp_dictcontraction$tuple_unpack_2__element_2 = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_6;
        generator_heap->exception_value = generator_heap->exception_keeper_value_6;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_6;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_6;

        goto try_except_handler_7;
        // End of try:
        try_end_4:;
        CHECK_OBJECT(generator_heap->tmp_dictcontraction$tuple_unpack_2__source_iter);
        Py_DECREF(generator_heap->tmp_dictcontraction$tuple_unpack_2__source_iter);
        generator_heap->tmp_dictcontraction$tuple_unpack_2__source_iter = NULL;
        {
            PyObject *tmp_assign_source_21;
            CHECK_OBJECT(generator_heap->tmp_dictcontraction$tuple_unpack_2__element_1);
            tmp_assign_source_21 = generator_heap->tmp_dictcontraction$tuple_unpack_2__element_1;
            {
                PyObject *old = generator_heap->outline_1_var_node;
                generator_heap->outline_1_var_node = tmp_assign_source_21;
                Py_INCREF(generator_heap->outline_1_var_node);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(generator_heap->tmp_dictcontraction$tuple_unpack_2__element_1);
        generator_heap->tmp_dictcontraction$tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_22;
            CHECK_OBJECT(generator_heap->tmp_dictcontraction$tuple_unpack_2__element_2);
            tmp_assign_source_22 = generator_heap->tmp_dictcontraction$tuple_unpack_2__element_2;
            {
                PyObject *old = generator_heap->outline_1_var_deg_in;
                generator_heap->outline_1_var_deg_in = tmp_assign_source_22;
                Py_INCREF(generator_heap->outline_1_var_deg_in);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(generator_heap->tmp_dictcontraction$tuple_unpack_2__element_2);
        generator_heap->tmp_dictcontraction$tuple_unpack_2__element_2 = NULL;

        {
            PyObject *tmp_dictset38_key_2;
            PyObject *tmp_dictset38_value_2;
            PyObject *tmp_mult_expr_left_2;
            PyObject *tmp_mult_expr_right_2;
            PyObject *tmp_dictset38_dict_2;
            CHECK_OBJECT(generator_heap->outline_1_var_node);
            tmp_dictset38_key_2 = generator_heap->outline_1_var_node;
            CHECK_OBJECT(generator_heap->outline_1_var_deg_in);
            tmp_mult_expr_left_2 = generator_heap->outline_1_var_deg_in;
            if (generator_heap->var_q0 == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[10]);
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

                generator_heap->exception_lineno = 85;
                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                goto try_except_handler_7;
            }

            tmp_mult_expr_right_2 = generator_heap->var_q0;
            tmp_dictset38_value_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
            if (tmp_dictset38_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 85;
                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                goto try_except_handler_7;
            }
            CHECK_OBJECT(generator_heap->tmp_dictcontraction_2__contraction);
            tmp_dictset38_dict_2 = generator_heap->tmp_dictcontraction_2__contraction;
            assert(PyDict_CheckExact(tmp_dictset38_dict_2));
            generator_heap->tmp_res = PyDict_SetItem(tmp_dictset38_dict_2, tmp_dictset38_key_2, tmp_dictset38_value_2);

            Py_DECREF(tmp_dictset38_value_2);
            if (generator_heap->tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 85;
                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                goto try_except_handler_7;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 85;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(generator_heap->tmp_dictcontraction_2__contraction);
        tmp_assign_source_14 = generator_heap->tmp_dictcontraction_2__contraction;
        Py_INCREF(tmp_assign_source_14);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        CHECK_OBJECT(generator_heap->tmp_dictcontraction_2__$0);
        Py_DECREF(generator_heap->tmp_dictcontraction_2__$0);
        generator_heap->tmp_dictcontraction_2__$0 = NULL;
        CHECK_OBJECT(generator_heap->tmp_dictcontraction_2__contraction);
        Py_DECREF(generator_heap->tmp_dictcontraction_2__contraction);
        generator_heap->tmp_dictcontraction_2__contraction = NULL;
        Py_XDECREF(generator_heap->tmp_dictcontraction_2__iter_value_0);
        generator_heap->tmp_dictcontraction_2__iter_value_0 = NULL;
        goto try_return_handler_6;
        // Exception handler code:
        try_except_handler_7:;
        generator_heap->exception_keeper_type_7 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_7 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_7 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_7 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        CHECK_OBJECT(generator_heap->tmp_dictcontraction_2__$0);
        Py_DECREF(generator_heap->tmp_dictcontraction_2__$0);
        generator_heap->tmp_dictcontraction_2__$0 = NULL;
        CHECK_OBJECT(generator_heap->tmp_dictcontraction_2__contraction);
        Py_DECREF(generator_heap->tmp_dictcontraction_2__contraction);
        generator_heap->tmp_dictcontraction_2__contraction = NULL;
        Py_XDECREF(generator_heap->tmp_dictcontraction_2__iter_value_0);
        generator_heap->tmp_dictcontraction_2__iter_value_0 = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_7;
        generator_heap->exception_value = generator_heap->exception_keeper_value_7;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_7;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_7;

        goto try_except_handler_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_XDECREF(generator_heap->outline_1_var_node);
        generator_heap->outline_1_var_node = NULL;
        Py_XDECREF(generator_heap->outline_1_var_deg_in);
        generator_heap->outline_1_var_deg_in = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_6:;
        generator_heap->exception_keeper_type_8 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_8 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_8 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_8 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        Py_XDECREF(generator_heap->outline_1_var_node);
        generator_heap->outline_1_var_node = NULL;
        Py_XDECREF(generator_heap->outline_1_var_deg_in);
        generator_heap->outline_1_var_deg_in = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_8;
        generator_heap->exception_value = generator_heap->exception_keeper_value_8;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_8;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_8;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        generator_heap->exception_lineno = 85;
        goto frame_exception_exit_1;
        outline_result_2:;
        assert(generator_heap->var_b == NULL);
        generator_heap->var_b = tmp_assign_source_14;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_23;
        // Tried code:
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_iter_arg_5;
            PyObject *tmp_called_value_4;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_kw_call_value_0_3;
            if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[1]);
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

                generator_heap->exception_lineno = 87;
                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                goto try_except_handler_10;
            }

            tmp_expression_value_4 = Nuitka_Cell_GET(generator->m_closure[0]);
            tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[12]);
            if (tmp_called_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 87;
                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                goto try_except_handler_10;
            }
            if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {
                Py_DECREF(tmp_called_value_4);
                FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[5]);
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

                generator_heap->exception_lineno = 87;
                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                goto try_except_handler_10;
            }

            tmp_kw_call_value_0_3 = Nuitka_Cell_GET(generator->m_closure[2]);
            generator->m_frame->m_frame.f_lineno = 87;
            {
                PyObject *kw_values[1] = {tmp_kw_call_value_0_3};

                tmp_iter_arg_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_4, kw_values, mod_consts[8]);
            }

            Py_DECREF(tmp_called_value_4);
            if (tmp_iter_arg_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 87;
                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                goto try_except_handler_10;
            }
            tmp_assign_source_24 = MAKE_ITERATOR(tstate, tmp_iter_arg_5);
            Py_DECREF(tmp_iter_arg_5);
            if (tmp_assign_source_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 87;
                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                goto try_except_handler_10;
            }
            assert(generator_heap->tmp_dictcontraction_3__$0 == NULL);
            generator_heap->tmp_dictcontraction_3__$0 = tmp_assign_source_24;
        }
        {
            PyObject *tmp_assign_source_25;
            tmp_assign_source_25 = MAKE_DICT_EMPTY();
            assert(generator_heap->tmp_dictcontraction_3__contraction == NULL);
            generator_heap->tmp_dictcontraction_3__contraction = tmp_assign_source_25;
        }
        // Tried code:
        loop_start_3:;
        {
            PyObject *tmp_next_source_3;
            PyObject *tmp_assign_source_26;
            CHECK_OBJECT(generator_heap->tmp_dictcontraction_3__$0);
            tmp_next_source_3 = generator_heap->tmp_dictcontraction_3__$0;
            tmp_assign_source_26 = ITERATOR_NEXT(tmp_next_source_3);
            if (tmp_assign_source_26 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_3;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                    generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                    generator_heap->exception_lineno = 87;
                    goto try_except_handler_11;
                }
            }

            {
                PyObject *old = generator_heap->tmp_dictcontraction_3__iter_value_0;
                generator_heap->tmp_dictcontraction_3__iter_value_0 = tmp_assign_source_26;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_27;
            PyObject *tmp_iter_arg_6;
            CHECK_OBJECT(generator_heap->tmp_dictcontraction_3__iter_value_0);
            tmp_iter_arg_6 = generator_heap->tmp_dictcontraction_3__iter_value_0;
            tmp_assign_source_27 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_6);
            if (tmp_assign_source_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 87;
                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                goto try_except_handler_12;
            }
            {
                PyObject *old = generator_heap->tmp_dictcontraction$tuple_unpack_3__source_iter;
                generator_heap->tmp_dictcontraction$tuple_unpack_3__source_iter = tmp_assign_source_27;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_unpack_5;
            CHECK_OBJECT(generator_heap->tmp_dictcontraction$tuple_unpack_3__source_iter);
            tmp_unpack_5 = generator_heap->tmp_dictcontraction$tuple_unpack_3__source_iter;
            tmp_assign_source_28 = UNPACK_NEXT(tstate, tmp_unpack_5, 0, 2);
            if (tmp_assign_source_28 == NULL) {
                if (!HAS_ERROR_OCCURRED(tstate)) {
                    generator_heap->exception_type = PyExc_StopIteration;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = NULL;
                    generator_heap->exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                }


                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                generator_heap->exception_lineno = 87;
                goto try_except_handler_13;
            }
            {
                PyObject *old = generator_heap->tmp_dictcontraction$tuple_unpack_3__element_1;
                generator_heap->tmp_dictcontraction$tuple_unpack_3__element_1 = tmp_assign_source_28;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_unpack_6;
            CHECK_OBJECT(generator_heap->tmp_dictcontraction$tuple_unpack_3__source_iter);
            tmp_unpack_6 = generator_heap->tmp_dictcontraction$tuple_unpack_3__source_iter;
            tmp_assign_source_29 = UNPACK_NEXT(tstate, tmp_unpack_6, 1, 2);
            if (tmp_assign_source_29 == NULL) {
                if (!HAS_ERROR_OCCURRED(tstate)) {
                    generator_heap->exception_type = PyExc_StopIteration;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = NULL;
                    generator_heap->exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                }


                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                generator_heap->exception_lineno = 87;
                goto try_except_handler_13;
            }
            {
                PyObject *old = generator_heap->tmp_dictcontraction$tuple_unpack_3__element_2;
                generator_heap->tmp_dictcontraction$tuple_unpack_3__element_2 = tmp_assign_source_29;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_3;
            CHECK_OBJECT(generator_heap->tmp_dictcontraction$tuple_unpack_3__source_iter);
            tmp_iterator_name_3 = generator_heap->tmp_dictcontraction$tuple_unpack_3__source_iter;
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

                        generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                        generator_heap->exception_lineno = 87;
                        goto try_except_handler_13;
                    }
                }
            } else {
                Py_DECREF(generator_heap->tmp_iterator_attempt);

                generator_heap->exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                generator_heap->exception_value = mod_consts[9];
                Py_INCREF(generator_heap->exception_value);
                generator_heap->exception_tb = NULL;

                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                generator_heap->exception_lineno = 87;
                goto try_except_handler_13;
            }
        }
        goto try_end_5;
        // Exception handler code:
        try_except_handler_13:;
        generator_heap->exception_keeper_type_9 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_9 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_9 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_9 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        CHECK_OBJECT(generator_heap->tmp_dictcontraction$tuple_unpack_3__source_iter);
        Py_DECREF(generator_heap->tmp_dictcontraction$tuple_unpack_3__source_iter);
        generator_heap->tmp_dictcontraction$tuple_unpack_3__source_iter = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_9;
        generator_heap->exception_value = generator_heap->exception_keeper_value_9;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_9;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_9;

        goto try_except_handler_12;
        // End of try:
        try_end_5:;
        goto try_end_6;
        // Exception handler code:
        try_except_handler_12:;
        generator_heap->exception_keeper_type_10 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_10 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_10 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_10 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        Py_XDECREF(generator_heap->tmp_dictcontraction$tuple_unpack_3__element_1);
        generator_heap->tmp_dictcontraction$tuple_unpack_3__element_1 = NULL;
        Py_XDECREF(generator_heap->tmp_dictcontraction$tuple_unpack_3__element_2);
        generator_heap->tmp_dictcontraction$tuple_unpack_3__element_2 = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_10;
        generator_heap->exception_value = generator_heap->exception_keeper_value_10;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_10;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_10;

        goto try_except_handler_11;
        // End of try:
        try_end_6:;
        CHECK_OBJECT(generator_heap->tmp_dictcontraction$tuple_unpack_3__source_iter);
        Py_DECREF(generator_heap->tmp_dictcontraction$tuple_unpack_3__source_iter);
        generator_heap->tmp_dictcontraction$tuple_unpack_3__source_iter = NULL;
        {
            PyObject *tmp_assign_source_30;
            CHECK_OBJECT(generator_heap->tmp_dictcontraction$tuple_unpack_3__element_1);
            tmp_assign_source_30 = generator_heap->tmp_dictcontraction$tuple_unpack_3__element_1;
            {
                PyObject *old = generator_heap->outline_2_var_node;
                generator_heap->outline_2_var_node = tmp_assign_source_30;
                Py_INCREF(generator_heap->outline_2_var_node);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(generator_heap->tmp_dictcontraction$tuple_unpack_3__element_1);
        generator_heap->tmp_dictcontraction$tuple_unpack_3__element_1 = NULL;

        {
            PyObject *tmp_assign_source_31;
            CHECK_OBJECT(generator_heap->tmp_dictcontraction$tuple_unpack_3__element_2);
            tmp_assign_source_31 = generator_heap->tmp_dictcontraction$tuple_unpack_3__element_2;
            {
                PyObject *old = generator_heap->outline_2_var_deg;
                generator_heap->outline_2_var_deg = tmp_assign_source_31;
                Py_INCREF(generator_heap->outline_2_var_deg);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(generator_heap->tmp_dictcontraction$tuple_unpack_3__element_2);
        generator_heap->tmp_dictcontraction$tuple_unpack_3__element_2 = NULL;

        {
            PyObject *tmp_dictset38_key_3;
            PyObject *tmp_dictset38_value_3;
            PyObject *tmp_mult_expr_left_3;
            PyObject *tmp_mult_expr_right_3;
            PyObject *tmp_mult_expr_left_4;
            PyObject *tmp_mult_expr_right_4;
            PyObject *tmp_dictset38_dict_3;
            CHECK_OBJECT(generator_heap->outline_2_var_node);
            tmp_dictset38_key_3 = generator_heap->outline_2_var_node;
            CHECK_OBJECT(generator_heap->outline_2_var_deg);
            tmp_mult_expr_left_4 = generator_heap->outline_2_var_deg;
            if (generator_heap->var_q0 == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[10]);
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

                generator_heap->exception_lineno = 87;
                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                goto try_except_handler_11;
            }

            tmp_mult_expr_right_4 = generator_heap->var_q0;
            tmp_mult_expr_left_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
            if (tmp_mult_expr_left_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 87;
                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                goto try_except_handler_11;
            }
            tmp_mult_expr_right_3 = mod_consts[13];
            tmp_dictset38_value_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_FLOAT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
            Py_DECREF(tmp_mult_expr_left_3);
            if (tmp_dictset38_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 87;
                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                goto try_except_handler_11;
            }
            CHECK_OBJECT(generator_heap->tmp_dictcontraction_3__contraction);
            tmp_dictset38_dict_3 = generator_heap->tmp_dictcontraction_3__contraction;
            assert(PyDict_CheckExact(tmp_dictset38_dict_3));
            generator_heap->tmp_res = PyDict_SetItem(tmp_dictset38_dict_3, tmp_dictset38_key_3, tmp_dictset38_value_3);

            Py_DECREF(tmp_dictset38_value_3);
            if (generator_heap->tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 87;
                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                goto try_except_handler_11;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 87;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        goto loop_start_3;
        loop_end_3:;
        CHECK_OBJECT(generator_heap->tmp_dictcontraction_3__contraction);
        tmp_assign_source_23 = generator_heap->tmp_dictcontraction_3__contraction;
        Py_INCREF(tmp_assign_source_23);
        goto try_return_handler_11;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        CHECK_OBJECT(generator_heap->tmp_dictcontraction_3__$0);
        Py_DECREF(generator_heap->tmp_dictcontraction_3__$0);
        generator_heap->tmp_dictcontraction_3__$0 = NULL;
        CHECK_OBJECT(generator_heap->tmp_dictcontraction_3__contraction);
        Py_DECREF(generator_heap->tmp_dictcontraction_3__contraction);
        generator_heap->tmp_dictcontraction_3__contraction = NULL;
        Py_XDECREF(generator_heap->tmp_dictcontraction_3__iter_value_0);
        generator_heap->tmp_dictcontraction_3__iter_value_0 = NULL;
        goto try_return_handler_10;
        // Exception handler code:
        try_except_handler_11:;
        generator_heap->exception_keeper_type_11 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_11 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_11 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_11 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        CHECK_OBJECT(generator_heap->tmp_dictcontraction_3__$0);
        Py_DECREF(generator_heap->tmp_dictcontraction_3__$0);
        generator_heap->tmp_dictcontraction_3__$0 = NULL;
        CHECK_OBJECT(generator_heap->tmp_dictcontraction_3__contraction);
        Py_DECREF(generator_heap->tmp_dictcontraction_3__contraction);
        generator_heap->tmp_dictcontraction_3__contraction = NULL;
        Py_XDECREF(generator_heap->tmp_dictcontraction_3__iter_value_0);
        generator_heap->tmp_dictcontraction_3__iter_value_0 = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_11;
        generator_heap->exception_value = generator_heap->exception_keeper_value_11;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_11;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_11;

        goto try_except_handler_10;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        Py_XDECREF(generator_heap->outline_2_var_node);
        generator_heap->outline_2_var_node = NULL;
        Py_XDECREF(generator_heap->outline_2_var_deg);
        generator_heap->outline_2_var_deg = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_10:;
        generator_heap->exception_keeper_type_12 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_12 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_12 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_12 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        Py_XDECREF(generator_heap->outline_2_var_node);
        generator_heap->outline_2_var_node = NULL;
        Py_XDECREF(generator_heap->outline_2_var_deg);
        generator_heap->outline_2_var_deg = NULL;
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
        generator_heap->exception_lineno = 87;
        goto frame_exception_exit_1;
        outline_result_3:;
        assert(generator_heap->tmp_assign_unpack_1__assign_source == NULL);
        generator_heap->tmp_assign_unpack_1__assign_source = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_32;
        CHECK_OBJECT(generator_heap->tmp_assign_unpack_1__assign_source);
        tmp_assign_source_32 = generator_heap->tmp_assign_unpack_1__assign_source;
        assert(generator_heap->var_a == NULL);
        Py_INCREF(tmp_assign_source_32);
        generator_heap->var_a = tmp_assign_source_32;
    }
    {
        PyObject *tmp_assign_source_33;
        CHECK_OBJECT(generator_heap->tmp_assign_unpack_1__assign_source);
        tmp_assign_source_33 = generator_heap->tmp_assign_unpack_1__assign_source;
        assert(generator_heap->var_b == NULL);
        Py_INCREF(tmp_assign_source_33);
        generator_heap->var_b = tmp_assign_source_33;
    }
    CHECK_OBJECT(generator_heap->tmp_assign_unpack_1__assign_source);
    Py_DECREF(generator_heap->tmp_assign_unpack_1__assign_source);
    generator_heap->tmp_assign_unpack_1__assign_source = NULL;
    branch_end_1:;
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_networkx$algorithms$community$modularity_max, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 91;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }


        tmp_args_element_value_2 = MAKE_FUNCTION_networkx$algorithms$community$modularity_max$$$function__1__greedy_modularity_communities_generator$$$genobj__1__greedy_modularity_communities_generator$$$function__1_lambda();

        generator->m_frame->m_frame.f_lineno = 91;
        tmp_assign_source_34 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 91;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_dq_dict == NULL);
        generator_heap->var_dq_dict = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_iter_arg_7;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_value_0_4;
        PyObject *tmp_kw_call_value_1_1;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[1]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 92;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_5 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[17]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 92;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(generator->m_closure[2]) == NULL) {
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[5]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 92;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_value_0_4 = Nuitka_Cell_GET(generator->m_closure[2]);
        tmp_kw_call_value_1_1 = mod_consts[6];
        generator->m_frame->m_frame.f_lineno = 92;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_4, tmp_kw_call_value_1_1};

            tmp_iter_arg_7 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_6, kw_values, mod_consts[18]);
        }

        Py_DECREF(tmp_called_value_6);
        if (tmp_iter_arg_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 92;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_35 = MAKE_ITERATOR(tstate, tmp_iter_arg_7);
        Py_DECREF(tmp_iter_arg_7);
        if (tmp_assign_source_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 92;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->tmp_for_loop_1__for_iterator == NULL);
        generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_35;
    }
    // Tried code:
    loop_start_4:;
    {
        PyObject *tmp_next_source_4;
        PyObject *tmp_assign_source_36;
        CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
        tmp_next_source_4 = generator_heap->tmp_for_loop_1__for_iterator;
        tmp_assign_source_36 = ITERATOR_NEXT(tmp_next_source_4);
        if (tmp_assign_source_36 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_4;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                generator_heap->exception_lineno = 92;
                goto try_except_handler_14;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
            generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_36;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_iter_arg_8;
        CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
        tmp_iter_arg_8 = generator_heap->tmp_for_loop_1__iter_value;
        tmp_assign_source_37 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_8);
        if (tmp_assign_source_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 92;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_15;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__source_iter;
            generator_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_37;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_7 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_38 = UNPACK_NEXT(tstate, tmp_unpack_7, 0, 3);
        if (tmp_assign_source_38 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            generator_heap->exception_lineno = 92;
            goto try_except_handler_16;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__element_1;
            generator_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_38;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_8 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_39 = UNPACK_NEXT(tstate, tmp_unpack_8, 1, 3);
        if (tmp_assign_source_39 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            generator_heap->exception_lineno = 92;
            goto try_except_handler_16;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__element_2;
            generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_39;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_unpack_9;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_9 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_40 = UNPACK_NEXT(tstate, tmp_unpack_9, 2, 3);
        if (tmp_assign_source_40 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            generator_heap->exception_lineno = 92;
            goto try_except_handler_16;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__element_3;
            generator_heap->tmp_tuple_unpack_1__element_3 = tmp_assign_source_40;
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

                    generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                    generator_heap->exception_lineno = 92;
                    goto try_except_handler_16;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[19];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            generator_heap->exception_lineno = 92;
            goto try_except_handler_16;
        }
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_16:;
    generator_heap->exception_keeper_type_13 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_13 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_13 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_13 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_13;
    generator_heap->exception_value = generator_heap->exception_keeper_value_13;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_13;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_13;

    goto try_except_handler_15;
    // End of try:
    try_end_7:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_15:;
    generator_heap->exception_keeper_type_14 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_14 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_14 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_14 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_3);
    generator_heap->tmp_tuple_unpack_1__element_3 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_14;
    generator_heap->exception_value = generator_heap->exception_keeper_value_14;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_14;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_14;

    goto try_except_handler_14;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_41;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_1);
        tmp_assign_source_41 = generator_heap->tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = generator_heap->var_u;
            generator_heap->var_u = tmp_assign_source_41;
            Py_INCREF(generator_heap->var_u);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_42;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_2);
        tmp_assign_source_42 = generator_heap->tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = generator_heap->var_v;
            generator_heap->var_v = tmp_assign_source_42;
            Py_INCREF(generator_heap->var_v);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_43;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_3);
        tmp_assign_source_43 = generator_heap->tmp_tuple_unpack_1__element_3;
        {
            PyObject *old = generator_heap->var_wt;
            generator_heap->var_wt = tmp_assign_source_43;
            Py_INCREF(generator_heap->var_wt);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_3);
    generator_heap->tmp_tuple_unpack_1__element_3 = NULL;

    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(generator_heap->var_u);
        tmp_cmp_expr_left_1 = generator_heap->var_u;
        CHECK_OBJECT(generator_heap->var_v);
        tmp_cmp_expr_right_1 = generator_heap->var_v;
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 93;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    goto loop_start_4;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(generator_heap->var_dq_dict);
        tmp_expression_value_6 = generator_heap->var_dq_dict;
        CHECK_OBJECT(generator_heap->var_u);
        tmp_subscript_value_1 = generator_heap->var_u;
        tmp_assign_source_44 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_1);
        if (tmp_assign_source_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 95;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        {
            PyObject *old = generator_heap->tmp_inplace_assign_subscr_1__target;
            generator_heap->tmp_inplace_assign_subscr_1__target = tmp_assign_source_44;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_45;
        CHECK_OBJECT(generator_heap->var_v);
        tmp_assign_source_45 = generator_heap->var_v;
        {
            PyObject *old = generator_heap->tmp_inplace_assign_subscr_1__subscript;
            generator_heap->tmp_inplace_assign_subscr_1__subscript = tmp_assign_source_45;
            Py_INCREF(generator_heap->tmp_inplace_assign_subscr_1__subscript);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(generator_heap->tmp_inplace_assign_subscr_1__target);
        tmp_expression_value_7 = generator_heap->tmp_inplace_assign_subscr_1__target;
        CHECK_OBJECT(generator_heap->tmp_inplace_assign_subscr_1__subscript);
        tmp_subscript_value_2 = generator_heap->tmp_inplace_assign_subscr_1__subscript;
        tmp_assign_source_46 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_7, tmp_subscript_value_2);
        if (tmp_assign_source_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 95;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        {
            PyObject *old = generator_heap->tmp_inplace_assign_subscr_1__value;
            generator_heap->tmp_inplace_assign_subscr_1__value = tmp_assign_source_46;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        CHECK_OBJECT(generator_heap->tmp_inplace_assign_subscr_1__value);
        tmp_iadd_expr_left_1 = generator_heap->tmp_inplace_assign_subscr_1__value;
        CHECK_OBJECT(generator_heap->var_wt);
        tmp_iadd_expr_right_1 = generator_heap->var_wt;
        generator_heap->tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (generator_heap->tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 95;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        tmp_assign_source_47 = tmp_iadd_expr_left_1;
        generator_heap->tmp_inplace_assign_subscr_1__value = tmp_assign_source_47;

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(generator_heap->tmp_inplace_assign_subscr_1__value);
        tmp_ass_subvalue_1 = generator_heap->tmp_inplace_assign_subscr_1__value;
        CHECK_OBJECT(generator_heap->tmp_inplace_assign_subscr_1__target);
        tmp_ass_subscribed_1 = generator_heap->tmp_inplace_assign_subscr_1__target;
        CHECK_OBJECT(generator_heap->tmp_inplace_assign_subscr_1__subscript);
        tmp_ass_subscript_1 = generator_heap->tmp_inplace_assign_subscr_1__subscript;
        generator_heap->tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (generator_heap->tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 95;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_17:;
    generator_heap->exception_keeper_type_15 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_15 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_15 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_15 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_inplace_assign_subscr_1__target);
    Py_DECREF(generator_heap->tmp_inplace_assign_subscr_1__target);
    generator_heap->tmp_inplace_assign_subscr_1__target = NULL;
    CHECK_OBJECT(generator_heap->tmp_inplace_assign_subscr_1__subscript);
    Py_DECREF(generator_heap->tmp_inplace_assign_subscr_1__subscript);
    generator_heap->tmp_inplace_assign_subscr_1__subscript = NULL;
    Py_XDECREF(generator_heap->tmp_inplace_assign_subscr_1__value);
    generator_heap->tmp_inplace_assign_subscr_1__value = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_15;
    generator_heap->exception_value = generator_heap->exception_keeper_value_15;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_15;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_15;

    goto try_except_handler_14;
    // End of try:
    try_end_9:;
    CHECK_OBJECT(generator_heap->tmp_inplace_assign_subscr_1__target);
    Py_DECREF(generator_heap->tmp_inplace_assign_subscr_1__target);
    generator_heap->tmp_inplace_assign_subscr_1__target = NULL;
    CHECK_OBJECT(generator_heap->tmp_inplace_assign_subscr_1__subscript);
    Py_DECREF(generator_heap->tmp_inplace_assign_subscr_1__subscript);
    generator_heap->tmp_inplace_assign_subscr_1__subscript = NULL;
    CHECK_OBJECT(generator_heap->tmp_inplace_assign_subscr_1__value);
    Py_DECREF(generator_heap->tmp_inplace_assign_subscr_1__value);
    generator_heap->tmp_inplace_assign_subscr_1__value = NULL;
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(generator_heap->var_dq_dict);
        tmp_expression_value_8 = generator_heap->var_dq_dict;
        CHECK_OBJECT(generator_heap->var_v);
        tmp_subscript_value_3 = generator_heap->var_v;
        tmp_assign_source_48 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_3);
        if (tmp_assign_source_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 96;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        {
            PyObject *old = generator_heap->tmp_inplace_assign_subscr_2__target;
            generator_heap->tmp_inplace_assign_subscr_2__target = tmp_assign_source_48;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_49;
        CHECK_OBJECT(generator_heap->var_u);
        tmp_assign_source_49 = generator_heap->var_u;
        {
            PyObject *old = generator_heap->tmp_inplace_assign_subscr_2__subscript;
            generator_heap->tmp_inplace_assign_subscr_2__subscript = tmp_assign_source_49;
            Py_INCREF(generator_heap->tmp_inplace_assign_subscr_2__subscript);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(generator_heap->tmp_inplace_assign_subscr_2__target);
        tmp_expression_value_9 = generator_heap->tmp_inplace_assign_subscr_2__target;
        CHECK_OBJECT(generator_heap->tmp_inplace_assign_subscr_2__subscript);
        tmp_subscript_value_4 = generator_heap->tmp_inplace_assign_subscr_2__subscript;
        tmp_assign_source_50 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_4);
        if (tmp_assign_source_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 96;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_18;
        }
        {
            PyObject *old = generator_heap->tmp_inplace_assign_subscr_2__value;
            generator_heap->tmp_inplace_assign_subscr_2__value = tmp_assign_source_50;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_iadd_expr_left_2;
        PyObject *tmp_iadd_expr_right_2;
        CHECK_OBJECT(generator_heap->tmp_inplace_assign_subscr_2__value);
        tmp_iadd_expr_left_2 = generator_heap->tmp_inplace_assign_subscr_2__value;
        CHECK_OBJECT(generator_heap->var_wt);
        tmp_iadd_expr_right_2 = generator_heap->var_wt;
        generator_heap->tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        if (generator_heap->tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 96;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_18;
        }
        tmp_assign_source_51 = tmp_iadd_expr_left_2;
        generator_heap->tmp_inplace_assign_subscr_2__value = tmp_assign_source_51;

    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(generator_heap->tmp_inplace_assign_subscr_2__value);
        tmp_ass_subvalue_2 = generator_heap->tmp_inplace_assign_subscr_2__value;
        CHECK_OBJECT(generator_heap->tmp_inplace_assign_subscr_2__target);
        tmp_ass_subscribed_2 = generator_heap->tmp_inplace_assign_subscr_2__target;
        CHECK_OBJECT(generator_heap->tmp_inplace_assign_subscr_2__subscript);
        tmp_ass_subscript_2 = generator_heap->tmp_inplace_assign_subscr_2__subscript;
        generator_heap->tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        if (generator_heap->tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 96;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_18;
        }
    }
    goto try_end_10;
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

    CHECK_OBJECT(generator_heap->tmp_inplace_assign_subscr_2__target);
    Py_DECREF(generator_heap->tmp_inplace_assign_subscr_2__target);
    generator_heap->tmp_inplace_assign_subscr_2__target = NULL;
    CHECK_OBJECT(generator_heap->tmp_inplace_assign_subscr_2__subscript);
    Py_DECREF(generator_heap->tmp_inplace_assign_subscr_2__subscript);
    generator_heap->tmp_inplace_assign_subscr_2__subscript = NULL;
    Py_XDECREF(generator_heap->tmp_inplace_assign_subscr_2__value);
    generator_heap->tmp_inplace_assign_subscr_2__value = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_16;
    generator_heap->exception_value = generator_heap->exception_keeper_value_16;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_16;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_16;

    goto try_except_handler_14;
    // End of try:
    try_end_10:;
    CHECK_OBJECT(generator_heap->tmp_inplace_assign_subscr_2__target);
    Py_DECREF(generator_heap->tmp_inplace_assign_subscr_2__target);
    generator_heap->tmp_inplace_assign_subscr_2__target = NULL;
    CHECK_OBJECT(generator_heap->tmp_inplace_assign_subscr_2__subscript);
    Py_DECREF(generator_heap->tmp_inplace_assign_subscr_2__subscript);
    generator_heap->tmp_inplace_assign_subscr_2__subscript = NULL;
    CHECK_OBJECT(generator_heap->tmp_inplace_assign_subscr_2__value);
    Py_DECREF(generator_heap->tmp_inplace_assign_subscr_2__value);
    generator_heap->tmp_inplace_assign_subscr_2__value = NULL;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 92;
        generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
        goto try_except_handler_14;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_11;
    // Exception handler code:
    try_except_handler_14:;
    generator_heap->exception_keeper_type_17 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_17 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_17 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_17 = generator_heap->exception_lineno;
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
    generator_heap->exception_type = generator_heap->exception_keeper_type_17;
    generator_heap->exception_value = generator_heap->exception_keeper_value_17;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_17;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_17;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_iter_arg_9;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(generator_heap->var_dq_dict);
        tmp_expression_value_10 = generator_heap->var_dq_dict;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[20]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 99;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        generator->m_frame->m_frame.f_lineno = 99;
        tmp_iter_arg_9 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_7);
        Py_DECREF(tmp_called_value_7);
        if (tmp_iter_arg_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 99;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_52 = MAKE_ITERATOR(tstate, tmp_iter_arg_9);
        Py_DECREF(tmp_iter_arg_9);
        if (tmp_assign_source_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 99;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->tmp_for_loop_2__for_iterator == NULL);
        generator_heap->tmp_for_loop_2__for_iterator = tmp_assign_source_52;
    }
    // Tried code:
    loop_start_5:;
    {
        PyObject *tmp_next_source_5;
        PyObject *tmp_assign_source_53;
        CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
        tmp_next_source_5 = generator_heap->tmp_for_loop_2__for_iterator;
        tmp_assign_source_53 = ITERATOR_NEXT(tmp_next_source_5);
        if (tmp_assign_source_53 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_5;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                generator_heap->exception_lineno = 99;
                goto try_except_handler_19;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_2__iter_value;
            generator_heap->tmp_for_loop_2__iter_value = tmp_assign_source_53;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_iter_arg_10;
        CHECK_OBJECT(generator_heap->tmp_for_loop_2__iter_value);
        tmp_iter_arg_10 = generator_heap->tmp_for_loop_2__iter_value;
        tmp_assign_source_54 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_10);
        if (tmp_assign_source_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 99;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_20;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_2__source_iter;
            generator_heap->tmp_tuple_unpack_2__source_iter = tmp_assign_source_54;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_unpack_10;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
        tmp_unpack_10 = generator_heap->tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_55 = UNPACK_NEXT(tstate, tmp_unpack_10, 0, 2);
        if (tmp_assign_source_55 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            generator_heap->exception_lineno = 99;
            goto try_except_handler_21;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_2__element_1;
            generator_heap->tmp_tuple_unpack_2__element_1 = tmp_assign_source_55;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_unpack_11;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
        tmp_unpack_11 = generator_heap->tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_56 = UNPACK_NEXT(tstate, tmp_unpack_11, 1, 2);
        if (tmp_assign_source_56 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            generator_heap->exception_lineno = 99;
            goto try_except_handler_21;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_2__element_2;
            generator_heap->tmp_tuple_unpack_2__element_2 = tmp_assign_source_56;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_5;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_5 = generator_heap->tmp_tuple_unpack_2__source_iter;
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

                    generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                    generator_heap->exception_lineno = 99;
                    goto try_except_handler_21;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[9];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            generator_heap->exception_lineno = 99;
            goto try_except_handler_21;
        }
    }
    goto try_end_12;
    // Exception handler code:
    try_except_handler_21:;
    generator_heap->exception_keeper_type_18 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_18 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_18 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_18 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_2__source_iter);
    generator_heap->tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_18;
    generator_heap->exception_value = generator_heap->exception_keeper_value_18;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_18;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_18;

    goto try_except_handler_20;
    // End of try:
    try_end_12:;
    goto try_end_13;
    // Exception handler code:
    try_except_handler_20:;
    generator_heap->exception_keeper_type_19 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_19 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_19 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_19 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_2__element_1);
    generator_heap->tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_2__element_2);
    generator_heap->tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_19;
    generator_heap->exception_value = generator_heap->exception_keeper_value_19;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_19;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_19;

    goto try_except_handler_19;
    // End of try:
    try_end_13:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_2__source_iter);
    generator_heap->tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_57;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__element_1);
        tmp_assign_source_57 = generator_heap->tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = generator_heap->var_u;
            generator_heap->var_u = tmp_assign_source_57;
            Py_INCREF(generator_heap->var_u);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_2__element_1);
    generator_heap->tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_58;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__element_2);
        tmp_assign_source_58 = generator_heap->tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = generator_heap->var_nbrdict;
            generator_heap->var_nbrdict = tmp_assign_source_58;
            Py_INCREF(generator_heap->var_nbrdict);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_2__element_2);
    generator_heap->tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_iter_arg_11;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(generator_heap->var_nbrdict);
        tmp_expression_value_11 = generator_heap->var_nbrdict;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[20]);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 100;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_19;
        }
        generator->m_frame->m_frame.f_lineno = 100;
        tmp_iter_arg_11 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_8);
        Py_DECREF(tmp_called_value_8);
        if (tmp_iter_arg_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 100;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_19;
        }
        tmp_assign_source_59 = MAKE_ITERATOR(tstate, tmp_iter_arg_11);
        Py_DECREF(tmp_iter_arg_11);
        if (tmp_assign_source_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 100;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_19;
        }
        {
            PyObject *old = generator_heap->tmp_for_loop_3__for_iterator;
            generator_heap->tmp_for_loop_3__for_iterator = tmp_assign_source_59;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_6:;
    {
        PyObject *tmp_next_source_6;
        PyObject *tmp_assign_source_60;
        CHECK_OBJECT(generator_heap->tmp_for_loop_3__for_iterator);
        tmp_next_source_6 = generator_heap->tmp_for_loop_3__for_iterator;
        tmp_assign_source_60 = ITERATOR_NEXT(tmp_next_source_6);
        if (tmp_assign_source_60 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_6;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                generator_heap->exception_lineno = 100;
                goto try_except_handler_22;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_3__iter_value;
            generator_heap->tmp_for_loop_3__iter_value = tmp_assign_source_60;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_iter_arg_12;
        CHECK_OBJECT(generator_heap->tmp_for_loop_3__iter_value);
        tmp_iter_arg_12 = generator_heap->tmp_for_loop_3__iter_value;
        tmp_assign_source_61 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_12);
        if (tmp_assign_source_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 100;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_3__source_iter;
            generator_heap->tmp_tuple_unpack_3__source_iter = tmp_assign_source_61;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_unpack_12;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_3__source_iter);
        tmp_unpack_12 = generator_heap->tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_62 = UNPACK_NEXT(tstate, tmp_unpack_12, 0, 2);
        if (tmp_assign_source_62 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            generator_heap->exception_lineno = 100;
            goto try_except_handler_24;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_3__element_1;
            generator_heap->tmp_tuple_unpack_3__element_1 = tmp_assign_source_62;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_unpack_13;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_3__source_iter);
        tmp_unpack_13 = generator_heap->tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_63 = UNPACK_NEXT(tstate, tmp_unpack_13, 1, 2);
        if (tmp_assign_source_63 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            generator_heap->exception_lineno = 100;
            goto try_except_handler_24;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_3__element_2;
            generator_heap->tmp_tuple_unpack_3__element_2 = tmp_assign_source_63;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_6;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_3__source_iter);
        tmp_iterator_name_6 = generator_heap->tmp_tuple_unpack_3__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_6); assert(HAS_ITERNEXT(tmp_iterator_name_6));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_6)->tp_iternext)(tmp_iterator_name_6);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                    generator_heap->exception_lineno = 100;
                    goto try_except_handler_24;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[9];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            generator_heap->exception_lineno = 100;
            goto try_except_handler_24;
        }
    }
    goto try_end_14;
    // Exception handler code:
    try_except_handler_24:;
    generator_heap->exception_keeper_type_20 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_20 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_20 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_20 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_3__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_3__source_iter);
    generator_heap->tmp_tuple_unpack_3__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_20;
    generator_heap->exception_value = generator_heap->exception_keeper_value_20;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_20;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_20;

    goto try_except_handler_23;
    // End of try:
    try_end_14:;
    goto try_end_15;
    // Exception handler code:
    try_except_handler_23:;
    generator_heap->exception_keeper_type_21 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_21 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_21 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_21 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_3__element_1);
    generator_heap->tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_3__element_2);
    generator_heap->tmp_tuple_unpack_3__element_2 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_21;
    generator_heap->exception_value = generator_heap->exception_keeper_value_21;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_21;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_21;

    goto try_except_handler_22;
    // End of try:
    try_end_15:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_3__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_3__source_iter);
    generator_heap->tmp_tuple_unpack_3__source_iter = NULL;
    {
        PyObject *tmp_assign_source_64;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_3__element_1);
        tmp_assign_source_64 = generator_heap->tmp_tuple_unpack_3__element_1;
        {
            PyObject *old = generator_heap->var_v;
            generator_heap->var_v = tmp_assign_source_64;
            Py_INCREF(generator_heap->var_v);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_3__element_1);
    generator_heap->tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_65;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_3__element_2);
        tmp_assign_source_65 = generator_heap->tmp_tuple_unpack_3__element_2;
        {
            PyObject *old = generator_heap->var_wt;
            generator_heap->var_wt = tmp_assign_source_65;
            Py_INCREF(generator_heap->var_wt);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_3__element_2);
    generator_heap->tmp_tuple_unpack_3__element_2 = NULL;

    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_mult_expr_left_5;
        PyObject *tmp_mult_expr_right_5;
        PyObject *tmp_mult_expr_left_6;
        PyObject *tmp_mult_expr_right_6;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_mult_expr_left_7;
        PyObject *tmp_mult_expr_right_7;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_mult_expr_left_8;
        PyObject *tmp_mult_expr_right_8;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_ass_subscript_3;
        if (generator_heap->var_q0 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[10]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 101;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }

        tmp_mult_expr_left_5 = generator_heap->var_q0;
        CHECK_OBJECT(generator_heap->var_wt);
        tmp_mult_expr_right_5 = generator_heap->var_wt;
        tmp_sub_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_5, tmp_mult_expr_right_5);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 101;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {
            Py_DECREF(tmp_sub_expr_left_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[21]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 101;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }

        tmp_mult_expr_left_6 = Nuitka_Cell_GET(generator->m_closure[1]);
        CHECK_OBJECT(generator_heap->var_a);
        tmp_expression_value_12 = generator_heap->var_a;
        CHECK_OBJECT(generator_heap->var_u);
        tmp_subscript_value_5 = generator_heap->var_u;
        tmp_mult_expr_left_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_5);
        if (tmp_mult_expr_left_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_sub_expr_left_1);

            generator_heap->exception_lineno = 101;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        CHECK_OBJECT(generator_heap->var_b);
        tmp_expression_value_13 = generator_heap->var_b;
        CHECK_OBJECT(generator_heap->var_v);
        tmp_subscript_value_6 = generator_heap->var_v;
        tmp_mult_expr_right_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_6);
        if (tmp_mult_expr_right_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_sub_expr_left_1);
            Py_DECREF(tmp_mult_expr_left_7);

            generator_heap->exception_lineno = 101;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        tmp_add_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_7, tmp_mult_expr_right_7);
        Py_DECREF(tmp_mult_expr_left_7);
        Py_DECREF(tmp_mult_expr_right_7);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_sub_expr_left_1);

            generator_heap->exception_lineno = 101;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        CHECK_OBJECT(generator_heap->var_b);
        tmp_expression_value_14 = generator_heap->var_b;
        CHECK_OBJECT(generator_heap->var_u);
        tmp_subscript_value_7 = generator_heap->var_u;
        tmp_mult_expr_left_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_7);
        if (tmp_mult_expr_left_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_sub_expr_left_1);
            Py_DECREF(tmp_add_expr_left_1);

            generator_heap->exception_lineno = 101;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        CHECK_OBJECT(generator_heap->var_a);
        tmp_expression_value_15 = generator_heap->var_a;
        CHECK_OBJECT(generator_heap->var_v);
        tmp_subscript_value_8 = generator_heap->var_v;
        tmp_mult_expr_right_8 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_15, tmp_subscript_value_8);
        if (tmp_mult_expr_right_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_sub_expr_left_1);
            Py_DECREF(tmp_add_expr_left_1);
            Py_DECREF(tmp_mult_expr_left_8);

            generator_heap->exception_lineno = 101;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        tmp_add_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_8, tmp_mult_expr_right_8);
        Py_DECREF(tmp_mult_expr_left_8);
        Py_DECREF(tmp_mult_expr_right_8);
        if (tmp_add_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_sub_expr_left_1);
            Py_DECREF(tmp_add_expr_left_1);

            generator_heap->exception_lineno = 101;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        tmp_mult_expr_right_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_mult_expr_right_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_sub_expr_left_1);

            generator_heap->exception_lineno = 101;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        tmp_sub_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_6, tmp_mult_expr_right_6);
        Py_DECREF(tmp_mult_expr_right_6);
        if (tmp_sub_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_sub_expr_left_1);

            generator_heap->exception_lineno = 101;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        tmp_ass_subvalue_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        Py_DECREF(tmp_sub_expr_right_1);
        if (tmp_ass_subvalue_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 101;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        CHECK_OBJECT(generator_heap->var_dq_dict);
        tmp_expression_value_16 = generator_heap->var_dq_dict;
        CHECK_OBJECT(generator_heap->var_u);
        tmp_subscript_value_9 = generator_heap->var_u;
        tmp_ass_subscribed_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_16, tmp_subscript_value_9);
        if (tmp_ass_subscribed_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_ass_subvalue_3);

            generator_heap->exception_lineno = 101;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
        CHECK_OBJECT(generator_heap->var_v);
        tmp_ass_subscript_3 = generator_heap->var_v;
        generator_heap->tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        Py_DECREF(tmp_ass_subscribed_3);
        Py_DECREF(tmp_ass_subvalue_3);
        if (generator_heap->tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 101;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_22;
        }
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 100;
        generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
        goto try_except_handler_22;
    }
    goto loop_start_6;
    loop_end_6:;
    goto try_end_16;
    // Exception handler code:
    try_except_handler_22:;
    generator_heap->exception_keeper_type_22 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_22 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_22 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_22 = generator_heap->exception_lineno;
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
    generator_heap->exception_type = generator_heap->exception_keeper_type_22;
    generator_heap->exception_value = generator_heap->exception_keeper_value_22;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_22;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_22;

    goto try_except_handler_19;
    // End of try:
    try_end_16:;
    Py_XDECREF(generator_heap->tmp_for_loop_3__iter_value);
    generator_heap->tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_3__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_3__for_iterator);
    generator_heap->tmp_for_loop_3__for_iterator = NULL;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 99;
        generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
        goto try_except_handler_19;
    }
    goto loop_start_5;
    loop_end_5:;
    goto try_end_17;
    // Exception handler code:
    try_except_handler_19:;
    generator_heap->exception_keeper_type_23 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_23 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_23 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_23 = generator_heap->exception_lineno;
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
    generator_heap->exception_type = generator_heap->exception_keeper_type_23;
    generator_heap->exception_value = generator_heap->exception_keeper_value_23;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_23;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_23;

    goto frame_exception_exit_1;
    // End of try:
    try_end_17:;
    Py_XDECREF(generator_heap->tmp_for_loop_2__iter_value);
    generator_heap->tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_2__for_iterator);
    generator_heap->tmp_for_loop_2__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_66;
        // Tried code:
        {
            PyObject *tmp_assign_source_67;
            PyObject *tmp_iter_arg_13;
            if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[1]);
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

                generator_heap->exception_lineno = 105;
                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                goto try_except_handler_25;
            }

            tmp_iter_arg_13 = Nuitka_Cell_GET(generator->m_closure[0]);
            tmp_assign_source_67 = MAKE_ITERATOR(tstate, tmp_iter_arg_13);
            if (tmp_assign_source_67 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 105;
                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                goto try_except_handler_25;
            }
            assert(generator_heap->tmp_dictcontraction_4__$0 == NULL);
            generator_heap->tmp_dictcontraction_4__$0 = tmp_assign_source_67;
        }
        {
            PyObject *tmp_assign_source_68;
            tmp_assign_source_68 = MAKE_DICT_EMPTY();
            assert(generator_heap->tmp_dictcontraction_4__contraction == NULL);
            generator_heap->tmp_dictcontraction_4__contraction = tmp_assign_source_68;
        }
        // Tried code:
        loop_start_7:;
        {
            PyObject *tmp_next_source_7;
            PyObject *tmp_assign_source_69;
            CHECK_OBJECT(generator_heap->tmp_dictcontraction_4__$0);
            tmp_next_source_7 = generator_heap->tmp_dictcontraction_4__$0;
            tmp_assign_source_69 = ITERATOR_NEXT(tmp_next_source_7);
            if (tmp_assign_source_69 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_7;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                    generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                    generator_heap->exception_lineno = 105;
                    goto try_except_handler_26;
                }
            }

            {
                PyObject *old = generator_heap->tmp_dictcontraction_4__iter_value_0;
                generator_heap->tmp_dictcontraction_4__iter_value_0 = tmp_assign_source_69;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_70;
            CHECK_OBJECT(generator_heap->tmp_dictcontraction_4__iter_value_0);
            tmp_assign_source_70 = generator_heap->tmp_dictcontraction_4__iter_value_0;
            {
                PyObject *old = generator_heap->outline_3_var_u;
                generator_heap->outline_3_var_u = tmp_assign_source_70;
                Py_INCREF(generator_heap->outline_3_var_u);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_dictset38_key_4;
            PyObject *tmp_dictset38_value_4;
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_dictset38_dict_5;
            CHECK_OBJECT(generator_heap->outline_3_var_u);
            tmp_dictset38_key_4 = generator_heap->outline_3_var_u;
            tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_networkx$algorithms$community$modularity_max, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_called_value_9 == NULL)) {
                tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
            }

            if (tmp_called_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 105;
                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                goto try_except_handler_26;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_71;
                PyObject *tmp_iter_arg_14;
                PyObject *tmp_called_value_10;
                PyObject *tmp_expression_value_17;
                PyObject *tmp_expression_value_18;
                PyObject *tmp_subscript_value_10;
                CHECK_OBJECT(generator_heap->var_dq_dict);
                tmp_expression_value_18 = generator_heap->var_dq_dict;
                CHECK_OBJECT(generator_heap->outline_3_var_u);
                tmp_subscript_value_10 = generator_heap->outline_3_var_u;
                tmp_expression_value_17 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_18, tmp_subscript_value_10);
                if (tmp_expression_value_17 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 105;
                    generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                    goto try_except_handler_27;
                }
                tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[20]);
                Py_DECREF(tmp_expression_value_17);
                if (tmp_called_value_10 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 105;
                    generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                    goto try_except_handler_27;
                }
                generator->m_frame->m_frame.f_lineno = 105;
                tmp_iter_arg_14 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_10);
                Py_DECREF(tmp_called_value_10);
                if (tmp_iter_arg_14 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 105;
                    generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                    goto try_except_handler_27;
                }
                tmp_assign_source_71 = MAKE_ITERATOR(tstate, tmp_iter_arg_14);
                Py_DECREF(tmp_iter_arg_14);
                if (tmp_assign_source_71 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 105;
                    generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                    goto try_except_handler_27;
                }
                {
                    PyObject *old = generator_heap->tmp_dictcontraction$dictcontraction_1__$0;
                    generator_heap->tmp_dictcontraction$dictcontraction_1__$0 = tmp_assign_source_71;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_assign_source_72;
                tmp_assign_source_72 = MAKE_DICT_EMPTY();
                {
                    PyObject *old = generator_heap->tmp_dictcontraction$dictcontraction_1__contraction;
                    generator_heap->tmp_dictcontraction$dictcontraction_1__contraction = tmp_assign_source_72;
                    Py_XDECREF(old);
                }

            }
            // Tried code:
            loop_start_8:;
            {
                PyObject *tmp_next_source_8;
                PyObject *tmp_assign_source_73;
                CHECK_OBJECT(generator_heap->tmp_dictcontraction$dictcontraction_1__$0);
                tmp_next_source_8 = generator_heap->tmp_dictcontraction$dictcontraction_1__$0;
                tmp_assign_source_73 = ITERATOR_NEXT(tmp_next_source_8);
                if (tmp_assign_source_73 == NULL) {
                    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                        goto loop_end_8;
                    } else {

                        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                        generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                        generator_heap->exception_lineno = 105;
                        goto try_except_handler_28;
                    }
                }

                {
                    PyObject *old = generator_heap->tmp_dictcontraction$dictcontraction_1__iter_value_0;
                    generator_heap->tmp_dictcontraction$dictcontraction_1__iter_value_0 = tmp_assign_source_73;
                    Py_XDECREF(old);
                }

            }
            // Tried code:
            {
                PyObject *tmp_assign_source_74;
                PyObject *tmp_iter_arg_15;
                CHECK_OBJECT(generator_heap->tmp_dictcontraction$dictcontraction_1__iter_value_0);
                tmp_iter_arg_15 = generator_heap->tmp_dictcontraction$dictcontraction_1__iter_value_0;
                tmp_assign_source_74 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_15);
                if (tmp_assign_source_74 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 105;
                    generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                    goto try_except_handler_29;
                }
                {
                    PyObject *old = generator_heap->tmp_dictcontraction$dictcontraction$tuple_unpack_1__source_iter;
                    generator_heap->tmp_dictcontraction$dictcontraction$tuple_unpack_1__source_iter = tmp_assign_source_74;
                    Py_XDECREF(old);
                }

            }
            // Tried code:
            {
                PyObject *tmp_assign_source_75;
                PyObject *tmp_unpack_14;
                CHECK_OBJECT(generator_heap->tmp_dictcontraction$dictcontraction$tuple_unpack_1__source_iter);
                tmp_unpack_14 = generator_heap->tmp_dictcontraction$dictcontraction$tuple_unpack_1__source_iter;
                tmp_assign_source_75 = UNPACK_NEXT(tstate, tmp_unpack_14, 0, 2);
                if (tmp_assign_source_75 == NULL) {
                    if (!HAS_ERROR_OCCURRED(tstate)) {
                        generator_heap->exception_type = PyExc_StopIteration;
                        Py_INCREF(generator_heap->exception_type);
                        generator_heap->exception_value = NULL;
                        generator_heap->exception_tb = NULL;
                    } else {
                        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                    }


                    generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                    generator_heap->exception_lineno = 105;
                    goto try_except_handler_30;
                }
                {
                    PyObject *old = generator_heap->tmp_dictcontraction$dictcontraction$tuple_unpack_1__element_1;
                    generator_heap->tmp_dictcontraction$dictcontraction$tuple_unpack_1__element_1 = tmp_assign_source_75;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_assign_source_76;
                PyObject *tmp_unpack_15;
                CHECK_OBJECT(generator_heap->tmp_dictcontraction$dictcontraction$tuple_unpack_1__source_iter);
                tmp_unpack_15 = generator_heap->tmp_dictcontraction$dictcontraction$tuple_unpack_1__source_iter;
                tmp_assign_source_76 = UNPACK_NEXT(tstate, tmp_unpack_15, 1, 2);
                if (tmp_assign_source_76 == NULL) {
                    if (!HAS_ERROR_OCCURRED(tstate)) {
                        generator_heap->exception_type = PyExc_StopIteration;
                        Py_INCREF(generator_heap->exception_type);
                        generator_heap->exception_value = NULL;
                        generator_heap->exception_tb = NULL;
                    } else {
                        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                    }


                    generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                    generator_heap->exception_lineno = 105;
                    goto try_except_handler_30;
                }
                {
                    PyObject *old = generator_heap->tmp_dictcontraction$dictcontraction$tuple_unpack_1__element_2;
                    generator_heap->tmp_dictcontraction$dictcontraction$tuple_unpack_1__element_2 = tmp_assign_source_76;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_iterator_name_7;
                CHECK_OBJECT(generator_heap->tmp_dictcontraction$dictcontraction$tuple_unpack_1__source_iter);
                tmp_iterator_name_7 = generator_heap->tmp_dictcontraction$dictcontraction$tuple_unpack_1__source_iter;
                // Check if iterator has left-over elements.
                CHECK_OBJECT(tmp_iterator_name_7); assert(HAS_ITERNEXT(tmp_iterator_name_7));

                generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_7)->tp_iternext)(tmp_iterator_name_7);

                if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
                    PyObject *error = GET_ERROR_OCCURRED(tstate);

                    if (error != NULL) {
                        if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                            CLEAR_ERROR_OCCURRED(tstate);
                        } else {
                            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                            generator_heap->exception_lineno = 105;
                            goto try_except_handler_30;
                        }
                    }
                } else {
                    Py_DECREF(generator_heap->tmp_iterator_attempt);

                    generator_heap->exception_type = PyExc_ValueError;
                    Py_INCREF(PyExc_ValueError);
                    generator_heap->exception_value = mod_consts[9];
                    Py_INCREF(generator_heap->exception_value);
                    generator_heap->exception_tb = NULL;

                    generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                    generator_heap->exception_lineno = 105;
                    goto try_except_handler_30;
                }
            }
            goto try_end_18;
            // Exception handler code:
            try_except_handler_30:;
            generator_heap->exception_keeper_type_24 = generator_heap->exception_type;
            generator_heap->exception_keeper_value_24 = generator_heap->exception_value;
            generator_heap->exception_keeper_tb_24 = generator_heap->exception_tb;
            generator_heap->exception_keeper_lineno_24 = generator_heap->exception_lineno;
            generator_heap->exception_type = NULL;
            generator_heap->exception_value = NULL;
            generator_heap->exception_tb = NULL;
            generator_heap->exception_lineno = 0;

            CHECK_OBJECT(generator_heap->tmp_dictcontraction$dictcontraction$tuple_unpack_1__source_iter);
            Py_DECREF(generator_heap->tmp_dictcontraction$dictcontraction$tuple_unpack_1__source_iter);
            generator_heap->tmp_dictcontraction$dictcontraction$tuple_unpack_1__source_iter = NULL;
            // Re-raise.
            generator_heap->exception_type = generator_heap->exception_keeper_type_24;
            generator_heap->exception_value = generator_heap->exception_keeper_value_24;
            generator_heap->exception_tb = generator_heap->exception_keeper_tb_24;
            generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_24;

            goto try_except_handler_29;
            // End of try:
            try_end_18:;
            goto try_end_19;
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

            Py_XDECREF(generator_heap->tmp_dictcontraction$dictcontraction$tuple_unpack_1__element_1);
            generator_heap->tmp_dictcontraction$dictcontraction$tuple_unpack_1__element_1 = NULL;
            Py_XDECREF(generator_heap->tmp_dictcontraction$dictcontraction$tuple_unpack_1__element_2);
            generator_heap->tmp_dictcontraction$dictcontraction$tuple_unpack_1__element_2 = NULL;
            // Re-raise.
            generator_heap->exception_type = generator_heap->exception_keeper_type_25;
            generator_heap->exception_value = generator_heap->exception_keeper_value_25;
            generator_heap->exception_tb = generator_heap->exception_keeper_tb_25;
            generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_25;

            goto try_except_handler_28;
            // End of try:
            try_end_19:;
            CHECK_OBJECT(generator_heap->tmp_dictcontraction$dictcontraction$tuple_unpack_1__source_iter);
            Py_DECREF(generator_heap->tmp_dictcontraction$dictcontraction$tuple_unpack_1__source_iter);
            generator_heap->tmp_dictcontraction$dictcontraction$tuple_unpack_1__source_iter = NULL;
            {
                PyObject *tmp_assign_source_77;
                CHECK_OBJECT(generator_heap->tmp_dictcontraction$dictcontraction$tuple_unpack_1__element_1);
                tmp_assign_source_77 = generator_heap->tmp_dictcontraction$dictcontraction$tuple_unpack_1__element_1;
                {
                    PyObject *old = generator_heap->outline_4_var_v;
                    generator_heap->outline_4_var_v = tmp_assign_source_77;
                    Py_INCREF(generator_heap->outline_4_var_v);
                    Py_XDECREF(old);
                }

            }
            Py_XDECREF(generator_heap->tmp_dictcontraction$dictcontraction$tuple_unpack_1__element_1);
            generator_heap->tmp_dictcontraction$dictcontraction$tuple_unpack_1__element_1 = NULL;

            {
                PyObject *tmp_assign_source_78;
                CHECK_OBJECT(generator_heap->tmp_dictcontraction$dictcontraction$tuple_unpack_1__element_2);
                tmp_assign_source_78 = generator_heap->tmp_dictcontraction$dictcontraction$tuple_unpack_1__element_2;
                {
                    PyObject *old = generator_heap->outline_4_var_dq;
                    generator_heap->outline_4_var_dq = tmp_assign_source_78;
                    Py_INCREF(generator_heap->outline_4_var_dq);
                    Py_XDECREF(old);
                }

            }
            Py_XDECREF(generator_heap->tmp_dictcontraction$dictcontraction$tuple_unpack_1__element_2);
            generator_heap->tmp_dictcontraction$dictcontraction$tuple_unpack_1__element_2 = NULL;

            {
                PyObject *tmp_dictset38_key_5;
                PyObject *tmp_tuple_element_1;
                PyObject *tmp_dictset38_value_5;
                PyObject *tmp_operand_value_1;
                PyObject *tmp_dictset38_dict_4;
                CHECK_OBJECT(generator_heap->outline_3_var_u);
                tmp_tuple_element_1 = generator_heap->outline_3_var_u;
                tmp_dictset38_key_5 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_dictset38_key_5, 0, tmp_tuple_element_1);
                CHECK_OBJECT(generator_heap->outline_4_var_v);
                tmp_tuple_element_1 = generator_heap->outline_4_var_v;
                PyTuple_SET_ITEM0(tmp_dictset38_key_5, 1, tmp_tuple_element_1);
                CHECK_OBJECT(generator_heap->outline_4_var_dq);
                tmp_operand_value_1 = generator_heap->outline_4_var_dq;
                tmp_dictset38_value_5 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
                if (tmp_dictset38_value_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                    Py_DECREF(tmp_dictset38_key_5);

                    generator_heap->exception_lineno = 105;
                    generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                    goto try_except_handler_28;
                }
                CHECK_OBJECT(generator_heap->tmp_dictcontraction$dictcontraction_1__contraction);
                tmp_dictset38_dict_4 = generator_heap->tmp_dictcontraction$dictcontraction_1__contraction;
                assert(PyDict_CheckExact(tmp_dictset38_dict_4));
                generator_heap->tmp_res = PyDict_SetItem(tmp_dictset38_dict_4, tmp_dictset38_key_5, tmp_dictset38_value_5);

                Py_DECREF(tmp_dictset38_value_5);
                Py_DECREF(tmp_dictset38_key_5);
                if (generator_heap->tmp_res != 0) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                    generator_heap->exception_lineno = 105;
                    generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                    goto try_except_handler_28;
                }
            }
            if (CONSIDER_THREADING(tstate) == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 105;
                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                goto try_except_handler_28;
            }
            goto loop_start_8;
            loop_end_8:;
            CHECK_OBJECT(generator_heap->tmp_dictcontraction$dictcontraction_1__contraction);
            tmp_args_element_value_3 = generator_heap->tmp_dictcontraction$dictcontraction_1__contraction;
            Py_INCREF(tmp_args_element_value_3);
            goto try_return_handler_28;
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_28:;
            CHECK_OBJECT(generator_heap->tmp_dictcontraction$dictcontraction_1__$0);
            Py_DECREF(generator_heap->tmp_dictcontraction$dictcontraction_1__$0);
            generator_heap->tmp_dictcontraction$dictcontraction_1__$0 = NULL;
            CHECK_OBJECT(generator_heap->tmp_dictcontraction$dictcontraction_1__contraction);
            Py_DECREF(generator_heap->tmp_dictcontraction$dictcontraction_1__contraction);
            generator_heap->tmp_dictcontraction$dictcontraction_1__contraction = NULL;
            Py_XDECREF(generator_heap->tmp_dictcontraction$dictcontraction_1__iter_value_0);
            generator_heap->tmp_dictcontraction$dictcontraction_1__iter_value_0 = NULL;
            goto try_return_handler_27;
            // Exception handler code:
            try_except_handler_28:;
            generator_heap->exception_keeper_type_26 = generator_heap->exception_type;
            generator_heap->exception_keeper_value_26 = generator_heap->exception_value;
            generator_heap->exception_keeper_tb_26 = generator_heap->exception_tb;
            generator_heap->exception_keeper_lineno_26 = generator_heap->exception_lineno;
            generator_heap->exception_type = NULL;
            generator_heap->exception_value = NULL;
            generator_heap->exception_tb = NULL;
            generator_heap->exception_lineno = 0;

            CHECK_OBJECT(generator_heap->tmp_dictcontraction$dictcontraction_1__$0);
            Py_DECREF(generator_heap->tmp_dictcontraction$dictcontraction_1__$0);
            generator_heap->tmp_dictcontraction$dictcontraction_1__$0 = NULL;
            CHECK_OBJECT(generator_heap->tmp_dictcontraction$dictcontraction_1__contraction);
            Py_DECREF(generator_heap->tmp_dictcontraction$dictcontraction_1__contraction);
            generator_heap->tmp_dictcontraction$dictcontraction_1__contraction = NULL;
            Py_XDECREF(generator_heap->tmp_dictcontraction$dictcontraction_1__iter_value_0);
            generator_heap->tmp_dictcontraction$dictcontraction_1__iter_value_0 = NULL;
            // Re-raise.
            generator_heap->exception_type = generator_heap->exception_keeper_type_26;
            generator_heap->exception_value = generator_heap->exception_keeper_value_26;
            generator_heap->exception_tb = generator_heap->exception_keeper_tb_26;
            generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_26;

            goto try_except_handler_27;
            // End of try:
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_27:;
            Py_XDECREF(generator_heap->outline_4_var_v);
            generator_heap->outline_4_var_v = NULL;
            Py_XDECREF(generator_heap->outline_4_var_dq);
            generator_heap->outline_4_var_dq = NULL;
            goto outline_result_5;
            // Exception handler code:
            try_except_handler_27:;
            generator_heap->exception_keeper_type_27 = generator_heap->exception_type;
            generator_heap->exception_keeper_value_27 = generator_heap->exception_value;
            generator_heap->exception_keeper_tb_27 = generator_heap->exception_tb;
            generator_heap->exception_keeper_lineno_27 = generator_heap->exception_lineno;
            generator_heap->exception_type = NULL;
            generator_heap->exception_value = NULL;
            generator_heap->exception_tb = NULL;
            generator_heap->exception_lineno = 0;

            Py_XDECREF(generator_heap->outline_4_var_v);
            generator_heap->outline_4_var_v = NULL;
            Py_XDECREF(generator_heap->outline_4_var_dq);
            generator_heap->outline_4_var_dq = NULL;
            // Re-raise.
            generator_heap->exception_type = generator_heap->exception_keeper_type_27;
            generator_heap->exception_value = generator_heap->exception_keeper_value_27;
            generator_heap->exception_tb = generator_heap->exception_keeper_tb_27;
            generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_27;

            goto outline_exception_5;
            // End of try:
            NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
            return NULL;
            outline_exception_5:;
            generator_heap->exception_lineno = 105;
            goto try_except_handler_26;
            outline_result_5:;
            generator->m_frame->m_frame.f_lineno = 105;
            tmp_dictset38_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset38_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 105;
                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                goto try_except_handler_26;
            }
            CHECK_OBJECT(generator_heap->tmp_dictcontraction_4__contraction);
            tmp_dictset38_dict_5 = generator_heap->tmp_dictcontraction_4__contraction;
            assert(PyDict_CheckExact(tmp_dictset38_dict_5));
            generator_heap->tmp_res = PyDict_SetItem(tmp_dictset38_dict_5, tmp_dictset38_key_4, tmp_dictset38_value_4);

            Py_DECREF(tmp_dictset38_value_4);
            if (generator_heap->tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 105;
                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                goto try_except_handler_26;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 105;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
        goto loop_start_7;
        loop_end_7:;
        CHECK_OBJECT(generator_heap->tmp_dictcontraction_4__contraction);
        tmp_assign_source_66 = generator_heap->tmp_dictcontraction_4__contraction;
        Py_INCREF(tmp_assign_source_66);
        goto try_return_handler_26;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_26:;
        CHECK_OBJECT(generator_heap->tmp_dictcontraction_4__$0);
        Py_DECREF(generator_heap->tmp_dictcontraction_4__$0);
        generator_heap->tmp_dictcontraction_4__$0 = NULL;
        CHECK_OBJECT(generator_heap->tmp_dictcontraction_4__contraction);
        Py_DECREF(generator_heap->tmp_dictcontraction_4__contraction);
        generator_heap->tmp_dictcontraction_4__contraction = NULL;
        Py_XDECREF(generator_heap->tmp_dictcontraction_4__iter_value_0);
        generator_heap->tmp_dictcontraction_4__iter_value_0 = NULL;
        goto try_return_handler_25;
        // Exception handler code:
        try_except_handler_26:;
        generator_heap->exception_keeper_type_28 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_28 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_28 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_28 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        CHECK_OBJECT(generator_heap->tmp_dictcontraction_4__$0);
        Py_DECREF(generator_heap->tmp_dictcontraction_4__$0);
        generator_heap->tmp_dictcontraction_4__$0 = NULL;
        CHECK_OBJECT(generator_heap->tmp_dictcontraction_4__contraction);
        Py_DECREF(generator_heap->tmp_dictcontraction_4__contraction);
        generator_heap->tmp_dictcontraction_4__contraction = NULL;
        Py_XDECREF(generator_heap->tmp_dictcontraction_4__iter_value_0);
        generator_heap->tmp_dictcontraction_4__iter_value_0 = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_28;
        generator_heap->exception_value = generator_heap->exception_keeper_value_28;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_28;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_28;

        goto try_except_handler_25;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_25:;
        Py_XDECREF(generator_heap->outline_3_var_u);
        generator_heap->outline_3_var_u = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_25:;
        generator_heap->exception_keeper_type_29 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_29 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_29 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_29 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        Py_XDECREF(generator_heap->outline_3_var_u);
        generator_heap->outline_3_var_u = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_29;
        generator_heap->exception_value = generator_heap->exception_keeper_value_29;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_29;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_29;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        generator_heap->exception_lineno = 105;
        goto frame_exception_exit_1;
        outline_result_4:;
        assert(generator_heap->var_dq_heap == NULL);
        generator_heap->var_dq_heap = tmp_assign_source_66;
    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_called_value_11;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_networkx$algorithms$community$modularity_max, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 107;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_80;
            PyObject *tmp_iter_arg_16;
            if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[1]);
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

                generator_heap->exception_lineno = 107;
                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                goto try_except_handler_31;
            }

            tmp_iter_arg_16 = Nuitka_Cell_GET(generator->m_closure[0]);
            tmp_assign_source_80 = MAKE_ITERATOR(tstate, tmp_iter_arg_16);
            if (tmp_assign_source_80 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 107;
                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                goto try_except_handler_31;
            }
            assert(generator_heap->tmp_listcomp_1__$0 == NULL);
            generator_heap->tmp_listcomp_1__$0 = tmp_assign_source_80;
        }
        {
            PyObject *tmp_assign_source_81;
            tmp_assign_source_81 = MAKE_LIST_EMPTY(0);
            assert(generator_heap->tmp_listcomp_1__contraction == NULL);
            generator_heap->tmp_listcomp_1__contraction = tmp_assign_source_81;
        }
        // Tried code:
        loop_start_9:;
        {
            PyObject *tmp_next_source_9;
            PyObject *tmp_assign_source_82;
            CHECK_OBJECT(generator_heap->tmp_listcomp_1__$0);
            tmp_next_source_9 = generator_heap->tmp_listcomp_1__$0;
            tmp_assign_source_82 = ITERATOR_NEXT(tmp_next_source_9);
            if (tmp_assign_source_82 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_9;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                    generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                    generator_heap->exception_lineno = 107;
                    goto try_except_handler_32;
                }
            }

            {
                PyObject *old = generator_heap->tmp_listcomp_1__iter_value_0;
                generator_heap->tmp_listcomp_1__iter_value_0 = tmp_assign_source_82;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_83;
            CHECK_OBJECT(generator_heap->tmp_listcomp_1__iter_value_0);
            tmp_assign_source_83 = generator_heap->tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = generator_heap->outline_5_var_n;
                generator_heap->outline_5_var_n = tmp_assign_source_83;
                Py_INCREF(generator_heap->outline_5_var_n);
                Py_XDECREF(old);
            }

        }
        {
            bool tmp_condition_result_3;
            PyObject *tmp_cmp_expr_left_2;
            nuitka_digit tmp_cmp_expr_right_2;
            PyObject *tmp_len_arg_1;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_subscript_value_11;
            CHECK_OBJECT(generator_heap->var_dq_heap);
            tmp_expression_value_19 = generator_heap->var_dq_heap;
            CHECK_OBJECT(generator_heap->outline_5_var_n);
            tmp_subscript_value_11 = generator_heap->outline_5_var_n;
            tmp_len_arg_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_19, tmp_subscript_value_11);
            if (tmp_len_arg_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 107;
                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                goto try_except_handler_32;
            }
            tmp_cmp_expr_left_2 = BUILTIN_LEN(tstate, tmp_len_arg_1);
            Py_DECREF(tmp_len_arg_1);
            if (tmp_cmp_expr_left_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 107;
                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                goto try_except_handler_32;
            }
            tmp_cmp_expr_right_2 = 0;
            tmp_condition_result_3 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            Py_DECREF(tmp_cmp_expr_left_2);
            if (tmp_condition_result_3 != false) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_expression_value_22;
            PyObject *tmp_subscript_value_12;
            PyObject *tmp_subscript_value_13;
            CHECK_OBJECT(generator_heap->tmp_listcomp_1__contraction);
            tmp_append_list_1 = generator_heap->tmp_listcomp_1__contraction;
            CHECK_OBJECT(generator_heap->var_dq_heap);
            tmp_expression_value_22 = generator_heap->var_dq_heap;
            CHECK_OBJECT(generator_heap->outline_5_var_n);
            tmp_subscript_value_12 = generator_heap->outline_5_var_n;
            tmp_expression_value_21 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_22, tmp_subscript_value_12);
            if (tmp_expression_value_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 107;
                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                goto try_except_handler_32;
            }
            tmp_expression_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[23]);
            Py_DECREF(tmp_expression_value_21);
            if (tmp_expression_value_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 107;
                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                goto try_except_handler_32;
            }
            tmp_subscript_value_13 = mod_consts[24];
            tmp_append_value_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_20, tmp_subscript_value_13, 0);
            Py_DECREF(tmp_expression_value_20);
            if (tmp_append_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 107;
                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                goto try_except_handler_32;
            }
            generator_heap->tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (generator_heap->tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 107;
                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                goto try_except_handler_32;
            }
        }
        branch_no_3:;
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 107;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_32;
        }
        goto loop_start_9;
        loop_end_9:;
        CHECK_OBJECT(generator_heap->tmp_listcomp_1__contraction);
        tmp_args_element_value_4 = generator_heap->tmp_listcomp_1__contraction;
        Py_INCREF(tmp_args_element_value_4);
        goto try_return_handler_32;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_32:;
        CHECK_OBJECT(generator_heap->tmp_listcomp_1__$0);
        Py_DECREF(generator_heap->tmp_listcomp_1__$0);
        generator_heap->tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(generator_heap->tmp_listcomp_1__contraction);
        Py_DECREF(generator_heap->tmp_listcomp_1__contraction);
        generator_heap->tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(generator_heap->tmp_listcomp_1__iter_value_0);
        generator_heap->tmp_listcomp_1__iter_value_0 = NULL;
        goto try_return_handler_31;
        // Exception handler code:
        try_except_handler_32:;
        generator_heap->exception_keeper_type_30 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_30 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_30 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_30 = generator_heap->exception_lineno;
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
        generator_heap->exception_type = generator_heap->exception_keeper_type_30;
        generator_heap->exception_value = generator_heap->exception_keeper_value_30;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_30;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_30;

        goto try_except_handler_31;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_31:;
        Py_XDECREF(generator_heap->outline_5_var_n);
        generator_heap->outline_5_var_n = NULL;
        goto outline_result_6;
        // Exception handler code:
        try_except_handler_31:;
        generator_heap->exception_keeper_type_31 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_31 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_31 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_31 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        Py_XDECREF(generator_heap->outline_5_var_n);
        generator_heap->outline_5_var_n = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_31;
        generator_heap->exception_value = generator_heap->exception_keeper_value_31;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_31;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_31;

        goto outline_exception_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_6:;
        generator_heap->exception_lineno = 107;
        goto frame_exception_exit_1;
        outline_result_6:;
        generator->m_frame->m_frame.f_lineno = 107;
        tmp_assign_source_79 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 107;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_H == NULL);
        generator_heap->var_H = tmp_assign_source_79;
    }
    {
        PyObject *tmp_assign_source_84;
        // Tried code:
        {
            PyObject *tmp_assign_source_85;
            PyObject *tmp_iter_arg_17;
            if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[1]);
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

                generator_heap->exception_lineno = 110;
                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                goto try_except_handler_33;
            }

            tmp_iter_arg_17 = Nuitka_Cell_GET(generator->m_closure[0]);
            tmp_assign_source_85 = MAKE_ITERATOR(tstate, tmp_iter_arg_17);
            if (tmp_assign_source_85 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 110;
                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                goto try_except_handler_33;
            }
            assert(generator_heap->tmp_dictcontraction_5__$0 == NULL);
            generator_heap->tmp_dictcontraction_5__$0 = tmp_assign_source_85;
        }
        {
            PyObject *tmp_assign_source_86;
            tmp_assign_source_86 = MAKE_DICT_EMPTY();
            assert(generator_heap->tmp_dictcontraction_5__contraction == NULL);
            generator_heap->tmp_dictcontraction_5__contraction = tmp_assign_source_86;
        }
        // Tried code:
        loop_start_10:;
        {
            PyObject *tmp_next_source_10;
            PyObject *tmp_assign_source_87;
            CHECK_OBJECT(generator_heap->tmp_dictcontraction_5__$0);
            tmp_next_source_10 = generator_heap->tmp_dictcontraction_5__$0;
            tmp_assign_source_87 = ITERATOR_NEXT(tmp_next_source_10);
            if (tmp_assign_source_87 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_10;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                    generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                    generator_heap->exception_lineno = 110;
                    goto try_except_handler_34;
                }
            }

            {
                PyObject *old = generator_heap->tmp_dictcontraction_5__iter_value_0;
                generator_heap->tmp_dictcontraction_5__iter_value_0 = tmp_assign_source_87;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_88;
            CHECK_OBJECT(generator_heap->tmp_dictcontraction_5__iter_value_0);
            tmp_assign_source_88 = generator_heap->tmp_dictcontraction_5__iter_value_0;
            {
                PyObject *old = generator_heap->outline_6_var_n;
                generator_heap->outline_6_var_n = tmp_assign_source_88;
                Py_INCREF(generator_heap->outline_6_var_n);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_dictset38_key_6;
            PyObject *tmp_dictset38_value_6;
            PyObject *tmp_frozenset_arg_1;
            PyObject *tmp_list_element_1;
            PyObject *tmp_dictset38_dict_6;
            CHECK_OBJECT(generator_heap->outline_6_var_n);
            tmp_dictset38_key_6 = generator_heap->outline_6_var_n;
            CHECK_OBJECT(generator_heap->outline_6_var_n);
            tmp_list_element_1 = generator_heap->outline_6_var_n;
            tmp_frozenset_arg_1 = MAKE_LIST_EMPTY(1);
            PyList_SET_ITEM0(tmp_frozenset_arg_1, 0, tmp_list_element_1);
            tmp_dictset38_value_6 = PyFrozenSet_New(tmp_frozenset_arg_1);
            Py_DECREF(tmp_frozenset_arg_1);
            if (tmp_dictset38_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 110;
                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                goto try_except_handler_34;
            }
            CHECK_OBJECT(generator_heap->tmp_dictcontraction_5__contraction);
            tmp_dictset38_dict_6 = generator_heap->tmp_dictcontraction_5__contraction;
            assert(PyDict_CheckExact(tmp_dictset38_dict_6));
            generator_heap->tmp_res = PyDict_SetItem(tmp_dictset38_dict_6, tmp_dictset38_key_6, tmp_dictset38_value_6);

            Py_DECREF(tmp_dictset38_value_6);
            if (generator_heap->tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 110;
                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                goto try_except_handler_34;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 110;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_34;
        }
        goto loop_start_10;
        loop_end_10:;
        CHECK_OBJECT(generator_heap->tmp_dictcontraction_5__contraction);
        tmp_assign_source_84 = generator_heap->tmp_dictcontraction_5__contraction;
        Py_INCREF(tmp_assign_source_84);
        goto try_return_handler_34;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_34:;
        CHECK_OBJECT(generator_heap->tmp_dictcontraction_5__$0);
        Py_DECREF(generator_heap->tmp_dictcontraction_5__$0);
        generator_heap->tmp_dictcontraction_5__$0 = NULL;
        CHECK_OBJECT(generator_heap->tmp_dictcontraction_5__contraction);
        Py_DECREF(generator_heap->tmp_dictcontraction_5__contraction);
        generator_heap->tmp_dictcontraction_5__contraction = NULL;
        Py_XDECREF(generator_heap->tmp_dictcontraction_5__iter_value_0);
        generator_heap->tmp_dictcontraction_5__iter_value_0 = NULL;
        goto try_return_handler_33;
        // Exception handler code:
        try_except_handler_34:;
        generator_heap->exception_keeper_type_32 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_32 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_32 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_32 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        CHECK_OBJECT(generator_heap->tmp_dictcontraction_5__$0);
        Py_DECREF(generator_heap->tmp_dictcontraction_5__$0);
        generator_heap->tmp_dictcontraction_5__$0 = NULL;
        CHECK_OBJECT(generator_heap->tmp_dictcontraction_5__contraction);
        Py_DECREF(generator_heap->tmp_dictcontraction_5__contraction);
        generator_heap->tmp_dictcontraction_5__contraction = NULL;
        Py_XDECREF(generator_heap->tmp_dictcontraction_5__iter_value_0);
        generator_heap->tmp_dictcontraction_5__iter_value_0 = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_32;
        generator_heap->exception_value = generator_heap->exception_keeper_value_32;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_32;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_32;

        goto try_except_handler_33;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_33:;
        Py_XDECREF(generator_heap->outline_6_var_n);
        generator_heap->outline_6_var_n = NULL;
        goto outline_result_7;
        // Exception handler code:
        try_except_handler_33:;
        generator_heap->exception_keeper_type_33 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_33 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_33 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_33 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        Py_XDECREF(generator_heap->outline_6_var_n);
        generator_heap->outline_6_var_n = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_33;
        generator_heap->exception_value = generator_heap->exception_keeper_value_33;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_33;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_33;

        goto outline_exception_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_7:;
        generator_heap->exception_lineno = 110;
        goto frame_exception_exit_1;
        outline_result_7:;
        assert(generator_heap->var_communities == NULL);
        generator_heap->var_communities = tmp_assign_source_84;
    }
    {
        PyObject *tmp_expression_value_23;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_24;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_communities);
        tmp_expression_value_24 = generator_heap->var_communities;
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[25]);
        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 111;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        generator->m_frame->m_frame.f_lineno = 111;
        tmp_expression_value_23 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_12);
        Py_DECREF(tmp_called_value_12);
        if (tmp_expression_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 111;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_12, sizeof(PyObject *), &tmp_expression_value_24, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_23;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_12, sizeof(PyObject *), &tmp_expression_value_24, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 111;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_yield_result_1 = yield_return_value;
        Py_DECREF(tmp_yield_result_1);
    }
    loop_start_11:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_3;
        nuitka_digit tmp_cmp_expr_right_3;
        PyObject *tmp_len_arg_2;
        if (generator_heap->var_H == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[26]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 114;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_len_arg_2 = generator_heap->var_H;
        tmp_cmp_expr_left_3 = BUILTIN_LEN(tstate, tmp_len_arg_2);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 114;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = 1;
        tmp_condition_result_4 = RICH_COMPARE_LE_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    goto loop_end_11;
    branch_no_4:;
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_89;
        PyObject *tmp_iter_arg_18;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_25;
        if (generator_heap->var_H == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[26]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 119;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_36;
        }

        tmp_expression_value_25 = generator_heap->var_H;
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[27]);
        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 119;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_36;
        }
        generator->m_frame->m_frame.f_lineno = 119;
        tmp_iter_arg_18 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_13);
        Py_DECREF(tmp_called_value_13);
        if (tmp_iter_arg_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 119;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_36;
        }
        tmp_assign_source_89 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_18);
        Py_DECREF(tmp_iter_arg_18);
        if (tmp_assign_source_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 119;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_36;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_4__source_iter;
            generator_heap->tmp_tuple_unpack_4__source_iter = tmp_assign_source_89;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_90;
        PyObject *tmp_unpack_16;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_4__source_iter);
        tmp_unpack_16 = generator_heap->tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_90 = UNPACK_NEXT(tstate, tmp_unpack_16, 0, 3);
        if (tmp_assign_source_90 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            generator_heap->exception_lineno = 119;
            goto try_except_handler_37;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_4__element_1;
            generator_heap->tmp_tuple_unpack_4__element_1 = tmp_assign_source_90;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_unpack_17;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_4__source_iter);
        tmp_unpack_17 = generator_heap->tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_91 = UNPACK_NEXT(tstate, tmp_unpack_17, 1, 3);
        if (tmp_assign_source_91 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            generator_heap->exception_lineno = 119;
            goto try_except_handler_37;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_4__element_2;
            generator_heap->tmp_tuple_unpack_4__element_2 = tmp_assign_source_91;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_92;
        PyObject *tmp_unpack_18;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_4__source_iter);
        tmp_unpack_18 = generator_heap->tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_92 = UNPACK_NEXT(tstate, tmp_unpack_18, 2, 3);
        if (tmp_assign_source_92 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            generator_heap->exception_lineno = 119;
            goto try_except_handler_37;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_4__element_3;
            generator_heap->tmp_tuple_unpack_4__element_3 = tmp_assign_source_92;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_8;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_4__source_iter);
        tmp_iterator_name_8 = generator_heap->tmp_tuple_unpack_4__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_8); assert(HAS_ITERNEXT(tmp_iterator_name_8));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_8)->tp_iternext)(tmp_iterator_name_8);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                    generator_heap->exception_lineno = 119;
                    goto try_except_handler_37;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[19];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            generator_heap->exception_lineno = 119;
            goto try_except_handler_37;
        }
    }
    goto try_end_20;
    // Exception handler code:
    try_except_handler_37:;
    generator_heap->exception_keeper_type_34 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_34 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_34 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_34 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_4__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_4__source_iter);
    generator_heap->tmp_tuple_unpack_4__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_34;
    generator_heap->exception_value = generator_heap->exception_keeper_value_34;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_34;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_34;

    goto try_except_handler_36;
    // End of try:
    try_end_20:;
    goto try_end_21;
    // Exception handler code:
    try_except_handler_36:;
    generator_heap->exception_keeper_type_35 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_35 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_35 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_35 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_4__element_1);
    generator_heap->tmp_tuple_unpack_4__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_4__element_2);
    generator_heap->tmp_tuple_unpack_4__element_2 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_4__element_3);
    generator_heap->tmp_tuple_unpack_4__element_3 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_35;
    generator_heap->exception_value = generator_heap->exception_keeper_value_35;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_35;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_35;

    goto try_except_handler_35;
    // End of try:
    try_end_21:;
    goto try_end_22;
    // Exception handler code:
    try_except_handler_35:;
    generator_heap->exception_keeper_type_36 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_36 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_36 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_36 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Preserve existing published exception id 1.
    generator_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    if (generator_heap->exception_keeper_tb_36 == NULL) {
        generator_heap->exception_keeper_tb_36 = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_36);
    } else if (generator_heap->exception_keeper_lineno_36 != 0) {
        generator_heap->exception_keeper_tb_36 = ADD_TRACEBACK(generator_heap->exception_keeper_tb_36, generator->m_frame, generator_heap->exception_keeper_lineno_36);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &generator_heap->exception_keeper_type_36, &generator_heap->exception_keeper_value_36, &generator_heap->exception_keeper_tb_36);
    // Tried code:
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        tmp_cmp_expr_left_4 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_4 = PyExc_IndexError;
        generator_heap->tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        assert(!(generator_heap->tmp_res == -1));
        tmp_condition_result_5 = (generator_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    goto try_break_handler_38;
    goto branch_end_5;
    branch_no_5:;
    generator_heap->tmp_result = RERAISE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
    if (unlikely(generator_heap->tmp_result == false)) {
        generator_heap->exception_lineno = 118;
    }

    if (generator_heap->exception_tb && generator_heap->exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = generator_heap->exception_tb->tb_lineno;
    generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
    goto try_except_handler_38;
    branch_end_5:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_38:;
    generator_heap->exception_keeper_type_37 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_37 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_37 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_37 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_37;
    generator_heap->exception_value = generator_heap->exception_keeper_value_37;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_37;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_37;

    goto frame_exception_exit_1;
    // try break handler code:
    try_break_handler_38:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &generator_heap->exception_preserved_1);

    goto loop_end_11;
    // End of try:
    // End of try:
    try_end_22:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_4__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_4__source_iter);
    generator_heap->tmp_tuple_unpack_4__source_iter = NULL;
    {
        PyObject *tmp_assign_source_93;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_4__element_1);
        tmp_assign_source_93 = generator_heap->tmp_tuple_unpack_4__element_1;
        {
            PyObject *old = generator_heap->var_negdq;
            generator_heap->var_negdq = tmp_assign_source_93;
            Py_INCREF(generator_heap->var_negdq);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_4__element_1);
    generator_heap->tmp_tuple_unpack_4__element_1 = NULL;

    {
        PyObject *tmp_assign_source_94;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_4__element_2);
        tmp_assign_source_94 = generator_heap->tmp_tuple_unpack_4__element_2;
        {
            PyObject *old = generator_heap->var_u;
            generator_heap->var_u = tmp_assign_source_94;
            Py_INCREF(generator_heap->var_u);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_4__element_2);
    generator_heap->tmp_tuple_unpack_4__element_2 = NULL;

    {
        PyObject *tmp_assign_source_95;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_4__element_3);
        tmp_assign_source_95 = generator_heap->tmp_tuple_unpack_4__element_3;
        {
            PyObject *old = generator_heap->var_v;
            generator_heap->var_v = tmp_assign_source_95;
            Py_INCREF(generator_heap->var_v);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_4__element_3);
    generator_heap->tmp_tuple_unpack_4__element_3 = NULL;

    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_operand_value_2;
        CHECK_OBJECT(generator_heap->var_negdq);
        tmp_operand_value_2 = generator_heap->var_negdq;
        tmp_assign_source_96 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_2);
        if (tmp_assign_source_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 122;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = generator_heap->var_dq;
            generator_heap->var_dq = tmp_assign_source_96;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_26;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_2;
        CHECK_OBJECT(generator_heap->var_dq);
        tmp_expression_value_26 = generator_heap->var_dq;
        Py_INCREF(tmp_expression_value_26);
        generator->m_yield_return_index = 2;
        return tmp_expression_value_26;
        yield_return_2:
        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 123;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_yield_result_2 = yield_return_value;
        Py_DECREF(tmp_yield_result_2);
    }
    {
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_subscript_value_14;
        PyObject *tmp_call_result_1;
        if (generator_heap->var_dq_heap == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[28]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 125;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_28 = generator_heap->var_dq_heap;
        CHECK_OBJECT(generator_heap->var_u);
        tmp_subscript_value_14 = generator_heap->var_u;
        tmp_expression_value_27 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_28, tmp_subscript_value_14);
        if (tmp_expression_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 125;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[27]);
        Py_DECREF(tmp_expression_value_27);
        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 125;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        generator->m_frame->m_frame.f_lineno = 125;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_14);
        Py_DECREF(tmp_called_value_14);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 125;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_5;
        nuitka_digit tmp_cmp_expr_right_5;
        PyObject *tmp_len_arg_3;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_subscript_value_15;
        if (generator_heap->var_dq_heap == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[28]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 127;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_29 = generator_heap->var_dq_heap;
        CHECK_OBJECT(generator_heap->var_u);
        tmp_subscript_value_15 = generator_heap->var_u;
        tmp_len_arg_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_29, tmp_subscript_value_15);
        if (tmp_len_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 127;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_5 = BUILTIN_LEN(tstate, tmp_len_arg_3);
        Py_DECREF(tmp_len_arg_3);
        if (tmp_cmp_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 127;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_5 = 0;
        tmp_condition_result_6 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        Py_DECREF(tmp_cmp_expr_left_5);
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_subscript_value_16;
        PyObject *tmp_subscript_value_17;
        if (generator_heap->var_H == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[26]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 128;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_30 = generator_heap->var_H;
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[29]);
        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 128;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (generator_heap->var_dq_heap == NULL) {
            Py_DECREF(tmp_called_value_15);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[28]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 128;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_33 = generator_heap->var_dq_heap;
        CHECK_OBJECT(generator_heap->var_u);
        tmp_subscript_value_16 = generator_heap->var_u;
        tmp_expression_value_32 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_33, tmp_subscript_value_16);
        if (tmp_expression_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_15);

            generator_heap->exception_lineno = 128;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[23]);
        Py_DECREF(tmp_expression_value_32);
        if (tmp_expression_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_15);

            generator_heap->exception_lineno = 128;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_17 = mod_consts[24];
        tmp_args_element_value_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_31, tmp_subscript_value_17, 0);
        Py_DECREF(tmp_expression_value_31);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_15);

            generator_heap->exception_lineno = 128;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        generator->m_frame->m_frame.f_lineno = 128;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_15, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 128;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_6:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_subscript_value_18;
        PyObject *tmp_subscript_value_19;
        PyObject *tmp_tuple_element_2;
        if (generator_heap->var_dq_heap == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[28]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 131;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_36 = generator_heap->var_dq_heap;
        CHECK_OBJECT(generator_heap->var_v);
        tmp_subscript_value_18 = generator_heap->var_v;
        tmp_expression_value_35 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_36, tmp_subscript_value_18);
        if (tmp_expression_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 131;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts[23]);
        Py_DECREF(tmp_expression_value_35);
        if (tmp_expression_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 131;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_19 = mod_consts[24];
        tmp_cmp_expr_left_6 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_34, tmp_subscript_value_19, 0);
        Py_DECREF(tmp_expression_value_34);
        if (tmp_cmp_expr_left_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 131;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(generator_heap->var_v);
        tmp_tuple_element_2 = generator_heap->var_v;
        tmp_cmp_expr_right_6 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_6, 0, tmp_tuple_element_2);
        CHECK_OBJECT(generator_heap->var_u);
        tmp_tuple_element_2 = generator_heap->var_u;
        PyTuple_SET_ITEM0(tmp_cmp_expr_right_6, 1, tmp_tuple_element_2);
        tmp_condition_result_7 = RICH_COMPARE_EQ_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        Py_DECREF(tmp_cmp_expr_left_6);
        Py_DECREF(tmp_cmp_expr_right_6);
        if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 131;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_tuple_element_3;
        if (generator_heap->var_H == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[26]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 132;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_37 = generator_heap->var_H;
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts[30]);
        if (tmp_called_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 132;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(generator_heap->var_v);
        tmp_tuple_element_3 = generator_heap->var_v;
        tmp_args_element_value_6 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_element_value_6, 0, tmp_tuple_element_3);
        CHECK_OBJECT(generator_heap->var_u);
        tmp_tuple_element_3 = generator_heap->var_u;
        PyTuple_SET_ITEM0(tmp_args_element_value_6, 1, tmp_tuple_element_3);
        generator->m_frame->m_frame.f_lineno = 132;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_16);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 132;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_subscript_value_20;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_tuple_element_4;
        if (generator_heap->var_dq_heap == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[28]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 134;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_39 = generator_heap->var_dq_heap;
        CHECK_OBJECT(generator_heap->var_v);
        tmp_subscript_value_20 = generator_heap->var_v;
        tmp_expression_value_38 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_39, tmp_subscript_value_20);
        if (tmp_expression_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 134;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts[30]);
        Py_DECREF(tmp_expression_value_38);
        if (tmp_called_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 134;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(generator_heap->var_v);
        tmp_tuple_element_4 = generator_heap->var_v;
        tmp_args_element_value_7 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_element_value_7, 0, tmp_tuple_element_4);
        CHECK_OBJECT(generator_heap->var_u);
        tmp_tuple_element_4 = generator_heap->var_u;
        PyTuple_SET_ITEM0(tmp_args_element_value_7, 1, tmp_tuple_element_4);
        generator->m_frame->m_frame.f_lineno = 134;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_17, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_17);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 134;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_7;
        nuitka_digit tmp_cmp_expr_right_7;
        PyObject *tmp_len_arg_4;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_subscript_value_21;
        if (generator_heap->var_dq_heap == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[28]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 136;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_40 = generator_heap->var_dq_heap;
        CHECK_OBJECT(generator_heap->var_v);
        tmp_subscript_value_21 = generator_heap->var_v;
        tmp_len_arg_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_40, tmp_subscript_value_21);
        if (tmp_len_arg_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 136;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_7 = BUILTIN_LEN(tstate, tmp_len_arg_4);
        Py_DECREF(tmp_len_arg_4);
        if (tmp_cmp_expr_left_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 136;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_7 = 0;
        tmp_condition_result_8 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        Py_DECREF(tmp_cmp_expr_left_7);
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_subscript_value_22;
        PyObject *tmp_subscript_value_23;
        if (generator_heap->var_H == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[26]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 137;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_41 = generator_heap->var_H;
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts[29]);
        if (tmp_called_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 137;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (generator_heap->var_dq_heap == NULL) {
            Py_DECREF(tmp_called_value_18);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[28]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 137;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_44 = generator_heap->var_dq_heap;
        CHECK_OBJECT(generator_heap->var_v);
        tmp_subscript_value_22 = generator_heap->var_v;
        tmp_expression_value_43 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_44, tmp_subscript_value_22);
        if (tmp_expression_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_18);

            generator_heap->exception_lineno = 137;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts[23]);
        Py_DECREF(tmp_expression_value_43);
        if (tmp_expression_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_18);

            generator_heap->exception_lineno = 137;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_23 = mod_consts[24];
        tmp_args_element_value_8 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_42, tmp_subscript_value_23, 0);
        Py_DECREF(tmp_expression_value_42);
        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_18);

            generator_heap->exception_lineno = 137;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        generator->m_frame->m_frame.f_lineno = 137;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_18);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 137;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_subscript_value_24;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_tuple_element_5;
        if (generator_heap->var_dq_heap == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[28]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 140;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_46 = generator_heap->var_dq_heap;
        CHECK_OBJECT(generator_heap->var_v);
        tmp_subscript_value_24 = generator_heap->var_v;
        tmp_expression_value_45 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_46, tmp_subscript_value_24);
        if (tmp_expression_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 140;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts[30]);
        Py_DECREF(tmp_expression_value_45);
        if (tmp_called_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 140;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(generator_heap->var_v);
        tmp_tuple_element_5 = generator_heap->var_v;
        tmp_args_element_value_9 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_element_value_9, 0, tmp_tuple_element_5);
        CHECK_OBJECT(generator_heap->var_u);
        tmp_tuple_element_5 = generator_heap->var_u;
        PyTuple_SET_ITEM0(tmp_args_element_value_9, 1, tmp_tuple_element_5);
        generator->m_frame->m_frame.f_lineno = 140;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_19, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_19);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 140;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    branch_end_7:;
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_frozenset_arg_2;
        PyObject *tmp_bitor_expr_left_1;
        PyObject *tmp_bitor_expr_right_1;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_subscript_value_25;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_subscript_value_26;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        if (generator_heap->var_communities == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[31]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 143;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_47 = generator_heap->var_communities;
        if (generator_heap->var_u == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[32]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 143;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_25 = generator_heap->var_u;
        tmp_bitor_expr_left_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_47, tmp_subscript_value_25);
        if (tmp_bitor_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 143;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (generator_heap->var_communities == NULL) {
            Py_DECREF(tmp_bitor_expr_left_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[31]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 143;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_48 = generator_heap->var_communities;
        if (generator_heap->var_v == NULL) {
            Py_DECREF(tmp_bitor_expr_left_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[33]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 143;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_26 = generator_heap->var_v;
        tmp_bitor_expr_right_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_48, tmp_subscript_value_26);
        if (tmp_bitor_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_bitor_expr_left_1);

            generator_heap->exception_lineno = 143;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_frozenset_arg_2 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_1, tmp_bitor_expr_right_1);
        Py_DECREF(tmp_bitor_expr_left_1);
        Py_DECREF(tmp_bitor_expr_right_1);
        if (tmp_frozenset_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 143;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_4 = PyFrozenSet_New(tmp_frozenset_arg_2);
        Py_DECREF(tmp_frozenset_arg_2);
        if (tmp_ass_subvalue_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 143;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (generator_heap->var_communities == NULL) {
            Py_DECREF(tmp_ass_subvalue_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[31]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 143;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_4 = generator_heap->var_communities;
        if (generator_heap->var_v == NULL) {
            Py_DECREF(tmp_ass_subvalue_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[33]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 143;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_4 = generator_heap->var_v;
        generator_heap->tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
        Py_DECREF(tmp_ass_subvalue_4);
        if (generator_heap->tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 143;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_delsubscr_target_1;
        PyObject *tmp_delsubscr_subscript_1;
        if (generator_heap->var_communities == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[31]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 144;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_delsubscr_target_1 = generator_heap->var_communities;
        if (generator_heap->var_u == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[32]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 144;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_delsubscr_subscript_1 = generator_heap->var_u;
        generator_heap->tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_1, tmp_delsubscr_subscript_1);
        if (generator_heap->tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 144;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_97;
        PyObject *tmp_set_arg_1;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_subscript_value_27;
        CHECK_OBJECT(generator_heap->var_dq_dict);
        tmp_expression_value_49 = generator_heap->var_dq_dict;
        if (generator_heap->var_u == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[32]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 147;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_27 = generator_heap->var_u;
        tmp_set_arg_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_49, tmp_subscript_value_27);
        if (tmp_set_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 147;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_97 = PySet_New(tmp_set_arg_1);
        Py_DECREF(tmp_set_arg_1);
        if (tmp_assign_source_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 147;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = generator_heap->var_u_nbrs;
            generator_heap->var_u_nbrs = tmp_assign_source_97;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_98;
        PyObject *tmp_set_arg_2;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_subscript_value_28;
        CHECK_OBJECT(generator_heap->var_dq_dict);
        tmp_expression_value_50 = generator_heap->var_dq_dict;
        if (generator_heap->var_v == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[33]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 148;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_28 = generator_heap->var_v;
        tmp_set_arg_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_50, tmp_subscript_value_28);
        if (tmp_set_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 148;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_98 = PySet_New(tmp_set_arg_2);
        Py_DECREF(tmp_set_arg_2);
        if (tmp_assign_source_98 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 148;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = generator_heap->var_v_nbrs;
            generator_heap->var_v_nbrs = tmp_assign_source_98;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_99;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        PyObject *tmp_bitor_expr_left_2;
        PyObject *tmp_bitor_expr_right_2;
        PyObject *tmp_set_element_1;
        CHECK_OBJECT(generator_heap->var_u_nbrs);
        tmp_bitor_expr_left_2 = generator_heap->var_u_nbrs;
        CHECK_OBJECT(generator_heap->var_v_nbrs);
        tmp_bitor_expr_right_2 = generator_heap->var_v_nbrs;
        tmp_sub_expr_left_2 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_2, tmp_bitor_expr_right_2);
        assert(!(tmp_sub_expr_left_2 == NULL));
        if (generator_heap->var_u == NULL) {
            Py_DECREF(tmp_sub_expr_left_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[32]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 149;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_set_element_1 = generator_heap->var_u;
        tmp_sub_expr_right_2 = PySet_New(NULL);
        assert(tmp_sub_expr_right_2);
        generator_heap->tmp_res = PySet_Add(tmp_sub_expr_right_2, tmp_set_element_1);
        if (generator_heap->tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_sub_expr_left_2);
            Py_DECREF(tmp_sub_expr_right_2);

            generator_heap->exception_lineno = 149;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (generator_heap->var_v == NULL) {
            Py_DECREF(tmp_sub_expr_left_2);
            Py_DECREF(tmp_sub_expr_right_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[33]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 149;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_set_element_1 = generator_heap->var_v;
        generator_heap->tmp_res = PySet_Add(tmp_sub_expr_right_2, tmp_set_element_1);
        if (generator_heap->tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_sub_expr_left_2);
            Py_DECREF(tmp_sub_expr_right_2);

            generator_heap->exception_lineno = 149;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_99 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        Py_DECREF(tmp_sub_expr_left_2);
        Py_DECREF(tmp_sub_expr_right_2);
        assert(!(tmp_assign_source_99 == NULL));
        {
            PyObject *old = generator_heap->var_all_nbrs;
            generator_heap->var_all_nbrs = tmp_assign_source_99;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_100;
        PyObject *tmp_bitand_expr_left_1;
        PyObject *tmp_bitand_expr_right_1;
        CHECK_OBJECT(generator_heap->var_u_nbrs);
        tmp_bitand_expr_left_1 = generator_heap->var_u_nbrs;
        CHECK_OBJECT(generator_heap->var_v_nbrs);
        tmp_bitand_expr_right_1 = generator_heap->var_v_nbrs;
        tmp_assign_source_100 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
        assert(!(tmp_assign_source_100 == NULL));
        {
            PyObject *old = generator_heap->var_both_nbrs;
            generator_heap->var_both_nbrs = tmp_assign_source_100;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_101;
        PyObject *tmp_iter_arg_19;
        CHECK_OBJECT(generator_heap->var_all_nbrs);
        tmp_iter_arg_19 = generator_heap->var_all_nbrs;
        tmp_assign_source_101 = MAKE_ITERATOR(tstate, tmp_iter_arg_19);
        if (tmp_assign_source_101 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 152;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = generator_heap->tmp_for_loop_4__for_iterator;
            generator_heap->tmp_for_loop_4__for_iterator = tmp_assign_source_101;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_12:;
    {
        PyObject *tmp_next_source_11;
        PyObject *tmp_assign_source_102;
        CHECK_OBJECT(generator_heap->tmp_for_loop_4__for_iterator);
        tmp_next_source_11 = generator_heap->tmp_for_loop_4__for_iterator;
        tmp_assign_source_102 = ITERATOR_NEXT(tmp_next_source_11);
        if (tmp_assign_source_102 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_12;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                generator_heap->exception_lineno = 152;
                goto try_except_handler_39;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_4__iter_value;
            generator_heap->tmp_for_loop_4__iter_value = tmp_assign_source_102;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_103;
        CHECK_OBJECT(generator_heap->tmp_for_loop_4__iter_value);
        tmp_assign_source_103 = generator_heap->tmp_for_loop_4__iter_value;
        {
            PyObject *old = generator_heap->var_w;
            generator_heap->var_w = tmp_assign_source_103;
            Py_INCREF(generator_heap->var_w);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        CHECK_OBJECT(generator_heap->var_w);
        tmp_cmp_expr_left_8 = generator_heap->var_w;
        CHECK_OBJECT(generator_heap->var_both_nbrs);
        tmp_cmp_expr_right_8 = generator_heap->var_both_nbrs;
        generator_heap->tmp_res = PySequence_Contains(tmp_cmp_expr_right_8, tmp_cmp_expr_left_8);
        if (generator_heap->tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 154;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }
        tmp_condition_result_9 = (generator_heap->tmp_res == 1) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_assign_source_104;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_expression_value_52;
        PyObject *tmp_subscript_value_29;
        PyObject *tmp_subscript_value_30;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_expression_value_54;
        PyObject *tmp_subscript_value_31;
        PyObject *tmp_subscript_value_32;
        CHECK_OBJECT(generator_heap->var_dq_dict);
        tmp_expression_value_52 = generator_heap->var_dq_dict;
        if (generator_heap->var_v == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[33]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 155;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }

        tmp_subscript_value_29 = generator_heap->var_v;
        tmp_expression_value_51 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_52, tmp_subscript_value_29);
        if (tmp_expression_value_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 155;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }
        CHECK_OBJECT(generator_heap->var_w);
        tmp_subscript_value_30 = generator_heap->var_w;
        tmp_add_expr_left_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_51, tmp_subscript_value_30);
        Py_DECREF(tmp_expression_value_51);
        if (tmp_add_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 155;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }
        CHECK_OBJECT(generator_heap->var_dq_dict);
        tmp_expression_value_54 = generator_heap->var_dq_dict;
        if (generator_heap->var_u == NULL) {
            Py_DECREF(tmp_add_expr_left_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[32]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 155;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }

        tmp_subscript_value_31 = generator_heap->var_u;
        tmp_expression_value_53 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_54, tmp_subscript_value_31);
        if (tmp_expression_value_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_add_expr_left_2);

            generator_heap->exception_lineno = 155;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }
        CHECK_OBJECT(generator_heap->var_w);
        tmp_subscript_value_32 = generator_heap->var_w;
        tmp_add_expr_right_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_53, tmp_subscript_value_32);
        Py_DECREF(tmp_expression_value_53);
        if (tmp_add_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_add_expr_left_2);

            generator_heap->exception_lineno = 155;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }
        tmp_assign_source_104 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        Py_DECREF(tmp_add_expr_right_2);
        if (tmp_assign_source_104 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 155;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }
        {
            PyObject *old = generator_heap->var_dq_vw;
            generator_heap->var_dq_vw = tmp_assign_source_104;
            Py_XDECREF(old);
        }

    }
    goto branch_end_9;
    branch_no_9:;
    {
        bool tmp_condition_result_10;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        CHECK_OBJECT(generator_heap->var_w);
        tmp_cmp_expr_left_9 = generator_heap->var_w;
        CHECK_OBJECT(generator_heap->var_v_nbrs);
        tmp_cmp_expr_right_9 = generator_heap->var_v_nbrs;
        generator_heap->tmp_res = PySequence_Contains(tmp_cmp_expr_right_9, tmp_cmp_expr_left_9);
        if (generator_heap->tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 156;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }
        tmp_condition_result_10 = (generator_heap->tmp_res == 1) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_105;
        PyObject *tmp_sub_expr_left_3;
        PyObject *tmp_sub_expr_right_3;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_subscript_value_33;
        PyObject *tmp_subscript_value_34;
        PyObject *tmp_mult_expr_left_9;
        PyObject *tmp_mult_expr_right_9;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_mult_expr_left_10;
        PyObject *tmp_mult_expr_right_10;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_subscript_value_35;
        PyObject *tmp_expression_value_58;
        PyObject *tmp_subscript_value_36;
        PyObject *tmp_mult_expr_left_11;
        PyObject *tmp_mult_expr_right_11;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_subscript_value_37;
        PyObject *tmp_expression_value_60;
        PyObject *tmp_subscript_value_38;
        CHECK_OBJECT(generator_heap->var_dq_dict);
        tmp_expression_value_56 = generator_heap->var_dq_dict;
        if (generator_heap->var_v == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[33]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 157;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }

        tmp_subscript_value_33 = generator_heap->var_v;
        tmp_expression_value_55 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_56, tmp_subscript_value_33);
        if (tmp_expression_value_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 157;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }
        CHECK_OBJECT(generator_heap->var_w);
        tmp_subscript_value_34 = generator_heap->var_w;
        tmp_sub_expr_left_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_55, tmp_subscript_value_34);
        Py_DECREF(tmp_expression_value_55);
        if (tmp_sub_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 157;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {
            Py_DECREF(tmp_sub_expr_left_3);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[21]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 157;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }

        tmp_mult_expr_left_9 = Nuitka_Cell_GET(generator->m_closure[1]);
        if (generator_heap->var_a == NULL) {
            Py_DECREF(tmp_sub_expr_left_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[34]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 157;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }

        tmp_expression_value_57 = generator_heap->var_a;
        if (generator_heap->var_u == NULL) {
            Py_DECREF(tmp_sub_expr_left_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[32]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 157;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }

        tmp_subscript_value_35 = generator_heap->var_u;
        tmp_mult_expr_left_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_57, tmp_subscript_value_35);
        if (tmp_mult_expr_left_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_sub_expr_left_3);

            generator_heap->exception_lineno = 157;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }
        if (generator_heap->var_b == NULL) {
            Py_DECREF(tmp_sub_expr_left_3);
            Py_DECREF(tmp_mult_expr_left_10);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[35]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 157;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }

        tmp_expression_value_58 = generator_heap->var_b;
        CHECK_OBJECT(generator_heap->var_w);
        tmp_subscript_value_36 = generator_heap->var_w;
        tmp_mult_expr_right_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_58, tmp_subscript_value_36);
        if (tmp_mult_expr_right_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_sub_expr_left_3);
            Py_DECREF(tmp_mult_expr_left_10);

            generator_heap->exception_lineno = 157;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }
        tmp_add_expr_left_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_10, tmp_mult_expr_right_10);
        Py_DECREF(tmp_mult_expr_left_10);
        Py_DECREF(tmp_mult_expr_right_10);
        if (tmp_add_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_sub_expr_left_3);

            generator_heap->exception_lineno = 157;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }
        if (generator_heap->var_a == NULL) {
            Py_DECREF(tmp_sub_expr_left_3);
            Py_DECREF(tmp_add_expr_left_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[34]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 157;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }

        tmp_expression_value_59 = generator_heap->var_a;
        CHECK_OBJECT(generator_heap->var_w);
        tmp_subscript_value_37 = generator_heap->var_w;
        tmp_mult_expr_left_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_59, tmp_subscript_value_37);
        if (tmp_mult_expr_left_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_sub_expr_left_3);
            Py_DECREF(tmp_add_expr_left_3);

            generator_heap->exception_lineno = 157;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }
        if (generator_heap->var_b == NULL) {
            Py_DECREF(tmp_sub_expr_left_3);
            Py_DECREF(tmp_add_expr_left_3);
            Py_DECREF(tmp_mult_expr_left_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[35]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 157;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }

        tmp_expression_value_60 = generator_heap->var_b;
        if (generator_heap->var_u == NULL) {
            Py_DECREF(tmp_sub_expr_left_3);
            Py_DECREF(tmp_add_expr_left_3);
            Py_DECREF(tmp_mult_expr_left_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[32]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 157;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }

        tmp_subscript_value_38 = generator_heap->var_u;
        tmp_mult_expr_right_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_60, tmp_subscript_value_38);
        if (tmp_mult_expr_right_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_sub_expr_left_3);
            Py_DECREF(tmp_add_expr_left_3);
            Py_DECREF(tmp_mult_expr_left_11);

            generator_heap->exception_lineno = 157;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }
        tmp_add_expr_right_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_11, tmp_mult_expr_right_11);
        Py_DECREF(tmp_mult_expr_left_11);
        Py_DECREF(tmp_mult_expr_right_11);
        if (tmp_add_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_sub_expr_left_3);
            Py_DECREF(tmp_add_expr_left_3);

            generator_heap->exception_lineno = 157;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }
        tmp_mult_expr_right_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
        Py_DECREF(tmp_add_expr_left_3);
        Py_DECREF(tmp_add_expr_right_3);
        if (tmp_mult_expr_right_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_sub_expr_left_3);

            generator_heap->exception_lineno = 157;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }
        tmp_sub_expr_right_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_9, tmp_mult_expr_right_9);
        Py_DECREF(tmp_mult_expr_right_9);
        if (tmp_sub_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_sub_expr_left_3);

            generator_heap->exception_lineno = 157;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }
        tmp_assign_source_105 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
        Py_DECREF(tmp_sub_expr_left_3);
        Py_DECREF(tmp_sub_expr_right_3);
        if (tmp_assign_source_105 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 157;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }
        {
            PyObject *old = generator_heap->var_dq_vw;
            generator_heap->var_dq_vw = tmp_assign_source_105;
            Py_XDECREF(old);
        }

    }
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_106;
        PyObject *tmp_sub_expr_left_4;
        PyObject *tmp_sub_expr_right_4;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_expression_value_62;
        PyObject *tmp_subscript_value_39;
        PyObject *tmp_subscript_value_40;
        PyObject *tmp_mult_expr_left_12;
        PyObject *tmp_mult_expr_right_12;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        PyObject *tmp_mult_expr_left_13;
        PyObject *tmp_mult_expr_right_13;
        PyObject *tmp_expression_value_63;
        PyObject *tmp_subscript_value_41;
        PyObject *tmp_expression_value_64;
        PyObject *tmp_subscript_value_42;
        PyObject *tmp_mult_expr_left_14;
        PyObject *tmp_mult_expr_right_14;
        PyObject *tmp_expression_value_65;
        PyObject *tmp_subscript_value_43;
        PyObject *tmp_expression_value_66;
        PyObject *tmp_subscript_value_44;
        CHECK_OBJECT(generator_heap->var_dq_dict);
        tmp_expression_value_62 = generator_heap->var_dq_dict;
        if (generator_heap->var_u == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[32]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 159;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }

        tmp_subscript_value_39 = generator_heap->var_u;
        tmp_expression_value_61 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_62, tmp_subscript_value_39);
        if (tmp_expression_value_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 159;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }
        CHECK_OBJECT(generator_heap->var_w);
        tmp_subscript_value_40 = generator_heap->var_w;
        tmp_sub_expr_left_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_61, tmp_subscript_value_40);
        Py_DECREF(tmp_expression_value_61);
        if (tmp_sub_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 159;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {
            Py_DECREF(tmp_sub_expr_left_4);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[21]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 159;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }

        tmp_mult_expr_left_12 = Nuitka_Cell_GET(generator->m_closure[1]);
        if (generator_heap->var_a == NULL) {
            Py_DECREF(tmp_sub_expr_left_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[34]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 159;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }

        tmp_expression_value_63 = generator_heap->var_a;
        if (generator_heap->var_v == NULL) {
            Py_DECREF(tmp_sub_expr_left_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[33]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 159;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }

        tmp_subscript_value_41 = generator_heap->var_v;
        tmp_mult_expr_left_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_63, tmp_subscript_value_41);
        if (tmp_mult_expr_left_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_sub_expr_left_4);

            generator_heap->exception_lineno = 159;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }
        if (generator_heap->var_b == NULL) {
            Py_DECREF(tmp_sub_expr_left_4);
            Py_DECREF(tmp_mult_expr_left_13);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[35]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 159;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }

        tmp_expression_value_64 = generator_heap->var_b;
        CHECK_OBJECT(generator_heap->var_w);
        tmp_subscript_value_42 = generator_heap->var_w;
        tmp_mult_expr_right_13 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_64, tmp_subscript_value_42);
        if (tmp_mult_expr_right_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_sub_expr_left_4);
            Py_DECREF(tmp_mult_expr_left_13);

            generator_heap->exception_lineno = 159;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }
        tmp_add_expr_left_4 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_13, tmp_mult_expr_right_13);
        Py_DECREF(tmp_mult_expr_left_13);
        Py_DECREF(tmp_mult_expr_right_13);
        if (tmp_add_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_sub_expr_left_4);

            generator_heap->exception_lineno = 159;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }
        if (generator_heap->var_a == NULL) {
            Py_DECREF(tmp_sub_expr_left_4);
            Py_DECREF(tmp_add_expr_left_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[34]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 159;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }

        tmp_expression_value_65 = generator_heap->var_a;
        CHECK_OBJECT(generator_heap->var_w);
        tmp_subscript_value_43 = generator_heap->var_w;
        tmp_mult_expr_left_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_65, tmp_subscript_value_43);
        if (tmp_mult_expr_left_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_sub_expr_left_4);
            Py_DECREF(tmp_add_expr_left_4);

            generator_heap->exception_lineno = 159;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }
        if (generator_heap->var_b == NULL) {
            Py_DECREF(tmp_sub_expr_left_4);
            Py_DECREF(tmp_add_expr_left_4);
            Py_DECREF(tmp_mult_expr_left_14);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[35]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 159;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }

        tmp_expression_value_66 = generator_heap->var_b;
        if (generator_heap->var_v == NULL) {
            Py_DECREF(tmp_sub_expr_left_4);
            Py_DECREF(tmp_add_expr_left_4);
            Py_DECREF(tmp_mult_expr_left_14);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[33]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 159;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }

        tmp_subscript_value_44 = generator_heap->var_v;
        tmp_mult_expr_right_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_66, tmp_subscript_value_44);
        if (tmp_mult_expr_right_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_sub_expr_left_4);
            Py_DECREF(tmp_add_expr_left_4);
            Py_DECREF(tmp_mult_expr_left_14);

            generator_heap->exception_lineno = 159;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }
        tmp_add_expr_right_4 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_14, tmp_mult_expr_right_14);
        Py_DECREF(tmp_mult_expr_left_14);
        Py_DECREF(tmp_mult_expr_right_14);
        if (tmp_add_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_sub_expr_left_4);
            Py_DECREF(tmp_add_expr_left_4);

            generator_heap->exception_lineno = 159;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }
        tmp_mult_expr_right_12 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
        Py_DECREF(tmp_add_expr_left_4);
        Py_DECREF(tmp_add_expr_right_4);
        if (tmp_mult_expr_right_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_sub_expr_left_4);

            generator_heap->exception_lineno = 159;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }
        tmp_sub_expr_right_4 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_12, tmp_mult_expr_right_12);
        Py_DECREF(tmp_mult_expr_right_12);
        if (tmp_sub_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_sub_expr_left_4);

            generator_heap->exception_lineno = 159;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }
        tmp_assign_source_106 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
        Py_DECREF(tmp_sub_expr_left_4);
        Py_DECREF(tmp_sub_expr_right_4);
        if (tmp_assign_source_106 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 159;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }
        {
            PyObject *old = generator_heap->var_dq_vw;
            generator_heap->var_dq_vw = tmp_assign_source_106;
            Py_XDECREF(old);
        }

    }
    branch_end_10:;
    branch_end_9:;
    {
        PyObject *tmp_assign_source_107;
        PyObject *tmp_iter_arg_20;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_tuple_element_7;
        if (generator_heap->var_v == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[33]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 161;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }

        tmp_tuple_element_7 = generator_heap->var_v;
        tmp_tuple_element_6 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_tuple_element_6, 0, tmp_tuple_element_7);
        CHECK_OBJECT(generator_heap->var_w);
        tmp_tuple_element_7 = generator_heap->var_w;
        PyTuple_SET_ITEM0(tmp_tuple_element_6, 1, tmp_tuple_element_7);
        tmp_iter_arg_20 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_tuple_element_8;
            PyTuple_SET_ITEM(tmp_iter_arg_20, 0, tmp_tuple_element_6);
            CHECK_OBJECT(generator_heap->var_w);
            tmp_tuple_element_8 = generator_heap->var_w;
            tmp_tuple_element_6 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_6, 0, tmp_tuple_element_8);
            if (generator_heap->var_v == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[33]);
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

                generator_heap->exception_lineno = 161;
                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }

            tmp_tuple_element_8 = generator_heap->var_v;
            PyTuple_SET_ITEM0(tmp_tuple_element_6, 1, tmp_tuple_element_8);
            goto tuple_build_noexception_1;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_tuple_element_6);
            goto tuple_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_1:;
            PyTuple_SET_ITEM(tmp_iter_arg_20, 1, tmp_tuple_element_6);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_iter_arg_20);
        goto try_except_handler_39;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_assign_source_107 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_20);
        Py_DECREF(tmp_iter_arg_20);
        assert(!(tmp_assign_source_107 == NULL));
        {
            PyObject *old = generator_heap->tmp_for_loop_5__for_iterator;
            generator_heap->tmp_for_loop_5__for_iterator = tmp_assign_source_107;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_13:;
    {
        PyObject *tmp_next_source_12;
        PyObject *tmp_assign_source_108;
        CHECK_OBJECT(generator_heap->tmp_for_loop_5__for_iterator);
        tmp_next_source_12 = generator_heap->tmp_for_loop_5__for_iterator;
        tmp_assign_source_108 = ITERATOR_NEXT(tmp_next_source_12);
        if (tmp_assign_source_108 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_13;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                generator_heap->exception_lineno = 161;
                goto try_except_handler_40;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_5__iter_value;
            generator_heap->tmp_for_loop_5__iter_value = tmp_assign_source_108;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_109;
        PyObject *tmp_iter_arg_21;
        CHECK_OBJECT(generator_heap->tmp_for_loop_5__iter_value);
        tmp_iter_arg_21 = generator_heap->tmp_for_loop_5__iter_value;
        tmp_assign_source_109 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_21);
        if (tmp_assign_source_109 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 161;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_41;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_5__source_iter;
            generator_heap->tmp_tuple_unpack_5__source_iter = tmp_assign_source_109;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_110;
        PyObject *tmp_unpack_19;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_5__source_iter);
        tmp_unpack_19 = generator_heap->tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_110 = UNPACK_NEXT(tstate, tmp_unpack_19, 0, 2);
        if (tmp_assign_source_110 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            generator_heap->exception_lineno = 161;
            goto try_except_handler_42;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_5__element_1;
            generator_heap->tmp_tuple_unpack_5__element_1 = tmp_assign_source_110;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_111;
        PyObject *tmp_unpack_20;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_5__source_iter);
        tmp_unpack_20 = generator_heap->tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_111 = UNPACK_NEXT(tstate, tmp_unpack_20, 1, 2);
        if (tmp_assign_source_111 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            generator_heap->exception_lineno = 161;
            goto try_except_handler_42;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_5__element_2;
            generator_heap->tmp_tuple_unpack_5__element_2 = tmp_assign_source_111;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_9;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_5__source_iter);
        tmp_iterator_name_9 = generator_heap->tmp_tuple_unpack_5__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_9); assert(HAS_ITERNEXT(tmp_iterator_name_9));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_9)->tp_iternext)(tmp_iterator_name_9);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                    generator_heap->exception_lineno = 161;
                    goto try_except_handler_42;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[9];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            generator_heap->exception_lineno = 161;
            goto try_except_handler_42;
        }
    }
    goto try_end_23;
    // Exception handler code:
    try_except_handler_42:;
    generator_heap->exception_keeper_type_38 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_38 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_38 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_38 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_5__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_5__source_iter);
    generator_heap->tmp_tuple_unpack_5__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_38;
    generator_heap->exception_value = generator_heap->exception_keeper_value_38;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_38;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_38;

    goto try_except_handler_41;
    // End of try:
    try_end_23:;
    goto try_end_24;
    // Exception handler code:
    try_except_handler_41:;
    generator_heap->exception_keeper_type_39 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_39 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_39 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_39 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_5__element_1);
    generator_heap->tmp_tuple_unpack_5__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_5__element_2);
    generator_heap->tmp_tuple_unpack_5__element_2 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_39;
    generator_heap->exception_value = generator_heap->exception_keeper_value_39;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_39;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_39;

    goto try_except_handler_40;
    // End of try:
    try_end_24:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_5__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_5__source_iter);
    generator_heap->tmp_tuple_unpack_5__source_iter = NULL;
    {
        PyObject *tmp_assign_source_112;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_5__element_1);
        tmp_assign_source_112 = generator_heap->tmp_tuple_unpack_5__element_1;
        {
            PyObject *old = generator_heap->var_row;
            generator_heap->var_row = tmp_assign_source_112;
            Py_INCREF(generator_heap->var_row);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_5__element_1);
    generator_heap->tmp_tuple_unpack_5__element_1 = NULL;

    {
        PyObject *tmp_assign_source_113;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_5__element_2);
        tmp_assign_source_113 = generator_heap->tmp_tuple_unpack_5__element_2;
        {
            PyObject *old = generator_heap->var_col;
            generator_heap->var_col = tmp_assign_source_113;
            Py_INCREF(generator_heap->var_col);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_5__element_2);
    generator_heap->tmp_tuple_unpack_5__element_2 = NULL;

    {
        PyObject *tmp_assign_source_114;
        PyObject *tmp_expression_value_67;
        PyObject *tmp_subscript_value_45;
        if (generator_heap->var_dq_heap == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[28]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 162;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_40;
        }

        tmp_expression_value_67 = generator_heap->var_dq_heap;
        CHECK_OBJECT(generator_heap->var_row);
        tmp_subscript_value_45 = generator_heap->var_row;
        tmp_assign_source_114 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_67, tmp_subscript_value_45);
        if (tmp_assign_source_114 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 162;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_40;
        }
        {
            PyObject *old = generator_heap->var_dq_heap_row;
            generator_heap->var_dq_heap_row = tmp_assign_source_114;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_5;
        PyObject *tmp_ass_subscribed_5;
        PyObject *tmp_expression_value_68;
        PyObject *tmp_subscript_value_46;
        PyObject *tmp_ass_subscript_5;
        if (generator_heap->var_dq_vw == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[36]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 164;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_40;
        }

        tmp_ass_subvalue_5 = generator_heap->var_dq_vw;
        CHECK_OBJECT(generator_heap->var_dq_dict);
        tmp_expression_value_68 = generator_heap->var_dq_dict;
        CHECK_OBJECT(generator_heap->var_row);
        tmp_subscript_value_46 = generator_heap->var_row;
        tmp_ass_subscribed_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_68, tmp_subscript_value_46);
        if (tmp_ass_subscribed_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 164;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_40;
        }
        CHECK_OBJECT(generator_heap->var_col);
        tmp_ass_subscript_5 = generator_heap->var_col;
        generator_heap->tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
        Py_DECREF(tmp_ass_subscribed_5);
        if (generator_heap->tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 164;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_40;
        }
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_cmp_expr_left_10;
        nuitka_digit tmp_cmp_expr_right_10;
        PyObject *tmp_len_arg_5;
        CHECK_OBJECT(generator_heap->var_dq_heap_row);
        tmp_len_arg_5 = generator_heap->var_dq_heap_row;
        tmp_cmp_expr_left_10 = BUILTIN_LEN(tstate, tmp_len_arg_5);
        if (tmp_cmp_expr_left_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 166;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_40;
        }
        tmp_cmp_expr_right_10 = 0;
        tmp_condition_result_11 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
        Py_DECREF(tmp_cmp_expr_left_10);
        if (tmp_condition_result_11 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_assign_source_115;
        PyObject *tmp_expression_value_69;
        PyObject *tmp_expression_value_70;
        PyObject *tmp_subscript_value_47;
        CHECK_OBJECT(generator_heap->var_dq_heap_row);
        tmp_expression_value_70 = generator_heap->var_dq_heap_row;
        tmp_expression_value_69 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_70, mod_consts[23]);
        if (tmp_expression_value_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 167;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_40;
        }
        tmp_subscript_value_47 = mod_consts[24];
        tmp_assign_source_115 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_69, tmp_subscript_value_47, 0);
        Py_DECREF(tmp_expression_value_69);
        if (tmp_assign_source_115 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 167;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_40;
        }
        {
            PyObject *old = generator_heap->var_d_oldmax;
            generator_heap->var_d_oldmax = tmp_assign_source_115;
            Py_XDECREF(old);
        }

    }
    goto branch_end_11;
    branch_no_11:;
    {
        PyObject *tmp_assign_source_116;
        tmp_assign_source_116 = Py_None;
        {
            PyObject *old = generator_heap->var_d_oldmax;
            generator_heap->var_d_oldmax = tmp_assign_source_116;
            Py_INCREF(generator_heap->var_d_oldmax);
            Py_XDECREF(old);
        }

    }
    branch_end_11:;
    {
        PyObject *tmp_assign_source_117;
        PyObject *tmp_tuple_element_9;
        CHECK_OBJECT(generator_heap->var_row);
        tmp_tuple_element_9 = generator_heap->var_row;
        tmp_assign_source_117 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_assign_source_117, 0, tmp_tuple_element_9);
        CHECK_OBJECT(generator_heap->var_col);
        tmp_tuple_element_9 = generator_heap->var_col;
        PyTuple_SET_ITEM0(tmp_assign_source_117, 1, tmp_tuple_element_9);
        {
            PyObject *old = generator_heap->var_d;
            generator_heap->var_d = tmp_assign_source_117;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_118;
        PyObject *tmp_operand_value_3;
        if (generator_heap->var_dq_vw == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[36]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 172;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_40;
        }

        tmp_operand_value_3 = generator_heap->var_dq_vw;
        tmp_assign_source_118 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_3);
        if (tmp_assign_source_118 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 172;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_40;
        }
        {
            PyObject *old = generator_heap->var_d_negdq;
            generator_heap->var_d_negdq = tmp_assign_source_118;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_12;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        CHECK_OBJECT(generator_heap->var_w);
        tmp_cmp_expr_left_11 = generator_heap->var_w;
        CHECK_OBJECT(generator_heap->var_v_nbrs);
        tmp_cmp_expr_right_11 = generator_heap->var_v_nbrs;
        generator_heap->tmp_res = PySequence_Contains(tmp_cmp_expr_right_11, tmp_cmp_expr_left_11);
        if (generator_heap->tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 174;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_40;
        }
        tmp_condition_result_12 = (generator_heap->tmp_res == 1) ? true : false;
        if (tmp_condition_result_12 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_71;
        PyObject *tmp_call_result_7;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        CHECK_OBJECT(generator_heap->var_dq_heap_row);
        tmp_expression_value_71 = generator_heap->var_dq_heap_row;
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_71, mod_consts[37]);
        if (tmp_called_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 176;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_40;
        }
        CHECK_OBJECT(generator_heap->var_d);
        tmp_kw_call_arg_value_0_1 = generator_heap->var_d;
        CHECK_OBJECT(generator_heap->var_d);
        tmp_kw_call_arg_value_1_1 = generator_heap->var_d;
        CHECK_OBJECT(generator_heap->var_d_negdq);
        tmp_kw_call_dict_value_0_1 = generator_heap->var_d_negdq;
        generator->m_frame->m_frame.f_lineno = 176;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tstate, tmp_called_value_20, args, kw_values, mod_consts[38]);
        }

        Py_DECREF(tmp_called_value_20);
        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 176;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_40;
        }
        Py_DECREF(tmp_call_result_7);
    }
    goto branch_end_12;
    branch_no_12:;
    {
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_72;
        PyObject *tmp_call_result_8;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        CHECK_OBJECT(generator_heap->var_dq_heap_row);
        tmp_expression_value_72 = generator_heap->var_dq_heap_row;
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_72, mod_consts[29]);
        if (tmp_called_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 179;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_40;
        }
        CHECK_OBJECT(generator_heap->var_d);
        tmp_kw_call_arg_value_0_2 = generator_heap->var_d;
        CHECK_OBJECT(generator_heap->var_d_negdq);
        tmp_kw_call_dict_value_0_2 = generator_heap->var_d_negdq;
        generator->m_frame->m_frame.f_lineno = 179;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_21, args, kw_values, mod_consts[38]);
        }

        Py_DECREF(tmp_called_value_21);
        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 179;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_40;
        }
        Py_DECREF(tmp_call_result_8);
    }
    branch_end_12:;
    {
        bool tmp_condition_result_13;
        PyObject *tmp_cmp_expr_left_12;
        PyObject *tmp_cmp_expr_right_12;
        CHECK_OBJECT(generator_heap->var_d_oldmax);
        tmp_cmp_expr_left_12 = generator_heap->var_d_oldmax;
        tmp_cmp_expr_right_12 = Py_None;
        tmp_condition_result_13 = (tmp_cmp_expr_left_12 == tmp_cmp_expr_right_12) ? true : false;
        if (tmp_condition_result_13 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_73;
        PyObject *tmp_call_result_9;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_kw_call_dict_value_0_3;
        if (generator_heap->var_H == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[26]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 183;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_40;
        }

        tmp_expression_value_73 = generator_heap->var_H;
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_73, mod_consts[29]);
        if (tmp_called_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 183;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_40;
        }
        if (generator_heap->var_d == NULL) {
            Py_DECREF(tmp_called_value_22);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[39]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 183;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_40;
        }

        tmp_kw_call_arg_value_0_3 = generator_heap->var_d;
        if (generator_heap->var_d_negdq == NULL) {
            Py_DECREF(tmp_called_value_22);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[40]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 183;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_40;
        }

        tmp_kw_call_dict_value_0_3 = generator_heap->var_d_negdq;
        generator->m_frame->m_frame.f_lineno = 183;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_3};
            tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_22, args, kw_values, mod_consts[38]);
        }

        Py_DECREF(tmp_called_value_22);
        if (tmp_call_result_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 183;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_40;
        }
        Py_DECREF(tmp_call_result_9);
    }
    goto branch_end_13;
    branch_no_13:;
    {
        PyObject *tmp_assign_source_119;
        PyObject *tmp_expression_value_74;
        PyObject *tmp_expression_value_75;
        PyObject *tmp_subscript_value_48;
        CHECK_OBJECT(generator_heap->var_dq_heap_row);
        tmp_expression_value_75 = generator_heap->var_dq_heap_row;
        tmp_expression_value_74 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_75, mod_consts[23]);
        if (tmp_expression_value_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 186;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_40;
        }
        tmp_subscript_value_48 = mod_consts[24];
        tmp_assign_source_119 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_74, tmp_subscript_value_48, 0);
        Py_DECREF(tmp_expression_value_74);
        if (tmp_assign_source_119 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 186;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_40;
        }
        {
            PyObject *old = generator_heap->var_row_max;
            generator_heap->var_row_max = tmp_assign_source_119;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_14;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_13;
        PyObject *tmp_cmp_expr_right_13;
        PyObject *tmp_cmp_expr_left_14;
        PyObject *tmp_cmp_expr_right_14;
        PyObject *tmp_expression_value_76;
        PyObject *tmp_expression_value_77;
        CHECK_OBJECT(generator_heap->var_d_oldmax);
        tmp_cmp_expr_left_13 = generator_heap->var_d_oldmax;
        CHECK_OBJECT(generator_heap->var_row_max);
        tmp_cmp_expr_right_13 = generator_heap->var_row_max;
        tmp_or_left_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
        if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 187;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_40;
        }
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 187;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_40;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(generator_heap->var_d_oldmax);
        tmp_expression_value_76 = generator_heap->var_d_oldmax;
        tmp_cmp_expr_left_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_76, mod_consts[41]);
        if (tmp_cmp_expr_left_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 187;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_40;
        }
        CHECK_OBJECT(generator_heap->var_row_max);
        tmp_expression_value_77 = generator_heap->var_row_max;
        tmp_cmp_expr_right_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_77, mod_consts[41]);
        if (tmp_cmp_expr_right_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_cmp_expr_left_14);

            generator_heap->exception_lineno = 187;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_40;
        }
        tmp_or_right_value_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
        Py_DECREF(tmp_cmp_expr_left_14);
        Py_DECREF(tmp_cmp_expr_right_14);
        if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 187;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_40;
        }
        tmp_condition_result_14 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_14 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_78;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        if (generator_heap->var_H == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[26]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 188;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_40;
        }

        tmp_expression_value_78 = generator_heap->var_H;
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_78, mod_consts[37]);
        if (tmp_called_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 188;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_40;
        }
        if (generator_heap->var_d_oldmax == NULL) {
            Py_DECREF(tmp_called_value_23);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[42]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 188;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_40;
        }

        tmp_args_element_value_10 = generator_heap->var_d_oldmax;
        if (generator_heap->var_row_max == NULL) {
            Py_DECREF(tmp_called_value_23);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[43]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 188;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_40;
        }

        tmp_args_element_value_11 = generator_heap->var_row_max;
        generator->m_frame->m_frame.f_lineno = 188;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
            tmp_call_result_10 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_23, call_args);
        }

        Py_DECREF(tmp_called_value_23);
        if (tmp_call_result_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 188;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_40;
        }
        Py_DECREF(tmp_call_result_10);
    }
    branch_no_14:;
    branch_end_13:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 161;
        generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
        goto try_except_handler_40;
    }
    goto loop_start_13;
    loop_end_13:;
    goto try_end_25;
    // Exception handler code:
    try_except_handler_40:;
    generator_heap->exception_keeper_type_40 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_40 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_40 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_40 = generator_heap->exception_lineno;
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
    generator_heap->exception_type = generator_heap->exception_keeper_type_40;
    generator_heap->exception_value = generator_heap->exception_keeper_value_40;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_40;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_40;

    goto try_except_handler_39;
    // End of try:
    try_end_25:;
    Py_XDECREF(generator_heap->tmp_for_loop_5__iter_value);
    generator_heap->tmp_for_loop_5__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_5__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_5__for_iterator);
    generator_heap->tmp_for_loop_5__for_iterator = NULL;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 152;
        generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
        goto try_except_handler_39;
    }
    goto loop_start_12;
    loop_end_12:;
    goto try_end_26;
    // Exception handler code:
    try_except_handler_39:;
    generator_heap->exception_keeper_type_41 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_41 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_41 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_41 = generator_heap->exception_lineno;
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
    generator_heap->exception_type = generator_heap->exception_keeper_type_41;
    generator_heap->exception_value = generator_heap->exception_keeper_value_41;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_41;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_41;

    goto frame_exception_exit_1;
    // End of try:
    try_end_26:;
    Py_XDECREF(generator_heap->tmp_for_loop_4__iter_value);
    generator_heap->tmp_for_loop_4__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_4__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_4__for_iterator);
    generator_heap->tmp_for_loop_4__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_120;
        PyObject *tmp_iter_arg_22;
        PyObject *tmp_expression_value_79;
        PyObject *tmp_subscript_value_49;
        CHECK_OBJECT(generator_heap->var_dq_dict);
        tmp_expression_value_79 = generator_heap->var_dq_dict;
        if (generator_heap->var_u == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[32]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 191;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_subscript_value_49 = generator_heap->var_u;
        tmp_iter_arg_22 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_79, tmp_subscript_value_49);
        if (tmp_iter_arg_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 191;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_120 = MAKE_ITERATOR(tstate, tmp_iter_arg_22);
        Py_DECREF(tmp_iter_arg_22);
        if (tmp_assign_source_120 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 191;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = generator_heap->tmp_for_loop_6__for_iterator;
            generator_heap->tmp_for_loop_6__for_iterator = tmp_assign_source_120;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_14:;
    {
        PyObject *tmp_next_source_13;
        PyObject *tmp_assign_source_121;
        CHECK_OBJECT(generator_heap->tmp_for_loop_6__for_iterator);
        tmp_next_source_13 = generator_heap->tmp_for_loop_6__for_iterator;
        tmp_assign_source_121 = ITERATOR_NEXT(tmp_next_source_13);
        if (tmp_assign_source_121 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_14;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                generator_heap->exception_lineno = 191;
                goto try_except_handler_43;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_6__iter_value;
            generator_heap->tmp_for_loop_6__iter_value = tmp_assign_source_121;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_122;
        CHECK_OBJECT(generator_heap->tmp_for_loop_6__iter_value);
        tmp_assign_source_122 = generator_heap->tmp_for_loop_6__iter_value;
        {
            PyObject *old = generator_heap->var_w;
            generator_heap->var_w = tmp_assign_source_122;
            Py_INCREF(generator_heap->var_w);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_123;
        PyObject *tmp_expression_value_80;
        PyObject *tmp_expression_value_81;
        PyObject *tmp_subscript_value_50;
        PyObject *tmp_subscript_value_51;
        CHECK_OBJECT(generator_heap->var_dq_dict);
        tmp_expression_value_81 = generator_heap->var_dq_dict;
        CHECK_OBJECT(generator_heap->var_w);
        tmp_subscript_value_50 = generator_heap->var_w;
        tmp_expression_value_80 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_81, tmp_subscript_value_50);
        if (tmp_expression_value_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 193;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_43;
        }
        if (generator_heap->var_u == NULL) {
            Py_DECREF(tmp_expression_value_80);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[32]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 193;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_43;
        }

        tmp_subscript_value_51 = generator_heap->var_u;
        tmp_assign_source_123 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_80, tmp_subscript_value_51);
        Py_DECREF(tmp_expression_value_80);
        if (tmp_assign_source_123 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 193;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_43;
        }
        {
            PyObject *old = generator_heap->var_dq_old;
            generator_heap->var_dq_old = tmp_assign_source_123;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_delsubscr_target_2;
        PyObject *tmp_expression_value_82;
        PyObject *tmp_subscript_value_52;
        PyObject *tmp_delsubscr_subscript_2;
        CHECK_OBJECT(generator_heap->var_dq_dict);
        tmp_expression_value_82 = generator_heap->var_dq_dict;
        CHECK_OBJECT(generator_heap->var_w);
        tmp_subscript_value_52 = generator_heap->var_w;
        tmp_delsubscr_target_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_82, tmp_subscript_value_52);
        if (tmp_delsubscr_target_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 194;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_43;
        }
        if (generator_heap->var_u == NULL) {
            Py_DECREF(tmp_delsubscr_target_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[32]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 194;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_43;
        }

        tmp_delsubscr_subscript_2 = generator_heap->var_u;
        generator_heap->tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_2, tmp_delsubscr_subscript_2);
        Py_DECREF(tmp_delsubscr_target_2);
        if (generator_heap->tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 194;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_43;
        }
    }
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_cmp_expr_left_15;
        PyObject *tmp_cmp_expr_right_15;
        CHECK_OBJECT(generator_heap->var_w);
        tmp_cmp_expr_left_15 = generator_heap->var_w;
        if (generator_heap->var_v == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[33]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 196;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_43;
        }

        tmp_cmp_expr_right_15 = generator_heap->var_v;
        tmp_condition_result_15 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
        if (tmp_condition_result_15 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 196;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_43;
        }
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_assign_source_124;
        PyObject *tmp_iter_arg_23;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_tuple_element_11;
        CHECK_OBJECT(generator_heap->var_w);
        tmp_tuple_element_11 = generator_heap->var_w;
        tmp_tuple_element_10 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_tuple_element_10, 0, tmp_tuple_element_11);
        if (generator_heap->var_u == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[32]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 198;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto tuple_build_exception_3;
        }

        tmp_tuple_element_11 = generator_heap->var_u;
        PyTuple_SET_ITEM0(tmp_tuple_element_10, 1, tmp_tuple_element_11);
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_tuple_element_10);
        goto try_except_handler_43;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_iter_arg_23 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_tuple_element_12;
            PyTuple_SET_ITEM(tmp_iter_arg_23, 0, tmp_tuple_element_10);
            if (generator_heap->var_u == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[32]);
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

                generator_heap->exception_lineno = 198;
                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                goto tuple_build_exception_4;
            }

            tmp_tuple_element_12 = generator_heap->var_u;
            tmp_tuple_element_10 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_tuple_element_10, 0, tmp_tuple_element_12);
            CHECK_OBJECT(generator_heap->var_w);
            tmp_tuple_element_12 = generator_heap->var_w;
            PyTuple_SET_ITEM0(tmp_tuple_element_10, 1, tmp_tuple_element_12);
            PyTuple_SET_ITEM(tmp_iter_arg_23, 1, tmp_tuple_element_10);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_iter_arg_23);
        goto try_except_handler_43;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_assign_source_124 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_23);
        Py_DECREF(tmp_iter_arg_23);
        assert(!(tmp_assign_source_124 == NULL));
        {
            PyObject *old = generator_heap->tmp_for_loop_7__for_iterator;
            generator_heap->tmp_for_loop_7__for_iterator = tmp_assign_source_124;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_15:;
    {
        PyObject *tmp_next_source_14;
        PyObject *tmp_assign_source_125;
        CHECK_OBJECT(generator_heap->tmp_for_loop_7__for_iterator);
        tmp_next_source_14 = generator_heap->tmp_for_loop_7__for_iterator;
        tmp_assign_source_125 = ITERATOR_NEXT(tmp_next_source_14);
        if (tmp_assign_source_125 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_15;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                generator_heap->exception_lineno = 198;
                goto try_except_handler_44;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_7__iter_value;
            generator_heap->tmp_for_loop_7__iter_value = tmp_assign_source_125;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_126;
        PyObject *tmp_iter_arg_24;
        CHECK_OBJECT(generator_heap->tmp_for_loop_7__iter_value);
        tmp_iter_arg_24 = generator_heap->tmp_for_loop_7__iter_value;
        tmp_assign_source_126 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_24);
        if (tmp_assign_source_126 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 198;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_45;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_6__source_iter;
            generator_heap->tmp_tuple_unpack_6__source_iter = tmp_assign_source_126;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_127;
        PyObject *tmp_unpack_21;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_6__source_iter);
        tmp_unpack_21 = generator_heap->tmp_tuple_unpack_6__source_iter;
        tmp_assign_source_127 = UNPACK_NEXT(tstate, tmp_unpack_21, 0, 2);
        if (tmp_assign_source_127 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            generator_heap->exception_lineno = 198;
            goto try_except_handler_46;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_6__element_1;
            generator_heap->tmp_tuple_unpack_6__element_1 = tmp_assign_source_127;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_128;
        PyObject *tmp_unpack_22;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_6__source_iter);
        tmp_unpack_22 = generator_heap->tmp_tuple_unpack_6__source_iter;
        tmp_assign_source_128 = UNPACK_NEXT(tstate, tmp_unpack_22, 1, 2);
        if (tmp_assign_source_128 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            generator_heap->exception_lineno = 198;
            goto try_except_handler_46;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_6__element_2;
            generator_heap->tmp_tuple_unpack_6__element_2 = tmp_assign_source_128;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_10;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_6__source_iter);
        tmp_iterator_name_10 = generator_heap->tmp_tuple_unpack_6__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_10); assert(HAS_ITERNEXT(tmp_iterator_name_10));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_10)->tp_iternext)(tmp_iterator_name_10);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
                    generator_heap->exception_lineno = 198;
                    goto try_except_handler_46;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[9];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            generator_heap->exception_lineno = 198;
            goto try_except_handler_46;
        }
    }
    goto try_end_27;
    // Exception handler code:
    try_except_handler_46:;
    generator_heap->exception_keeper_type_42 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_42 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_42 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_42 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_6__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_6__source_iter);
    generator_heap->tmp_tuple_unpack_6__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_42;
    generator_heap->exception_value = generator_heap->exception_keeper_value_42;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_42;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_42;

    goto try_except_handler_45;
    // End of try:
    try_end_27:;
    goto try_end_28;
    // Exception handler code:
    try_except_handler_45:;
    generator_heap->exception_keeper_type_43 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_43 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_43 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_43 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_6__element_1);
    generator_heap->tmp_tuple_unpack_6__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_6__element_2);
    generator_heap->tmp_tuple_unpack_6__element_2 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_43;
    generator_heap->exception_value = generator_heap->exception_keeper_value_43;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_43;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_43;

    goto try_except_handler_44;
    // End of try:
    try_end_28:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_6__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_6__source_iter);
    generator_heap->tmp_tuple_unpack_6__source_iter = NULL;
    {
        PyObject *tmp_assign_source_129;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_6__element_1);
        tmp_assign_source_129 = generator_heap->tmp_tuple_unpack_6__element_1;
        {
            PyObject *old = generator_heap->var_row;
            generator_heap->var_row = tmp_assign_source_129;
            Py_INCREF(generator_heap->var_row);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_6__element_1);
    generator_heap->tmp_tuple_unpack_6__element_1 = NULL;

    {
        PyObject *tmp_assign_source_130;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_6__element_2);
        tmp_assign_source_130 = generator_heap->tmp_tuple_unpack_6__element_2;
        {
            PyObject *old = generator_heap->var_col;
            generator_heap->var_col = tmp_assign_source_130;
            Py_INCREF(generator_heap->var_col);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_6__element_2);
    generator_heap->tmp_tuple_unpack_6__element_2 = NULL;

    {
        PyObject *tmp_assign_source_131;
        PyObject *tmp_expression_value_83;
        PyObject *tmp_subscript_value_53;
        if (generator_heap->var_dq_heap == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[28]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 199;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }

        tmp_expression_value_83 = generator_heap->var_dq_heap;
        CHECK_OBJECT(generator_heap->var_row);
        tmp_subscript_value_53 = generator_heap->var_row;
        tmp_assign_source_131 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_83, tmp_subscript_value_53);
        if (tmp_assign_source_131 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 199;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }
        {
            PyObject *old = generator_heap->var_dq_heap_row;
            generator_heap->var_dq_heap_row = tmp_assign_source_131;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_132;
        PyObject *tmp_tuple_element_13;
        CHECK_OBJECT(generator_heap->var_row);
        tmp_tuple_element_13 = generator_heap->var_row;
        tmp_assign_source_132 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_assign_source_132, 0, tmp_tuple_element_13);
        CHECK_OBJECT(generator_heap->var_col);
        tmp_tuple_element_13 = generator_heap->var_col;
        PyTuple_SET_ITEM0(tmp_assign_source_132, 1, tmp_tuple_element_13);
        {
            PyObject *old = generator_heap->var_d_old;
            generator_heap->var_d_old = tmp_assign_source_132;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_cmp_expr_left_16;
        PyObject *tmp_cmp_expr_right_16;
        PyObject *tmp_expression_value_84;
        PyObject *tmp_expression_value_85;
        PyObject *tmp_subscript_value_54;
        CHECK_OBJECT(generator_heap->var_dq_heap_row);
        tmp_expression_value_85 = generator_heap->var_dq_heap_row;
        tmp_expression_value_84 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_85, mod_consts[23]);
        if (tmp_expression_value_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 202;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }
        tmp_subscript_value_54 = mod_consts[24];
        tmp_cmp_expr_left_16 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_84, tmp_subscript_value_54, 0);
        Py_DECREF(tmp_expression_value_84);
        if (tmp_cmp_expr_left_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 202;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }
        CHECK_OBJECT(generator_heap->var_d_old);
        tmp_cmp_expr_right_16 = generator_heap->var_d_old;
        tmp_condition_result_16 = RICH_COMPARE_EQ_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
        Py_DECREF(tmp_cmp_expr_left_16);
        if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 202;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_86;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_value_12;
        CHECK_OBJECT(generator_heap->var_dq_heap_row);
        tmp_expression_value_86 = generator_heap->var_dq_heap_row;
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_86, mod_consts[30]);
        if (tmp_called_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 204;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }
        CHECK_OBJECT(generator_heap->var_d_old);
        tmp_args_element_value_12 = generator_heap->var_d_old;
        generator->m_frame->m_frame.f_lineno = 204;
        tmp_call_result_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_24, tmp_args_element_value_12);
        Py_DECREF(tmp_called_value_24);
        if (tmp_call_result_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 204;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_87;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_value_13;
        if (generator_heap->var_H == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[26]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 205;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }

        tmp_expression_value_87 = generator_heap->var_H;
        tmp_called_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_87, mod_consts[30]);
        if (tmp_called_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 205;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }
        CHECK_OBJECT(generator_heap->var_d_old);
        tmp_args_element_value_13 = generator_heap->var_d_old;
        generator->m_frame->m_frame.f_lineno = 205;
        tmp_call_result_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_25, tmp_args_element_value_13);
        Py_DECREF(tmp_called_value_25);
        if (tmp_call_result_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 205;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        bool tmp_condition_result_17;
        PyObject *tmp_cmp_expr_left_17;
        nuitka_digit tmp_cmp_expr_right_17;
        PyObject *tmp_len_arg_6;
        CHECK_OBJECT(generator_heap->var_dq_heap_row);
        tmp_len_arg_6 = generator_heap->var_dq_heap_row;
        tmp_cmp_expr_left_17 = BUILTIN_LEN(tstate, tmp_len_arg_6);
        if (tmp_cmp_expr_left_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 207;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }
        tmp_cmp_expr_right_17 = 0;
        tmp_condition_result_17 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_17, tmp_cmp_expr_right_17);
        Py_DECREF(tmp_cmp_expr_left_17);
        if (tmp_condition_result_17 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_called_value_26;
        PyObject *tmp_expression_value_88;
        PyObject *tmp_call_result_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_expression_value_89;
        PyObject *tmp_expression_value_90;
        PyObject *tmp_subscript_value_55;
        if (generator_heap->var_H == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[26]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 208;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }

        tmp_expression_value_88 = generator_heap->var_H;
        tmp_called_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_88, mod_consts[29]);
        if (tmp_called_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 208;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }
        CHECK_OBJECT(generator_heap->var_dq_heap_row);
        tmp_expression_value_90 = generator_heap->var_dq_heap_row;
        tmp_expression_value_89 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_90, mod_consts[23]);
        if (tmp_expression_value_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_26);

            generator_heap->exception_lineno = 208;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }
        tmp_subscript_value_55 = mod_consts[24];
        tmp_args_element_value_14 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_89, tmp_subscript_value_55, 0);
        Py_DECREF(tmp_expression_value_89);
        if (tmp_args_element_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_called_value_26);

            generator_heap->exception_lineno = 208;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }
        generator->m_frame->m_frame.f_lineno = 208;
        tmp_call_result_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_26, tmp_args_element_value_14);
        Py_DECREF(tmp_called_value_26);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_call_result_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 208;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }
        Py_DECREF(tmp_call_result_13);
    }
    branch_no_17:;
    goto branch_end_16;
    branch_no_16:;
    {
        PyObject *tmp_called_value_27;
        PyObject *tmp_expression_value_91;
        PyObject *tmp_call_result_14;
        PyObject *tmp_args_element_value_15;
        CHECK_OBJECT(generator_heap->var_dq_heap_row);
        tmp_expression_value_91 = generator_heap->var_dq_heap_row;
        tmp_called_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_91, mod_consts[30]);
        if (tmp_called_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 211;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }
        CHECK_OBJECT(generator_heap->var_d_old);
        tmp_args_element_value_15 = generator_heap->var_d_old;
        generator->m_frame->m_frame.f_lineno = 211;
        tmp_call_result_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_27, tmp_args_element_value_15);
        Py_DECREF(tmp_called_value_27);
        if (tmp_call_result_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 211;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }
        Py_DECREF(tmp_call_result_14);
    }
    branch_end_16:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 198;
        generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
        goto try_except_handler_44;
    }
    goto loop_start_15;
    loop_end_15:;
    goto try_end_29;
    // Exception handler code:
    try_except_handler_44:;
    generator_heap->exception_keeper_type_44 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_44 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_44 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_44 = generator_heap->exception_lineno;
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
    generator_heap->exception_type = generator_heap->exception_keeper_type_44;
    generator_heap->exception_value = generator_heap->exception_keeper_value_44;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_44;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_44;

    goto try_except_handler_43;
    // End of try:
    try_end_29:;
    Py_XDECREF(generator_heap->tmp_for_loop_7__iter_value);
    generator_heap->tmp_for_loop_7__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_7__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_7__for_iterator);
    generator_heap->tmp_for_loop_7__for_iterator = NULL;
    branch_no_15:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 191;
        generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
        goto try_except_handler_43;
    }
    goto loop_start_14;
    loop_end_14:;
    goto try_end_30;
    // Exception handler code:
    try_except_handler_43:;
    generator_heap->exception_keeper_type_45 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_45 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_45 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_45 = generator_heap->exception_lineno;
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
    generator_heap->exception_type = generator_heap->exception_keeper_type_45;
    generator_heap->exception_value = generator_heap->exception_keeper_value_45;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_45;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_45;

    goto frame_exception_exit_1;
    // End of try:
    try_end_30:;
    Py_XDECREF(generator_heap->tmp_for_loop_6__iter_value);
    generator_heap->tmp_for_loop_6__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_6__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_6__for_iterator);
    generator_heap->tmp_for_loop_6__for_iterator = NULL;
    {
        PyObject *tmp_delsubscr_target_3;
        PyObject *tmp_delsubscr_subscript_3;
        CHECK_OBJECT(generator_heap->var_dq_dict);
        tmp_delsubscr_target_3 = generator_heap->var_dq_dict;
        if (generator_heap->var_u == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[32]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 213;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_delsubscr_subscript_3 = generator_heap->var_u;
        generator_heap->tmp_result = DEL_SUBSCRIPT(tmp_delsubscr_target_3, tmp_delsubscr_subscript_3);
        if (generator_heap->tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 213;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_6;
        PyObject *tmp_called_value_28;
        PyObject *tmp_ass_subscribed_6;
        PyObject *tmp_ass_subscript_6;
        tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_networkx$algorithms$community$modularity_max, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_value_28 == NULL)) {
            tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[22]);
        }

        if (tmp_called_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 215;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        generator->m_frame->m_frame.f_lineno = 215;
        tmp_ass_subvalue_6 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_28);
        if (tmp_ass_subvalue_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 215;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (generator_heap->var_dq_heap == NULL) {
            Py_DECREF(tmp_ass_subvalue_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[28]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 215;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_6 = generator_heap->var_dq_heap;
        if (generator_heap->var_u == NULL) {
            Py_DECREF(tmp_ass_subvalue_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[32]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 215;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_6 = generator_heap->var_u;
        generator_heap->tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
        Py_DECREF(tmp_ass_subvalue_6);
        if (generator_heap->tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 215;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_133;
        if (generator_heap->var_a == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[34]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 217;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_133 = generator_heap->var_a;
        {
            PyObject *old = generator_heap->tmp_inplace_assign_subscr_3__target;
            generator_heap->tmp_inplace_assign_subscr_3__target = tmp_assign_source_133;
            Py_INCREF(generator_heap->tmp_inplace_assign_subscr_3__target);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_134;
        if (generator_heap->var_v == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[33]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 217;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_47;
        }

        tmp_assign_source_134 = generator_heap->var_v;
        {
            PyObject *old = generator_heap->tmp_inplace_assign_subscr_3__subscript;
            generator_heap->tmp_inplace_assign_subscr_3__subscript = tmp_assign_source_134;
            Py_INCREF(generator_heap->tmp_inplace_assign_subscr_3__subscript);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_135;
        PyObject *tmp_expression_value_92;
        PyObject *tmp_subscript_value_56;
        CHECK_OBJECT(generator_heap->tmp_inplace_assign_subscr_3__target);
        tmp_expression_value_92 = generator_heap->tmp_inplace_assign_subscr_3__target;
        CHECK_OBJECT(generator_heap->tmp_inplace_assign_subscr_3__subscript);
        tmp_subscript_value_56 = generator_heap->tmp_inplace_assign_subscr_3__subscript;
        tmp_assign_source_135 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_92, tmp_subscript_value_56);
        if (tmp_assign_source_135 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 217;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_47;
        }
        {
            PyObject *old = generator_heap->tmp_inplace_assign_subscr_3__value;
            generator_heap->tmp_inplace_assign_subscr_3__value = tmp_assign_source_135;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_136;
        PyObject *tmp_iadd_expr_left_3;
        PyObject *tmp_iadd_expr_right_3;
        PyObject *tmp_expression_value_93;
        PyObject *tmp_subscript_value_57;
        CHECK_OBJECT(generator_heap->tmp_inplace_assign_subscr_3__value);
        tmp_iadd_expr_left_3 = generator_heap->tmp_inplace_assign_subscr_3__value;
        if (generator_heap->var_a == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[34]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 217;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_47;
        }

        tmp_expression_value_93 = generator_heap->var_a;
        if (generator_heap->var_u == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[32]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 217;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_47;
        }

        tmp_subscript_value_57 = generator_heap->var_u;
        tmp_iadd_expr_right_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_93, tmp_subscript_value_57);
        if (tmp_iadd_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 217;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_47;
        }
        generator_heap->tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
        Py_DECREF(tmp_iadd_expr_right_3);
        if (generator_heap->tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 217;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_47;
        }
        tmp_assign_source_136 = tmp_iadd_expr_left_3;
        generator_heap->tmp_inplace_assign_subscr_3__value = tmp_assign_source_136;

    }
    {
        PyObject *tmp_ass_subvalue_7;
        PyObject *tmp_ass_subscribed_7;
        PyObject *tmp_ass_subscript_7;
        CHECK_OBJECT(generator_heap->tmp_inplace_assign_subscr_3__value);
        tmp_ass_subvalue_7 = generator_heap->tmp_inplace_assign_subscr_3__value;
        CHECK_OBJECT(generator_heap->tmp_inplace_assign_subscr_3__target);
        tmp_ass_subscribed_7 = generator_heap->tmp_inplace_assign_subscr_3__target;
        CHECK_OBJECT(generator_heap->tmp_inplace_assign_subscr_3__subscript);
        tmp_ass_subscript_7 = generator_heap->tmp_inplace_assign_subscr_3__subscript;
        generator_heap->tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
        if (generator_heap->tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 217;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_47;
        }
    }
    goto try_end_31;
    // Exception handler code:
    try_except_handler_47:;
    generator_heap->exception_keeper_type_46 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_46 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_46 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_46 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_inplace_assign_subscr_3__target);
    Py_DECREF(generator_heap->tmp_inplace_assign_subscr_3__target);
    generator_heap->tmp_inplace_assign_subscr_3__target = NULL;
    Py_XDECREF(generator_heap->tmp_inplace_assign_subscr_3__subscript);
    generator_heap->tmp_inplace_assign_subscr_3__subscript = NULL;
    Py_XDECREF(generator_heap->tmp_inplace_assign_subscr_3__value);
    generator_heap->tmp_inplace_assign_subscr_3__value = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_46;
    generator_heap->exception_value = generator_heap->exception_keeper_value_46;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_46;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_46;

    goto frame_exception_exit_1;
    // End of try:
    try_end_31:;
    CHECK_OBJECT(generator_heap->tmp_inplace_assign_subscr_3__target);
    Py_DECREF(generator_heap->tmp_inplace_assign_subscr_3__target);
    generator_heap->tmp_inplace_assign_subscr_3__target = NULL;
    CHECK_OBJECT(generator_heap->tmp_inplace_assign_subscr_3__subscript);
    Py_DECREF(generator_heap->tmp_inplace_assign_subscr_3__subscript);
    generator_heap->tmp_inplace_assign_subscr_3__subscript = NULL;
    CHECK_OBJECT(generator_heap->tmp_inplace_assign_subscr_3__value);
    Py_DECREF(generator_heap->tmp_inplace_assign_subscr_3__value);
    generator_heap->tmp_inplace_assign_subscr_3__value = NULL;
    {
        PyObject *tmp_ass_subvalue_8;
        PyObject *tmp_ass_subscribed_8;
        PyObject *tmp_ass_subscript_8;
        tmp_ass_subvalue_8 = mod_consts[24];
        if (generator_heap->var_a == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[34]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 218;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_8 = generator_heap->var_a;
        if (generator_heap->var_u == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[32]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 218;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_8 = generator_heap->var_u;
        generator_heap->tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
        if (generator_heap->tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 218;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_18;
        int tmp_truth_name_2;
        CHECK_OBJECT(generator_heap->var_directed);
        tmp_truth_name_2 = CHECK_IF_TRUE(generator_heap->var_directed);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 219;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_18 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        PyObject *tmp_assign_source_137;
        if (generator_heap->var_b == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[35]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 220;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_137 = generator_heap->var_b;
        {
            PyObject *old = generator_heap->tmp_inplace_assign_subscr_4__target;
            generator_heap->tmp_inplace_assign_subscr_4__target = tmp_assign_source_137;
            Py_INCREF(generator_heap->tmp_inplace_assign_subscr_4__target);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_138;
        if (generator_heap->var_v == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[33]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 220;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_48;
        }

        tmp_assign_source_138 = generator_heap->var_v;
        {
            PyObject *old = generator_heap->tmp_inplace_assign_subscr_4__subscript;
            generator_heap->tmp_inplace_assign_subscr_4__subscript = tmp_assign_source_138;
            Py_INCREF(generator_heap->tmp_inplace_assign_subscr_4__subscript);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_139;
        PyObject *tmp_expression_value_94;
        PyObject *tmp_subscript_value_58;
        CHECK_OBJECT(generator_heap->tmp_inplace_assign_subscr_4__target);
        tmp_expression_value_94 = generator_heap->tmp_inplace_assign_subscr_4__target;
        CHECK_OBJECT(generator_heap->tmp_inplace_assign_subscr_4__subscript);
        tmp_subscript_value_58 = generator_heap->tmp_inplace_assign_subscr_4__subscript;
        tmp_assign_source_139 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_94, tmp_subscript_value_58);
        if (tmp_assign_source_139 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 220;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_48;
        }
        {
            PyObject *old = generator_heap->tmp_inplace_assign_subscr_4__value;
            generator_heap->tmp_inplace_assign_subscr_4__value = tmp_assign_source_139;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_140;
        PyObject *tmp_iadd_expr_left_4;
        PyObject *tmp_iadd_expr_right_4;
        PyObject *tmp_expression_value_95;
        PyObject *tmp_subscript_value_59;
        CHECK_OBJECT(generator_heap->tmp_inplace_assign_subscr_4__value);
        tmp_iadd_expr_left_4 = generator_heap->tmp_inplace_assign_subscr_4__value;
        if (generator_heap->var_b == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[35]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 220;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_48;
        }

        tmp_expression_value_95 = generator_heap->var_b;
        if (generator_heap->var_u == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[32]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 220;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_48;
        }

        tmp_subscript_value_59 = generator_heap->var_u;
        tmp_iadd_expr_right_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_95, tmp_subscript_value_59);
        if (tmp_iadd_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 220;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_48;
        }
        generator_heap->tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_4, tmp_iadd_expr_right_4);
        Py_DECREF(tmp_iadd_expr_right_4);
        if (generator_heap->tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 220;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_48;
        }
        tmp_assign_source_140 = tmp_iadd_expr_left_4;
        generator_heap->tmp_inplace_assign_subscr_4__value = tmp_assign_source_140;

    }
    {
        PyObject *tmp_ass_subvalue_9;
        PyObject *tmp_ass_subscribed_9;
        PyObject *tmp_ass_subscript_9;
        CHECK_OBJECT(generator_heap->tmp_inplace_assign_subscr_4__value);
        tmp_ass_subvalue_9 = generator_heap->tmp_inplace_assign_subscr_4__value;
        CHECK_OBJECT(generator_heap->tmp_inplace_assign_subscr_4__target);
        tmp_ass_subscribed_9 = generator_heap->tmp_inplace_assign_subscr_4__target;
        CHECK_OBJECT(generator_heap->tmp_inplace_assign_subscr_4__subscript);
        tmp_ass_subscript_9 = generator_heap->tmp_inplace_assign_subscr_4__subscript;
        generator_heap->tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9);
        if (generator_heap->tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 220;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto try_except_handler_48;
        }
    }
    goto try_end_32;
    // Exception handler code:
    try_except_handler_48:;
    generator_heap->exception_keeper_type_47 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_47 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_47 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_47 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_inplace_assign_subscr_4__target);
    Py_DECREF(generator_heap->tmp_inplace_assign_subscr_4__target);
    generator_heap->tmp_inplace_assign_subscr_4__target = NULL;
    Py_XDECREF(generator_heap->tmp_inplace_assign_subscr_4__subscript);
    generator_heap->tmp_inplace_assign_subscr_4__subscript = NULL;
    Py_XDECREF(generator_heap->tmp_inplace_assign_subscr_4__value);
    generator_heap->tmp_inplace_assign_subscr_4__value = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_47;
    generator_heap->exception_value = generator_heap->exception_keeper_value_47;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_47;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_47;

    goto frame_exception_exit_1;
    // End of try:
    try_end_32:;
    CHECK_OBJECT(generator_heap->tmp_inplace_assign_subscr_4__target);
    Py_DECREF(generator_heap->tmp_inplace_assign_subscr_4__target);
    generator_heap->tmp_inplace_assign_subscr_4__target = NULL;
    CHECK_OBJECT(generator_heap->tmp_inplace_assign_subscr_4__subscript);
    Py_DECREF(generator_heap->tmp_inplace_assign_subscr_4__subscript);
    generator_heap->tmp_inplace_assign_subscr_4__subscript = NULL;
    CHECK_OBJECT(generator_heap->tmp_inplace_assign_subscr_4__value);
    Py_DECREF(generator_heap->tmp_inplace_assign_subscr_4__value);
    generator_heap->tmp_inplace_assign_subscr_4__value = NULL;
    {
        PyObject *tmp_ass_subvalue_10;
        PyObject *tmp_ass_subscribed_10;
        PyObject *tmp_ass_subscript_10;
        tmp_ass_subvalue_10 = mod_consts[24];
        if (generator_heap->var_b == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[35]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 221;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_10 = generator_heap->var_b;
        if (generator_heap->var_u == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[32]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 221;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_10 = generator_heap->var_u;
        generator_heap->tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_10, tmp_ass_subscript_10, tmp_ass_subvalue_10);
        if (generator_heap->tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 221;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_18:;
    {
        PyObject *tmp_expression_value_96;
        PyObject *tmp_called_value_29;
        PyObject *tmp_expression_value_97;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_3;
        if (generator_heap->var_communities == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[31]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 223;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_97 = generator_heap->var_communities;
        tmp_called_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_97, mod_consts[25]);
        if (tmp_called_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 223;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        generator->m_frame->m_frame.f_lineno = 223;
        tmp_expression_value_96 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_29);
        Py_DECREF(tmp_called_value_29);
        if (tmp_expression_value_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 223;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_29, sizeof(PyObject *), &tmp_expression_value_97, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 3;
        return tmp_expression_value_96;
        yield_return_3:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_29, sizeof(PyObject *), &tmp_expression_value_97, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 223;
            generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_yield_result_3 = yield_return_value;
        Py_DECREF(tmp_yield_result_3);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 114;
        generator_heap->type_description_1 = "cccooooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_11;
    loop_end_11:;

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
            generator->m_closure[0],
            generator->m_closure[2],
            generator->m_closure[1],
            generator_heap->var_directed,
            generator_heap->var_N,
            generator_heap->var_m,
            generator_heap->var_q0,
            generator_heap->var_a,
            generator_heap->var_b,
            generator_heap->var_dq_dict,
            generator_heap->var_u,
            generator_heap->var_v,
            generator_heap->var_wt,
            generator_heap->var_nbrdict,
            generator_heap->var_dq_heap,
            generator_heap->var_H,
            generator_heap->var_communities,
            generator_heap->var_negdq,
            generator_heap->var_dq,
            generator_heap->var_u_nbrs,
            generator_heap->var_v_nbrs,
            generator_heap->var_all_nbrs,
            generator_heap->var_both_nbrs,
            generator_heap->var_w,
            generator_heap->var_dq_vw,
            generator_heap->var_row,
            generator_heap->var_col,
            generator_heap->var_dq_heap_row,
            generator_heap->var_d_oldmax,
            generator_heap->var_d,
            generator_heap->var_d_negdq,
            generator_heap->var_row_max,
            generator_heap->var_dq_old,
            generator_heap->var_d_old
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
    goto try_end_33;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_48 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_48 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_48 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_48 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_directed);
    generator_heap->var_directed = NULL;
    Py_XDECREF(generator_heap->var_N);
    generator_heap->var_N = NULL;
    Py_XDECREF(generator_heap->var_m);
    generator_heap->var_m = NULL;
    Py_XDECREF(generator_heap->var_q0);
    generator_heap->var_q0 = NULL;
    Py_XDECREF(generator_heap->var_a);
    generator_heap->var_a = NULL;
    Py_XDECREF(generator_heap->var_b);
    generator_heap->var_b = NULL;
    Py_XDECREF(generator_heap->var_dq_dict);
    generator_heap->var_dq_dict = NULL;
    Py_XDECREF(generator_heap->var_u);
    generator_heap->var_u = NULL;
    Py_XDECREF(generator_heap->var_v);
    generator_heap->var_v = NULL;
    Py_XDECREF(generator_heap->var_wt);
    generator_heap->var_wt = NULL;
    Py_XDECREF(generator_heap->var_nbrdict);
    generator_heap->var_nbrdict = NULL;
    Py_XDECREF(generator_heap->var_dq_heap);
    generator_heap->var_dq_heap = NULL;
    Py_XDECREF(generator_heap->var_H);
    generator_heap->var_H = NULL;
    Py_XDECREF(generator_heap->var_communities);
    generator_heap->var_communities = NULL;
    Py_XDECREF(generator_heap->var_negdq);
    generator_heap->var_negdq = NULL;
    Py_XDECREF(generator_heap->var_dq);
    generator_heap->var_dq = NULL;
    Py_XDECREF(generator_heap->var_u_nbrs);
    generator_heap->var_u_nbrs = NULL;
    Py_XDECREF(generator_heap->var_v_nbrs);
    generator_heap->var_v_nbrs = NULL;
    Py_XDECREF(generator_heap->var_all_nbrs);
    generator_heap->var_all_nbrs = NULL;
    Py_XDECREF(generator_heap->var_both_nbrs);
    generator_heap->var_both_nbrs = NULL;
    Py_XDECREF(generator_heap->var_w);
    generator_heap->var_w = NULL;
    Py_XDECREF(generator_heap->var_dq_vw);
    generator_heap->var_dq_vw = NULL;
    Py_XDECREF(generator_heap->var_row);
    generator_heap->var_row = NULL;
    Py_XDECREF(generator_heap->var_col);
    generator_heap->var_col = NULL;
    Py_XDECREF(generator_heap->var_dq_heap_row);
    generator_heap->var_dq_heap_row = NULL;
    Py_XDECREF(generator_heap->var_d_oldmax);
    generator_heap->var_d_oldmax = NULL;
    Py_XDECREF(generator_heap->var_d);
    generator_heap->var_d = NULL;
    Py_XDECREF(generator_heap->var_d_negdq);
    generator_heap->var_d_negdq = NULL;
    Py_XDECREF(generator_heap->var_row_max);
    generator_heap->var_row_max = NULL;
    Py_XDECREF(generator_heap->var_dq_old);
    generator_heap->var_dq_old = NULL;
    Py_XDECREF(generator_heap->var_d_old);
    generator_heap->var_d_old = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_48;
    generator_heap->exception_value = generator_heap->exception_keeper_value_48;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_48;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_48;

    goto function_exception_exit;
    // End of try:
    try_end_33:;
    CHECK_OBJECT(generator_heap->var_directed);
    Py_DECREF(generator_heap->var_directed);
    generator_heap->var_directed = NULL;
    CHECK_OBJECT(generator_heap->var_N);
    Py_DECREF(generator_heap->var_N);
    generator_heap->var_N = NULL;
    CHECK_OBJECT(generator_heap->var_m);
    Py_DECREF(generator_heap->var_m);
    generator_heap->var_m = NULL;
    Py_XDECREF(generator_heap->var_q0);
    generator_heap->var_q0 = NULL;
    Py_XDECREF(generator_heap->var_a);
    generator_heap->var_a = NULL;
    Py_XDECREF(generator_heap->var_b);
    generator_heap->var_b = NULL;
    CHECK_OBJECT(generator_heap->var_dq_dict);
    Py_DECREF(generator_heap->var_dq_dict);
    generator_heap->var_dq_dict = NULL;
    Py_XDECREF(generator_heap->var_u);
    generator_heap->var_u = NULL;
    Py_XDECREF(generator_heap->var_v);
    generator_heap->var_v = NULL;
    Py_XDECREF(generator_heap->var_wt);
    generator_heap->var_wt = NULL;
    Py_XDECREF(generator_heap->var_nbrdict);
    generator_heap->var_nbrdict = NULL;
    Py_XDECREF(generator_heap->var_dq_heap);
    generator_heap->var_dq_heap = NULL;
    Py_XDECREF(generator_heap->var_H);
    generator_heap->var_H = NULL;
    Py_XDECREF(generator_heap->var_communities);
    generator_heap->var_communities = NULL;
    Py_XDECREF(generator_heap->var_negdq);
    generator_heap->var_negdq = NULL;
    Py_XDECREF(generator_heap->var_dq);
    generator_heap->var_dq = NULL;
    Py_XDECREF(generator_heap->var_u_nbrs);
    generator_heap->var_u_nbrs = NULL;
    Py_XDECREF(generator_heap->var_v_nbrs);
    generator_heap->var_v_nbrs = NULL;
    Py_XDECREF(generator_heap->var_all_nbrs);
    generator_heap->var_all_nbrs = NULL;
    Py_XDECREF(generator_heap->var_both_nbrs);
    generator_heap->var_both_nbrs = NULL;
    Py_XDECREF(generator_heap->var_w);
    generator_heap->var_w = NULL;
    Py_XDECREF(generator_heap->var_dq_vw);
    generator_heap->var_dq_vw = NULL;
    Py_XDECREF(generator_heap->var_row);
    generator_heap->var_row = NULL;
    Py_XDECREF(generator_heap->var_col);
    generator_heap->var_col = NULL;
    Py_XDECREF(generator_heap->var_dq_heap_row);
    generator_heap->var_dq_heap_row = NULL;
    Py_XDECREF(generator_heap->var_d_oldmax);
    generator_heap->var_d_oldmax = NULL;
    Py_XDECREF(generator_heap->var_d);
    generator_heap->var_d = NULL;
    Py_XDECREF(generator_heap->var_d_negdq);
    generator_heap->var_d_negdq = NULL;
    Py_XDECREF(generator_heap->var_row_max);
    generator_heap->var_row_max = NULL;
    Py_XDECREF(generator_heap->var_dq_old);
    generator_heap->var_dq_old = NULL;
    Py_XDECREF(generator_heap->var_d_old);
    generator_heap->var_d_old = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(tstate, generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_networkx$algorithms$community$modularity_max$$$function__1__greedy_modularity_communities_generator$$$genobj__1__greedy_modularity_communities_generator(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        networkx$algorithms$community$modularity_max$$$function__1__greedy_modularity_communities_generator$$$genobj__1__greedy_modularity_communities_generator_context,
        module_networkx$algorithms$community$modularity_max,
        mod_consts[44],
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        codeobj_eeb5f76efe49af74f8631722785f5b33,
        closure,
        3,
#if 1
        sizeof(struct networkx$algorithms$community$modularity_max$$$function__1__greedy_modularity_communities_generator$$$genobj__1__greedy_modularity_communities_generator_locals)
#else
        0
#endif
    );
}


static PyObject *impl_networkx$algorithms$community$modularity_max$$$function__1__greedy_modularity_communities_generator$$$genobj__1__greedy_modularity_communities_generator$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_fdccb1e148c8f1840bbce7f6074050aa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fdccb1e148c8f1840bbce7f6074050aa = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fdccb1e148c8f1840bbce7f6074050aa)) {
        Py_XDECREF(cache_frame_fdccb1e148c8f1840bbce7f6074050aa);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fdccb1e148c8f1840bbce7f6074050aa == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fdccb1e148c8f1840bbce7f6074050aa = MAKE_FUNCTION_FRAME(tstate, codeobj_fdccb1e148c8f1840bbce7f6074050aa, module_networkx$algorithms$community$modularity_max, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fdccb1e148c8f1840bbce7f6074050aa->m_type_description == NULL);
    frame_fdccb1e148c8f1840bbce7f6074050aa = cache_frame_fdccb1e148c8f1840bbce7f6074050aa;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_fdccb1e148c8f1840bbce7f6074050aa);
    assert(Py_REFCNT(frame_fdccb1e148c8f1840bbce7f6074050aa) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_networkx$algorithms$community$modularity_max, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        frame_fdccb1e148c8f1840bbce7f6074050aa->m_frame.f_lineno = 91;
        tmp_return_value = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_1, mod_consts[45]);

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;

            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fdccb1e148c8f1840bbce7f6074050aa, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fdccb1e148c8f1840bbce7f6074050aa->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fdccb1e148c8f1840bbce7f6074050aa, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fdccb1e148c8f1840bbce7f6074050aa,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_fdccb1e148c8f1840bbce7f6074050aa == cache_frame_fdccb1e148c8f1840bbce7f6074050aa) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fdccb1e148c8f1840bbce7f6074050aa);
        cache_frame_fdccb1e148c8f1840bbce7f6074050aa = NULL;
    }

    assertFrameObject(frame_fdccb1e148c8f1840bbce7f6074050aa);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:

    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_networkx$algorithms$community$modularity_max$$$function__2_greedy_modularity_communities(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_G = python_pars[0];
    PyObject *par_weight = python_pars[1];
    PyObject *par_resolution = python_pars[2];
    PyObject *par_cutoff = python_pars[3];
    PyObject *par_best_n = python_pars[4];
    PyObject *var_community_gen = NULL;
    PyObject *var_communities = NULL;
    PyObject *var_dq = NULL;
    PyObject *var_comm1 = NULL;
    PyObject *var_comm2 = NULL;
    PyObject *var_rest = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_e5c0677cf39035253cb365a9954f8c38;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_e5c0677cf39035253cb365a9954f8c38 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e5c0677cf39035253cb365a9954f8c38)) {
        Py_XDECREF(cache_frame_e5c0677cf39035253cb365a9954f8c38);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e5c0677cf39035253cb365a9954f8c38 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e5c0677cf39035253cb365a9954f8c38 = MAKE_FUNCTION_FRAME(tstate, codeobj_e5c0677cf39035253cb365a9954f8c38, module_networkx$algorithms$community$modularity_max, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e5c0677cf39035253cb365a9954f8c38->m_type_description == NULL);
    frame_e5c0677cf39035253cb365a9954f8c38 = cache_frame_e5c0677cf39035253cb365a9954f8c38;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e5c0677cf39035253cb365a9954f8c38);
    assert(Py_REFCNT(frame_e5c0677cf39035253cb365a9954f8c38) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_cutoff);
        tmp_cmp_expr_left_1 = par_cutoff;
        tmp_cmp_expr_right_1 = mod_consts[6];
        tmp_or_left_value_1 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_cutoff);
        tmp_cmp_expr_left_2 = par_cutoff;
        CHECK_OBJECT(par_G);
        tmp_called_instance_1 = par_G;
        frame_e5c0677cf39035253cb365a9954f8c38->m_frame.f_lineno = 312;
        tmp_cmp_expr_right_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[3]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[46];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(5);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_len_arg_1;
            PyObject *tmp_format_spec_1;
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            if (par_G == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[1]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 313;
                type_description_1 = "ooooooooooo";
                goto tuple_build_exception_1;
            }

            tmp_len_arg_1 = par_G;
            tmp_format_value_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
            if (tmp_format_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 313;
                type_description_1 = "ooooooooooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[47];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 313;
                type_description_1 = "ooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[48];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(par_cutoff);
            tmp_format_value_2 = par_cutoff;
            tmp_format_spec_2 = mod_consts[47];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 313;
                type_description_1 = "ooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[49];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[47], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e5c0677cf39035253cb365a9954f8c38->m_frame.f_lineno = 313;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 313;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_best_n);
        tmp_cmp_expr_left_3 = par_best_n;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_or_left_truth_2;
        nuitka_bool tmp_or_left_value_2;
        nuitka_bool tmp_or_right_value_2;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(par_best_n);
        tmp_cmp_expr_left_4 = par_best_n;
        tmp_cmp_expr_right_4 = mod_consts[6];
        tmp_or_left_value_2 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_or_left_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        CHECK_OBJECT(par_best_n);
        tmp_cmp_expr_left_5 = par_best_n;
        if (par_G == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[1]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 315;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = par_G;
        frame_e5c0677cf39035253cb365a9954f8c38->m_frame.f_lineno = 315;
        tmp_cmp_expr_right_5 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[3]);
        if (tmp_cmp_expr_right_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_2 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        Py_DECREF(tmp_cmp_expr_right_5);
        if (tmp_or_right_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_condition_result_3 = tmp_or_left_value_2;
        or_end_2:;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = mod_consts[50];
        tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(5);
        {
            PyObject *tmp_format_value_3;
            PyObject *tmp_len_arg_2;
            PyObject *tmp_format_spec_3;
            PyObject *tmp_format_value_4;
            PyObject *tmp_format_spec_4;
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
            if (par_G == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[1]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 316;
                type_description_1 = "ooooooooooo";
                goto tuple_build_exception_2;
            }

            tmp_len_arg_2 = par_G;
            tmp_format_value_3 = BUILTIN_LEN(tstate, tmp_len_arg_2);
            if (tmp_format_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 316;
                type_description_1 = "ooooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_format_spec_3 = mod_consts[47];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
            Py_DECREF(tmp_format_value_3);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 316;
                type_description_1 = "ooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[48];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
            CHECK_OBJECT(par_best_n);
            tmp_format_value_4 = par_best_n;
            tmp_format_spec_4 = mod_consts[47];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 316;
                type_description_1 = "ooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 3, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[49];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 4, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_string_concat_values_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_make_exception_arg_2 = PyUnicode_Join(mod_consts[47], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_make_exception_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e5c0677cf39035253cb365a9954f8c38->m_frame.f_lineno = 316;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_2);
        Py_DECREF(tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 316;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        CHECK_OBJECT(par_best_n);
        tmp_cmp_expr_left_6 = par_best_n;
        CHECK_OBJECT(par_cutoff);
        tmp_cmp_expr_right_6 = par_cutoff;
        tmp_condition_result_4 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_3;
        PyObject *tmp_string_concat_values_3;
        PyObject *tmp_tuple_element_3;
        tmp_tuple_element_3 = mod_consts[51];
        tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_format_value_5;
            PyObject *tmp_format_spec_5;
            PyObject *tmp_format_value_6;
            PyObject *tmp_format_spec_6;
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
            CHECK_OBJECT(par_best_n);
            tmp_format_value_5 = par_best_n;
            tmp_format_spec_5 = mod_consts[47];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_5, tmp_format_spec_5);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 318;
                type_description_1 = "ooooooooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[52];
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 2, tmp_tuple_element_3);
            CHECK_OBJECT(par_cutoff);
            tmp_format_value_6 = par_cutoff;
            tmp_format_spec_6 = mod_consts[47];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_6, tmp_format_spec_6);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 318;
                type_description_1 = "ooooooooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_3, 3, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_string_concat_values_3);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_make_exception_arg_3 = PyUnicode_Join(mod_consts[47], tmp_string_concat_values_3);
        Py_DECREF(tmp_string_concat_values_3);
        if (tmp_make_exception_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e5c0677cf39035253cb365a9954f8c38->m_frame.f_lineno = 318;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_3);
        Py_DECREF(tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_3 == NULL));
        exception_type = tmp_raise_type_3;
        exception_lineno = 318;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        CHECK_OBJECT(par_best_n);
        tmp_cmp_expr_left_7 = par_best_n;
        tmp_cmp_expr_right_7 = mod_consts[6];
        tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_list_element_1;
        PyObject *tmp_set_arg_1;
        if (par_G == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[1]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 320;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_set_arg_1 = par_G;
        tmp_list_element_1 = PySet_New(tmp_set_arg_1);
        if (tmp_list_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_return_value, 0, tmp_list_element_1);
        goto frame_return_exit_1;
    }
    branch_no_5:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_3;
        if (par_G == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[1]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 322;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = par_G;
        frame_e5c0677cf39035253cb365a9954f8c38->m_frame.f_lineno = 322;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[3]);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_best_n;
            assert(old != NULL);
            par_best_n = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_networkx$algorithms$community$modularity_max, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_G == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[1]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 326;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_0_1 = par_G;
        CHECK_OBJECT(par_weight);
        tmp_kw_call_dict_value_0_1 = par_weight;
        CHECK_OBJECT(par_resolution);
        tmp_kw_call_dict_value_1_1 = par_resolution;
        frame_e5c0677cf39035253cb365a9954f8c38->m_frame.f_lineno = 325;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[53]);
        }

        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_community_gen == NULL);
        var_community_gen = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_value_value_1;
        CHECK_OBJECT(var_community_gen);
        tmp_value_value_1 = var_community_gen;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_value_value_1);
        if (tmp_assign_source_3 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooo";
            exception_lineno = 330;
            goto frame_exception_exit_1;
        }
        assert(var_communities == NULL);
        var_communities = tmp_assign_source_3;
    }
    loop_start_1:;
    {
        bool tmp_condition_result_6;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        PyObject *tmp_len_arg_3;
        if (var_communities == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 333;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_len_arg_3 = var_communities;
        tmp_cmp_expr_left_8 = BUILTIN_LEN(tstate, tmp_len_arg_3);
        if (tmp_cmp_expr_left_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cutoff);
        tmp_cmp_expr_right_8 = par_cutoff;
        tmp_operand_value_1 = RICH_COMPARE_GT_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        Py_DECREF(tmp_cmp_expr_left_8);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    goto loop_end_1;
    branch_no_6:;
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_value_value_2;
        CHECK_OBJECT(var_community_gen);
        tmp_value_value_2 = var_community_gen;
        tmp_assign_source_4 = ITERATOR_NEXT(tmp_value_value_2);
        if (tmp_assign_source_4 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooo";
            exception_lineno = 335;
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_dq;
            var_dq = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_e5c0677cf39035253cb365a9954f8c38, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_e5c0677cf39035253cb365a9954f8c38, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        tmp_cmp_expr_left_9 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_9 = PyExc_StopIteration;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
        assert(!(tmp_res == -1));
        tmp_condition_result_7 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kwargs_value_1;
        tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts[54]);
        assert(tmp_called_value_2 != NULL);
        if (var_communities == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 338;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }

        tmp_tuple_element_4 = var_communities;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_4);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[55]);
        frame_e5c0677cf39035253cb365a9954f8c38->m_frame.f_lineno = 338;
        tmp_assign_source_5 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_communities;
            var_communities = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    loop_start_2:;
    {
        bool tmp_condition_result_8;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        PyObject *tmp_len_arg_4;
        if (var_communities == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 340;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }

        tmp_len_arg_4 = var_communities;
        tmp_cmp_expr_left_10 = BUILTIN_LEN(tstate, tmp_len_arg_4);
        if (tmp_cmp_expr_left_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(par_best_n);
        tmp_cmp_expr_right_10 = par_best_n;
        tmp_operand_value_2 = RICH_COMPARE_GT_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
        Py_DECREF(tmp_cmp_expr_left_10);
        if (tmp_operand_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_8 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    goto loop_end_2;
    branch_no_8:;
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_1;
        if (var_communities == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 341;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_4;
        }

        tmp_iter_arg_1 = var_communities;
        tmp_assign_source_6 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT_STARRED(tstate, tmp_unpack_1, 0, 2);
        if (tmp_assign_source_7 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooo";
            exception_lineno = 341;
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT_STARRED(tstate, tmp_unpack_2, 1, 2);
        if (tmp_assign_source_8 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooo";
            exception_lineno = 341;
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_list_arg_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_list_arg_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = MAKE_LIST(tstate, tmp_list_arg_1);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_3;
            tmp_tuple_unpack_1__element_3 = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_11;
        nuitka_digit tmp_cmp_expr_right_11;
        PyObject *tmp_len_arg_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_len_arg_5 = tmp_tuple_unpack_1__element_3;
        tmp_cmp_expr_left_11 = BUILTIN_LEN(tstate, tmp_len_arg_5);
        assert(!(tmp_cmp_expr_left_11 == NULL));
        tmp_cmp_expr_right_11 = 0;
        tmp_condition_result_9 = RICH_COMPARE_LT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
        Py_DECREF(tmp_cmp_expr_left_11);
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_add_expr_left_1;
        nuitka_digit tmp_add_expr_right_1;
        PyObject *tmp_len_arg_6;
        tmp_raise_type_4 = PyExc_ValueError;
        tmp_mod_expr_left_1 = mod_consts[56];
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_len_arg_6 = tmp_tuple_unpack_1__element_3;
        tmp_add_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_6);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_5;
        }
        tmp_add_expr_right_1 = 2;
        tmp_mod_expr_right_1 = BINARY_OPERATION_ADD_OBJECT_LONG_DIGIT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        assert(!(tmp_mod_expr_right_1 == NULL));
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_LONG(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_5;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_1;
        exception_lineno = 341;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooo";
        goto try_except_handler_5;
    }
    branch_no_9:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_4;
    // End of try:
    try_end_2:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_3;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_comm1;
            var_comm1 = tmp_assign_source_10;
            Py_INCREF(var_comm1);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_comm2;
            var_comm2 = tmp_assign_source_11;
            Py_INCREF(var_comm2);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_12 = tmp_tuple_unpack_1__element_3;
        {
            PyObject *old = var_rest;
            var_rest = tmp_assign_source_12;
            Py_INCREF(var_rest);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_list_element_2;
        PyObject *tmp_bitxor_expr_left_1;
        PyObject *tmp_bitxor_expr_right_1;
        CHECK_OBJECT(var_comm1);
        tmp_bitxor_expr_left_1 = var_comm1;
        CHECK_OBJECT(var_comm2);
        tmp_bitxor_expr_right_1 = var_comm2;
        tmp_list_element_2 = BINARY_OPERATION_BITXOR_OBJECT_OBJECT_OBJECT(tmp_bitxor_expr_left_1, tmp_bitxor_expr_right_1);
        if (tmp_list_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_13 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_assign_source_13, 0, tmp_list_element_2);
        {
            PyObject *old = var_communities;
            var_communities = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_list_arg_value_1;
        PyObject *tmp_value_value_3;
        CHECK_OBJECT(var_communities);
        tmp_list_arg_value_1 = var_communities;
        CHECK_OBJECT(var_rest);
        tmp_value_value_3 = var_rest;
        tmp_result = LIST_EXTEND_FROM_ITERABLE(tstate, tmp_list_arg_value_1, tmp_value_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 340;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    if (var_communities == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 344;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_3;
    }

    tmp_return_value = var_communities;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_3;
    goto branch_end_7;
    branch_no_7:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 334;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e5c0677cf39035253cb365a9954f8c38->m_frame) frame_e5c0677cf39035253cb365a9954f8c38->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooo";
    goto try_except_handler_3;
    branch_end_7:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;
    {
        nuitka_bool tmp_condition_result_10;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_12;
        PyObject *tmp_cmp_expr_right_12;
        PyObject *tmp_cmp_expr_left_13;
        PyObject *tmp_cmp_expr_right_13;
        PyObject *tmp_len_arg_7;
        CHECK_OBJECT(var_dq);
        tmp_cmp_expr_left_12 = var_dq;
        tmp_cmp_expr_right_12 = mod_consts[24];
        tmp_and_left_value_1 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
        if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        if (var_communities == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 347;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_len_arg_7 = var_communities;
        tmp_cmp_expr_left_13 = BUILTIN_LEN(tstate, tmp_len_arg_7);
        if (tmp_cmp_expr_left_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_best_n);
        tmp_cmp_expr_right_13 = par_best_n;
        tmp_and_right_value_1 = RICH_COMPARE_LE_NBOOL_LONG_OBJECT(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
        Py_DECREF(tmp_cmp_expr_left_13);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_10 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_10 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    goto loop_end_1;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_value_value_4;
        CHECK_OBJECT(var_community_gen);
        tmp_value_value_4 = var_community_gen;
        tmp_assign_source_14 = ITERATOR_NEXT(tmp_value_value_4);
        if (tmp_assign_source_14 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooo";
            exception_lineno = 349;
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_communities;
            var_communities = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 333;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_kwargs_value_2;
        tmp_called_value_3 = LOOKUP_BUILTIN(mod_consts[54]);
        assert(tmp_called_value_3 != NULL);
        if (var_communities == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 351;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_5 = var_communities;
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_5);
        tmp_kwargs_value_2 = DICT_COPY(mod_consts[55]);
        frame_e5c0677cf39035253cb365a9954f8c38->m_frame.f_lineno = 351;
        tmp_return_value = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e5c0677cf39035253cb365a9954f8c38, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e5c0677cf39035253cb365a9954f8c38->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e5c0677cf39035253cb365a9954f8c38, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e5c0677cf39035253cb365a9954f8c38,
        type_description_1,
        par_G,
        par_weight,
        par_resolution,
        par_cutoff,
        par_best_n,
        var_community_gen,
        var_communities,
        var_dq,
        var_comm1,
        var_comm2,
        var_rest
    );


    // Release cached frame if used for exception.
    if (frame_e5c0677cf39035253cb365a9954f8c38 == cache_frame_e5c0677cf39035253cb365a9954f8c38) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e5c0677cf39035253cb365a9954f8c38);
        cache_frame_e5c0677cf39035253cb365a9954f8c38 = NULL;
    }

    assertFrameObject(frame_e5c0677cf39035253cb365a9954f8c38);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_best_n);
    Py_DECREF(par_best_n);
    par_best_n = NULL;
    Py_XDECREF(var_community_gen);
    var_community_gen = NULL;
    Py_XDECREF(var_communities);
    var_communities = NULL;
    Py_XDECREF(var_dq);
    var_dq = NULL;
    Py_XDECREF(var_comm1);
    var_comm1 = NULL;
    Py_XDECREF(var_comm2);
    var_comm2 = NULL;
    Py_XDECREF(var_rest);
    var_rest = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(par_best_n);
    Py_DECREF(par_best_n);
    par_best_n = NULL;
    Py_XDECREF(var_community_gen);
    var_community_gen = NULL;
    Py_XDECREF(var_communities);
    var_communities = NULL;
    Py_XDECREF(var_dq);
    var_dq = NULL;
    Py_XDECREF(var_comm1);
    var_comm1 = NULL;
    Py_XDECREF(var_comm2);
    var_comm2 = NULL;
    Py_XDECREF(var_rest);
    var_rest = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_G);
    Py_DECREF(par_G);
    CHECK_OBJECT(par_weight);
    Py_DECREF(par_weight);
    CHECK_OBJECT(par_resolution);
    Py_DECREF(par_resolution);
    CHECK_OBJECT(par_cutoff);
    Py_DECREF(par_cutoff);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_G);
    Py_DECREF(par_G);
    CHECK_OBJECT(par_weight);
    Py_DECREF(par_weight);
    CHECK_OBJECT(par_resolution);
    Py_DECREF(par_resolution);
    CHECK_OBJECT(par_cutoff);
    Py_DECREF(par_cutoff);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_networkx$algorithms$community$modularity_max$$$function__3_naive_greedy_modularity_communities(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_G = python_pars[0];
    PyObject *par_resolution = python_pars[1];
    PyObject *par_weight = python_pars[2];
    PyObject *var_communities = NULL;
    PyObject *var_merges = NULL;
    PyObject *var_old_modularity = NULL;
    PyObject *var_new_modularity = NULL;
    PyObject *var_trial_communities = NULL;
    PyObject *var_to_merge = NULL;
    PyObject *var_i = NULL;
    PyObject *var_u = NULL;
    PyObject *var_j = NULL;
    PyObject *var_v = NULL;
    PyObject *var_trial_modularity = NULL;
    PyObject *var_dq = NULL;
    PyObject *outline_0_var_u = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__element_3 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_tuple_unpack_4__element_1 = NULL;
    PyObject *tmp_tuple_unpack_4__element_2 = NULL;
    PyObject *tmp_tuple_unpack_4__source_iter = NULL;
    struct Nuitka_FrameObject *frame_2d216ce3ade5e5775a483a237d211480;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_res;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_2d216ce3ade5e5775a483a237d211480 = NULL;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_2d216ce3ade5e5775a483a237d211480)) {
        Py_XDECREF(cache_frame_2d216ce3ade5e5775a483a237d211480);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2d216ce3ade5e5775a483a237d211480 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2d216ce3ade5e5775a483a237d211480 = MAKE_FUNCTION_FRAME(tstate, codeobj_2d216ce3ade5e5775a483a237d211480, module_networkx$algorithms$community$modularity_max, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2d216ce3ade5e5775a483a237d211480->m_type_description == NULL);
    frame_2d216ce3ade5e5775a483a237d211480 = cache_frame_2d216ce3ade5e5775a483a237d211480;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_2d216ce3ade5e5775a483a237d211480);
    assert(Py_REFCNT(frame_2d216ce3ade5e5775a483a237d211480) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT(par_G);
            tmp_called_instance_1 = par_G;
            frame_2d216ce3ade5e5775a483a237d211480->m_frame.f_lineno = 404;
            tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[58]);
            if (tmp_iter_arg_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 404;
                type_description_1 = "ooooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 404;
                type_description_1 = "ooooooooooooooo";
                goto try_except_handler_2;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            tmp_assign_source_3 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_3;
        }
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_4 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    type_description_1 = "ooooooooooooooo";
                    exception_lineno = 404;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_4;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_5 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_u;
                outline_0_var_u = tmp_assign_source_5;
                Py_INCREF(outline_0_var_u);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_frozenset_arg_1;
            PyObject *tmp_list_element_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_u);
            tmp_list_element_1 = outline_0_var_u;
            tmp_frozenset_arg_1 = MAKE_LIST_EMPTY(1);
            PyList_SET_ITEM0(tmp_frozenset_arg_1, 0, tmp_list_element_1);
            tmp_append_value_1 = PyFrozenSet_New(tmp_frozenset_arg_1);
            Py_DECREF(tmp_frozenset_arg_1);
            if (tmp_append_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 404;
                type_description_1 = "ooooooooooooooo";
                goto try_except_handler_3;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 404;
                type_description_1 = "ooooooooooooooo";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_1);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto try_return_handler_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_u);
        outline_0_var_u = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_u);
        outline_0_var_u = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 404;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_communities == NULL);
        var_communities = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = MAKE_LIST_EMPTY(0);
        assert(var_merges == NULL);
        var_merges = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = Py_None;
        assert(var_old_modularity == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_old_modularity = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_networkx$algorithms$community$modularity_max, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_G);
        tmp_kw_call_arg_value_0_1 = par_G;
        CHECK_OBJECT(var_communities);
        tmp_kw_call_arg_value_1_1 = var_communities;
        CHECK_OBJECT(par_resolution);
        tmp_kw_call_dict_value_0_1 = par_resolution;
        CHECK_OBJECT(par_weight);
        tmp_kw_call_dict_value_1_1 = par_weight;
        frame_2d216ce3ade5e5775a483a237d211480->m_frame.f_lineno = 409;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[60]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_new_modularity == NULL);
        var_new_modularity = tmp_assign_source_8;
    }
    loop_start_2:;
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        if (var_old_modularity == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[61]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 410;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_1 = var_old_modularity;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_or_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? Py_True : Py_False;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        if (var_new_modularity == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[62]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 410;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_2 = var_new_modularity;
        if (var_old_modularity == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[61]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 410;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_2 = var_old_modularity;
        tmp_or_right_value_1 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_or_right_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        Py_INCREF(tmp_or_left_value_1);
        tmp_operand_value_1 = tmp_or_left_value_1;
        or_end_1:;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    goto loop_end_2;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_9;
        if (var_new_modularity == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[62]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 412;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_9 = var_new_modularity;
        {
            PyObject *old = var_old_modularity;
            var_old_modularity = tmp_assign_source_9;
            Py_INCREF(var_old_modularity);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_list_arg_1;
        if (var_communities == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 414;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_list_arg_1 = var_communities;
        tmp_assign_source_10 = MAKE_LIST(tstate, tmp_list_arg_1);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_trial_communities;
            var_trial_communities = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = Py_None;
        {
            PyObject *old = var_to_merge;
            var_to_merge = tmp_assign_source_11;
            Py_INCREF(var_to_merge);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_2 = (PyObject *)&PyEnum_Type;
        if (var_communities == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 416;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = var_communities;
        frame_2d216ce3ade5e5775a483a237d211480->m_frame.f_lineno = 416;
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
        if (tmp_iter_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_12 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = tmp_for_loop_1__for_iterator;
            tmp_for_loop_1__for_iterator = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_2 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_13 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_13 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooooo";
                exception_lineno = 416;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_3 = tmp_for_loop_1__iter_value;
        tmp_assign_source_14 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_15 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 2);
        if (tmp_assign_source_15 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 416;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_16 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 2);
        if (tmp_assign_source_16 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 416;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooooooooooooo";
                    exception_lineno = 416;
                    goto try_except_handler_6;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[9];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooo";
            exception_lineno = 416;
            goto try_except_handler_6;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_5;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_4;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_17 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_17;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_18 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_u;
            var_u = tmp_assign_source_18;
            Py_INCREF(var_u);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_3 = (PyObject *)&PyEnum_Type;
        if (var_communities == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 417;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_args_element_value_2 = var_communities;
        frame_2d216ce3ade5e5775a483a237d211480->m_frame.f_lineno = 417;
        tmp_iter_arg_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
        if (tmp_iter_arg_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_19 = MAKE_ITERATOR(tstate, tmp_iter_arg_4);
        Py_DECREF(tmp_iter_arg_4);
        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_19;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_4:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_3 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_20 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_20 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_4;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooooo";
                exception_lineno = 417;
                goto try_except_handler_7;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_20;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_iter_arg_5;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_iter_arg_5 = tmp_for_loop_2__iter_value;
        tmp_assign_source_21 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_21;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_22 = UNPACK_NEXT(tstate, tmp_unpack_3, 0, 2);
        if (tmp_assign_source_22 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 417;
            goto try_except_handler_9;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_22;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_23 = UNPACK_NEXT(tstate, tmp_unpack_4, 1, 2);
        if (tmp_assign_source_23 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 417;
            goto try_except_handler_9;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_23;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooooooooooooo";
                    exception_lineno = 417;
                    goto try_except_handler_9;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[9];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooo";
            exception_lineno = 417;
            goto try_except_handler_9;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_8;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_7;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_24 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_j;
            var_j = tmp_assign_source_24;
            Py_INCREF(var_j);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_25;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_25 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_v;
            var_v = tmp_assign_source_25;
            Py_INCREF(var_v);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_2;
        int tmp_or_left_truth_2;
        nuitka_bool tmp_or_left_value_2;
        nuitka_bool tmp_or_right_value_2;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        int tmp_or_left_truth_3;
        nuitka_bool tmp_or_left_value_3;
        nuitka_bool tmp_or_right_value_3;
        PyObject *tmp_cmp_expr_left_4;
        nuitka_digit tmp_cmp_expr_right_4;
        PyObject *tmp_len_arg_1;
        bool tmp_tmp_or_left_value_3_cbool_1;
        PyObject *tmp_cmp_expr_left_5;
        nuitka_digit tmp_cmp_expr_right_5;
        PyObject *tmp_len_arg_2;
        bool tmp_tmp_or_right_value_3_cbool_1;
        CHECK_OBJECT(var_j);
        tmp_cmp_expr_left_3 = var_j;
        CHECK_OBJECT(var_i);
        tmp_cmp_expr_right_3 = var_i;
        tmp_or_left_value_2 = RICH_COMPARE_LE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_or_left_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_7;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        if (var_u == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 419;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_len_arg_1 = var_u;
        tmp_cmp_expr_left_4 = BUILTIN_LEN(tstate, tmp_len_arg_1);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_cmp_expr_right_4 = 0;
        tmp_tmp_or_left_value_3_cbool_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        tmp_or_left_value_3 = tmp_tmp_or_left_value_3_cbool_1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_3 = tmp_or_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_3 == 1) {
            goto or_left_3;
        } else {
            goto or_right_3;
        }
        or_right_3:;
        CHECK_OBJECT(var_v);
        tmp_len_arg_2 = var_v;
        tmp_cmp_expr_left_5 = BUILTIN_LEN(tstate, tmp_len_arg_2);
        if (tmp_cmp_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_cmp_expr_right_5 = 0;
        tmp_tmp_or_right_value_3_cbool_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        Py_DECREF(tmp_cmp_expr_left_5);
        tmp_or_right_value_3 = tmp_tmp_or_right_value_3_cbool_1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_right_value_2 = tmp_or_right_value_3;
        goto or_end_3;
        or_left_3:;
        tmp_or_right_value_2 = tmp_or_left_value_3;
        or_end_3:;
        tmp_condition_result_2 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_condition_result_2 = tmp_or_left_value_2;
        or_end_2:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    goto loop_start_4;
    branch_no_2:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_bitor_expr_left_1;
        PyObject *tmp_bitor_expr_right_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        if (var_u == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 422;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_bitor_expr_left_1 = var_u;
        if (var_v == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 422;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_bitor_expr_right_1 = var_v;
        tmp_ass_subvalue_1 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_1, tmp_bitor_expr_right_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_7;
        }
        if (var_trial_communities == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[63]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 422;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_ass_subscribed_1 = var_trial_communities;
        CHECK_OBJECT(var_j);
        tmp_ass_subscript_1 = var_j;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_7;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        tmp_ass_subvalue_2 = mod_consts[64];
        if (var_trial_communities == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[63]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 423;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_ass_subscribed_2 = var_trial_communities;
        CHECK_OBJECT(var_i);
        tmp_ass_subscript_2 = var_i;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_7;
        }
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_value_4;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_kw_call_dict_value_1_2;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_networkx$algorithms$community$modularity_max, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_7;
        }
        if (par_G == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[1]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 425;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_kw_call_arg_value_0_2 = par_G;
        if (var_trial_communities == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[63]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 425;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_kw_call_arg_value_1_2 = var_trial_communities;
        if (par_resolution == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 425;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_kw_call_dict_value_0_2 = par_resolution;
        if (par_weight == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[5]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 425;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_kw_call_dict_value_1_2 = par_weight;
        frame_2d216ce3ade5e5775a483a237d211480->m_frame.f_lineno = 424;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2};
            tmp_assign_source_26 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tstate, tmp_called_value_4, args, kw_values, mod_consts[60]);
        }

        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = var_trial_modularity;
            var_trial_modularity = tmp_assign_source_26;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        CHECK_OBJECT(var_trial_modularity);
        tmp_cmp_expr_left_6 = var_trial_modularity;
        if (var_new_modularity == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[62]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 427;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_cmp_expr_right_6 = var_new_modularity;
        tmp_condition_result_3 = RICH_COMPARE_GE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_7;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        CHECK_OBJECT(var_trial_modularity);
        tmp_cmp_expr_left_7 = var_trial_modularity;
        if (var_new_modularity == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[62]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 429;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_cmp_expr_right_7 = var_new_modularity;
        tmp_condition_result_4 = RICH_COMPARE_GT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_7;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_27;
        CHECK_OBJECT(var_trial_modularity);
        tmp_assign_source_27 = var_trial_modularity;
        {
            PyObject *old = var_new_modularity;
            var_new_modularity = tmp_assign_source_27;
            Py_INCREF(var_new_modularity);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_i);
        tmp_tuple_element_1 = var_i;
        tmp_assign_source_28 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_sub_expr_left_1;
            PyObject *tmp_sub_expr_right_1;
            PyTuple_SET_ITEM0(tmp_assign_source_28, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_j);
            tmp_tuple_element_1 = var_j;
            PyTuple_SET_ITEM0(tmp_assign_source_28, 1, tmp_tuple_element_1);
            CHECK_OBJECT(var_new_modularity);
            tmp_sub_expr_left_1 = var_new_modularity;
            if (var_old_modularity == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[61]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 432;
                type_description_1 = "ooooooooooooooo";
                goto tuple_build_exception_1;
            }

            tmp_sub_expr_right_1 = var_old_modularity;
            tmp_tuple_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 432;
                type_description_1 = "ooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_assign_source_28, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_assign_source_28);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        {
            PyObject *old = var_to_merge;
            var_to_merge = tmp_assign_source_28;
            Py_XDECREF(old);
        }

    }
    goto branch_end_4;
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        if (var_to_merge == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 433;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE(var_to_merge);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_7;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_called_value_5 = LOOKUP_BUILTIN(mod_consts[66]);
        assert(tmp_called_value_5 != NULL);
        CHECK_OBJECT(var_i);
        tmp_args_element_value_3 = var_i;
        CHECK_OBJECT(var_j);
        tmp_args_element_value_4 = var_j;
        frame_2d216ce3ade5e5775a483a237d211480->m_frame.f_lineno = 433;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_cmp_expr_left_8 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
        }

        if (tmp_cmp_expr_left_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_called_value_6 = LOOKUP_BUILTIN(mod_consts[66]);
        assert(tmp_called_value_6 != NULL);
        if (var_to_merge == NULL) {
            Py_DECREF(tmp_cmp_expr_left_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 433;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_expression_value_1 = var_to_merge;
        tmp_subscript_value_1 = mod_consts[24];
        tmp_args_element_value_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_8);

            exception_lineno = 433;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_7;
        }
        if (var_to_merge == NULL) {
            Py_DECREF(tmp_cmp_expr_left_8);
            Py_DECREF(tmp_args_element_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 433;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_expression_value_2 = var_to_merge;
        tmp_subscript_value_2 = mod_consts[6];
        tmp_args_element_value_6 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_2, 1);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_8);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 433;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_7;
        }
        frame_2d216ce3ade5e5775a483a237d211480->m_frame.f_lineno = 433;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_cmp_expr_right_8 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_cmp_expr_right_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_8);

            exception_lineno = 433;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_and_right_value_1 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        Py_DECREF(tmp_cmp_expr_left_8);
        Py_DECREF(tmp_cmp_expr_right_8);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_condition_result_5 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_5 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_29;
        CHECK_OBJECT(var_trial_modularity);
        tmp_assign_source_29 = var_trial_modularity;
        {
            PyObject *old = var_new_modularity;
            var_new_modularity = tmp_assign_source_29;
            Py_INCREF(var_new_modularity);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(var_i);
        tmp_tuple_element_2 = var_i;
        tmp_assign_source_30 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_sub_expr_left_2;
            PyObject *tmp_sub_expr_right_2;
            PyTuple_SET_ITEM0(tmp_assign_source_30, 0, tmp_tuple_element_2);
            CHECK_OBJECT(var_j);
            tmp_tuple_element_2 = var_j;
            PyTuple_SET_ITEM0(tmp_assign_source_30, 1, tmp_tuple_element_2);
            CHECK_OBJECT(var_new_modularity);
            tmp_sub_expr_left_2 = var_new_modularity;
            if (var_old_modularity == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[61]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 436;
                type_description_1 = "ooooooooooooooo";
                goto tuple_build_exception_2;
            }

            tmp_sub_expr_right_2 = var_old_modularity;
            tmp_tuple_element_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 436;
                type_description_1 = "ooooooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_assign_source_30, 2, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_assign_source_30);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        {
            PyObject *old = var_to_merge;
            var_to_merge = tmp_assign_source_30;
            Py_XDECREF(old);
        }

    }
    branch_no_5:;
    branch_end_4:;
    branch_no_3:;
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        if (var_u == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 438;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_ass_subvalue_3 = var_u;
        if (var_trial_communities == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[63]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 438;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_ass_subscribed_3 = var_trial_communities;
        CHECK_OBJECT(var_i);
        tmp_ass_subscript_3 = var_i;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_7;
        }
    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        if (var_v == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 439;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_ass_subvalue_4 = var_v;
        if (var_trial_communities == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[63]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 439;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_ass_subscribed_4 = var_trial_communities;
        CHECK_OBJECT(var_j);
        tmp_ass_subscript_4 = var_j;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_7;
        }
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 417;
        type_description_1 = "ooooooooooooooo";
        goto try_except_handler_7;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_4;
    // End of try:
    try_end_5:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 416;
        type_description_1 = "ooooooooooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        if (var_to_merge == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 440;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_9 = var_to_merge;
        tmp_cmp_expr_right_9 = Py_None;
        tmp_condition_result_6 = (tmp_cmp_expr_left_9 != tmp_cmp_expr_right_9) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_7;
        if (var_merges == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[67]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 442;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = var_merges;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[68]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_to_merge == NULL) {
            Py_DECREF(tmp_called_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 442;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_7 = var_to_merge;
        frame_2d216ce3ade5e5775a483a237d211480->m_frame.f_lineno = 442;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_7);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_iter_arg_6;
        if (var_to_merge == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 443;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_10;
        }

        tmp_iter_arg_6 = var_to_merge;
        tmp_assign_source_31 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_6);
        if (tmp_assign_source_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__source_iter;
            tmp_tuple_unpack_3__source_iter = tmp_assign_source_31;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_32 = UNPACK_NEXT(tstate, tmp_unpack_5, 0, 3);
        if (tmp_assign_source_32 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 443;
            goto try_except_handler_11;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_1;
            tmp_tuple_unpack_3__element_1 = tmp_assign_source_32;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_33 = UNPACK_NEXT(tstate, tmp_unpack_6, 1, 3);
        if (tmp_assign_source_33 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 443;
            goto try_except_handler_11;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_2;
            tmp_tuple_unpack_3__element_2 = tmp_assign_source_33;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_7 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_34 = UNPACK_NEXT(tstate, tmp_unpack_7, 2, 3);
        if (tmp_assign_source_34 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 443;
            goto try_except_handler_11;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_3;
            tmp_tuple_unpack_3__element_3 = tmp_assign_source_34;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_3;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_3); assert(HAS_ITERNEXT(tmp_iterator_name_3));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_3)->tp_iternext)(tmp_iterator_name_3);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooooooooooooo";
                    exception_lineno = 443;
                    goto try_except_handler_11;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[19];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooo";
            exception_lineno = 443;
            goto try_except_handler_11;
        }
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto try_except_handler_10;
    // End of try:
    try_end_7:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_3);
    tmp_tuple_unpack_3__element_3 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    {
        PyObject *tmp_assign_source_35;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
        tmp_assign_source_35 = tmp_tuple_unpack_3__element_1;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_35;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_36;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
        tmp_assign_source_36 = tmp_tuple_unpack_3__element_2;
        {
            PyObject *old = var_j;
            var_j = tmp_assign_source_36;
            Py_INCREF(var_j);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;

    {
        PyObject *tmp_assign_source_37;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_3);
        tmp_assign_source_37 = tmp_tuple_unpack_3__element_3;
        {
            PyObject *old = var_dq;
            var_dq = tmp_assign_source_37;
            Py_INCREF(var_dq);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_3);
    tmp_tuple_unpack_3__element_3 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_iter_arg_7;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_3;
        if (var_communities == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 444;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_12;
        }

        tmp_expression_value_4 = var_communities;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_3 = var_i;
        tmp_tuple_element_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_3);
        if (tmp_tuple_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_iter_arg_7 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_5;
            PyObject *tmp_subscript_value_4;
            PyTuple_SET_ITEM(tmp_iter_arg_7, 0, tmp_tuple_element_3);
            if (var_communities == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 444;
                type_description_1 = "ooooooooooooooo";
                goto tuple_build_exception_3;
            }

            tmp_expression_value_5 = var_communities;
            CHECK_OBJECT(var_j);
            tmp_subscript_value_4 = var_j;
            tmp_tuple_element_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_4);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 444;
                type_description_1 = "ooooooooooooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_iter_arg_7, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_iter_arg_7);
        goto try_except_handler_12;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_assign_source_38 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_7);
        Py_DECREF(tmp_iter_arg_7);
        assert(!(tmp_assign_source_38 == NULL));
        {
            PyObject *old = tmp_tuple_unpack_4__source_iter;
            tmp_tuple_unpack_4__source_iter = tmp_assign_source_38;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_8 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_39 = UNPACK_NEXT(tstate, tmp_unpack_8, 0, 2);
        if (tmp_assign_source_39 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 444;
            goto try_except_handler_13;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_1;
            tmp_tuple_unpack_4__element_1 = tmp_assign_source_39;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_unpack_9;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_9 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_40 = UNPACK_NEXT(tstate, tmp_unpack_9, 1, 2);
        if (tmp_assign_source_40 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooo";
            exception_lineno = 444;
            goto try_except_handler_13;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_2;
            tmp_tuple_unpack_4__element_2 = tmp_assign_source_40;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_4;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_iterator_name_4 = tmp_tuple_unpack_4__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_4); assert(HAS_ITERNEXT(tmp_iterator_name_4));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_4)->tp_iternext)(tmp_iterator_name_4);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooooooooooooo";
                    exception_lineno = 444;
                    goto try_except_handler_13;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[9];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooo";
            exception_lineno = 444;
            goto try_except_handler_13;
        }
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
    Py_DECREF(tmp_tuple_unpack_4__source_iter);
    tmp_tuple_unpack_4__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto try_except_handler_12;
    // End of try:
    try_end_9:;
    goto try_end_10;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_4__element_1);
    tmp_tuple_unpack_4__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_4__element_2);
    tmp_tuple_unpack_4__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
    Py_DECREF(tmp_tuple_unpack_4__source_iter);
    tmp_tuple_unpack_4__source_iter = NULL;
    {
        PyObject *tmp_assign_source_41;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_1);
        tmp_assign_source_41 = tmp_tuple_unpack_4__element_1;
        {
            PyObject *old = var_u;
            var_u = tmp_assign_source_41;
            Py_INCREF(var_u);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_4__element_1);
    tmp_tuple_unpack_4__element_1 = NULL;

    {
        PyObject *tmp_assign_source_42;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_2);
        tmp_assign_source_42 = tmp_tuple_unpack_4__element_2;
        {
            PyObject *old = var_v;
            var_v = tmp_assign_source_42;
            Py_INCREF(var_v);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_4__element_2);
    tmp_tuple_unpack_4__element_2 = NULL;

    {
        PyObject *tmp_ass_subvalue_5;
        PyObject *tmp_bitor_expr_left_2;
        PyObject *tmp_bitor_expr_right_2;
        PyObject *tmp_ass_subscribed_5;
        PyObject *tmp_ass_subscript_5;
        CHECK_OBJECT(var_u);
        tmp_bitor_expr_left_2 = var_u;
        CHECK_OBJECT(var_v);
        tmp_bitor_expr_right_2 = var_v;
        tmp_ass_subvalue_5 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_2, tmp_bitor_expr_right_2);
        if (tmp_ass_subvalue_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_communities == NULL) {
            Py_DECREF(tmp_ass_subvalue_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 445;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_5 = var_communities;
        CHECK_OBJECT(var_j);
        tmp_ass_subscript_5 = var_j;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
        Py_DECREF(tmp_ass_subvalue_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_6;
        PyObject *tmp_ass_subscribed_6;
        PyObject *tmp_ass_subscript_6;
        tmp_ass_subvalue_6 = mod_consts[64];
        if (var_communities == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 446;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_6 = var_communities;
        CHECK_OBJECT(var_i);
        tmp_ass_subscript_6 = var_i;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_6:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 410;
        type_description_1 = "ooooooooooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_2;
    loop_end_2:;
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kwargs_value_1;
        tmp_called_value_8 = LOOKUP_BUILTIN(mod_consts[54]);
        assert(tmp_called_value_8 != NULL);
        {
            PyObject *tmp_assign_source_43;
            PyObject *tmp_iter_arg_8;
            if (var_communities == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[31]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 448;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_iter_arg_8 = var_communities;
            tmp_assign_source_43 = MAKE_ITERATOR(tstate, tmp_iter_arg_8);
            if (tmp_assign_source_43 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 448;
                type_description_1 = "ooooooooooooooo";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_43;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_tuple_element_4 = MAKE_GENERATOR_networkx$algorithms$community$modularity_max$$$function__3_naive_greedy_modularity_communities$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_14;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_2:;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_4);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[55]);
        frame_2d216ce3ade5e5775a483a237d211480->m_frame.f_lineno = 448;
        tmp_return_value = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2d216ce3ade5e5775a483a237d211480, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2d216ce3ade5e5775a483a237d211480->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2d216ce3ade5e5775a483a237d211480, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2d216ce3ade5e5775a483a237d211480,
        type_description_1,
        par_G,
        par_resolution,
        par_weight,
        var_communities,
        var_merges,
        var_old_modularity,
        var_new_modularity,
        var_trial_communities,
        var_to_merge,
        var_i,
        var_u,
        var_j,
        var_v,
        var_trial_modularity,
        var_dq
    );


    // Release cached frame if used for exception.
    if (frame_2d216ce3ade5e5775a483a237d211480 == cache_frame_2d216ce3ade5e5775a483a237d211480) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2d216ce3ade5e5775a483a237d211480);
        cache_frame_2d216ce3ade5e5775a483a237d211480 = NULL;
    }

    assertFrameObject(frame_2d216ce3ade5e5775a483a237d211480);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_communities);
    var_communities = NULL;
    Py_XDECREF(var_merges);
    var_merges = NULL;
    Py_XDECREF(var_old_modularity);
    var_old_modularity = NULL;
    Py_XDECREF(var_new_modularity);
    var_new_modularity = NULL;
    Py_XDECREF(var_trial_communities);
    var_trial_communities = NULL;
    Py_XDECREF(var_to_merge);
    var_to_merge = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_u);
    var_u = NULL;
    Py_XDECREF(var_j);
    var_j = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
    Py_XDECREF(var_trial_modularity);
    var_trial_modularity = NULL;
    Py_XDECREF(var_dq);
    var_dq = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_communities);
    var_communities = NULL;
    Py_XDECREF(var_merges);
    var_merges = NULL;
    Py_XDECREF(var_old_modularity);
    var_old_modularity = NULL;
    Py_XDECREF(var_new_modularity);
    var_new_modularity = NULL;
    Py_XDECREF(var_trial_communities);
    var_trial_communities = NULL;
    Py_XDECREF(var_to_merge);
    var_to_merge = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_u);
    var_u = NULL;
    Py_XDECREF(var_j);
    var_j = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
    Py_XDECREF(var_trial_modularity);
    var_trial_modularity = NULL;
    Py_XDECREF(var_dq);
    var_dq = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_G);
    Py_DECREF(par_G);
    CHECK_OBJECT(par_resolution);
    Py_DECREF(par_resolution);
    CHECK_OBJECT(par_weight);
    Py_DECREF(par_weight);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_G);
    Py_DECREF(par_G);
    CHECK_OBJECT(par_resolution);
    Py_DECREF(par_resolution);
    CHECK_OBJECT(par_weight);
    Py_DECREF(par_weight);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct networkx$algorithms$community$modularity_max$$$function__3_naive_greedy_modularity_communities$$$genexpr__1_genexpr_locals {
    PyObject *var_c;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
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

static PyObject *networkx$algorithms$community$modularity_max$$$function__3_naive_greedy_modularity_communities$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct networkx$algorithms$community$modularity_max$$$function__3_naive_greedy_modularity_communities$$$genexpr__1_genexpr_locals *generator_heap = (struct networkx$algorithms$community$modularity_max$$$function__3_naive_greedy_modularity_communities$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_c = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(tstate, codeobj_62f7ebd572df756665364bf5e09b3f50, module_networkx$algorithms$community$modularity_max, sizeof(void *)+sizeof(void *));
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
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "No";
                generator_heap->exception_lineno = 448;
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
            PyObject *old = generator_heap->var_c;
            generator_heap->var_c = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_c);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        nuitka_digit tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(generator_heap->var_c);
        tmp_len_arg_1 = generator_heap->var_c;
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 448;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_1 = 0;
        tmp_condition_result_1 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_expression_value_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_c);
        tmp_expression_value_1 = generator_heap->var_c;
        Py_INCREF(tmp_expression_value_1);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 448;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
        Py_DECREF(tmp_yield_result_1);
    }
    branch_no_1:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 448;
        generator_heap->type_description_1 = "No";
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
            generator_heap->var_c
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

    Py_XDECREF(generator_heap->var_c);
    generator_heap->var_c = NULL;
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
    Py_XDECREF(generator_heap->var_c);
    generator_heap->var_c = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(tstate, generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_networkx$algorithms$community$modularity_max$$$function__3_naive_greedy_modularity_communities$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        networkx$algorithms$community$modularity_max$$$function__3_naive_greedy_modularity_communities$$$genexpr__1_genexpr_context,
        module_networkx$algorithms$community$modularity_max,
        mod_consts[70],
#if PYTHON_VERSION >= 0x350
        mod_consts[71],
#endif
        codeobj_62f7ebd572df756665364bf5e09b3f50,
        closure,
        1,
#if 1
        sizeof(struct networkx$algorithms$community$modularity_max$$$function__3_naive_greedy_modularity_communities$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_networkx$algorithms$community$modularity_max$$$function__1__greedy_modularity_communities_generator(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_networkx$algorithms$community$modularity_max$$$function__1__greedy_modularity_communities_generator,
        mod_consts[44],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_eeb5f76efe49af74f8631722785f5b33,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_networkx$algorithms$community$modularity_max,
        mod_consts[0],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_networkx$algorithms$community$modularity_max$$$function__1__greedy_modularity_communities_generator$$$genobj__1__greedy_modularity_communities_generator$$$function__1_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_networkx$algorithms$community$modularity_max$$$function__1__greedy_modularity_communities_generator$$$genobj__1__greedy_modularity_communities_generator$$$function__1_lambda,
        mod_consts[15],
#if PYTHON_VERSION >= 0x300
        mod_consts[16],
#endif
        codeobj_fdccb1e148c8f1840bbce7f6074050aa,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_networkx$algorithms$community$modularity_max,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_networkx$algorithms$community$modularity_max$$$function__2_greedy_modularity_communities(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_networkx$algorithms$community$modularity_max$$$function__2_greedy_modularity_communities,
        mod_consts[90],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e5c0677cf39035253cb365a9954f8c38,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_networkx$algorithms$community$modularity_max,
        mod_consts[57],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_networkx$algorithms$community$modularity_max$$$function__3_naive_greedy_modularity_communities(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_networkx$algorithms$community$modularity_max$$$function__3_naive_greedy_modularity_communities,
        mod_consts[91],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2d216ce3ade5e5775a483a237d211480,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_networkx$algorithms$community$modularity_max,
        mod_consts[69],
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

static function_impl_code const function_table_networkx$algorithms$community$modularity_max[] = {
    impl_networkx$algorithms$community$modularity_max$$$function__1__greedy_modularity_communities_generator$$$genobj__1__greedy_modularity_communities_generator$$$function__1_lambda,
    impl_networkx$algorithms$community$modularity_max$$$function__1__greedy_modularity_communities_generator,
    impl_networkx$algorithms$community$modularity_max$$$function__2_greedy_modularity_communities,
    impl_networkx$algorithms$community$modularity_max$$$function__3_naive_greedy_modularity_communities,
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

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_networkx$algorithms$community$modularity_max);

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
        module_networkx$algorithms$community$modularity_max,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        function_table_networkx$algorithms$community$modularity_max,
        sizeof(function_table_networkx$algorithms$community$modularity_max) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_networkx$algorithms$community$modularity_max(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("networkx$algorithms$community$modularity_max");

    // Store the module for future use.
    module_networkx$algorithms$community$modularity_max = module;

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
        PRINT_STRING("networkx$algorithms$community$modularity_max: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("networkx$algorithms$community$modularity_max: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initnetworkx$algorithms$community$modularity_max\n");

    moduledict_networkx$algorithms$community$modularity_max = MODULE_DICT(module_networkx$algorithms$community$modularity_max);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_networkx$algorithms$community$modularity_max,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_networkx$algorithms$community$modularity_max,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[47]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_networkx$algorithms$community$modularity_max, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_networkx$algorithms$community$modularity_max,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_networkx$algorithms$community$modularity_max, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_networkx$algorithms$community$modularity_max,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_networkx$algorithms$community$modularity_max, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_networkx$algorithms$community$modularity_max,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_networkx$algorithms$community$modularity_max);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_networkx$algorithms$community$modularity_max, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_networkx$algorithms$community$modularity_max, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_networkx$algorithms$community$modularity_max, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_networkx$algorithms$community$modularity_max, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_networkx$algorithms$community$modularity_max);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_networkx$algorithms$community$modularity_max, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_ee70c7c73ef0c8e837e87c396c890da8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[72];
        UPDATE_STRING_DICT0(moduledict_networkx$algorithms$community$modularity_max, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_networkx$algorithms$community$modularity_max, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_2);
    }
    frame_ee70c7c73ef0c8e837e87c396c890da8 = MAKE_MODULE_FRAME(codeobj_ee70c7c73ef0c8e837e87c396c890da8, module_networkx$algorithms$community$modularity_max);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_ee70c7c73ef0c8e837e87c396c890da8);
    assert(Py_REFCNT(frame_ee70c7c73ef0c8e837e87c396c890da8) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_networkx$algorithms$community$modularity_max, (Nuitka_StringObject *)mod_consts[75]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[76], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_networkx$algorithms$community$modularity_max, (Nuitka_StringObject *)mod_consts[75]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[75]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[77], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_networkx$algorithms$community$modularity_max, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[79];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_networkx$algorithms$community$modularity_max;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[80];
        tmp_level_value_1 = mod_consts[24];
        frame_ee70c7c73ef0c8e837e87c396c890da8->m_frame.f_lineno = 3;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_networkx$algorithms$community$modularity_max,
                mod_consts[14],
                mod_consts[24]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[14]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_networkx$algorithms$community$modularity_max, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[81];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_networkx$algorithms$community$modularity_max;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[24];
        frame_ee70c7c73ef0c8e837e87c396c890da8->m_frame.f_lineno = 5;
        tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_networkx$algorithms$community$modularity_max, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[83];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_networkx$algorithms$community$modularity_max;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[84];
        tmp_level_value_3 = mod_consts[24];
        frame_ee70c7c73ef0c8e837e87c396c890da8->m_frame.f_lineno = 6;
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
                (PyObject *)moduledict_networkx$algorithms$community$modularity_max,
                mod_consts[59],
                mod_consts[24]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[59]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_networkx$algorithms$community$modularity_max, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[85];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_networkx$algorithms$community$modularity_max;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[86];
        tmp_level_value_4 = mod_consts[24];
        frame_ee70c7c73ef0c8e837e87c396c890da8->m_frame.f_lineno = 7;
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
                (PyObject *)moduledict_networkx$algorithms$community$modularity_max,
                mod_consts[87],
                mod_consts[24]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[87]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_networkx$algorithms$community$modularity_max, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[88];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_networkx$algorithms$community$modularity_max;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[89];
        tmp_level_value_5 = mod_consts[24];
        frame_ee70c7c73ef0c8e837e87c396c890da8->m_frame.f_lineno = 8;
        tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_networkx$algorithms$community$modularity_max,
                mod_consts[22],
                mod_consts[24]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[22]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_networkx$algorithms$community$modularity_max, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = MAKE_LIST2(mod_consts[90],mod_consts[91]);
        UPDATE_STRING_DICT1(moduledict_networkx$algorithms$community$modularity_max, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[93];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_10 = MAKE_FUNCTION_networkx$algorithms$community$modularity_max$$$function__1__greedy_modularity_communities_generator(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_networkx$algorithms$community$modularity_max, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_defaults_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_networkx$algorithms$community$modularity_max, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[82]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[94]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto frame_exception_exit_1;
        }
        frame_ee70c7c73ef0c8e837e87c396c890da8->m_frame.f_lineno = 226;
        tmp_called_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_2, &PyTuple_GET_ITEM(mod_consts[8], 0), mod_consts[95]);
        Py_DECREF(tmp_called_value_2);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto frame_exception_exit_1;
        }
        tmp_defaults_2 = mod_consts[96];
        Py_INCREF(tmp_defaults_2);


        tmp_args_element_value_1 = MAKE_FUNCTION_networkx$algorithms$community$modularity_max$$$function__2_greedy_modularity_communities(tmp_defaults_2);

        frame_ee70c7c73ef0c8e837e87c396c890da8->m_frame.f_lineno = 226;
        tmp_assign_source_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_networkx$algorithms$community$modularity_max, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_5;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_value_7;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_defaults_3;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_networkx$algorithms$community$modularity_max, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[87]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;

            goto frame_exception_exit_1;
        }
        frame_ee70c7c73ef0c8e837e87c396c890da8->m_frame.f_lineno = 354;
        tmp_called_value_3 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_4, mod_consts[97]);

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;

            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_networkx$algorithms$community$modularity_max, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[87]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 355;

            goto frame_exception_exit_1;
        }
        frame_ee70c7c73ef0c8e837e87c396c890da8->m_frame.f_lineno = 355;
        tmp_called_value_5 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_6, mod_consts[98]);

        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 355;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_networkx$algorithms$community$modularity_max, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[82]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 356;

            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[94]);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 356;

            goto frame_exception_exit_1;
        }
        frame_ee70c7c73ef0c8e837e87c396c890da8->m_frame.f_lineno = 356;
        tmp_called_value_7 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_8, &PyTuple_GET_ITEM(mod_consts[8], 0), mod_consts[95]);
        Py_DECREF(tmp_called_value_8);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 356;

            goto frame_exception_exit_1;
        }
        tmp_defaults_3 = mod_consts[99];
        Py_INCREF(tmp_defaults_3);


        tmp_args_element_value_4 = MAKE_FUNCTION_networkx$algorithms$community$modularity_max$$$function__3_naive_greedy_modularity_communities(tmp_defaults_3);

        frame_ee70c7c73ef0c8e837e87c396c890da8->m_frame.f_lineno = 356;
        tmp_args_element_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 356;

            goto frame_exception_exit_1;
        }
        frame_ee70c7c73ef0c8e837e87c396c890da8->m_frame.f_lineno = 355;
        tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 355;

            goto frame_exception_exit_1;
        }
        frame_ee70c7c73ef0c8e837e87c396c890da8->m_frame.f_lineno = 354;
        tmp_assign_source_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_networkx$algorithms$community$modularity_max, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_12);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ee70c7c73ef0c8e837e87c396c890da8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ee70c7c73ef0c8e837e87c396c890da8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ee70c7c73ef0c8e837e87c396c890da8, exception_lineno);
    }



    assertFrameObject(frame_ee70c7c73ef0c8e837e87c396c890da8);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("networkx$algorithms$community$modularity_max", false);

    Py_INCREF(module_networkx$algorithms$community$modularity_max);
    return module_networkx$algorithms$community$modularity_max;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_networkx$algorithms$community$modularity_max, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("networkx$algorithms$community$modularity_max", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
