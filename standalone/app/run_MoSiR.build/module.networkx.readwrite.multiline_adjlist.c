/* Generated code for Python module 'networkx$readwrite$multiline_adjlist'
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

/* The "module_networkx$readwrite$multiline_adjlist" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_networkx$readwrite$multiline_adjlist;
PyDictObject *moduledict_networkx$readwrite$multiline_adjlist;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[92];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[92];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("networkx.readwrite.multiline_adjlist"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 92; i++) {
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
void checkModuleConstants_networkx$readwrite$multiline_adjlist(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 92; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_97c3ccadb4506122faf8eca860b9c3fc;
static PyCodeObject *codeobj_0061c97648365cacbaf478db9858af6c;
static PyCodeObject *codeobj_4b10a249262c902bb64e9dfd65c6070b;
static PyCodeObject *codeobj_70f662c7a85b2b4718173c3a289214c5;
static PyCodeObject *codeobj_174cb8c710dbc78e790ff2f1f25fd38c;
static PyCodeObject *codeobj_72cdaeef78023934ac46cb97f3f677de;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[85]); CHECK_OBJECT(module_filename_obj);
    codeobj_97c3ccadb4506122faf8eca860b9c3fc = MAKE_CODE_OBJECT(module_filename_obj, 385, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[58], mod_consts[58], mod_consts[86], NULL, 1, 0, 0);
    codeobj_0061c97648365cacbaf478db9858af6c = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[87], mod_consts[87], NULL, NULL, 0, 0, 0);
    codeobj_4b10a249262c902bb64e9dfd65c6070b = MAKE_CODE_OBJECT(module_filename_obj, 39, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[10], mod_consts[10], mod_consts[88], NULL, 2, 0, 0);
    codeobj_70f662c7a85b2b4718173c3a289214c5 = MAKE_CODE_OBJECT(module_filename_obj, 195, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[54], mod_consts[54], mod_consts[89], NULL, 6, 0, 0);
    codeobj_174cb8c710dbc78e790ff2f1f25fd38c = MAKE_CODE_OBJECT(module_filename_obj, 305, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[84], mod_consts[84], mod_consts[90], NULL, 7, 0, 0);
    codeobj_72cdaeef78023934ac46cb97f3f677de = MAKE_CODE_OBJECT(module_filename_obj, 137, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[77], mod_consts[77], mod_consts[91], NULL, 5, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_networkx$readwrite$multiline_adjlist$$$function__1_generate_multiline_adjlist$$$genobj__1_generate_multiline_adjlist(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_networkx$readwrite$multiline_adjlist$$$function__4_read_multiline_adjlist$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__4_complex_call_helper_pos_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_networkx$readwrite$multiline_adjlist$$$function__1_generate_multiline_adjlist(PyObject *defaults);


static PyObject *MAKE_FUNCTION_networkx$readwrite$multiline_adjlist$$$function__2_write_multiline_adjlist(PyObject *defaults);


static PyObject *MAKE_FUNCTION_networkx$readwrite$multiline_adjlist$$$function__3_parse_multiline_adjlist(PyObject *defaults);


static PyObject *MAKE_FUNCTION_networkx$readwrite$multiline_adjlist$$$function__4_read_multiline_adjlist(PyObject *defaults);


// The module function definitions.
static PyObject *impl_networkx$readwrite$multiline_adjlist$$$function__1_generate_multiline_adjlist(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_G = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_delimiter = Nuitka_Cell_New1(python_pars[1]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[2];

        tmp_closure_1[0] = par_G;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_delimiter;
        Py_INCREF(tmp_closure_1[1]);

        tmp_return_value = MAKE_GENERATOR_networkx$readwrite$multiline_adjlist$$$function__1_generate_multiline_adjlist$$$genobj__1_generate_multiline_adjlist(tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_G);
    Py_DECREF(par_G);
    CHECK_OBJECT(par_delimiter);
    Py_DECREF(par_delimiter);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct networkx$readwrite$multiline_adjlist$$$function__1_generate_multiline_adjlist$$$genobj__1_generate_multiline_adjlist_locals {
    PyObject *var_s;
    PyObject *var_nbrs;
    PyObject *var_nbr_edges;
    PyObject *var_deg;
    PyObject *var_u;
    PyObject *var_d;
    PyObject *var_seen;
    PyObject *outline_0_var_u;
    PyObject *outline_0_var_datadict;
    PyObject *outline_0_var_key;
    PyObject *outline_0_var_data;
    PyObject *outline_1_var_u;
    PyObject *outline_1_var_datadict;
    PyObject *outline_1_var_key;
    PyObject *outline_1_var_data;
    PyObject *outline_2_var_u;
    PyObject *outline_2_var_d;
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
    PyObject *tmp_listcomp$tuple_unpack_1__element_1;
    PyObject *tmp_listcomp$tuple_unpack_1__element_2;
    PyObject *tmp_listcomp$tuple_unpack_1__source_iter;
    PyObject *tmp_listcomp$tuple_unpack_2__element_1;
    PyObject *tmp_listcomp$tuple_unpack_2__element_2;
    PyObject *tmp_listcomp$tuple_unpack_2__source_iter;
    PyObject *tmp_listcomp$tuple_unpack_3__element_1;
    PyObject *tmp_listcomp$tuple_unpack_3__element_2;
    PyObject *tmp_listcomp$tuple_unpack_3__source_iter;
    PyObject *tmp_listcomp$tuple_unpack_4__element_1;
    PyObject *tmp_listcomp$tuple_unpack_4__element_2;
    PyObject *tmp_listcomp$tuple_unpack_4__source_iter;
    PyObject *tmp_listcomp$tuple_unpack_5__element_1;
    PyObject *tmp_listcomp$tuple_unpack_5__element_2;
    PyObject *tmp_listcomp$tuple_unpack_5__source_iter;
    PyObject *tmp_listcomp_1__$0;
    PyObject *tmp_listcomp_1__contraction;
    PyObject *tmp_listcomp_1__contraction_iter_0;
    PyObject *tmp_listcomp_1__iter_value_0;
    PyObject *tmp_listcomp_1__iter_value_1;
    PyObject *tmp_listcomp_2__$0;
    PyObject *tmp_listcomp_2__contraction;
    PyObject *tmp_listcomp_2__contraction_iter_0;
    PyObject *tmp_listcomp_2__iter_value_0;
    PyObject *tmp_listcomp_2__iter_value_1;
    PyObject *tmp_listcomp_3__$0;
    PyObject *tmp_listcomp_3__contraction;
    PyObject *tmp_listcomp_3__iter_value_0;
    PyObject *tmp_tuple_unpack_1__element_1;
    PyObject *tmp_tuple_unpack_1__element_2;
    PyObject *tmp_tuple_unpack_1__source_iter;
    PyObject *tmp_tuple_unpack_2__element_1;
    PyObject *tmp_tuple_unpack_2__element_2;
    PyObject *tmp_tuple_unpack_2__source_iter;
    PyObject *tmp_tuple_unpack_3__element_1;
    PyObject *tmp_tuple_unpack_3__element_2;
    PyObject *tmp_tuple_unpack_3__source_iter;
    PyObject *tmp_tuple_unpack_4__element_1;
    PyObject *tmp_tuple_unpack_4__element_2;
    PyObject *tmp_tuple_unpack_4__source_iter;
    PyObject *tmp_tuple_unpack_5__element_1;
    PyObject *tmp_tuple_unpack_5__element_2;
    PyObject *tmp_tuple_unpack_5__source_iter;
    PyObject *tmp_tuple_unpack_6__element_1;
    PyObject *tmp_tuple_unpack_6__element_2;
    PyObject *tmp_tuple_unpack_6__source_iter;
    PyObject *tmp_tuple_unpack_7__element_1;
    PyObject *tmp_tuple_unpack_7__element_2;
    PyObject *tmp_tuple_unpack_7__source_iter;
    PyObject *tmp_tuple_unpack_8__element_1;
    PyObject *tmp_tuple_unpack_8__element_2;
    PyObject *tmp_tuple_unpack_8__source_iter;
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
    bool tmp_result;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    int exception_keeper_lineno_8;
    char yield_tmps[1024];
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
    int tmp_res;
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
};
#endif

static PyObject *networkx$readwrite$multiline_adjlist$$$function__1_generate_multiline_adjlist$$$genobj__1_generate_multiline_adjlist_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct networkx$readwrite$multiline_adjlist$$$function__1_generate_multiline_adjlist$$$genobj__1_generate_multiline_adjlist_locals *generator_heap = (struct networkx$readwrite$multiline_adjlist$$$function__1_generate_multiline_adjlist$$$genobj__1_generate_multiline_adjlist_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 12: goto yield_return_12;
    case 11: goto yield_return_11;
    case 10: goto yield_return_10;
    case 9: goto yield_return_9;
    case 8: goto yield_return_8;
    case 7: goto yield_return_7;
    case 6: goto yield_return_6;
    case 5: goto yield_return_5;
    case 4: goto yield_return_4;
    case 3: goto yield_return_3;
    case 2: goto yield_return_2;
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_s = NULL;
    generator_heap->var_nbrs = NULL;
    generator_heap->var_nbr_edges = NULL;
    generator_heap->var_deg = NULL;
    generator_heap->var_u = NULL;
    generator_heap->var_d = NULL;
    generator_heap->var_seen = NULL;
    generator_heap->outline_0_var_u = NULL;
    generator_heap->outline_0_var_datadict = NULL;
    generator_heap->outline_0_var_key = NULL;
    generator_heap->outline_0_var_data = NULL;
    generator_heap->outline_1_var_u = NULL;
    generator_heap->outline_1_var_datadict = NULL;
    generator_heap->outline_1_var_key = NULL;
    generator_heap->outline_1_var_data = NULL;
    generator_heap->outline_2_var_u = NULL;
    generator_heap->outline_2_var_d = NULL;
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
    generator_heap->tmp_listcomp$tuple_unpack_1__element_1 = NULL;
    generator_heap->tmp_listcomp$tuple_unpack_1__element_2 = NULL;
    generator_heap->tmp_listcomp$tuple_unpack_1__source_iter = NULL;
    generator_heap->tmp_listcomp$tuple_unpack_2__element_1 = NULL;
    generator_heap->tmp_listcomp$tuple_unpack_2__element_2 = NULL;
    generator_heap->tmp_listcomp$tuple_unpack_2__source_iter = NULL;
    generator_heap->tmp_listcomp$tuple_unpack_3__element_1 = NULL;
    generator_heap->tmp_listcomp$tuple_unpack_3__element_2 = NULL;
    generator_heap->tmp_listcomp$tuple_unpack_3__source_iter = NULL;
    generator_heap->tmp_listcomp$tuple_unpack_4__element_1 = NULL;
    generator_heap->tmp_listcomp$tuple_unpack_4__element_2 = NULL;
    generator_heap->tmp_listcomp$tuple_unpack_4__source_iter = NULL;
    generator_heap->tmp_listcomp$tuple_unpack_5__element_1 = NULL;
    generator_heap->tmp_listcomp$tuple_unpack_5__element_2 = NULL;
    generator_heap->tmp_listcomp$tuple_unpack_5__source_iter = NULL;
    generator_heap->tmp_listcomp_1__$0 = NULL;
    generator_heap->tmp_listcomp_1__contraction = NULL;
    generator_heap->tmp_listcomp_1__contraction_iter_0 = NULL;
    generator_heap->tmp_listcomp_1__iter_value_0 = NULL;
    generator_heap->tmp_listcomp_1__iter_value_1 = NULL;
    generator_heap->tmp_listcomp_2__$0 = NULL;
    generator_heap->tmp_listcomp_2__contraction = NULL;
    generator_heap->tmp_listcomp_2__contraction_iter_0 = NULL;
    generator_heap->tmp_listcomp_2__iter_value_0 = NULL;
    generator_heap->tmp_listcomp_2__iter_value_1 = NULL;
    generator_heap->tmp_listcomp_3__$0 = NULL;
    generator_heap->tmp_listcomp_3__contraction = NULL;
    generator_heap->tmp_listcomp_3__iter_value_0 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    generator_heap->tmp_tuple_unpack_2__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_2__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_2__source_iter = NULL;
    generator_heap->tmp_tuple_unpack_3__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_3__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_3__source_iter = NULL;
    generator_heap->tmp_tuple_unpack_4__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_4__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_4__source_iter = NULL;
    generator_heap->tmp_tuple_unpack_5__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_5__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_5__source_iter = NULL;
    generator_heap->tmp_tuple_unpack_6__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_6__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_6__source_iter = NULL;
    generator_heap->tmp_tuple_unpack_7__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_7__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_7__source_iter = NULL;
    generator_heap->tmp_tuple_unpack_8__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_8__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_8__source_iter = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(tstate, codeobj_4b10a249262c902bb64e9dfd65c6070b, module_networkx$readwrite$multiline_adjlist, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[1]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 80;
            generator_heap->type_description_1 = "ccooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        generator->m_frame->m_frame.f_lineno = 80;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[2]);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 80;
            generator_heap->type_description_1 = "ccooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_call_result_1);

            generator_heap->exception_lineno = 80;
            generator_heap->type_description_1 = "ccooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        int tmp_truth_name_2;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[1]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 81;
            generator_heap->type_description_1 = "ccooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = Nuitka_Cell_GET(generator->m_closure[0]);
        generator->m_frame->m_frame.f_lineno = 81;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_2, mod_consts[3]);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 81;
            generator_heap->type_description_1 = "ccooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_2);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_call_result_2);

            generator_heap->exception_lineno = 81;
            generator_heap->type_description_1 = "ccooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_2);
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
        PyObject *tmp_called_instance_3;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[1]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 82;
            generator_heap->type_description_1 = "ccooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = Nuitka_Cell_GET(generator->m_closure[0]);
        generator->m_frame->m_frame.f_lineno = 82;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[4]);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 82;
            generator_heap->type_description_1 = "ccooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 82;
            generator_heap->type_description_1 = "ccooooooo";
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
                generator_heap->type_description_1 = "ccooooooo";
                generator_heap->exception_lineno = 82;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
            generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = generator_heap->tmp_for_loop_1__iter_value;
        tmp_assign_source_3 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 82;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__source_iter;
            generator_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 2);
        if (tmp_assign_source_4 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooo";
            generator_heap->exception_lineno = 82;
            goto try_except_handler_4;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__element_1;
            generator_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 2);
        if (tmp_assign_source_5 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooo";
            generator_heap->exception_lineno = 82;
            goto try_except_handler_4;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__element_2;
            generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
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

                    generator_heap->type_description_1 = "ccooooooo";
                    generator_heap->exception_lineno = 82;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[5];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "ccooooooo";
            generator_heap->exception_lineno = 82;
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
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_1);
        tmp_assign_source_6 = generator_heap->tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = generator_heap->var_s;
            generator_heap->var_s = tmp_assign_source_6;
            Py_INCREF(generator_heap->var_s);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_2);
        tmp_assign_source_7 = generator_heap->tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = generator_heap->var_nbrs;
            generator_heap->var_nbrs = tmp_assign_source_7;
            Py_INCREF(generator_heap->var_nbrs);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_8;
        // Tried code:
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_iter_arg_3;
            PyObject *tmp_called_value_1;
            PyObject *tmp_expression_value_1;
            CHECK_OBJECT(generator_heap->var_nbrs);
            tmp_expression_value_1 = generator_heap->var_nbrs;
            tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[6]);
            if (tmp_called_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 85;
                generator_heap->type_description_1 = "ccooooooo";
                goto try_except_handler_5;
            }
            generator->m_frame->m_frame.f_lineno = 85;
            tmp_iter_arg_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
            Py_DECREF(tmp_called_value_1);
            if (tmp_iter_arg_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 85;
                generator_heap->type_description_1 = "ccooooooo";
                goto try_except_handler_5;
            }
            tmp_assign_source_9 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
            Py_DECREF(tmp_iter_arg_3);
            if (tmp_assign_source_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 83;
                generator_heap->type_description_1 = "ccooooooo";
                goto try_except_handler_5;
            }
            {
                PyObject *old = generator_heap->tmp_listcomp_1__$0;
                generator_heap->tmp_listcomp_1__$0 = tmp_assign_source_9;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_10;
            tmp_assign_source_10 = MAKE_LIST_EMPTY(0);
            {
                PyObject *old = generator_heap->tmp_listcomp_1__contraction;
                generator_heap->tmp_listcomp_1__contraction = tmp_assign_source_10;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_11;
            CHECK_OBJECT(generator_heap->tmp_listcomp_1__$0);
            tmp_next_source_2 = generator_heap->tmp_listcomp_1__$0;
            tmp_assign_source_11 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_11 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                    generator_heap->type_description_1 = "ccooooooo";
                    generator_heap->exception_lineno = 83;
                    goto try_except_handler_6;
                }
            }

            {
                PyObject *old = generator_heap->tmp_listcomp_1__iter_value_1;
                generator_heap->tmp_listcomp_1__iter_value_1 = tmp_assign_source_11;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_iter_arg_4;
            CHECK_OBJECT(generator_heap->tmp_listcomp_1__iter_value_1);
            tmp_iter_arg_4 = generator_heap->tmp_listcomp_1__iter_value_1;
            tmp_assign_source_12 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
            if (tmp_assign_source_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 83;
                generator_heap->type_description_1 = "ccooooooo";
                goto try_except_handler_7;
            }
            {
                PyObject *old = generator_heap->tmp_listcomp$tuple_unpack_2__source_iter;
                generator_heap->tmp_listcomp$tuple_unpack_2__source_iter = tmp_assign_source_12;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_2__source_iter);
            tmp_unpack_3 = generator_heap->tmp_listcomp$tuple_unpack_2__source_iter;
            tmp_assign_source_13 = UNPACK_NEXT(tstate, tmp_unpack_3, 0, 2);
            if (tmp_assign_source_13 == NULL) {
                if (!HAS_ERROR_OCCURRED(tstate)) {
                    generator_heap->exception_type = PyExc_StopIteration;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = NULL;
                    generator_heap->exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                }


                generator_heap->type_description_1 = "ccooooooo";
                generator_heap->exception_lineno = 83;
                goto try_except_handler_8;
            }
            {
                PyObject *old = generator_heap->tmp_listcomp$tuple_unpack_2__element_1;
                generator_heap->tmp_listcomp$tuple_unpack_2__element_1 = tmp_assign_source_13;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_unpack_4;
            CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_2__source_iter);
            tmp_unpack_4 = generator_heap->tmp_listcomp$tuple_unpack_2__source_iter;
            tmp_assign_source_14 = UNPACK_NEXT(tstate, tmp_unpack_4, 1, 2);
            if (tmp_assign_source_14 == NULL) {
                if (!HAS_ERROR_OCCURRED(tstate)) {
                    generator_heap->exception_type = PyExc_StopIteration;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = NULL;
                    generator_heap->exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                }


                generator_heap->type_description_1 = "ccooooooo";
                generator_heap->exception_lineno = 83;
                goto try_except_handler_8;
            }
            {
                PyObject *old = generator_heap->tmp_listcomp$tuple_unpack_2__element_2;
                generator_heap->tmp_listcomp$tuple_unpack_2__element_2 = tmp_assign_source_14;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_2;
            CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_2__source_iter);
            tmp_iterator_name_2 = generator_heap->tmp_listcomp$tuple_unpack_2__source_iter;
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

                        generator_heap->type_description_1 = "ccooooooo";
                        generator_heap->exception_lineno = 83;
                        goto try_except_handler_8;
                    }
                }
            } else {
                Py_DECREF(generator_heap->tmp_iterator_attempt);

                generator_heap->exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                generator_heap->exception_value = mod_consts[5];
                Py_INCREF(generator_heap->exception_value);
                generator_heap->exception_tb = NULL;

                generator_heap->type_description_1 = "ccooooooo";
                generator_heap->exception_lineno = 83;
                goto try_except_handler_8;
            }
        }
        goto try_end_3;
        // Exception handler code:
        try_except_handler_8:;
        generator_heap->exception_keeper_type_3 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_3 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_3 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_2__source_iter);
        Py_DECREF(generator_heap->tmp_listcomp$tuple_unpack_2__source_iter);
        generator_heap->tmp_listcomp$tuple_unpack_2__source_iter = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_3;
        generator_heap->exception_value = generator_heap->exception_keeper_value_3;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_3;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

        goto try_except_handler_7;
        // End of try:
        try_end_3:;
        goto try_end_4;
        // Exception handler code:
        try_except_handler_7:;
        generator_heap->exception_keeper_type_4 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_4 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_4 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        Py_XDECREF(generator_heap->tmp_listcomp$tuple_unpack_2__element_1);
        generator_heap->tmp_listcomp$tuple_unpack_2__element_1 = NULL;
        Py_XDECREF(generator_heap->tmp_listcomp$tuple_unpack_2__element_2);
        generator_heap->tmp_listcomp$tuple_unpack_2__element_2 = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_4;
        generator_heap->exception_value = generator_heap->exception_keeper_value_4;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_4;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

        goto try_except_handler_6;
        // End of try:
        try_end_4:;
        CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_2__source_iter);
        Py_DECREF(generator_heap->tmp_listcomp$tuple_unpack_2__source_iter);
        generator_heap->tmp_listcomp$tuple_unpack_2__source_iter = NULL;
        {
            PyObject *tmp_assign_source_15;
            CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_2__element_1);
            tmp_assign_source_15 = generator_heap->tmp_listcomp$tuple_unpack_2__element_1;
            {
                PyObject *old = generator_heap->outline_0_var_u;
                generator_heap->outline_0_var_u = tmp_assign_source_15;
                Py_INCREF(generator_heap->outline_0_var_u);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(generator_heap->tmp_listcomp$tuple_unpack_2__element_1);
        generator_heap->tmp_listcomp$tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_16;
            CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_2__element_2);
            tmp_assign_source_16 = generator_heap->tmp_listcomp$tuple_unpack_2__element_2;
            {
                PyObject *old = generator_heap->outline_0_var_datadict;
                generator_heap->outline_0_var_datadict = tmp_assign_source_16;
                Py_INCREF(generator_heap->outline_0_var_datadict);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(generator_heap->tmp_listcomp$tuple_unpack_2__element_2);
        generator_heap->tmp_listcomp$tuple_unpack_2__element_2 = NULL;

        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_iter_arg_5;
            PyObject *tmp_called_value_2;
            PyObject *tmp_expression_value_2;
            CHECK_OBJECT(generator_heap->outline_0_var_datadict);
            tmp_expression_value_2 = generator_heap->outline_0_var_datadict;
            tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[6]);
            if (tmp_called_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 86;
                generator_heap->type_description_1 = "ccooooooo";
                goto try_except_handler_6;
            }
            generator->m_frame->m_frame.f_lineno = 86;
            tmp_iter_arg_5 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
            Py_DECREF(tmp_called_value_2);
            if (tmp_iter_arg_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 86;
                generator_heap->type_description_1 = "ccooooooo";
                goto try_except_handler_6;
            }
            tmp_assign_source_17 = MAKE_ITERATOR(tstate, tmp_iter_arg_5);
            Py_DECREF(tmp_iter_arg_5);
            if (tmp_assign_source_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 83;
                generator_heap->type_description_1 = "ccooooooo";
                goto try_except_handler_6;
            }
            {
                PyObject *old = generator_heap->tmp_listcomp_1__contraction_iter_0;
                generator_heap->tmp_listcomp_1__contraction_iter_0 = tmp_assign_source_17;
                Py_XDECREF(old);
            }

        }
        loop_start_3:;
        {
            PyObject *tmp_next_source_3;
            PyObject *tmp_assign_source_18;
            CHECK_OBJECT(generator_heap->tmp_listcomp_1__contraction_iter_0);
            tmp_next_source_3 = generator_heap->tmp_listcomp_1__contraction_iter_0;
            tmp_assign_source_18 = ITERATOR_NEXT(tmp_next_source_3);
            if (tmp_assign_source_18 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_3;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                    generator_heap->type_description_1 = "ccooooooo";
                    generator_heap->exception_lineno = 83;
                    goto try_except_handler_6;
                }
            }

            {
                PyObject *old = generator_heap->tmp_listcomp_1__iter_value_0;
                generator_heap->tmp_listcomp_1__iter_value_0 = tmp_assign_source_18;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_iter_arg_6;
            CHECK_OBJECT(generator_heap->tmp_listcomp_1__iter_value_0);
            tmp_iter_arg_6 = generator_heap->tmp_listcomp_1__iter_value_0;
            tmp_assign_source_19 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_6);
            if (tmp_assign_source_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 83;
                generator_heap->type_description_1 = "ccooooooo";
                goto try_except_handler_9;
            }
            {
                PyObject *old = generator_heap->tmp_listcomp$tuple_unpack_1__source_iter;
                generator_heap->tmp_listcomp$tuple_unpack_1__source_iter = tmp_assign_source_19;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_20;
            PyObject *tmp_unpack_5;
            CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_5 = generator_heap->tmp_listcomp$tuple_unpack_1__source_iter;
            tmp_assign_source_20 = UNPACK_NEXT(tstate, tmp_unpack_5, 0, 2);
            if (tmp_assign_source_20 == NULL) {
                if (!HAS_ERROR_OCCURRED(tstate)) {
                    generator_heap->exception_type = PyExc_StopIteration;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = NULL;
                    generator_heap->exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                }


                generator_heap->type_description_1 = "ccooooooo";
                generator_heap->exception_lineno = 83;
                goto try_except_handler_10;
            }
            {
                PyObject *old = generator_heap->tmp_listcomp$tuple_unpack_1__element_1;
                generator_heap->tmp_listcomp$tuple_unpack_1__element_1 = tmp_assign_source_20;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_21;
            PyObject *tmp_unpack_6;
            CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_6 = generator_heap->tmp_listcomp$tuple_unpack_1__source_iter;
            tmp_assign_source_21 = UNPACK_NEXT(tstate, tmp_unpack_6, 1, 2);
            if (tmp_assign_source_21 == NULL) {
                if (!HAS_ERROR_OCCURRED(tstate)) {
                    generator_heap->exception_type = PyExc_StopIteration;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = NULL;
                    generator_heap->exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                }


                generator_heap->type_description_1 = "ccooooooo";
                generator_heap->exception_lineno = 83;
                goto try_except_handler_10;
            }
            {
                PyObject *old = generator_heap->tmp_listcomp$tuple_unpack_1__element_2;
                generator_heap->tmp_listcomp$tuple_unpack_1__element_2 = tmp_assign_source_21;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_3;
            CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_iterator_name_3 = generator_heap->tmp_listcomp$tuple_unpack_1__source_iter;
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

                        generator_heap->type_description_1 = "ccooooooo";
                        generator_heap->exception_lineno = 83;
                        goto try_except_handler_10;
                    }
                }
            } else {
                Py_DECREF(generator_heap->tmp_iterator_attempt);

                generator_heap->exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                generator_heap->exception_value = mod_consts[5];
                Py_INCREF(generator_heap->exception_value);
                generator_heap->exception_tb = NULL;

                generator_heap->type_description_1 = "ccooooooo";
                generator_heap->exception_lineno = 83;
                goto try_except_handler_10;
            }
        }
        goto try_end_5;
        // Exception handler code:
        try_except_handler_10:;
        generator_heap->exception_keeper_type_5 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_5 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_5 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_5 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_1__source_iter);
        Py_DECREF(generator_heap->tmp_listcomp$tuple_unpack_1__source_iter);
        generator_heap->tmp_listcomp$tuple_unpack_1__source_iter = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_5;
        generator_heap->exception_value = generator_heap->exception_keeper_value_5;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_5;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_5;

        goto try_except_handler_9;
        // End of try:
        try_end_5:;
        goto try_end_6;
        // Exception handler code:
        try_except_handler_9:;
        generator_heap->exception_keeper_type_6 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_6 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_6 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_6 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        Py_XDECREF(generator_heap->tmp_listcomp$tuple_unpack_1__element_1);
        generator_heap->tmp_listcomp$tuple_unpack_1__element_1 = NULL;
        Py_XDECREF(generator_heap->tmp_listcomp$tuple_unpack_1__element_2);
        generator_heap->tmp_listcomp$tuple_unpack_1__element_2 = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_6;
        generator_heap->exception_value = generator_heap->exception_keeper_value_6;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_6;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_6;

        goto try_except_handler_6;
        // End of try:
        try_end_6:;
        CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_1__source_iter);
        Py_DECREF(generator_heap->tmp_listcomp$tuple_unpack_1__source_iter);
        generator_heap->tmp_listcomp$tuple_unpack_1__source_iter = NULL;
        {
            PyObject *tmp_assign_source_22;
            CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_1__element_1);
            tmp_assign_source_22 = generator_heap->tmp_listcomp$tuple_unpack_1__element_1;
            {
                PyObject *old = generator_heap->outline_0_var_key;
                generator_heap->outline_0_var_key = tmp_assign_source_22;
                Py_INCREF(generator_heap->outline_0_var_key);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(generator_heap->tmp_listcomp$tuple_unpack_1__element_1);
        generator_heap->tmp_listcomp$tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_23;
            CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_1__element_2);
            tmp_assign_source_23 = generator_heap->tmp_listcomp$tuple_unpack_1__element_2;
            {
                PyObject *old = generator_heap->outline_0_var_data;
                generator_heap->outline_0_var_data = tmp_assign_source_23;
                Py_INCREF(generator_heap->outline_0_var_data);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(generator_heap->tmp_listcomp$tuple_unpack_1__element_2);
        generator_heap->tmp_listcomp$tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_tuple_element_1;
            CHECK_OBJECT(generator_heap->tmp_listcomp_1__contraction);
            tmp_append_list_1 = generator_heap->tmp_listcomp_1__contraction;
            CHECK_OBJECT(generator_heap->outline_0_var_u);
            tmp_tuple_element_1 = generator_heap->outline_0_var_u;
            tmp_append_value_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_append_value_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(generator_heap->outline_0_var_data);
            tmp_tuple_element_1 = generator_heap->outline_0_var_data;
            PyTuple_SET_ITEM0(tmp_append_value_1, 1, tmp_tuple_element_1);
            generator_heap->tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (generator_heap->tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 83;
                generator_heap->type_description_1 = "ccooooooo";
                goto try_except_handler_6;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 83;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_6;
        }
        goto loop_start_3;
        loop_end_3:;
        CHECK_OBJECT(generator_heap->tmp_listcomp_1__contraction_iter_0);
        Py_DECREF(generator_heap->tmp_listcomp_1__contraction_iter_0);
        generator_heap->tmp_listcomp_1__contraction_iter_0 = NULL;
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 83;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_6;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(generator_heap->tmp_listcomp_1__contraction);
        tmp_assign_source_8 = generator_heap->tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_8);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT(generator_heap->tmp_listcomp_1__$0);
        Py_DECREF(generator_heap->tmp_listcomp_1__$0);
        generator_heap->tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(generator_heap->tmp_listcomp_1__contraction);
        Py_DECREF(generator_heap->tmp_listcomp_1__contraction);
        generator_heap->tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(generator_heap->tmp_listcomp_1__iter_value_0);
        generator_heap->tmp_listcomp_1__iter_value_0 = NULL;
        Py_XDECREF(generator_heap->tmp_listcomp_1__contraction_iter_0);
        generator_heap->tmp_listcomp_1__contraction_iter_0 = NULL;
        Py_XDECREF(generator_heap->tmp_listcomp_1__iter_value_1);
        generator_heap->tmp_listcomp_1__iter_value_1 = NULL;
        goto try_return_handler_5;
        // Exception handler code:
        try_except_handler_6:;
        generator_heap->exception_keeper_type_7 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_7 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_7 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_7 = generator_heap->exception_lineno;
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
        Py_XDECREF(generator_heap->tmp_listcomp_1__contraction_iter_0);
        generator_heap->tmp_listcomp_1__contraction_iter_0 = NULL;
        Py_XDECREF(generator_heap->tmp_listcomp_1__iter_value_1);
        generator_heap->tmp_listcomp_1__iter_value_1 = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_7;
        generator_heap->exception_value = generator_heap->exception_keeper_value_7;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_7;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_7;

        goto try_except_handler_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_XDECREF(generator_heap->outline_0_var_u);
        generator_heap->outline_0_var_u = NULL;
        Py_XDECREF(generator_heap->outline_0_var_datadict);
        generator_heap->outline_0_var_datadict = NULL;
        Py_XDECREF(generator_heap->outline_0_var_key);
        generator_heap->outline_0_var_key = NULL;
        Py_XDECREF(generator_heap->outline_0_var_data);
        generator_heap->outline_0_var_data = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_5:;
        generator_heap->exception_keeper_type_8 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_8 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_8 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_8 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        Py_XDECREF(generator_heap->outline_0_var_u);
        generator_heap->outline_0_var_u = NULL;
        Py_XDECREF(generator_heap->outline_0_var_datadict);
        generator_heap->outline_0_var_datadict = NULL;
        Py_XDECREF(generator_heap->outline_0_var_key);
        generator_heap->outline_0_var_key = NULL;
        Py_XDECREF(generator_heap->outline_0_var_data);
        generator_heap->outline_0_var_data = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_8;
        generator_heap->exception_value = generator_heap->exception_keeper_value_8;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_8;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_8;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        generator_heap->exception_lineno = 83;
        goto try_except_handler_2;
        outline_result_1:;
        {
            PyObject *old = generator_heap->var_nbr_edges;
            generator_heap->var_nbr_edges = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(generator_heap->var_nbr_edges);
        tmp_len_arg_1 = generator_heap->var_nbr_edges;
        tmp_assign_source_24 = BUILTIN_LEN(tstate, tmp_len_arg_1);
        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 88;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = generator_heap->var_deg;
            generator_heap->var_deg = tmp_assign_source_24;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_3;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_unicode_arg_2;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_s);
        tmp_unicode_arg_1 = generator_heap->var_s;
        tmp_add_expr_left_2 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        if (tmp_add_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 89;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_2;
        }
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {
            Py_DECREF(tmp_add_expr_left_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[7]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 89;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_2;
        }

        tmp_add_expr_right_2 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 89;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(generator_heap->var_deg);
        tmp_unicode_arg_2 = generator_heap->var_deg;
        tmp_add_expr_right_1 = BUILTIN_UNICODE1(tmp_unicode_arg_2);
        if (tmp_add_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            generator_heap->exception_lineno = 89;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 89;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_add_expr_left_1, sizeof(PyObject *), &tmp_add_expr_right_1, sizeof(PyObject *), &tmp_add_expr_left_2, sizeof(PyObject *), &tmp_add_expr_right_2, sizeof(PyObject *), &tmp_unicode_arg_1, sizeof(PyObject *), &tmp_unicode_arg_2, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_3;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_add_expr_left_1, sizeof(PyObject *), &tmp_add_expr_right_1, sizeof(PyObject *), &tmp_add_expr_left_2, sizeof(PyObject *), &tmp_add_expr_right_2, sizeof(PyObject *), &tmp_unicode_arg_1, sizeof(PyObject *), &tmp_unicode_arg_2, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 89;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
        Py_DECREF(tmp_yield_result_1);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_iter_arg_7;
        CHECK_OBJECT(generator_heap->var_nbr_edges);
        tmp_iter_arg_7 = generator_heap->var_nbr_edges;
        tmp_assign_source_25 = MAKE_ITERATOR(tstate, tmp_iter_arg_7);
        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 90;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = generator_heap->tmp_for_loop_2__for_iterator;
            generator_heap->tmp_for_loop_2__for_iterator = tmp_assign_source_25;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_4:;
    {
        PyObject *tmp_next_source_4;
        PyObject *tmp_assign_source_26;
        CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
        tmp_next_source_4 = generator_heap->tmp_for_loop_2__for_iterator;
        tmp_assign_source_26 = ITERATOR_NEXT(tmp_next_source_4);
        if (tmp_assign_source_26 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_4;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "ccooooooo";
                generator_heap->exception_lineno = 90;
                goto try_except_handler_11;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_2__iter_value;
            generator_heap->tmp_for_loop_2__iter_value = tmp_assign_source_26;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_iter_arg_8;
        CHECK_OBJECT(generator_heap->tmp_for_loop_2__iter_value);
        tmp_iter_arg_8 = generator_heap->tmp_for_loop_2__iter_value;
        tmp_assign_source_27 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_8);
        if (tmp_assign_source_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 90;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_12;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_2__source_iter;
            generator_heap->tmp_tuple_unpack_2__source_iter = tmp_assign_source_27;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
        tmp_unpack_7 = generator_heap->tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_28 = UNPACK_NEXT(tstate, tmp_unpack_7, 0, 2);
        if (tmp_assign_source_28 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooo";
            generator_heap->exception_lineno = 90;
            goto try_except_handler_13;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_2__element_1;
            generator_heap->tmp_tuple_unpack_2__element_1 = tmp_assign_source_28;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
        tmp_unpack_8 = generator_heap->tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_29 = UNPACK_NEXT(tstate, tmp_unpack_8, 1, 2);
        if (tmp_assign_source_29 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooo";
            generator_heap->exception_lineno = 90;
            goto try_except_handler_13;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_2__element_2;
            generator_heap->tmp_tuple_unpack_2__element_2 = tmp_assign_source_29;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_4;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_4 = generator_heap->tmp_tuple_unpack_2__source_iter;
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

                    generator_heap->type_description_1 = "ccooooooo";
                    generator_heap->exception_lineno = 90;
                    goto try_except_handler_13;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[5];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "ccooooooo";
            generator_heap->exception_lineno = 90;
            goto try_except_handler_13;
        }
    }
    goto try_end_7;
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

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_2__source_iter);
    generator_heap->tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_9;
    generator_heap->exception_value = generator_heap->exception_keeper_value_9;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_9;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_9;

    goto try_except_handler_12;
    // End of try:
    try_end_7:;
    goto try_end_8;
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

    Py_XDECREF(generator_heap->tmp_tuple_unpack_2__element_1);
    generator_heap->tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_2__element_2);
    generator_heap->tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_10;
    generator_heap->exception_value = generator_heap->exception_keeper_value_10;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_10;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_10;

    goto try_except_handler_11;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_2__source_iter);
    generator_heap->tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_30;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__element_1);
        tmp_assign_source_30 = generator_heap->tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = generator_heap->var_u;
            generator_heap->var_u = tmp_assign_source_30;
            Py_INCREF(generator_heap->var_u);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_2__element_1);
    generator_heap->tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_31;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_2__element_2);
        tmp_assign_source_31 = generator_heap->tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = generator_heap->var_d;
            generator_heap->var_d = tmp_assign_source_31;
            Py_INCREF(generator_heap->var_d);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_2__element_2);
    generator_heap->tmp_tuple_unpack_2__element_2 = NULL;

    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(generator_heap->var_d);
        tmp_cmp_expr_left_1 = generator_heap->var_d;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_expression_value_4;
        PyObject *tmp_unicode_arg_3;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_2;
        CHECK_OBJECT(generator_heap->var_u);
        tmp_unicode_arg_3 = generator_heap->var_u;
        tmp_expression_value_4 = BUILTIN_UNICODE1(tmp_unicode_arg_3);
        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 92;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_11;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_unicode_arg_3, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 2;
        return tmp_expression_value_4;
        yield_return_2:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_unicode_arg_3, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 92;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_11;
        }
        tmp_yield_result_2 = yield_return_value;
        Py_DECREF(tmp_yield_result_2);
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_expression_value_5;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        PyObject *tmp_unicode_arg_4;
        PyObject *tmp_unicode_arg_5;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_3;
        CHECK_OBJECT(generator_heap->var_u);
        tmp_unicode_arg_4 = generator_heap->var_u;
        tmp_add_expr_left_4 = BUILTIN_UNICODE1(tmp_unicode_arg_4);
        if (tmp_add_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 94;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_11;
        }
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {
            Py_DECREF(tmp_add_expr_left_4);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[7]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 94;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_11;
        }

        tmp_add_expr_right_4 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_add_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
        Py_DECREF(tmp_add_expr_left_4);
        if (tmp_add_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 94;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_11;
        }
        CHECK_OBJECT(generator_heap->var_d);
        tmp_unicode_arg_5 = generator_heap->var_d;
        tmp_add_expr_right_3 = BUILTIN_UNICODE1(tmp_unicode_arg_5);
        if (tmp_add_expr_right_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_add_expr_left_3);

            generator_heap->exception_lineno = 94;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_11;
        }
        tmp_expression_value_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
        Py_DECREF(tmp_add_expr_left_3);
        Py_DECREF(tmp_add_expr_right_3);
        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 94;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_11;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_add_expr_left_3, sizeof(PyObject *), &tmp_add_expr_right_3, sizeof(PyObject *), &tmp_add_expr_left_4, sizeof(PyObject *), &tmp_add_expr_right_4, sizeof(PyObject *), &tmp_unicode_arg_4, sizeof(PyObject *), &tmp_unicode_arg_5, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 3;
        return tmp_expression_value_5;
        yield_return_3:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_add_expr_left_3, sizeof(PyObject *), &tmp_add_expr_right_3, sizeof(PyObject *), &tmp_add_expr_left_4, sizeof(PyObject *), &tmp_add_expr_right_4, sizeof(PyObject *), &tmp_unicode_arg_4, sizeof(PyObject *), &tmp_unicode_arg_5, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 94;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_11;
        }
        tmp_yield_result_3 = yield_return_value;
        Py_DECREF(tmp_yield_result_3);
    }
    branch_end_3:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 90;
        generator_heap->type_description_1 = "ccooooooo";
        goto try_except_handler_11;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_9;
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

    Py_XDECREF(generator_heap->tmp_for_loop_2__iter_value);
    generator_heap->tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_2__for_iterator);
    generator_heap->tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_11;
    generator_heap->exception_value = generator_heap->exception_keeper_value_11;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_11;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_11;

    goto try_except_handler_2;
    // End of try:
    try_end_9:;
    Py_XDECREF(generator_heap->tmp_for_loop_2__iter_value);
    generator_heap->tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_2__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_2__for_iterator);
    generator_heap->tmp_for_loop_2__for_iterator = NULL;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 82;
        generator_heap->type_description_1 = "ccooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_10;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_12 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_12 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_12 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_12 = generator_heap->exception_lineno;
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
    generator_heap->exception_type = generator_heap->exception_keeper_type_12;
    generator_heap->exception_value = generator_heap->exception_keeper_value_12;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_12;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_iter_arg_9;
        PyObject *tmp_called_instance_4;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[1]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 96;
            generator_heap->type_description_1 = "ccooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = Nuitka_Cell_GET(generator->m_closure[0]);
        generator->m_frame->m_frame.f_lineno = 96;
        tmp_iter_arg_9 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_4, mod_consts[4]);
        if (tmp_iter_arg_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 96;
            generator_heap->type_description_1 = "ccooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_32 = MAKE_ITERATOR(tstate, tmp_iter_arg_9);
        Py_DECREF(tmp_iter_arg_9);
        if (tmp_assign_source_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 96;
            generator_heap->type_description_1 = "ccooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->tmp_for_loop_3__for_iterator == NULL);
        generator_heap->tmp_for_loop_3__for_iterator = tmp_assign_source_32;
    }
    // Tried code:
    loop_start_5:;
    {
        PyObject *tmp_next_source_5;
        PyObject *tmp_assign_source_33;
        CHECK_OBJECT(generator_heap->tmp_for_loop_3__for_iterator);
        tmp_next_source_5 = generator_heap->tmp_for_loop_3__for_iterator;
        tmp_assign_source_33 = ITERATOR_NEXT(tmp_next_source_5);
        if (tmp_assign_source_33 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_5;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "ccooooooo";
                generator_heap->exception_lineno = 96;
                goto try_except_handler_14;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_3__iter_value;
            generator_heap->tmp_for_loop_3__iter_value = tmp_assign_source_33;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_iter_arg_10;
        CHECK_OBJECT(generator_heap->tmp_for_loop_3__iter_value);
        tmp_iter_arg_10 = generator_heap->tmp_for_loop_3__iter_value;
        tmp_assign_source_34 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_10);
        if (tmp_assign_source_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 96;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_15;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_3__source_iter;
            generator_heap->tmp_tuple_unpack_3__source_iter = tmp_assign_source_34;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_unpack_9;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_3__source_iter);
        tmp_unpack_9 = generator_heap->tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_35 = UNPACK_NEXT(tstate, tmp_unpack_9, 0, 2);
        if (tmp_assign_source_35 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooo";
            generator_heap->exception_lineno = 96;
            goto try_except_handler_16;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_3__element_1;
            generator_heap->tmp_tuple_unpack_3__element_1 = tmp_assign_source_35;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_unpack_10;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_3__source_iter);
        tmp_unpack_10 = generator_heap->tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_36 = UNPACK_NEXT(tstate, tmp_unpack_10, 1, 2);
        if (tmp_assign_source_36 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooo";
            generator_heap->exception_lineno = 96;
            goto try_except_handler_16;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_3__element_2;
            generator_heap->tmp_tuple_unpack_3__element_2 = tmp_assign_source_36;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_5;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_3__source_iter);
        tmp_iterator_name_5 = generator_heap->tmp_tuple_unpack_3__source_iter;
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

                    generator_heap->type_description_1 = "ccooooooo";
                    generator_heap->exception_lineno = 96;
                    goto try_except_handler_16;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[5];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "ccooooooo";
            generator_heap->exception_lineno = 96;
            goto try_except_handler_16;
        }
    }
    goto try_end_11;
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

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_3__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_3__source_iter);
    generator_heap->tmp_tuple_unpack_3__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_13;
    generator_heap->exception_value = generator_heap->exception_keeper_value_13;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_13;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_13;

    goto try_except_handler_15;
    // End of try:
    try_end_11:;
    goto try_end_12;
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

    Py_XDECREF(generator_heap->tmp_tuple_unpack_3__element_1);
    generator_heap->tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_3__element_2);
    generator_heap->tmp_tuple_unpack_3__element_2 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_14;
    generator_heap->exception_value = generator_heap->exception_keeper_value_14;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_14;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_14;

    goto try_except_handler_14;
    // End of try:
    try_end_12:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_3__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_3__source_iter);
    generator_heap->tmp_tuple_unpack_3__source_iter = NULL;
    {
        PyObject *tmp_assign_source_37;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_3__element_1);
        tmp_assign_source_37 = generator_heap->tmp_tuple_unpack_3__element_1;
        {
            PyObject *old = generator_heap->var_s;
            generator_heap->var_s = tmp_assign_source_37;
            Py_INCREF(generator_heap->var_s);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_3__element_1);
    generator_heap->tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_38;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_3__element_2);
        tmp_assign_source_38 = generator_heap->tmp_tuple_unpack_3__element_2;
        {
            PyObject *old = generator_heap->var_nbrs;
            generator_heap->var_nbrs = tmp_assign_source_38;
            Py_INCREF(generator_heap->var_nbrs);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_3__element_2);
    generator_heap->tmp_tuple_unpack_3__element_2 = NULL;

    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_len_arg_2;
        CHECK_OBJECT(generator_heap->var_nbrs);
        tmp_len_arg_2 = generator_heap->var_nbrs;
        tmp_assign_source_39 = BUILTIN_LEN(tstate, tmp_len_arg_2);
        if (tmp_assign_source_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 97;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_14;
        }
        {
            PyObject *old = generator_heap->var_deg;
            generator_heap->var_deg = tmp_assign_source_39;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_6;
        PyObject *tmp_add_expr_left_5;
        PyObject *tmp_add_expr_right_5;
        PyObject *tmp_add_expr_left_6;
        PyObject *tmp_add_expr_right_6;
        PyObject *tmp_unicode_arg_6;
        PyObject *tmp_unicode_arg_7;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_4;
        CHECK_OBJECT(generator_heap->var_s);
        tmp_unicode_arg_6 = generator_heap->var_s;
        tmp_add_expr_left_6 = BUILTIN_UNICODE1(tmp_unicode_arg_6);
        if (tmp_add_expr_left_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 98;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_14;
        }
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {
            Py_DECREF(tmp_add_expr_left_6);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[7]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 98;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_14;
        }

        tmp_add_expr_right_6 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_add_expr_left_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_6, tmp_add_expr_right_6);
        Py_DECREF(tmp_add_expr_left_6);
        if (tmp_add_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 98;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_14;
        }
        CHECK_OBJECT(generator_heap->var_deg);
        tmp_unicode_arg_7 = generator_heap->var_deg;
        tmp_add_expr_right_5 = BUILTIN_UNICODE1(tmp_unicode_arg_7);
        if (tmp_add_expr_right_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_add_expr_left_5);

            generator_heap->exception_lineno = 98;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_14;
        }
        tmp_expression_value_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
        Py_DECREF(tmp_add_expr_left_5);
        Py_DECREF(tmp_add_expr_right_5);
        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 98;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_14;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_add_expr_left_5, sizeof(PyObject *), &tmp_add_expr_right_5, sizeof(PyObject *), &tmp_add_expr_left_6, sizeof(PyObject *), &tmp_add_expr_right_6, sizeof(PyObject *), &tmp_unicode_arg_6, sizeof(PyObject *), &tmp_unicode_arg_7, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 4;
        return tmp_expression_value_6;
        yield_return_4:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_add_expr_left_5, sizeof(PyObject *), &tmp_add_expr_right_5, sizeof(PyObject *), &tmp_add_expr_left_6, sizeof(PyObject *), &tmp_add_expr_right_6, sizeof(PyObject *), &tmp_unicode_arg_6, sizeof(PyObject *), &tmp_unicode_arg_7, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 98;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_14;
        }
        tmp_yield_result_4 = yield_return_value;
        Py_DECREF(tmp_yield_result_4);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_iter_arg_11;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(generator_heap->var_nbrs);
        tmp_expression_value_7 = generator_heap->var_nbrs;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[6]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 99;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_14;
        }
        generator->m_frame->m_frame.f_lineno = 99;
        tmp_iter_arg_11 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_iter_arg_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 99;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_14;
        }
        tmp_assign_source_40 = MAKE_ITERATOR(tstate, tmp_iter_arg_11);
        Py_DECREF(tmp_iter_arg_11);
        if (tmp_assign_source_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 99;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_14;
        }
        {
            PyObject *old = generator_heap->tmp_for_loop_4__for_iterator;
            generator_heap->tmp_for_loop_4__for_iterator = tmp_assign_source_40;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_6:;
    {
        PyObject *tmp_next_source_6;
        PyObject *tmp_assign_source_41;
        CHECK_OBJECT(generator_heap->tmp_for_loop_4__for_iterator);
        tmp_next_source_6 = generator_heap->tmp_for_loop_4__for_iterator;
        tmp_assign_source_41 = ITERATOR_NEXT(tmp_next_source_6);
        if (tmp_assign_source_41 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_6;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "ccooooooo";
                generator_heap->exception_lineno = 99;
                goto try_except_handler_17;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_4__iter_value;
            generator_heap->tmp_for_loop_4__iter_value = tmp_assign_source_41;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_iter_arg_12;
        CHECK_OBJECT(generator_heap->tmp_for_loop_4__iter_value);
        tmp_iter_arg_12 = generator_heap->tmp_for_loop_4__iter_value;
        tmp_assign_source_42 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_12);
        if (tmp_assign_source_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 99;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_18;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_4__source_iter;
            generator_heap->tmp_tuple_unpack_4__source_iter = tmp_assign_source_42;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_unpack_11;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_4__source_iter);
        tmp_unpack_11 = generator_heap->tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_43 = UNPACK_NEXT(tstate, tmp_unpack_11, 0, 2);
        if (tmp_assign_source_43 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooo";
            generator_heap->exception_lineno = 99;
            goto try_except_handler_19;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_4__element_1;
            generator_heap->tmp_tuple_unpack_4__element_1 = tmp_assign_source_43;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_unpack_12;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_4__source_iter);
        tmp_unpack_12 = generator_heap->tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_44 = UNPACK_NEXT(tstate, tmp_unpack_12, 1, 2);
        if (tmp_assign_source_44 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooo";
            generator_heap->exception_lineno = 99;
            goto try_except_handler_19;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_4__element_2;
            generator_heap->tmp_tuple_unpack_4__element_2 = tmp_assign_source_44;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_6;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_4__source_iter);
        tmp_iterator_name_6 = generator_heap->tmp_tuple_unpack_4__source_iter;
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

                    generator_heap->type_description_1 = "ccooooooo";
                    generator_heap->exception_lineno = 99;
                    goto try_except_handler_19;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[5];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "ccooooooo";
            generator_heap->exception_lineno = 99;
            goto try_except_handler_19;
        }
    }
    goto try_end_13;
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

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_4__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_4__source_iter);
    generator_heap->tmp_tuple_unpack_4__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_15;
    generator_heap->exception_value = generator_heap->exception_keeper_value_15;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_15;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_15;

    goto try_except_handler_18;
    // End of try:
    try_end_13:;
    goto try_end_14;
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

    Py_XDECREF(generator_heap->tmp_tuple_unpack_4__element_1);
    generator_heap->tmp_tuple_unpack_4__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_4__element_2);
    generator_heap->tmp_tuple_unpack_4__element_2 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_16;
    generator_heap->exception_value = generator_heap->exception_keeper_value_16;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_16;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_16;

    goto try_except_handler_17;
    // End of try:
    try_end_14:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_4__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_4__source_iter);
    generator_heap->tmp_tuple_unpack_4__source_iter = NULL;
    {
        PyObject *tmp_assign_source_45;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_4__element_1);
        tmp_assign_source_45 = generator_heap->tmp_tuple_unpack_4__element_1;
        {
            PyObject *old = generator_heap->var_u;
            generator_heap->var_u = tmp_assign_source_45;
            Py_INCREF(generator_heap->var_u);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_4__element_1);
    generator_heap->tmp_tuple_unpack_4__element_1 = NULL;

    {
        PyObject *tmp_assign_source_46;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_4__element_2);
        tmp_assign_source_46 = generator_heap->tmp_tuple_unpack_4__element_2;
        {
            PyObject *old = generator_heap->var_d;
            generator_heap->var_d = tmp_assign_source_46;
            Py_INCREF(generator_heap->var_d);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_4__element_2);
    generator_heap->tmp_tuple_unpack_4__element_2 = NULL;

    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(generator_heap->var_d);
        tmp_cmp_expr_left_2 = generator_heap->var_d;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_4 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_expression_value_8;
        PyObject *tmp_unicode_arg_8;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_5;
        CHECK_OBJECT(generator_heap->var_u);
        tmp_unicode_arg_8 = generator_heap->var_u;
        tmp_expression_value_8 = BUILTIN_UNICODE1(tmp_unicode_arg_8);
        if (tmp_expression_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 101;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_17;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_unicode_arg_8, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 5;
        return tmp_expression_value_8;
        yield_return_5:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_unicode_arg_8, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 101;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_17;
        }
        tmp_yield_result_5 = yield_return_value;
        Py_DECREF(tmp_yield_result_5);
    }
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_expression_value_9;
        PyObject *tmp_add_expr_left_7;
        PyObject *tmp_add_expr_right_7;
        PyObject *tmp_add_expr_left_8;
        PyObject *tmp_add_expr_right_8;
        PyObject *tmp_unicode_arg_9;
        PyObject *tmp_unicode_arg_10;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_6;
        CHECK_OBJECT(generator_heap->var_u);
        tmp_unicode_arg_9 = generator_heap->var_u;
        tmp_add_expr_left_8 = BUILTIN_UNICODE1(tmp_unicode_arg_9);
        if (tmp_add_expr_left_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 103;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_17;
        }
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {
            Py_DECREF(tmp_add_expr_left_8);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[7]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 103;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_17;
        }

        tmp_add_expr_right_8 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_add_expr_left_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_8, tmp_add_expr_right_8);
        Py_DECREF(tmp_add_expr_left_8);
        if (tmp_add_expr_left_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 103;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_17;
        }
        CHECK_OBJECT(generator_heap->var_d);
        tmp_unicode_arg_10 = generator_heap->var_d;
        tmp_add_expr_right_7 = BUILTIN_UNICODE1(tmp_unicode_arg_10);
        if (tmp_add_expr_right_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_add_expr_left_7);

            generator_heap->exception_lineno = 103;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_17;
        }
        tmp_expression_value_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_7, tmp_add_expr_right_7);
        Py_DECREF(tmp_add_expr_left_7);
        Py_DECREF(tmp_add_expr_right_7);
        if (tmp_expression_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 103;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_17;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_add_expr_left_7, sizeof(PyObject *), &tmp_add_expr_right_7, sizeof(PyObject *), &tmp_add_expr_left_8, sizeof(PyObject *), &tmp_add_expr_right_8, sizeof(PyObject *), &tmp_unicode_arg_9, sizeof(PyObject *), &tmp_unicode_arg_10, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 6;
        return tmp_expression_value_9;
        yield_return_6:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_add_expr_left_7, sizeof(PyObject *), &tmp_add_expr_right_7, sizeof(PyObject *), &tmp_add_expr_left_8, sizeof(PyObject *), &tmp_add_expr_right_8, sizeof(PyObject *), &tmp_unicode_arg_9, sizeof(PyObject *), &tmp_unicode_arg_10, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 103;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_17;
        }
        tmp_yield_result_6 = yield_return_value;
        Py_DECREF(tmp_yield_result_6);
    }
    branch_end_4:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 99;
        generator_heap->type_description_1 = "ccooooooo";
        goto try_except_handler_17;
    }
    goto loop_start_6;
    loop_end_6:;
    goto try_end_15;
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

    Py_XDECREF(generator_heap->tmp_for_loop_4__iter_value);
    generator_heap->tmp_for_loop_4__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_4__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_4__for_iterator);
    generator_heap->tmp_for_loop_4__for_iterator = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_17;
    generator_heap->exception_value = generator_heap->exception_keeper_value_17;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_17;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_17;

    goto try_except_handler_14;
    // End of try:
    try_end_15:;
    Py_XDECREF(generator_heap->tmp_for_loop_4__iter_value);
    generator_heap->tmp_for_loop_4__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_4__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_4__for_iterator);
    generator_heap->tmp_for_loop_4__for_iterator = NULL;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 96;
        generator_heap->type_description_1 = "ccooooooo";
        goto try_except_handler_14;
    }
    goto loop_start_5;
    loop_end_5:;
    goto try_end_16;
    // Exception handler code:
    try_except_handler_14:;
    generator_heap->exception_keeper_type_18 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_18 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_18 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_18 = generator_heap->exception_lineno;
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
    generator_heap->exception_type = generator_heap->exception_keeper_type_18;
    generator_heap->exception_value = generator_heap->exception_keeper_value_18;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_18;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_16:;
    Py_XDECREF(generator_heap->tmp_for_loop_3__iter_value);
    generator_heap->tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_3__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_3__for_iterator);
    generator_heap->tmp_for_loop_3__for_iterator = NULL;
    branch_end_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_3;
        int tmp_truth_name_3;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[1]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 105;
            generator_heap->type_description_1 = "ccooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = Nuitka_Cell_GET(generator->m_closure[0]);
        generator->m_frame->m_frame.f_lineno = 105;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_5, mod_consts[3]);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 105;
            generator_heap->type_description_1 = "ccooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_call_result_3);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_call_result_3);

            generator_heap->exception_lineno = 105;
            generator_heap->type_description_1 = "ccooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_3);
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = PySet_New(NULL);
        assert(generator_heap->var_seen == NULL);
        generator_heap->var_seen = tmp_assign_source_47;
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_iter_arg_13;
        PyObject *tmp_called_instance_6;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[1]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 107;
            generator_heap->type_description_1 = "ccooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_6 = Nuitka_Cell_GET(generator->m_closure[0]);
        generator->m_frame->m_frame.f_lineno = 107;
        tmp_iter_arg_13 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_6, mod_consts[4]);
        if (tmp_iter_arg_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 107;
            generator_heap->type_description_1 = "ccooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_48 = MAKE_ITERATOR(tstate, tmp_iter_arg_13);
        Py_DECREF(tmp_iter_arg_13);
        if (tmp_assign_source_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 107;
            generator_heap->type_description_1 = "ccooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->tmp_for_loop_5__for_iterator == NULL);
        generator_heap->tmp_for_loop_5__for_iterator = tmp_assign_source_48;
    }
    // Tried code:
    loop_start_7:;
    {
        PyObject *tmp_next_source_7;
        PyObject *tmp_assign_source_49;
        CHECK_OBJECT(generator_heap->tmp_for_loop_5__for_iterator);
        tmp_next_source_7 = generator_heap->tmp_for_loop_5__for_iterator;
        tmp_assign_source_49 = ITERATOR_NEXT(tmp_next_source_7);
        if (tmp_assign_source_49 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_7;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "ccooooooo";
                generator_heap->exception_lineno = 107;
                goto try_except_handler_20;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_5__iter_value;
            generator_heap->tmp_for_loop_5__iter_value = tmp_assign_source_49;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_iter_arg_14;
        CHECK_OBJECT(generator_heap->tmp_for_loop_5__iter_value);
        tmp_iter_arg_14 = generator_heap->tmp_for_loop_5__iter_value;
        tmp_assign_source_50 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_14);
        if (tmp_assign_source_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 107;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_21;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_5__source_iter;
            generator_heap->tmp_tuple_unpack_5__source_iter = tmp_assign_source_50;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_unpack_13;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_5__source_iter);
        tmp_unpack_13 = generator_heap->tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_51 = UNPACK_NEXT(tstate, tmp_unpack_13, 0, 2);
        if (tmp_assign_source_51 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooo";
            generator_heap->exception_lineno = 107;
            goto try_except_handler_22;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_5__element_1;
            generator_heap->tmp_tuple_unpack_5__element_1 = tmp_assign_source_51;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_unpack_14;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_5__source_iter);
        tmp_unpack_14 = generator_heap->tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_52 = UNPACK_NEXT(tstate, tmp_unpack_14, 1, 2);
        if (tmp_assign_source_52 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooo";
            generator_heap->exception_lineno = 107;
            goto try_except_handler_22;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_5__element_2;
            generator_heap->tmp_tuple_unpack_5__element_2 = tmp_assign_source_52;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_7;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_5__source_iter);
        tmp_iterator_name_7 = generator_heap->tmp_tuple_unpack_5__source_iter;
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

                    generator_heap->type_description_1 = "ccooooooo";
                    generator_heap->exception_lineno = 107;
                    goto try_except_handler_22;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[5];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "ccooooooo";
            generator_heap->exception_lineno = 107;
            goto try_except_handler_22;
        }
    }
    goto try_end_17;
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

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_5__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_5__source_iter);
    generator_heap->tmp_tuple_unpack_5__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_19;
    generator_heap->exception_value = generator_heap->exception_keeper_value_19;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_19;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_19;

    goto try_except_handler_21;
    // End of try:
    try_end_17:;
    goto try_end_18;
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

    Py_XDECREF(generator_heap->tmp_tuple_unpack_5__element_1);
    generator_heap->tmp_tuple_unpack_5__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_5__element_2);
    generator_heap->tmp_tuple_unpack_5__element_2 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_20;
    generator_heap->exception_value = generator_heap->exception_keeper_value_20;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_20;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_20;

    goto try_except_handler_20;
    // End of try:
    try_end_18:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_5__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_5__source_iter);
    generator_heap->tmp_tuple_unpack_5__source_iter = NULL;
    {
        PyObject *tmp_assign_source_53;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_5__element_1);
        tmp_assign_source_53 = generator_heap->tmp_tuple_unpack_5__element_1;
        {
            PyObject *old = generator_heap->var_s;
            generator_heap->var_s = tmp_assign_source_53;
            Py_INCREF(generator_heap->var_s);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_5__element_1);
    generator_heap->tmp_tuple_unpack_5__element_1 = NULL;

    {
        PyObject *tmp_assign_source_54;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_5__element_2);
        tmp_assign_source_54 = generator_heap->tmp_tuple_unpack_5__element_2;
        {
            PyObject *old = generator_heap->var_nbrs;
            generator_heap->var_nbrs = tmp_assign_source_54;
            Py_INCREF(generator_heap->var_nbrs);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_5__element_2);
    generator_heap->tmp_tuple_unpack_5__element_2 = NULL;

    {
        PyObject *tmp_assign_source_55;
        // Tried code:
        {
            PyObject *tmp_assign_source_56;
            PyObject *tmp_iter_arg_15;
            PyObject *tmp_called_value_4;
            PyObject *tmp_expression_value_10;
            CHECK_OBJECT(generator_heap->var_nbrs);
            tmp_expression_value_10 = generator_heap->var_nbrs;
            tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[6]);
            if (tmp_called_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 110;
                generator_heap->type_description_1 = "ccooooooo";
                goto try_except_handler_23;
            }
            generator->m_frame->m_frame.f_lineno = 110;
            tmp_iter_arg_15 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_4);
            Py_DECREF(tmp_called_value_4);
            if (tmp_iter_arg_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 110;
                generator_heap->type_description_1 = "ccooooooo";
                goto try_except_handler_23;
            }
            tmp_assign_source_56 = MAKE_ITERATOR(tstate, tmp_iter_arg_15);
            Py_DECREF(tmp_iter_arg_15);
            if (tmp_assign_source_56 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 108;
                generator_heap->type_description_1 = "ccooooooo";
                goto try_except_handler_23;
            }
            {
                PyObject *old = generator_heap->tmp_listcomp_2__$0;
                generator_heap->tmp_listcomp_2__$0 = tmp_assign_source_56;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_57;
            tmp_assign_source_57 = MAKE_LIST_EMPTY(0);
            {
                PyObject *old = generator_heap->tmp_listcomp_2__contraction;
                generator_heap->tmp_listcomp_2__contraction = tmp_assign_source_57;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        loop_start_8:;
        {
            PyObject *tmp_next_source_8;
            PyObject *tmp_assign_source_58;
            CHECK_OBJECT(generator_heap->tmp_listcomp_2__$0);
            tmp_next_source_8 = generator_heap->tmp_listcomp_2__$0;
            tmp_assign_source_58 = ITERATOR_NEXT(tmp_next_source_8);
            if (tmp_assign_source_58 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_8;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                    generator_heap->type_description_1 = "ccooooooo";
                    generator_heap->exception_lineno = 108;
                    goto try_except_handler_24;
                }
            }

            {
                PyObject *old = generator_heap->tmp_listcomp_2__iter_value_1;
                generator_heap->tmp_listcomp_2__iter_value_1 = tmp_assign_source_58;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_59;
            PyObject *tmp_iter_arg_16;
            CHECK_OBJECT(generator_heap->tmp_listcomp_2__iter_value_1);
            tmp_iter_arg_16 = generator_heap->tmp_listcomp_2__iter_value_1;
            tmp_assign_source_59 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_16);
            if (tmp_assign_source_59 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 108;
                generator_heap->type_description_1 = "ccooooooo";
                goto try_except_handler_25;
            }
            {
                PyObject *old = generator_heap->tmp_listcomp$tuple_unpack_4__source_iter;
                generator_heap->tmp_listcomp$tuple_unpack_4__source_iter = tmp_assign_source_59;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_60;
            PyObject *tmp_unpack_15;
            CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_4__source_iter);
            tmp_unpack_15 = generator_heap->tmp_listcomp$tuple_unpack_4__source_iter;
            tmp_assign_source_60 = UNPACK_NEXT(tstate, tmp_unpack_15, 0, 2);
            if (tmp_assign_source_60 == NULL) {
                if (!HAS_ERROR_OCCURRED(tstate)) {
                    generator_heap->exception_type = PyExc_StopIteration;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = NULL;
                    generator_heap->exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                }


                generator_heap->type_description_1 = "ccooooooo";
                generator_heap->exception_lineno = 108;
                goto try_except_handler_26;
            }
            {
                PyObject *old = generator_heap->tmp_listcomp$tuple_unpack_4__element_1;
                generator_heap->tmp_listcomp$tuple_unpack_4__element_1 = tmp_assign_source_60;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_61;
            PyObject *tmp_unpack_16;
            CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_4__source_iter);
            tmp_unpack_16 = generator_heap->tmp_listcomp$tuple_unpack_4__source_iter;
            tmp_assign_source_61 = UNPACK_NEXT(tstate, tmp_unpack_16, 1, 2);
            if (tmp_assign_source_61 == NULL) {
                if (!HAS_ERROR_OCCURRED(tstate)) {
                    generator_heap->exception_type = PyExc_StopIteration;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = NULL;
                    generator_heap->exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                }


                generator_heap->type_description_1 = "ccooooooo";
                generator_heap->exception_lineno = 108;
                goto try_except_handler_26;
            }
            {
                PyObject *old = generator_heap->tmp_listcomp$tuple_unpack_4__element_2;
                generator_heap->tmp_listcomp$tuple_unpack_4__element_2 = tmp_assign_source_61;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_8;
            CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_4__source_iter);
            tmp_iterator_name_8 = generator_heap->tmp_listcomp$tuple_unpack_4__source_iter;
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

                        generator_heap->type_description_1 = "ccooooooo";
                        generator_heap->exception_lineno = 108;
                        goto try_except_handler_26;
                    }
                }
            } else {
                Py_DECREF(generator_heap->tmp_iterator_attempt);

                generator_heap->exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                generator_heap->exception_value = mod_consts[5];
                Py_INCREF(generator_heap->exception_value);
                generator_heap->exception_tb = NULL;

                generator_heap->type_description_1 = "ccooooooo";
                generator_heap->exception_lineno = 108;
                goto try_except_handler_26;
            }
        }
        goto try_end_19;
        // Exception handler code:
        try_except_handler_26:;
        generator_heap->exception_keeper_type_21 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_21 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_21 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_21 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_4__source_iter);
        Py_DECREF(generator_heap->tmp_listcomp$tuple_unpack_4__source_iter);
        generator_heap->tmp_listcomp$tuple_unpack_4__source_iter = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_21;
        generator_heap->exception_value = generator_heap->exception_keeper_value_21;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_21;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_21;

        goto try_except_handler_25;
        // End of try:
        try_end_19:;
        goto try_end_20;
        // Exception handler code:
        try_except_handler_25:;
        generator_heap->exception_keeper_type_22 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_22 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_22 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_22 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        Py_XDECREF(generator_heap->tmp_listcomp$tuple_unpack_4__element_1);
        generator_heap->tmp_listcomp$tuple_unpack_4__element_1 = NULL;
        Py_XDECREF(generator_heap->tmp_listcomp$tuple_unpack_4__element_2);
        generator_heap->tmp_listcomp$tuple_unpack_4__element_2 = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_22;
        generator_heap->exception_value = generator_heap->exception_keeper_value_22;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_22;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_22;

        goto try_except_handler_24;
        // End of try:
        try_end_20:;
        CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_4__source_iter);
        Py_DECREF(generator_heap->tmp_listcomp$tuple_unpack_4__source_iter);
        generator_heap->tmp_listcomp$tuple_unpack_4__source_iter = NULL;
        {
            PyObject *tmp_assign_source_62;
            CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_4__element_1);
            tmp_assign_source_62 = generator_heap->tmp_listcomp$tuple_unpack_4__element_1;
            {
                PyObject *old = generator_heap->outline_1_var_u;
                generator_heap->outline_1_var_u = tmp_assign_source_62;
                Py_INCREF(generator_heap->outline_1_var_u);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(generator_heap->tmp_listcomp$tuple_unpack_4__element_1);
        generator_heap->tmp_listcomp$tuple_unpack_4__element_1 = NULL;

        {
            PyObject *tmp_assign_source_63;
            CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_4__element_2);
            tmp_assign_source_63 = generator_heap->tmp_listcomp$tuple_unpack_4__element_2;
            {
                PyObject *old = generator_heap->outline_1_var_datadict;
                generator_heap->outline_1_var_datadict = tmp_assign_source_63;
                Py_INCREF(generator_heap->outline_1_var_datadict);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(generator_heap->tmp_listcomp$tuple_unpack_4__element_2);
        generator_heap->tmp_listcomp$tuple_unpack_4__element_2 = NULL;

        {
            bool tmp_condition_result_6;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(generator_heap->outline_1_var_u);
            tmp_cmp_expr_left_3 = generator_heap->outline_1_var_u;
            if (generator_heap->var_seen == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[8]);
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

                generator_heap->exception_lineno = 111;
                generator_heap->type_description_1 = "ccooooooo";
                goto try_except_handler_24;
            }

            tmp_cmp_expr_right_3 = generator_heap->var_seen;
            generator_heap->tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
            if (generator_heap->tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 111;
                generator_heap->type_description_1 = "ccooooooo";
                goto try_except_handler_24;
            }
            tmp_condition_result_6 = (generator_heap->tmp_res == 0) ? true : false;
            if (tmp_condition_result_6 != false) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        {
            PyObject *tmp_assign_source_64;
            PyObject *tmp_iter_arg_17;
            PyObject *tmp_called_value_5;
            PyObject *tmp_expression_value_11;
            CHECK_OBJECT(generator_heap->outline_1_var_datadict);
            tmp_expression_value_11 = generator_heap->outline_1_var_datadict;
            tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[6]);
            if (tmp_called_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 112;
                generator_heap->type_description_1 = "ccooooooo";
                goto try_except_handler_24;
            }
            generator->m_frame->m_frame.f_lineno = 112;
            tmp_iter_arg_17 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_5);
            Py_DECREF(tmp_called_value_5);
            if (tmp_iter_arg_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 112;
                generator_heap->type_description_1 = "ccooooooo";
                goto try_except_handler_24;
            }
            tmp_assign_source_64 = MAKE_ITERATOR(tstate, tmp_iter_arg_17);
            Py_DECREF(tmp_iter_arg_17);
            if (tmp_assign_source_64 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 108;
                generator_heap->type_description_1 = "ccooooooo";
                goto try_except_handler_24;
            }
            {
                PyObject *old = generator_heap->tmp_listcomp_2__contraction_iter_0;
                generator_heap->tmp_listcomp_2__contraction_iter_0 = tmp_assign_source_64;
                Py_XDECREF(old);
            }

        }
        loop_start_9:;
        {
            PyObject *tmp_next_source_9;
            PyObject *tmp_assign_source_65;
            CHECK_OBJECT(generator_heap->tmp_listcomp_2__contraction_iter_0);
            tmp_next_source_9 = generator_heap->tmp_listcomp_2__contraction_iter_0;
            tmp_assign_source_65 = ITERATOR_NEXT(tmp_next_source_9);
            if (tmp_assign_source_65 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_9;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                    generator_heap->type_description_1 = "ccooooooo";
                    generator_heap->exception_lineno = 108;
                    goto try_except_handler_24;
                }
            }

            {
                PyObject *old = generator_heap->tmp_listcomp_2__iter_value_0;
                generator_heap->tmp_listcomp_2__iter_value_0 = tmp_assign_source_65;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_66;
            PyObject *tmp_iter_arg_18;
            CHECK_OBJECT(generator_heap->tmp_listcomp_2__iter_value_0);
            tmp_iter_arg_18 = generator_heap->tmp_listcomp_2__iter_value_0;
            tmp_assign_source_66 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_18);
            if (tmp_assign_source_66 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 108;
                generator_heap->type_description_1 = "ccooooooo";
                goto try_except_handler_27;
            }
            {
                PyObject *old = generator_heap->tmp_listcomp$tuple_unpack_3__source_iter;
                generator_heap->tmp_listcomp$tuple_unpack_3__source_iter = tmp_assign_source_66;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_67;
            PyObject *tmp_unpack_17;
            CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_3__source_iter);
            tmp_unpack_17 = generator_heap->tmp_listcomp$tuple_unpack_3__source_iter;
            tmp_assign_source_67 = UNPACK_NEXT(tstate, tmp_unpack_17, 0, 2);
            if (tmp_assign_source_67 == NULL) {
                if (!HAS_ERROR_OCCURRED(tstate)) {
                    generator_heap->exception_type = PyExc_StopIteration;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = NULL;
                    generator_heap->exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                }


                generator_heap->type_description_1 = "ccooooooo";
                generator_heap->exception_lineno = 108;
                goto try_except_handler_28;
            }
            {
                PyObject *old = generator_heap->tmp_listcomp$tuple_unpack_3__element_1;
                generator_heap->tmp_listcomp$tuple_unpack_3__element_1 = tmp_assign_source_67;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_68;
            PyObject *tmp_unpack_18;
            CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_3__source_iter);
            tmp_unpack_18 = generator_heap->tmp_listcomp$tuple_unpack_3__source_iter;
            tmp_assign_source_68 = UNPACK_NEXT(tstate, tmp_unpack_18, 1, 2);
            if (tmp_assign_source_68 == NULL) {
                if (!HAS_ERROR_OCCURRED(tstate)) {
                    generator_heap->exception_type = PyExc_StopIteration;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = NULL;
                    generator_heap->exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                }


                generator_heap->type_description_1 = "ccooooooo";
                generator_heap->exception_lineno = 108;
                goto try_except_handler_28;
            }
            {
                PyObject *old = generator_heap->tmp_listcomp$tuple_unpack_3__element_2;
                generator_heap->tmp_listcomp$tuple_unpack_3__element_2 = tmp_assign_source_68;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_9;
            CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_3__source_iter);
            tmp_iterator_name_9 = generator_heap->tmp_listcomp$tuple_unpack_3__source_iter;
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

                        generator_heap->type_description_1 = "ccooooooo";
                        generator_heap->exception_lineno = 108;
                        goto try_except_handler_28;
                    }
                }
            } else {
                Py_DECREF(generator_heap->tmp_iterator_attempt);

                generator_heap->exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                generator_heap->exception_value = mod_consts[5];
                Py_INCREF(generator_heap->exception_value);
                generator_heap->exception_tb = NULL;

                generator_heap->type_description_1 = "ccooooooo";
                generator_heap->exception_lineno = 108;
                goto try_except_handler_28;
            }
        }
        goto try_end_21;
        // Exception handler code:
        try_except_handler_28:;
        generator_heap->exception_keeper_type_23 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_23 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_23 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_23 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_3__source_iter);
        Py_DECREF(generator_heap->tmp_listcomp$tuple_unpack_3__source_iter);
        generator_heap->tmp_listcomp$tuple_unpack_3__source_iter = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_23;
        generator_heap->exception_value = generator_heap->exception_keeper_value_23;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_23;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_23;

        goto try_except_handler_27;
        // End of try:
        try_end_21:;
        goto try_end_22;
        // Exception handler code:
        try_except_handler_27:;
        generator_heap->exception_keeper_type_24 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_24 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_24 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_24 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        Py_XDECREF(generator_heap->tmp_listcomp$tuple_unpack_3__element_1);
        generator_heap->tmp_listcomp$tuple_unpack_3__element_1 = NULL;
        Py_XDECREF(generator_heap->tmp_listcomp$tuple_unpack_3__element_2);
        generator_heap->tmp_listcomp$tuple_unpack_3__element_2 = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_24;
        generator_heap->exception_value = generator_heap->exception_keeper_value_24;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_24;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_24;

        goto try_except_handler_24;
        // End of try:
        try_end_22:;
        CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_3__source_iter);
        Py_DECREF(generator_heap->tmp_listcomp$tuple_unpack_3__source_iter);
        generator_heap->tmp_listcomp$tuple_unpack_3__source_iter = NULL;
        {
            PyObject *tmp_assign_source_69;
            CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_3__element_1);
            tmp_assign_source_69 = generator_heap->tmp_listcomp$tuple_unpack_3__element_1;
            {
                PyObject *old = generator_heap->outline_1_var_key;
                generator_heap->outline_1_var_key = tmp_assign_source_69;
                Py_INCREF(generator_heap->outline_1_var_key);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(generator_heap->tmp_listcomp$tuple_unpack_3__element_1);
        generator_heap->tmp_listcomp$tuple_unpack_3__element_1 = NULL;

        {
            PyObject *tmp_assign_source_70;
            CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_3__element_2);
            tmp_assign_source_70 = generator_heap->tmp_listcomp$tuple_unpack_3__element_2;
            {
                PyObject *old = generator_heap->outline_1_var_data;
                generator_heap->outline_1_var_data = tmp_assign_source_70;
                Py_INCREF(generator_heap->outline_1_var_data);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(generator_heap->tmp_listcomp$tuple_unpack_3__element_2);
        generator_heap->tmp_listcomp$tuple_unpack_3__element_2 = NULL;

        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            PyObject *tmp_tuple_element_2;
            CHECK_OBJECT(generator_heap->tmp_listcomp_2__contraction);
            tmp_append_list_2 = generator_heap->tmp_listcomp_2__contraction;
            CHECK_OBJECT(generator_heap->outline_1_var_u);
            tmp_tuple_element_2 = generator_heap->outline_1_var_u;
            tmp_append_value_2 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_append_value_2, 0, tmp_tuple_element_2);
            CHECK_OBJECT(generator_heap->outline_1_var_data);
            tmp_tuple_element_2 = generator_heap->outline_1_var_data;
            PyTuple_SET_ITEM0(tmp_append_value_2, 1, tmp_tuple_element_2);
            generator_heap->tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
            if (generator_heap->tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 108;
                generator_heap->type_description_1 = "ccooooooo";
                goto try_except_handler_24;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 108;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_24;
        }
        goto loop_start_9;
        loop_end_9:;
        CHECK_OBJECT(generator_heap->tmp_listcomp_2__contraction_iter_0);
        Py_DECREF(generator_heap->tmp_listcomp_2__contraction_iter_0);
        generator_heap->tmp_listcomp_2__contraction_iter_0 = NULL;
        branch_no_6:;
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 108;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_24;
        }
        goto loop_start_8;
        loop_end_8:;
        CHECK_OBJECT(generator_heap->tmp_listcomp_2__contraction);
        tmp_assign_source_55 = generator_heap->tmp_listcomp_2__contraction;
        Py_INCREF(tmp_assign_source_55);
        goto try_return_handler_24;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_24:;
        CHECK_OBJECT(generator_heap->tmp_listcomp_2__$0);
        Py_DECREF(generator_heap->tmp_listcomp_2__$0);
        generator_heap->tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(generator_heap->tmp_listcomp_2__contraction);
        Py_DECREF(generator_heap->tmp_listcomp_2__contraction);
        generator_heap->tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(generator_heap->tmp_listcomp_2__iter_value_0);
        generator_heap->tmp_listcomp_2__iter_value_0 = NULL;
        Py_XDECREF(generator_heap->tmp_listcomp_2__contraction_iter_0);
        generator_heap->tmp_listcomp_2__contraction_iter_0 = NULL;
        Py_XDECREF(generator_heap->tmp_listcomp_2__iter_value_1);
        generator_heap->tmp_listcomp_2__iter_value_1 = NULL;
        goto try_return_handler_23;
        // Exception handler code:
        try_except_handler_24:;
        generator_heap->exception_keeper_type_25 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_25 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_25 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_25 = generator_heap->exception_lineno;
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
        Py_XDECREF(generator_heap->tmp_listcomp_2__contraction_iter_0);
        generator_heap->tmp_listcomp_2__contraction_iter_0 = NULL;
        Py_XDECREF(generator_heap->tmp_listcomp_2__iter_value_1);
        generator_heap->tmp_listcomp_2__iter_value_1 = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_25;
        generator_heap->exception_value = generator_heap->exception_keeper_value_25;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_25;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_25;

        goto try_except_handler_23;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_23:;
        Py_XDECREF(generator_heap->outline_1_var_u);
        generator_heap->outline_1_var_u = NULL;
        Py_XDECREF(generator_heap->outline_1_var_datadict);
        generator_heap->outline_1_var_datadict = NULL;
        Py_XDECREF(generator_heap->outline_1_var_key);
        generator_heap->outline_1_var_key = NULL;
        Py_XDECREF(generator_heap->outline_1_var_data);
        generator_heap->outline_1_var_data = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_23:;
        generator_heap->exception_keeper_type_26 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_26 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_26 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_26 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        Py_XDECREF(generator_heap->outline_1_var_u);
        generator_heap->outline_1_var_u = NULL;
        Py_XDECREF(generator_heap->outline_1_var_datadict);
        generator_heap->outline_1_var_datadict = NULL;
        Py_XDECREF(generator_heap->outline_1_var_key);
        generator_heap->outline_1_var_key = NULL;
        Py_XDECREF(generator_heap->outline_1_var_data);
        generator_heap->outline_1_var_data = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_26;
        generator_heap->exception_value = generator_heap->exception_keeper_value_26;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_26;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_26;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        generator_heap->exception_lineno = 108;
        goto try_except_handler_20;
        outline_result_2:;
        {
            PyObject *old = generator_heap->var_nbr_edges;
            generator_heap->var_nbr_edges = tmp_assign_source_55;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_len_arg_3;
        CHECK_OBJECT(generator_heap->var_nbr_edges);
        tmp_len_arg_3 = generator_heap->var_nbr_edges;
        tmp_assign_source_71 = BUILTIN_LEN(tstate, tmp_len_arg_3);
        if (tmp_assign_source_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 114;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_20;
        }
        {
            PyObject *old = generator_heap->var_deg;
            generator_heap->var_deg = tmp_assign_source_71;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_12;
        PyObject *tmp_add_expr_left_9;
        PyObject *tmp_add_expr_right_9;
        PyObject *tmp_add_expr_left_10;
        PyObject *tmp_add_expr_right_10;
        PyObject *tmp_unicode_arg_11;
        PyObject *tmp_unicode_arg_12;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_7;
        CHECK_OBJECT(generator_heap->var_s);
        tmp_unicode_arg_11 = generator_heap->var_s;
        tmp_add_expr_left_10 = BUILTIN_UNICODE1(tmp_unicode_arg_11);
        if (tmp_add_expr_left_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 115;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_20;
        }
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {
            Py_DECREF(tmp_add_expr_left_10);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[7]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 115;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_20;
        }

        tmp_add_expr_right_10 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_add_expr_left_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_10, tmp_add_expr_right_10);
        Py_DECREF(tmp_add_expr_left_10);
        if (tmp_add_expr_left_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 115;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_20;
        }
        CHECK_OBJECT(generator_heap->var_deg);
        tmp_unicode_arg_12 = generator_heap->var_deg;
        tmp_add_expr_right_9 = BUILTIN_UNICODE1(tmp_unicode_arg_12);
        if (tmp_add_expr_right_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_add_expr_left_9);

            generator_heap->exception_lineno = 115;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_20;
        }
        tmp_expression_value_12 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_9, tmp_add_expr_right_9);
        Py_DECREF(tmp_add_expr_left_9);
        Py_DECREF(tmp_add_expr_right_9);
        if (tmp_expression_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 115;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_20;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_add_expr_left_9, sizeof(PyObject *), &tmp_add_expr_right_9, sizeof(PyObject *), &tmp_add_expr_left_10, sizeof(PyObject *), &tmp_add_expr_right_10, sizeof(PyObject *), &tmp_unicode_arg_11, sizeof(PyObject *), &tmp_unicode_arg_12, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 7;
        return tmp_expression_value_12;
        yield_return_7:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_add_expr_left_9, sizeof(PyObject *), &tmp_add_expr_right_9, sizeof(PyObject *), &tmp_add_expr_left_10, sizeof(PyObject *), &tmp_add_expr_right_10, sizeof(PyObject *), &tmp_unicode_arg_11, sizeof(PyObject *), &tmp_unicode_arg_12, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 115;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_20;
        }
        tmp_yield_result_7 = yield_return_value;
        Py_DECREF(tmp_yield_result_7);
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_iter_arg_19;
        CHECK_OBJECT(generator_heap->var_nbr_edges);
        tmp_iter_arg_19 = generator_heap->var_nbr_edges;
        tmp_assign_source_72 = MAKE_ITERATOR(tstate, tmp_iter_arg_19);
        if (tmp_assign_source_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 116;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_20;
        }
        {
            PyObject *old = generator_heap->tmp_for_loop_6__for_iterator;
            generator_heap->tmp_for_loop_6__for_iterator = tmp_assign_source_72;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_10:;
    {
        PyObject *tmp_next_source_10;
        PyObject *tmp_assign_source_73;
        CHECK_OBJECT(generator_heap->tmp_for_loop_6__for_iterator);
        tmp_next_source_10 = generator_heap->tmp_for_loop_6__for_iterator;
        tmp_assign_source_73 = ITERATOR_NEXT(tmp_next_source_10);
        if (tmp_assign_source_73 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_10;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "ccooooooo";
                generator_heap->exception_lineno = 116;
                goto try_except_handler_29;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_6__iter_value;
            generator_heap->tmp_for_loop_6__iter_value = tmp_assign_source_73;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_iter_arg_20;
        CHECK_OBJECT(generator_heap->tmp_for_loop_6__iter_value);
        tmp_iter_arg_20 = generator_heap->tmp_for_loop_6__iter_value;
        tmp_assign_source_74 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_20);
        if (tmp_assign_source_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 116;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_30;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_6__source_iter;
            generator_heap->tmp_tuple_unpack_6__source_iter = tmp_assign_source_74;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_unpack_19;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_6__source_iter);
        tmp_unpack_19 = generator_heap->tmp_tuple_unpack_6__source_iter;
        tmp_assign_source_75 = UNPACK_NEXT(tstate, tmp_unpack_19, 0, 2);
        if (tmp_assign_source_75 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooo";
            generator_heap->exception_lineno = 116;
            goto try_except_handler_31;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_6__element_1;
            generator_heap->tmp_tuple_unpack_6__element_1 = tmp_assign_source_75;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_unpack_20;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_6__source_iter);
        tmp_unpack_20 = generator_heap->tmp_tuple_unpack_6__source_iter;
        tmp_assign_source_76 = UNPACK_NEXT(tstate, tmp_unpack_20, 1, 2);
        if (tmp_assign_source_76 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooo";
            generator_heap->exception_lineno = 116;
            goto try_except_handler_31;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_6__element_2;
            generator_heap->tmp_tuple_unpack_6__element_2 = tmp_assign_source_76;
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

                    generator_heap->type_description_1 = "ccooooooo";
                    generator_heap->exception_lineno = 116;
                    goto try_except_handler_31;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[5];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "ccooooooo";
            generator_heap->exception_lineno = 116;
            goto try_except_handler_31;
        }
    }
    goto try_end_23;
    // Exception handler code:
    try_except_handler_31:;
    generator_heap->exception_keeper_type_27 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_27 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_27 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_27 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_6__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_6__source_iter);
    generator_heap->tmp_tuple_unpack_6__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_27;
    generator_heap->exception_value = generator_heap->exception_keeper_value_27;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_27;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_27;

    goto try_except_handler_30;
    // End of try:
    try_end_23:;
    goto try_end_24;
    // Exception handler code:
    try_except_handler_30:;
    generator_heap->exception_keeper_type_28 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_28 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_28 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_28 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_6__element_1);
    generator_heap->tmp_tuple_unpack_6__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_6__element_2);
    generator_heap->tmp_tuple_unpack_6__element_2 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_28;
    generator_heap->exception_value = generator_heap->exception_keeper_value_28;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_28;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_28;

    goto try_except_handler_29;
    // End of try:
    try_end_24:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_6__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_6__source_iter);
    generator_heap->tmp_tuple_unpack_6__source_iter = NULL;
    {
        PyObject *tmp_assign_source_77;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_6__element_1);
        tmp_assign_source_77 = generator_heap->tmp_tuple_unpack_6__element_1;
        {
            PyObject *old = generator_heap->var_u;
            generator_heap->var_u = tmp_assign_source_77;
            Py_INCREF(generator_heap->var_u);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_6__element_1);
    generator_heap->tmp_tuple_unpack_6__element_1 = NULL;

    {
        PyObject *tmp_assign_source_78;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_6__element_2);
        tmp_assign_source_78 = generator_heap->tmp_tuple_unpack_6__element_2;
        {
            PyObject *old = generator_heap->var_d;
            generator_heap->var_d = tmp_assign_source_78;
            Py_INCREF(generator_heap->var_d);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_6__element_2);
    generator_heap->tmp_tuple_unpack_6__element_2 = NULL;

    {
        bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(generator_heap->var_d);
        tmp_cmp_expr_left_4 = generator_heap->var_d;
        tmp_cmp_expr_right_4 = Py_None;
        tmp_condition_result_7 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_expression_value_13;
        PyObject *tmp_unicode_arg_13;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_8;
        CHECK_OBJECT(generator_heap->var_u);
        tmp_unicode_arg_13 = generator_heap->var_u;
        tmp_expression_value_13 = BUILTIN_UNICODE1(tmp_unicode_arg_13);
        if (tmp_expression_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 118;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_29;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_unicode_arg_13, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 8;
        return tmp_expression_value_13;
        yield_return_8:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_unicode_arg_13, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 118;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_29;
        }
        tmp_yield_result_8 = yield_return_value;
        Py_DECREF(tmp_yield_result_8);
    }
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_expression_value_14;
        PyObject *tmp_add_expr_left_11;
        PyObject *tmp_add_expr_right_11;
        PyObject *tmp_add_expr_left_12;
        PyObject *tmp_add_expr_right_12;
        PyObject *tmp_unicode_arg_14;
        PyObject *tmp_unicode_arg_15;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_9;
        CHECK_OBJECT(generator_heap->var_u);
        tmp_unicode_arg_14 = generator_heap->var_u;
        tmp_add_expr_left_12 = BUILTIN_UNICODE1(tmp_unicode_arg_14);
        if (tmp_add_expr_left_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 120;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_29;
        }
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {
            Py_DECREF(tmp_add_expr_left_12);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[7]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 120;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_29;
        }

        tmp_add_expr_right_12 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_add_expr_left_11 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_12, tmp_add_expr_right_12);
        Py_DECREF(tmp_add_expr_left_12);
        if (tmp_add_expr_left_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 120;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_29;
        }
        CHECK_OBJECT(generator_heap->var_d);
        tmp_unicode_arg_15 = generator_heap->var_d;
        tmp_add_expr_right_11 = BUILTIN_UNICODE1(tmp_unicode_arg_15);
        if (tmp_add_expr_right_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_add_expr_left_11);

            generator_heap->exception_lineno = 120;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_29;
        }
        tmp_expression_value_14 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_11, tmp_add_expr_right_11);
        Py_DECREF(tmp_add_expr_left_11);
        Py_DECREF(tmp_add_expr_right_11);
        if (tmp_expression_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 120;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_29;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_add_expr_left_11, sizeof(PyObject *), &tmp_add_expr_right_11, sizeof(PyObject *), &tmp_add_expr_left_12, sizeof(PyObject *), &tmp_add_expr_right_12, sizeof(PyObject *), &tmp_unicode_arg_14, sizeof(PyObject *), &tmp_unicode_arg_15, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 9;
        return tmp_expression_value_14;
        yield_return_9:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_add_expr_left_11, sizeof(PyObject *), &tmp_add_expr_right_11, sizeof(PyObject *), &tmp_add_expr_left_12, sizeof(PyObject *), &tmp_add_expr_right_12, sizeof(PyObject *), &tmp_unicode_arg_14, sizeof(PyObject *), &tmp_unicode_arg_15, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 120;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_29;
        }
        tmp_yield_result_9 = yield_return_value;
        Py_DECREF(tmp_yield_result_9);
    }
    branch_end_7:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 116;
        generator_heap->type_description_1 = "ccooooooo";
        goto try_except_handler_29;
    }
    goto loop_start_10;
    loop_end_10:;
    goto try_end_25;
    // Exception handler code:
    try_except_handler_29:;
    generator_heap->exception_keeper_type_29 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_29 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_29 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_29 = generator_heap->exception_lineno;
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
    generator_heap->exception_type = generator_heap->exception_keeper_type_29;
    generator_heap->exception_value = generator_heap->exception_keeper_value_29;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_29;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_29;

    goto try_except_handler_20;
    // End of try:
    try_end_25:;
    Py_XDECREF(generator_heap->tmp_for_loop_6__iter_value);
    generator_heap->tmp_for_loop_6__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_6__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_6__for_iterator);
    generator_heap->tmp_for_loop_6__for_iterator = NULL;
    {
        PyObject *tmp_called_instance_7;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_1;
        if (generator_heap->var_seen == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[8]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 121;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_20;
        }

        tmp_called_instance_7 = generator_heap->var_seen;
        CHECK_OBJECT(generator_heap->var_s);
        tmp_args_element_value_1 = generator_heap->var_s;
        generator->m_frame->m_frame.f_lineno = 121;
        tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_7, mod_consts[9], tmp_args_element_value_1);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 121;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_20;
        }
        Py_DECREF(tmp_call_result_4);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 107;
        generator_heap->type_description_1 = "ccooooooo";
        goto try_except_handler_20;
    }
    goto loop_start_7;
    loop_end_7:;
    goto try_end_26;
    // Exception handler code:
    try_except_handler_20:;
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

    goto frame_exception_exit_1;
    // End of try:
    try_end_26:;
    Py_XDECREF(generator_heap->tmp_for_loop_5__iter_value);
    generator_heap->tmp_for_loop_5__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_5__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_5__for_iterator);
    generator_heap->tmp_for_loop_5__for_iterator = NULL;
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_79;
        tmp_assign_source_79 = PySet_New(NULL);
        assert(generator_heap->var_seen == NULL);
        generator_heap->var_seen = tmp_assign_source_79;
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_iter_arg_21;
        PyObject *tmp_called_instance_8;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[1]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 124;
            generator_heap->type_description_1 = "ccooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_8 = Nuitka_Cell_GET(generator->m_closure[0]);
        generator->m_frame->m_frame.f_lineno = 124;
        tmp_iter_arg_21 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_8, mod_consts[4]);
        if (tmp_iter_arg_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 124;
            generator_heap->type_description_1 = "ccooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_80 = MAKE_ITERATOR(tstate, tmp_iter_arg_21);
        Py_DECREF(tmp_iter_arg_21);
        if (tmp_assign_source_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 124;
            generator_heap->type_description_1 = "ccooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->tmp_for_loop_7__for_iterator == NULL);
        generator_heap->tmp_for_loop_7__for_iterator = tmp_assign_source_80;
    }
    // Tried code:
    loop_start_11:;
    {
        PyObject *tmp_next_source_11;
        PyObject *tmp_assign_source_81;
        CHECK_OBJECT(generator_heap->tmp_for_loop_7__for_iterator);
        tmp_next_source_11 = generator_heap->tmp_for_loop_7__for_iterator;
        tmp_assign_source_81 = ITERATOR_NEXT(tmp_next_source_11);
        if (tmp_assign_source_81 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_11;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "ccooooooo";
                generator_heap->exception_lineno = 124;
                goto try_except_handler_32;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_7__iter_value;
            generator_heap->tmp_for_loop_7__iter_value = tmp_assign_source_81;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_iter_arg_22;
        CHECK_OBJECT(generator_heap->tmp_for_loop_7__iter_value);
        tmp_iter_arg_22 = generator_heap->tmp_for_loop_7__iter_value;
        tmp_assign_source_82 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_22);
        if (tmp_assign_source_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 124;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_33;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_7__source_iter;
            generator_heap->tmp_tuple_unpack_7__source_iter = tmp_assign_source_82;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_83;
        PyObject *tmp_unpack_21;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_7__source_iter);
        tmp_unpack_21 = generator_heap->tmp_tuple_unpack_7__source_iter;
        tmp_assign_source_83 = UNPACK_NEXT(tstate, tmp_unpack_21, 0, 2);
        if (tmp_assign_source_83 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooo";
            generator_heap->exception_lineno = 124;
            goto try_except_handler_34;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_7__element_1;
            generator_heap->tmp_tuple_unpack_7__element_1 = tmp_assign_source_83;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_unpack_22;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_7__source_iter);
        tmp_unpack_22 = generator_heap->tmp_tuple_unpack_7__source_iter;
        tmp_assign_source_84 = UNPACK_NEXT(tstate, tmp_unpack_22, 1, 2);
        if (tmp_assign_source_84 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooo";
            generator_heap->exception_lineno = 124;
            goto try_except_handler_34;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_7__element_2;
            generator_heap->tmp_tuple_unpack_7__element_2 = tmp_assign_source_84;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_11;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_7__source_iter);
        tmp_iterator_name_11 = generator_heap->tmp_tuple_unpack_7__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_11); assert(HAS_ITERNEXT(tmp_iterator_name_11));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_11)->tp_iternext)(tmp_iterator_name_11);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "ccooooooo";
                    generator_heap->exception_lineno = 124;
                    goto try_except_handler_34;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[5];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "ccooooooo";
            generator_heap->exception_lineno = 124;
            goto try_except_handler_34;
        }
    }
    goto try_end_27;
    // Exception handler code:
    try_except_handler_34:;
    generator_heap->exception_keeper_type_31 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_31 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_31 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_31 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_7__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_7__source_iter);
    generator_heap->tmp_tuple_unpack_7__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_31;
    generator_heap->exception_value = generator_heap->exception_keeper_value_31;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_31;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_31;

    goto try_except_handler_33;
    // End of try:
    try_end_27:;
    goto try_end_28;
    // Exception handler code:
    try_except_handler_33:;
    generator_heap->exception_keeper_type_32 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_32 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_32 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_32 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_7__element_1);
    generator_heap->tmp_tuple_unpack_7__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_7__element_2);
    generator_heap->tmp_tuple_unpack_7__element_2 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_32;
    generator_heap->exception_value = generator_heap->exception_keeper_value_32;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_32;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_32;

    goto try_except_handler_32;
    // End of try:
    try_end_28:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_7__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_7__source_iter);
    generator_heap->tmp_tuple_unpack_7__source_iter = NULL;
    {
        PyObject *tmp_assign_source_85;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_7__element_1);
        tmp_assign_source_85 = generator_heap->tmp_tuple_unpack_7__element_1;
        {
            PyObject *old = generator_heap->var_s;
            generator_heap->var_s = tmp_assign_source_85;
            Py_INCREF(generator_heap->var_s);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_7__element_1);
    generator_heap->tmp_tuple_unpack_7__element_1 = NULL;

    {
        PyObject *tmp_assign_source_86;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_7__element_2);
        tmp_assign_source_86 = generator_heap->tmp_tuple_unpack_7__element_2;
        {
            PyObject *old = generator_heap->var_nbrs;
            generator_heap->var_nbrs = tmp_assign_source_86;
            Py_INCREF(generator_heap->var_nbrs);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_7__element_2);
    generator_heap->tmp_tuple_unpack_7__element_2 = NULL;

    {
        PyObject *tmp_assign_source_87;
        // Tried code:
        {
            PyObject *tmp_assign_source_88;
            PyObject *tmp_iter_arg_23;
            PyObject *tmp_called_value_6;
            PyObject *tmp_expression_value_15;
            CHECK_OBJECT(generator_heap->var_nbrs);
            tmp_expression_value_15 = generator_heap->var_nbrs;
            tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[6]);
            if (tmp_called_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 125;
                generator_heap->type_description_1 = "ccooooooo";
                goto try_except_handler_35;
            }
            generator->m_frame->m_frame.f_lineno = 125;
            tmp_iter_arg_23 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_6);
            Py_DECREF(tmp_called_value_6);
            if (tmp_iter_arg_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 125;
                generator_heap->type_description_1 = "ccooooooo";
                goto try_except_handler_35;
            }
            tmp_assign_source_88 = MAKE_ITERATOR(tstate, tmp_iter_arg_23);
            Py_DECREF(tmp_iter_arg_23);
            if (tmp_assign_source_88 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 125;
                generator_heap->type_description_1 = "ccooooooo";
                goto try_except_handler_35;
            }
            {
                PyObject *old = generator_heap->tmp_listcomp_3__$0;
                generator_heap->tmp_listcomp_3__$0 = tmp_assign_source_88;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_89;
            tmp_assign_source_89 = MAKE_LIST_EMPTY(0);
            {
                PyObject *old = generator_heap->tmp_listcomp_3__contraction;
                generator_heap->tmp_listcomp_3__contraction = tmp_assign_source_89;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        loop_start_12:;
        {
            PyObject *tmp_next_source_12;
            PyObject *tmp_assign_source_90;
            CHECK_OBJECT(generator_heap->tmp_listcomp_3__$0);
            tmp_next_source_12 = generator_heap->tmp_listcomp_3__$0;
            tmp_assign_source_90 = ITERATOR_NEXT(tmp_next_source_12);
            if (tmp_assign_source_90 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_12;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                    generator_heap->type_description_1 = "ccooooooo";
                    generator_heap->exception_lineno = 125;
                    goto try_except_handler_36;
                }
            }

            {
                PyObject *old = generator_heap->tmp_listcomp_3__iter_value_0;
                generator_heap->tmp_listcomp_3__iter_value_0 = tmp_assign_source_90;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_91;
            PyObject *tmp_iter_arg_24;
            CHECK_OBJECT(generator_heap->tmp_listcomp_3__iter_value_0);
            tmp_iter_arg_24 = generator_heap->tmp_listcomp_3__iter_value_0;
            tmp_assign_source_91 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_24);
            if (tmp_assign_source_91 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 125;
                generator_heap->type_description_1 = "ccooooooo";
                goto try_except_handler_37;
            }
            {
                PyObject *old = generator_heap->tmp_listcomp$tuple_unpack_5__source_iter;
                generator_heap->tmp_listcomp$tuple_unpack_5__source_iter = tmp_assign_source_91;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_92;
            PyObject *tmp_unpack_23;
            CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_5__source_iter);
            tmp_unpack_23 = generator_heap->tmp_listcomp$tuple_unpack_5__source_iter;
            tmp_assign_source_92 = UNPACK_NEXT(tstate, tmp_unpack_23, 0, 2);
            if (tmp_assign_source_92 == NULL) {
                if (!HAS_ERROR_OCCURRED(tstate)) {
                    generator_heap->exception_type = PyExc_StopIteration;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = NULL;
                    generator_heap->exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                }


                generator_heap->type_description_1 = "ccooooooo";
                generator_heap->exception_lineno = 125;
                goto try_except_handler_38;
            }
            {
                PyObject *old = generator_heap->tmp_listcomp$tuple_unpack_5__element_1;
                generator_heap->tmp_listcomp$tuple_unpack_5__element_1 = tmp_assign_source_92;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_93;
            PyObject *tmp_unpack_24;
            CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_5__source_iter);
            tmp_unpack_24 = generator_heap->tmp_listcomp$tuple_unpack_5__source_iter;
            tmp_assign_source_93 = UNPACK_NEXT(tstate, tmp_unpack_24, 1, 2);
            if (tmp_assign_source_93 == NULL) {
                if (!HAS_ERROR_OCCURRED(tstate)) {
                    generator_heap->exception_type = PyExc_StopIteration;
                    Py_INCREF(generator_heap->exception_type);
                    generator_heap->exception_value = NULL;
                    generator_heap->exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                }


                generator_heap->type_description_1 = "ccooooooo";
                generator_heap->exception_lineno = 125;
                goto try_except_handler_38;
            }
            {
                PyObject *old = generator_heap->tmp_listcomp$tuple_unpack_5__element_2;
                generator_heap->tmp_listcomp$tuple_unpack_5__element_2 = tmp_assign_source_93;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_12;
            CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_5__source_iter);
            tmp_iterator_name_12 = generator_heap->tmp_listcomp$tuple_unpack_5__source_iter;
            // Check if iterator has left-over elements.
            CHECK_OBJECT(tmp_iterator_name_12); assert(HAS_ITERNEXT(tmp_iterator_name_12));

            generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_12)->tp_iternext)(tmp_iterator_name_12);

            if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
                PyObject *error = GET_ERROR_OCCURRED(tstate);

                if (error != NULL) {
                    if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                        CLEAR_ERROR_OCCURRED(tstate);
                    } else {
                        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                        generator_heap->type_description_1 = "ccooooooo";
                        generator_heap->exception_lineno = 125;
                        goto try_except_handler_38;
                    }
                }
            } else {
                Py_DECREF(generator_heap->tmp_iterator_attempt);

                generator_heap->exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                generator_heap->exception_value = mod_consts[5];
                Py_INCREF(generator_heap->exception_value);
                generator_heap->exception_tb = NULL;

                generator_heap->type_description_1 = "ccooooooo";
                generator_heap->exception_lineno = 125;
                goto try_except_handler_38;
            }
        }
        goto try_end_29;
        // Exception handler code:
        try_except_handler_38:;
        generator_heap->exception_keeper_type_33 = generator_heap->exception_type;
        generator_heap->exception_keeper_value_33 = generator_heap->exception_value;
        generator_heap->exception_keeper_tb_33 = generator_heap->exception_tb;
        generator_heap->exception_keeper_lineno_33 = generator_heap->exception_lineno;
        generator_heap->exception_type = NULL;
        generator_heap->exception_value = NULL;
        generator_heap->exception_tb = NULL;
        generator_heap->exception_lineno = 0;

        CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_5__source_iter);
        Py_DECREF(generator_heap->tmp_listcomp$tuple_unpack_5__source_iter);
        generator_heap->tmp_listcomp$tuple_unpack_5__source_iter = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_33;
        generator_heap->exception_value = generator_heap->exception_keeper_value_33;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_33;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_33;

        goto try_except_handler_37;
        // End of try:
        try_end_29:;
        goto try_end_30;
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

        Py_XDECREF(generator_heap->tmp_listcomp$tuple_unpack_5__element_1);
        generator_heap->tmp_listcomp$tuple_unpack_5__element_1 = NULL;
        Py_XDECREF(generator_heap->tmp_listcomp$tuple_unpack_5__element_2);
        generator_heap->tmp_listcomp$tuple_unpack_5__element_2 = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_34;
        generator_heap->exception_value = generator_heap->exception_keeper_value_34;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_34;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_34;

        goto try_except_handler_36;
        // End of try:
        try_end_30:;
        CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_5__source_iter);
        Py_DECREF(generator_heap->tmp_listcomp$tuple_unpack_5__source_iter);
        generator_heap->tmp_listcomp$tuple_unpack_5__source_iter = NULL;
        {
            PyObject *tmp_assign_source_94;
            CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_5__element_1);
            tmp_assign_source_94 = generator_heap->tmp_listcomp$tuple_unpack_5__element_1;
            {
                PyObject *old = generator_heap->outline_2_var_u;
                generator_heap->outline_2_var_u = tmp_assign_source_94;
                Py_INCREF(generator_heap->outline_2_var_u);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(generator_heap->tmp_listcomp$tuple_unpack_5__element_1);
        generator_heap->tmp_listcomp$tuple_unpack_5__element_1 = NULL;

        {
            PyObject *tmp_assign_source_95;
            CHECK_OBJECT(generator_heap->tmp_listcomp$tuple_unpack_5__element_2);
            tmp_assign_source_95 = generator_heap->tmp_listcomp$tuple_unpack_5__element_2;
            {
                PyObject *old = generator_heap->outline_2_var_d;
                generator_heap->outline_2_var_d = tmp_assign_source_95;
                Py_INCREF(generator_heap->outline_2_var_d);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(generator_heap->tmp_listcomp$tuple_unpack_5__element_2);
        generator_heap->tmp_listcomp$tuple_unpack_5__element_2 = NULL;

        {
            bool tmp_condition_result_8;
            PyObject *tmp_cmp_expr_left_5;
            PyObject *tmp_cmp_expr_right_5;
            CHECK_OBJECT(generator_heap->outline_2_var_u);
            tmp_cmp_expr_left_5 = generator_heap->outline_2_var_u;
            if (generator_heap->var_seen == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[8]);
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

                generator_heap->exception_lineno = 125;
                generator_heap->type_description_1 = "ccooooooo";
                goto try_except_handler_36;
            }

            tmp_cmp_expr_right_5 = generator_heap->var_seen;
            generator_heap->tmp_res = PySequence_Contains(tmp_cmp_expr_right_5, tmp_cmp_expr_left_5);
            if (generator_heap->tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 125;
                generator_heap->type_description_1 = "ccooooooo";
                goto try_except_handler_36;
            }
            tmp_condition_result_8 = (generator_heap->tmp_res == 0) ? true : false;
            if (tmp_condition_result_8 != false) {
                goto branch_yes_8;
            } else {
                goto branch_no_8;
            }
        }
        branch_yes_8:;
        {
            PyObject *tmp_append_list_3;
            PyObject *tmp_append_value_3;
            PyObject *tmp_tuple_element_3;
            CHECK_OBJECT(generator_heap->tmp_listcomp_3__contraction);
            tmp_append_list_3 = generator_heap->tmp_listcomp_3__contraction;
            CHECK_OBJECT(generator_heap->outline_2_var_u);
            tmp_tuple_element_3 = generator_heap->outline_2_var_u;
            tmp_append_value_3 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_append_value_3, 0, tmp_tuple_element_3);
            CHECK_OBJECT(generator_heap->outline_2_var_d);
            tmp_tuple_element_3 = generator_heap->outline_2_var_d;
            PyTuple_SET_ITEM0(tmp_append_value_3, 1, tmp_tuple_element_3);
            generator_heap->tmp_result = LIST_APPEND1(tmp_append_list_3, tmp_append_value_3);
            if (generator_heap->tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 125;
                generator_heap->type_description_1 = "ccooooooo";
                goto try_except_handler_36;
            }
        }
        branch_no_8:;
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 125;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_36;
        }
        goto loop_start_12;
        loop_end_12:;
        CHECK_OBJECT(generator_heap->tmp_listcomp_3__contraction);
        tmp_assign_source_87 = generator_heap->tmp_listcomp_3__contraction;
        Py_INCREF(tmp_assign_source_87);
        goto try_return_handler_36;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_36:;
        CHECK_OBJECT(generator_heap->tmp_listcomp_3__$0);
        Py_DECREF(generator_heap->tmp_listcomp_3__$0);
        generator_heap->tmp_listcomp_3__$0 = NULL;
        CHECK_OBJECT(generator_heap->tmp_listcomp_3__contraction);
        Py_DECREF(generator_heap->tmp_listcomp_3__contraction);
        generator_heap->tmp_listcomp_3__contraction = NULL;
        Py_XDECREF(generator_heap->tmp_listcomp_3__iter_value_0);
        generator_heap->tmp_listcomp_3__iter_value_0 = NULL;
        goto try_return_handler_35;
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

        CHECK_OBJECT(generator_heap->tmp_listcomp_3__$0);
        Py_DECREF(generator_heap->tmp_listcomp_3__$0);
        generator_heap->tmp_listcomp_3__$0 = NULL;
        CHECK_OBJECT(generator_heap->tmp_listcomp_3__contraction);
        Py_DECREF(generator_heap->tmp_listcomp_3__contraction);
        generator_heap->tmp_listcomp_3__contraction = NULL;
        Py_XDECREF(generator_heap->tmp_listcomp_3__iter_value_0);
        generator_heap->tmp_listcomp_3__iter_value_0 = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_35;
        generator_heap->exception_value = generator_heap->exception_keeper_value_35;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_35;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_35;

        goto try_except_handler_35;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_35:;
        Py_XDECREF(generator_heap->outline_2_var_u);
        generator_heap->outline_2_var_u = NULL;
        Py_XDECREF(generator_heap->outline_2_var_d);
        generator_heap->outline_2_var_d = NULL;
        goto outline_result_3;
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

        Py_XDECREF(generator_heap->outline_2_var_u);
        generator_heap->outline_2_var_u = NULL;
        Py_XDECREF(generator_heap->outline_2_var_d);
        generator_heap->outline_2_var_d = NULL;
        // Re-raise.
        generator_heap->exception_type = generator_heap->exception_keeper_type_36;
        generator_heap->exception_value = generator_heap->exception_keeper_value_36;
        generator_heap->exception_tb = generator_heap->exception_keeper_tb_36;
        generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_36;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        generator_heap->exception_lineno = 125;
        goto try_except_handler_32;
        outline_result_3:;
        {
            PyObject *old = generator_heap->var_nbr_edges;
            generator_heap->var_nbr_edges = tmp_assign_source_87;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_len_arg_4;
        CHECK_OBJECT(generator_heap->var_nbr_edges);
        tmp_len_arg_4 = generator_heap->var_nbr_edges;
        tmp_assign_source_96 = BUILTIN_LEN(tstate, tmp_len_arg_4);
        if (tmp_assign_source_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 126;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_32;
        }
        {
            PyObject *old = generator_heap->var_deg;
            generator_heap->var_deg = tmp_assign_source_96;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_16;
        PyObject *tmp_add_expr_left_13;
        PyObject *tmp_add_expr_right_13;
        PyObject *tmp_add_expr_left_14;
        PyObject *tmp_add_expr_right_14;
        PyObject *tmp_unicode_arg_16;
        PyObject *tmp_unicode_arg_17;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_10;
        CHECK_OBJECT(generator_heap->var_s);
        tmp_unicode_arg_16 = generator_heap->var_s;
        tmp_add_expr_left_14 = BUILTIN_UNICODE1(tmp_unicode_arg_16);
        if (tmp_add_expr_left_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 127;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_32;
        }
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {
            Py_DECREF(tmp_add_expr_left_14);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[7]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 127;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_32;
        }

        tmp_add_expr_right_14 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_add_expr_left_13 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_14, tmp_add_expr_right_14);
        Py_DECREF(tmp_add_expr_left_14);
        if (tmp_add_expr_left_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 127;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_32;
        }
        CHECK_OBJECT(generator_heap->var_deg);
        tmp_unicode_arg_17 = generator_heap->var_deg;
        tmp_add_expr_right_13 = BUILTIN_UNICODE1(tmp_unicode_arg_17);
        if (tmp_add_expr_right_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_add_expr_left_13);

            generator_heap->exception_lineno = 127;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_32;
        }
        tmp_expression_value_16 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_13, tmp_add_expr_right_13);
        Py_DECREF(tmp_add_expr_left_13);
        Py_DECREF(tmp_add_expr_right_13);
        if (tmp_expression_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 127;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_32;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_add_expr_left_13, sizeof(PyObject *), &tmp_add_expr_right_13, sizeof(PyObject *), &tmp_add_expr_left_14, sizeof(PyObject *), &tmp_add_expr_right_14, sizeof(PyObject *), &tmp_unicode_arg_16, sizeof(PyObject *), &tmp_unicode_arg_17, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 10;
        return tmp_expression_value_16;
        yield_return_10:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_add_expr_left_13, sizeof(PyObject *), &tmp_add_expr_right_13, sizeof(PyObject *), &tmp_add_expr_left_14, sizeof(PyObject *), &tmp_add_expr_right_14, sizeof(PyObject *), &tmp_unicode_arg_16, sizeof(PyObject *), &tmp_unicode_arg_17, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 127;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_32;
        }
        tmp_yield_result_10 = yield_return_value;
        Py_DECREF(tmp_yield_result_10);
    }
    {
        PyObject *tmp_assign_source_97;
        PyObject *tmp_iter_arg_25;
        CHECK_OBJECT(generator_heap->var_nbr_edges);
        tmp_iter_arg_25 = generator_heap->var_nbr_edges;
        tmp_assign_source_97 = MAKE_ITERATOR(tstate, tmp_iter_arg_25);
        if (tmp_assign_source_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 128;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_32;
        }
        {
            PyObject *old = generator_heap->tmp_for_loop_8__for_iterator;
            generator_heap->tmp_for_loop_8__for_iterator = tmp_assign_source_97;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_13:;
    {
        PyObject *tmp_next_source_13;
        PyObject *tmp_assign_source_98;
        CHECK_OBJECT(generator_heap->tmp_for_loop_8__for_iterator);
        tmp_next_source_13 = generator_heap->tmp_for_loop_8__for_iterator;
        tmp_assign_source_98 = ITERATOR_NEXT(tmp_next_source_13);
        if (tmp_assign_source_98 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_13;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "ccooooooo";
                generator_heap->exception_lineno = 128;
                goto try_except_handler_39;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_8__iter_value;
            generator_heap->tmp_for_loop_8__iter_value = tmp_assign_source_98;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_99;
        PyObject *tmp_iter_arg_26;
        CHECK_OBJECT(generator_heap->tmp_for_loop_8__iter_value);
        tmp_iter_arg_26 = generator_heap->tmp_for_loop_8__iter_value;
        tmp_assign_source_99 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_26);
        if (tmp_assign_source_99 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 128;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_40;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_8__source_iter;
            generator_heap->tmp_tuple_unpack_8__source_iter = tmp_assign_source_99;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_100;
        PyObject *tmp_unpack_25;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_8__source_iter);
        tmp_unpack_25 = generator_heap->tmp_tuple_unpack_8__source_iter;
        tmp_assign_source_100 = UNPACK_NEXT(tstate, tmp_unpack_25, 0, 2);
        if (tmp_assign_source_100 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooo";
            generator_heap->exception_lineno = 128;
            goto try_except_handler_41;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_8__element_1;
            generator_heap->tmp_tuple_unpack_8__element_1 = tmp_assign_source_100;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_101;
        PyObject *tmp_unpack_26;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_8__source_iter);
        tmp_unpack_26 = generator_heap->tmp_tuple_unpack_8__source_iter;
        tmp_assign_source_101 = UNPACK_NEXT(tstate, tmp_unpack_26, 1, 2);
        if (tmp_assign_source_101 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "ccooooooo";
            generator_heap->exception_lineno = 128;
            goto try_except_handler_41;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_8__element_2;
            generator_heap->tmp_tuple_unpack_8__element_2 = tmp_assign_source_101;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_13;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_8__source_iter);
        tmp_iterator_name_13 = generator_heap->tmp_tuple_unpack_8__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_13); assert(HAS_ITERNEXT(tmp_iterator_name_13));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_13)->tp_iternext)(tmp_iterator_name_13);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "ccooooooo";
                    generator_heap->exception_lineno = 128;
                    goto try_except_handler_41;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[5];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "ccooooooo";
            generator_heap->exception_lineno = 128;
            goto try_except_handler_41;
        }
    }
    goto try_end_31;
    // Exception handler code:
    try_except_handler_41:;
    generator_heap->exception_keeper_type_37 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_37 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_37 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_37 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_8__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_8__source_iter);
    generator_heap->tmp_tuple_unpack_8__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_37;
    generator_heap->exception_value = generator_heap->exception_keeper_value_37;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_37;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_37;

    goto try_except_handler_40;
    // End of try:
    try_end_31:;
    goto try_end_32;
    // Exception handler code:
    try_except_handler_40:;
    generator_heap->exception_keeper_type_38 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_38 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_38 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_38 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_8__element_1);
    generator_heap->tmp_tuple_unpack_8__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_8__element_2);
    generator_heap->tmp_tuple_unpack_8__element_2 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_38;
    generator_heap->exception_value = generator_heap->exception_keeper_value_38;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_38;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_38;

    goto try_except_handler_39;
    // End of try:
    try_end_32:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_8__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_8__source_iter);
    generator_heap->tmp_tuple_unpack_8__source_iter = NULL;
    {
        PyObject *tmp_assign_source_102;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_8__element_1);
        tmp_assign_source_102 = generator_heap->tmp_tuple_unpack_8__element_1;
        {
            PyObject *old = generator_heap->var_u;
            generator_heap->var_u = tmp_assign_source_102;
            Py_INCREF(generator_heap->var_u);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_8__element_1);
    generator_heap->tmp_tuple_unpack_8__element_1 = NULL;

    {
        PyObject *tmp_assign_source_103;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_8__element_2);
        tmp_assign_source_103 = generator_heap->tmp_tuple_unpack_8__element_2;
        {
            PyObject *old = generator_heap->var_d;
            generator_heap->var_d = tmp_assign_source_103;
            Py_INCREF(generator_heap->var_d);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_8__element_2);
    generator_heap->tmp_tuple_unpack_8__element_2 = NULL;

    {
        bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        CHECK_OBJECT(generator_heap->var_d);
        tmp_cmp_expr_left_6 = generator_heap->var_d;
        tmp_cmp_expr_right_6 = Py_None;
        tmp_condition_result_9 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_expression_value_17;
        PyObject *tmp_unicode_arg_18;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_11;
        CHECK_OBJECT(generator_heap->var_u);
        tmp_unicode_arg_18 = generator_heap->var_u;
        tmp_expression_value_17 = BUILTIN_UNICODE1(tmp_unicode_arg_18);
        if (tmp_expression_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 130;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_39;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_unicode_arg_18, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 11;
        return tmp_expression_value_17;
        yield_return_11:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_unicode_arg_18, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 130;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_39;
        }
        tmp_yield_result_11 = yield_return_value;
        Py_DECREF(tmp_yield_result_11);
    }
    goto branch_end_9;
    branch_no_9:;
    {
        PyObject *tmp_expression_value_18;
        PyObject *tmp_add_expr_left_15;
        PyObject *tmp_add_expr_right_15;
        PyObject *tmp_add_expr_left_16;
        PyObject *tmp_add_expr_right_16;
        PyObject *tmp_unicode_arg_19;
        PyObject *tmp_unicode_arg_20;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_12;
        CHECK_OBJECT(generator_heap->var_u);
        tmp_unicode_arg_19 = generator_heap->var_u;
        tmp_add_expr_left_16 = BUILTIN_UNICODE1(tmp_unicode_arg_19);
        if (tmp_add_expr_left_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 132;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_39;
        }
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {
            Py_DECREF(tmp_add_expr_left_16);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[7]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 132;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_39;
        }

        tmp_add_expr_right_16 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_add_expr_left_15 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_16, tmp_add_expr_right_16);
        Py_DECREF(tmp_add_expr_left_16);
        if (tmp_add_expr_left_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 132;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_39;
        }
        CHECK_OBJECT(generator_heap->var_d);
        tmp_unicode_arg_20 = generator_heap->var_d;
        tmp_add_expr_right_15 = BUILTIN_UNICODE1(tmp_unicode_arg_20);
        if (tmp_add_expr_right_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_add_expr_left_15);

            generator_heap->exception_lineno = 132;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_39;
        }
        tmp_expression_value_18 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_15, tmp_add_expr_right_15);
        Py_DECREF(tmp_add_expr_left_15);
        Py_DECREF(tmp_add_expr_right_15);
        if (tmp_expression_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 132;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_39;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_add_expr_left_15, sizeof(PyObject *), &tmp_add_expr_right_15, sizeof(PyObject *), &tmp_add_expr_left_16, sizeof(PyObject *), &tmp_add_expr_right_16, sizeof(PyObject *), &tmp_unicode_arg_19, sizeof(PyObject *), &tmp_unicode_arg_20, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 12;
        return tmp_expression_value_18;
        yield_return_12:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_add_expr_left_15, sizeof(PyObject *), &tmp_add_expr_right_15, sizeof(PyObject *), &tmp_add_expr_left_16, sizeof(PyObject *), &tmp_add_expr_right_16, sizeof(PyObject *), &tmp_unicode_arg_19, sizeof(PyObject *), &tmp_unicode_arg_20, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 132;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_39;
        }
        tmp_yield_result_12 = yield_return_value;
        Py_DECREF(tmp_yield_result_12);
    }
    branch_end_9:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 128;
        generator_heap->type_description_1 = "ccooooooo";
        goto try_except_handler_39;
    }
    goto loop_start_13;
    loop_end_13:;
    goto try_end_33;
    // Exception handler code:
    try_except_handler_39:;
    generator_heap->exception_keeper_type_39 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_39 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_39 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_39 = generator_heap->exception_lineno;
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
    generator_heap->exception_type = generator_heap->exception_keeper_type_39;
    generator_heap->exception_value = generator_heap->exception_keeper_value_39;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_39;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_39;

    goto try_except_handler_32;
    // End of try:
    try_end_33:;
    Py_XDECREF(generator_heap->tmp_for_loop_8__iter_value);
    generator_heap->tmp_for_loop_8__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_8__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_8__for_iterator);
    generator_heap->tmp_for_loop_8__for_iterator = NULL;
    {
        PyObject *tmp_called_instance_9;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_2;
        if (generator_heap->var_seen == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[8]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 133;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_32;
        }

        tmp_called_instance_9 = generator_heap->var_seen;
        CHECK_OBJECT(generator_heap->var_s);
        tmp_args_element_value_2 = generator_heap->var_s;
        generator->m_frame->m_frame.f_lineno = 133;
        tmp_call_result_5 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_9, mod_consts[9], tmp_args_element_value_2);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 133;
            generator_heap->type_description_1 = "ccooooooo";
            goto try_except_handler_32;
        }
        Py_DECREF(tmp_call_result_5);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 124;
        generator_heap->type_description_1 = "ccooooooo";
        goto try_except_handler_32;
    }
    goto loop_start_11;
    loop_end_11:;
    goto try_end_34;
    // Exception handler code:
    try_except_handler_32:;
    generator_heap->exception_keeper_type_40 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_40 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_40 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_40 = generator_heap->exception_lineno;
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
    generator_heap->exception_type = generator_heap->exception_keeper_type_40;
    generator_heap->exception_value = generator_heap->exception_keeper_value_40;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_40;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_40;

    goto frame_exception_exit_1;
    // End of try:
    try_end_34:;
    Py_XDECREF(generator_heap->tmp_for_loop_7__iter_value);
    generator_heap->tmp_for_loop_7__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_7__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_7__for_iterator);
    generator_heap->tmp_for_loop_7__for_iterator = NULL;
    branch_end_5:;
    branch_end_1:;

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
            generator->m_closure[1],
            generator_heap->var_s,
            generator_heap->var_nbrs,
            generator_heap->var_nbr_edges,
            generator_heap->var_deg,
            generator_heap->var_u,
            generator_heap->var_d,
            generator_heap->var_seen
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
    goto try_end_35;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_41 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_41 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_41 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_41 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_s);
    generator_heap->var_s = NULL;
    Py_XDECREF(generator_heap->var_nbrs);
    generator_heap->var_nbrs = NULL;
    Py_XDECREF(generator_heap->var_nbr_edges);
    generator_heap->var_nbr_edges = NULL;
    Py_XDECREF(generator_heap->var_deg);
    generator_heap->var_deg = NULL;
    Py_XDECREF(generator_heap->var_u);
    generator_heap->var_u = NULL;
    Py_XDECREF(generator_heap->var_d);
    generator_heap->var_d = NULL;
    Py_XDECREF(generator_heap->var_seen);
    generator_heap->var_seen = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_41;
    generator_heap->exception_value = generator_heap->exception_keeper_value_41;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_41;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_41;

    goto function_exception_exit;
    // End of try:
    try_end_35:;
    Py_XDECREF(generator_heap->var_s);
    generator_heap->var_s = NULL;
    Py_XDECREF(generator_heap->var_nbrs);
    generator_heap->var_nbrs = NULL;
    Py_XDECREF(generator_heap->var_nbr_edges);
    generator_heap->var_nbr_edges = NULL;
    Py_XDECREF(generator_heap->var_deg);
    generator_heap->var_deg = NULL;
    Py_XDECREF(generator_heap->var_u);
    generator_heap->var_u = NULL;
    Py_XDECREF(generator_heap->var_d);
    generator_heap->var_d = NULL;
    Py_XDECREF(generator_heap->var_seen);
    generator_heap->var_seen = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(tstate, generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_networkx$readwrite$multiline_adjlist$$$function__1_generate_multiline_adjlist$$$genobj__1_generate_multiline_adjlist(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        networkx$readwrite$multiline_adjlist$$$function__1_generate_multiline_adjlist$$$genobj__1_generate_multiline_adjlist_context,
        module_networkx$readwrite$multiline_adjlist,
        mod_consts[10],
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        codeobj_4b10a249262c902bb64e9dfd65c6070b,
        closure,
        2,
#if 1
        sizeof(struct networkx$readwrite$multiline_adjlist$$$function__1_generate_multiline_adjlist$$$genobj__1_generate_multiline_adjlist_locals)
#else
        0
#endif
    );
}


static PyObject *impl_networkx$readwrite$multiline_adjlist$$$function__2_write_multiline_adjlist(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_G = python_pars[0];
    PyObject *par_path = python_pars[1];
    PyObject *par_delimiter = python_pars[2];
    PyObject *par_comments = python_pars[3];
    PyObject *par_encoding = python_pars[4];
    PyObject *var_sys = NULL;
    PyObject *var_time = NULL;
    PyObject *var_pargs = NULL;
    PyObject *var_header = NULL;
    PyObject *var_multiline = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_72cdaeef78023934ac46cb97f3f677de;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_72cdaeef78023934ac46cb97f3f677de = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_1 == NULL));
        assert(var_sys == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_sys = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_72cdaeef78023934ac46cb97f3f677de)) {
        Py_XDECREF(cache_frame_72cdaeef78023934ac46cb97f3f677de);

#if _DEBUG_REFCOUNTS
        if (cache_frame_72cdaeef78023934ac46cb97f3f677de == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_72cdaeef78023934ac46cb97f3f677de = MAKE_FUNCTION_FRAME(tstate, codeobj_72cdaeef78023934ac46cb97f3f677de, module_networkx$readwrite$multiline_adjlist, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_72cdaeef78023934ac46cb97f3f677de->m_type_description == NULL);
    frame_72cdaeef78023934ac46cb97f3f677de = cache_frame_72cdaeef78023934ac46cb97f3f677de;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_72cdaeef78023934ac46cb97f3f677de);
    assert(Py_REFCNT(frame_72cdaeef78023934ac46cb97f3f677de) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[11];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_networkx$readwrite$multiline_adjlist;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[12];
        frame_72cdaeef78023934ac46cb97f3f677de->m_frame.f_lineno = 177;
        tmp_assign_source_2 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_time == NULL);
        var_time = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_comments);
        tmp_add_expr_left_1 = par_comments;
        tmp_str_arg_value_1 = mod_consts[13];
        CHECK_OBJECT(var_sys);
        tmp_expression_value_1 = var_sys;
        tmp_iterable_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[14]);
        if (tmp_iterable_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
        Py_DECREF(tmp_iterable_value_1);
        if (tmp_add_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_pargs == NULL);
        var_pargs = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        PyObject *tmp_add_expr_left_5;
        PyObject *tmp_add_expr_right_5;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_format_value_1;
        PyObject *tmp_format_spec_1;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_string_concat_values_3;
        PyObject *tmp_tuple_element_3;
        CHECK_OBJECT(var_pargs);
        tmp_format_value_1 = var_pargs;
        tmp_format_spec_1 = mod_consts[15];
        tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[16];
        PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
        tmp_add_expr_left_5 = PyUnicode_Join(mod_consts[15], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_add_expr_left_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_comments);
        tmp_add_expr_right_5 = par_comments;
        tmp_add_expr_left_4 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
        Py_DECREF(tmp_add_expr_left_5);
        if (tmp_add_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = mod_consts[17];
        tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_called_value_1;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
            CHECK_OBJECT(var_time);
            tmp_expression_value_2 = var_time;
            tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[18]);
            if (tmp_called_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 183;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_1;
            }
            CHECK_OBJECT(var_time);
            tmp_called_instance_1 = var_time;
            frame_72cdaeef78023934ac46cb97f3f677de->m_frame.f_lineno = 183;
            tmp_args_element_value_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[19]);
            if (tmp_args_element_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_1);

                exception_lineno = 183;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_1;
            }
            frame_72cdaeef78023934ac46cb97f3f677de->m_frame.f_lineno = 183;
            tmp_format_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_format_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 183;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[15];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 183;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[16];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_add_expr_left_4);
        Py_DECREF(tmp_string_concat_values_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_add_expr_right_4 = PyUnicode_Join(mod_consts[15], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_add_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_4);

            exception_lineno = 183;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_4, tmp_add_expr_right_4);
        Py_DECREF(tmp_add_expr_left_4);
        Py_DECREF(tmp_add_expr_right_4);
        if (tmp_add_expr_left_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_comments);
        tmp_add_expr_right_3 = par_comments;
        tmp_add_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
        Py_DECREF(tmp_add_expr_left_3);
        if (tmp_add_expr_left_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_3 = mod_consts[13];
        tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_3;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_format_spec_3;
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
            CHECK_OBJECT(par_G);
            tmp_expression_value_3 = par_G;
            tmp_format_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[20]);
            if (tmp_format_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 185;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_2;
            }
            tmp_format_spec_3 = mod_consts[15];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
            Py_DECREF(tmp_format_value_3);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 185;
                type_description_1 = "oooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[16];
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 2, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_add_expr_left_2);
        Py_DECREF(tmp_string_concat_values_3);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_add_expr_right_2 = PyUnicode_Join(mod_consts[15], tmp_string_concat_values_3);
        Py_DECREF(tmp_string_concat_values_3);
        if (tmp_add_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_2);

            exception_lineno = 185;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        Py_DECREF(tmp_add_expr_right_2);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_header == NULL);
        var_header = tmp_assign_source_4;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_path);
        tmp_expression_value_4 = par_path;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[21]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_header);
        tmp_expression_value_5 = var_header;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[22]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 187;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_encoding);
        tmp_args_element_value_3 = par_encoding;
        frame_72cdaeef78023934ac46cb97f3f677de->m_frame.f_lineno = 187;
        tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 187;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        frame_72cdaeef78023934ac46cb97f3f677de->m_frame.f_lineno = 187;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_networkx$readwrite$multiline_adjlist, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_G);
        tmp_args_element_value_4 = par_G;
        CHECK_OBJECT(par_delimiter);
        tmp_args_element_value_5 = par_delimiter;
        frame_72cdaeef78023934ac46cb97f3f677de->m_frame.f_lineno = 189;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
        }

        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_5;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_6 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooo";
                exception_lineno = 189;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_7 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_multiline;
            var_multiline = tmp_assign_source_7;
            Py_INCREF(var_multiline);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        CHECK_OBJECT(var_multiline);
        tmp_iadd_expr_left_1 = var_multiline;
        tmp_iadd_expr_right_1 = mod_consts[16];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_8 = tmp_iadd_expr_left_1;
        var_multiline = tmp_assign_source_8;

    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_7;
        if (par_path == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[23]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 191;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_6 = par_path;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[21]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_multiline);
        tmp_expression_value_7 = var_multiline;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[22]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 191;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        if (par_encoding == NULL) {
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[24]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 191;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_7 = par_encoding;
        frame_72cdaeef78023934ac46cb97f3f677de->m_frame.f_lineno = 191;
        tmp_args_element_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_6);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 191;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        frame_72cdaeef78023934ac46cb97f3f677de->m_frame.f_lineno = 191;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "oooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 189;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_72cdaeef78023934ac46cb97f3f677de, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_72cdaeef78023934ac46cb97f3f677de->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_72cdaeef78023934ac46cb97f3f677de, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_72cdaeef78023934ac46cb97f3f677de,
        type_description_1,
        par_G,
        par_path,
        par_delimiter,
        par_comments,
        par_encoding,
        var_sys,
        var_time,
        var_pargs,
        var_header,
        var_multiline
    );


    // Release cached frame if used for exception.
    if (frame_72cdaeef78023934ac46cb97f3f677de == cache_frame_72cdaeef78023934ac46cb97f3f677de) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_72cdaeef78023934ac46cb97f3f677de);
        cache_frame_72cdaeef78023934ac46cb97f3f677de = NULL;
    }

    assertFrameObject(frame_72cdaeef78023934ac46cb97f3f677de);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_sys);
    Py_DECREF(var_sys);
    var_sys = NULL;
    CHECK_OBJECT(var_time);
    Py_DECREF(var_time);
    var_time = NULL;
    CHECK_OBJECT(var_pargs);
    Py_DECREF(var_pargs);
    var_pargs = NULL;
    CHECK_OBJECT(var_header);
    Py_DECREF(var_header);
    var_header = NULL;
    Py_XDECREF(var_multiline);
    var_multiline = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(var_sys);
    Py_DECREF(var_sys);
    var_sys = NULL;
    Py_XDECREF(var_time);
    var_time = NULL;
    Py_XDECREF(var_pargs);
    var_pargs = NULL;
    Py_XDECREF(var_header);
    var_header = NULL;
    Py_XDECREF(var_multiline);
    var_multiline = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_G);
    Py_DECREF(par_G);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_delimiter);
    Py_DECREF(par_delimiter);
    CHECK_OBJECT(par_comments);
    Py_DECREF(par_comments);
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_G);
    Py_DECREF(par_G);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_delimiter);
    Py_DECREF(par_delimiter);
    CHECK_OBJECT(par_comments);
    Py_DECREF(par_comments);
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_networkx$readwrite$multiline_adjlist$$$function__3_parse_multiline_adjlist(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_lines = python_pars[0];
    PyObject *par_comments = python_pars[1];
    PyObject *par_delimiter = python_pars[2];
    PyObject *par_create_using = python_pars[3];
    PyObject *par_nodetype = python_pars[4];
    PyObject *par_edgetype = python_pars[5];
    PyObject *var_literal_eval = NULL;
    PyObject *var_G = NULL;
    PyObject *var_line = NULL;
    PyObject *var_p = NULL;
    PyObject *var_u = NULL;
    PyObject *var_deg = NULL;
    PyObject *var_err = NULL;
    PyObject *var_i = NULL;
    PyObject *var_msg = NULL;
    PyObject *var_vlist = NULL;
    PyObject *var_numb = NULL;
    PyObject *var_v = NULL;
    PyObject *var_data = NULL;
    PyObject *var_edgedata = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_70f662c7a85b2b4718173c3a289214c5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    bool tmp_result;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    struct Nuitka_ExceptionStackItem exception_preserved_2;
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
    struct Nuitka_ExceptionStackItem exception_preserved_3;
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
    struct Nuitka_ExceptionStackItem exception_preserved_4;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    struct Nuitka_ExceptionStackItem exception_preserved_5;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    struct Nuitka_ExceptionStackItem exception_preserved_6;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_70f662c7a85b2b4718173c3a289214c5 = NULL;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_70f662c7a85b2b4718173c3a289214c5)) {
        Py_XDECREF(cache_frame_70f662c7a85b2b4718173c3a289214c5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_70f662c7a85b2b4718173c3a289214c5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_70f662c7a85b2b4718173c3a289214c5 = MAKE_FUNCTION_FRAME(tstate, codeobj_70f662c7a85b2b4718173c3a289214c5, module_networkx$readwrite$multiline_adjlist, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_70f662c7a85b2b4718173c3a289214c5->m_type_description == NULL);
    frame_70f662c7a85b2b4718173c3a289214c5 = cache_frame_70f662c7a85b2b4718173c3a289214c5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_70f662c7a85b2b4718173c3a289214c5);
    assert(Py_REFCNT(frame_70f662c7a85b2b4718173c3a289214c5) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[26];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_networkx$readwrite$multiline_adjlist;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[27];
        tmp_level_value_1 = mod_consts[12];
        frame_70f662c7a85b2b4718173c3a289214c5->m_frame.f_lineno = 239;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_networkx$readwrite$multiline_adjlist,
                mod_consts[28],
                mod_consts[12]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[28]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_literal_eval == NULL);
        var_literal_eval = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_networkx$readwrite$multiline_adjlist, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[12];
        CHECK_OBJECT(par_create_using);
        tmp_args_element_value_2 = par_create_using;
        frame_70f662c7a85b2b4718173c3a289214c5->m_frame.f_lineno = 241;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[30],
                call_args
            );
        }

        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_G == NULL);
        var_G = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_lines);
        tmp_iter_arg_1 = par_lines;
        tmp_assign_source_3 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_3;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_4 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooooooo";
                exception_lineno = 242;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_5 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_line;
            var_line = tmp_assign_source_5;
            Py_INCREF(var_line);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(var_line);
        tmp_expression_value_1 = var_line;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[31]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (par_comments == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 243;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_3 = par_comments;
        frame_70f662c7a85b2b4718173c3a289214c5->m_frame.f_lineno = 243;
        tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_p;
            var_p = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_p);
        tmp_cmp_expr_left_1 = var_p;
        tmp_cmp_expr_right_1 = mod_consts[12];
        tmp_condition_result_1 = RICH_COMPARE_GE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_stop_value_1;
        CHECK_OBJECT(var_line);
        tmp_expression_value_2 = var_line;
        CHECK_OBJECT(var_p);
        tmp_stop_value_1 = var_p;
        tmp_subscript_value_1 = MAKE_SLICE_OBJECT1(tmp_stop_value_1);
        assert(!(tmp_subscript_value_1 == NULL));
        tmp_assign_source_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_line;
            assert(old != NULL);
            var_line = tmp_assign_source_7;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        if (var_line == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 246;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_operand_value_1 = var_line;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    goto loop_start_1;
    branch_no_2:;
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_4;
        if (var_line == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 249;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_4 = var_line;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[34]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_70f662c7a85b2b4718173c3a289214c5->m_frame.f_lineno = 249;
        tmp_expression_value_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[35]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        if (par_delimiter == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 249;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_args_element_value_4 = par_delimiter;
        frame_70f662c7a85b2b4718173c3a289214c5->m_frame.f_lineno = 249;
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_2);
        if (tmp_iter_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_8 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 2);
        if (tmp_assign_source_9 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooo";
            exception_lineno = 249;
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 2);
        if (tmp_assign_source_10 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooo";
            exception_lineno = 249;
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_10;
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

                    type_description_1 = "oooooooooooooooooooo";
                    exception_lineno = 249;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[5];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooooo";
            exception_lineno = 249;
            goto try_except_handler_5;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_4;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_u;
            var_u = tmp_assign_source_11;
            Py_INCREF(var_u);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_12 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_deg;
            var_deg = tmp_assign_source_12;
            Py_INCREF(var_deg);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_int_arg_1;
        CHECK_OBJECT(var_deg);
        tmp_int_arg_1 = var_deg;
        tmp_assign_source_13 = PyNumber_Int(tmp_int_arg_1);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_deg;
            assert(old != NULL);
            var_deg = tmp_assign_source_13;
            Py_DECREF(old);
        }

    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_3 == NULL) {
        exception_keeper_tb_3 = MAKE_TRACEBACK(frame_70f662c7a85b2b4718173c3a289214c5, exception_keeper_lineno_3);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_keeper_tb_3 = ADD_TRACEBACK(exception_keeper_tb_3, frame_70f662c7a85b2b4718173c3a289214c5, exception_keeper_lineno_3);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    // Tried code:
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = EXC_VALUE(PyThreadState_GET());
        assert(var_err == NULL);
        Py_INCREF(tmp_assign_source_14);
        var_err = tmp_assign_source_14;
    }
    // Tried code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_raise_cause_1;
        tmp_tuple_element_1 = mod_consts[36];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            if (var_line == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 252;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_1;
            }

            tmp_format_value_1 = var_line;
            tmp_format_spec_1 = mod_consts[15];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 252;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[37];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[15], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_7;
        }
        frame_70f662c7a85b2b4718173c3a289214c5->m_frame.f_lineno = 252;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        CHECK_OBJECT(var_err);
        tmp_raise_cause_1 = var_err;
        exception_type = tmp_raise_type_1;
        exception_value = NULL;
        Py_INCREF(tmp_raise_cause_1);
        exception_lineno = 252;
        RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_type, &exception_value, &exception_tb, tmp_raise_cause_1);
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_7;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_err);
    var_err = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_6;
    // End of try:
    goto branch_end_3;
    branch_no_3:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 248;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_70f662c7a85b2b4718173c3a289214c5->m_frame) frame_70f662c7a85b2b4718173c3a289214c5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_6;
    branch_end_3:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_2;
    // End of try:
    // End of try:
    try_end_3:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        if (par_nodetype == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 253;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_left_3 = par_nodetype;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_4 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_5;
        if (par_nodetype == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 255;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_called_value_4 = par_nodetype;
        CHECK_OBJECT(var_u);
        tmp_args_element_value_5 = var_u;
        frame_70f662c7a85b2b4718173c3a289214c5->m_frame.f_lineno = 255;
        tmp_assign_source_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_5);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = var_u;
            assert(old != NULL);
            var_u = tmp_assign_source_15;
            Py_DECREF(old);
        }

    }
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

    // Preserve existing published exception id 2.
    exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_6 == NULL) {
        exception_keeper_tb_6 = MAKE_TRACEBACK(frame_70f662c7a85b2b4718173c3a289214c5, exception_keeper_lineno_6);
    } else if (exception_keeper_lineno_6 != 0) {
        exception_keeper_tb_6 = ADD_TRACEBACK(exception_keeper_tb_6, frame_70f662c7a85b2b4718173c3a289214c5, exception_keeper_lineno_6);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6);
    // Tried code:
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        tmp_cmp_expr_left_4 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_4 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_5 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = EXC_VALUE(PyThreadState_GET());
        assert(var_err == NULL);
        Py_INCREF(tmp_assign_source_16);
        var_err = tmp_assign_source_16;
    }
    // Tried code:
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_raise_cause_2;
        tmp_tuple_element_2 = mod_consts[39];
        tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyObject *tmp_format_value_3;
            PyObject *tmp_format_spec_3;
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
            if (var_u == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[40]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 258;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_2;
            }

            tmp_format_value_2 = var_u;
            tmp_format_spec_2 = mod_consts[15];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 258;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[41];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
            if (par_nodetype == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 258;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_2;
            }

            tmp_format_value_3 = par_nodetype;
            tmp_format_spec_3 = mod_consts[15];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 258;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 3, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_string_concat_values_2);
        goto try_except_handler_10;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_make_exception_arg_2 = PyUnicode_Join(mod_consts[15], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_make_exception_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_10;
        }
        frame_70f662c7a85b2b4718173c3a289214c5->m_frame.f_lineno = 257;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_2);
        Py_DECREF(tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        CHECK_OBJECT(var_err);
        tmp_raise_cause_2 = var_err;
        exception_type = tmp_raise_type_2;
        exception_value = NULL;
        Py_INCREF(tmp_raise_cause_2);
        exception_lineno = 259;
        RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_type, &exception_value, &exception_tb, tmp_raise_cause_2);
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_10;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_err);
    var_err = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_9;
    // End of try:
    goto branch_end_5;
    branch_no_5:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 254;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_70f662c7a85b2b4718173c3a289214c5->m_frame) frame_70f662c7a85b2b4718173c3a289214c5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_9;
    branch_end_5:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_2;
    // End of try:
    // End of try:
    try_end_4:;
    branch_no_4:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_6;
        if (var_G == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[1]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 260;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_2 = var_G;
        CHECK_OBJECT(var_u);
        tmp_args_element_value_6 = var_u;
        frame_70f662c7a85b2b4718173c3a289214c5->m_frame.f_lineno = 260;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[42], tmp_args_element_value_6);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_xrange_low_1;
        CHECK_OBJECT(var_deg);
        tmp_xrange_low_1 = var_deg;
        tmp_iter_arg_3 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_1);
        if (tmp_iter_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_17 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_18 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_18 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooooooo";
                exception_lineno = 261;
                goto try_except_handler_11;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_19 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_19;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    loop_start_3:;
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_value_value_1;
        if (par_lines == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[43]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 264;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_12;
        }

        tmp_value_value_1 = par_lines;
        tmp_assign_source_20 = ITERATOR_NEXT(tmp_value_value_1);
        if (tmp_assign_source_20 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooo";
            exception_lineno = 264;
            goto try_except_handler_12;
        }
        {
            PyObject *old = var_line;
            var_line = tmp_assign_source_20;
            Py_XDECREF(old);
        }

    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 3.
    exception_preserved_3 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_9 == NULL) {
        exception_keeper_tb_9 = MAKE_TRACEBACK(frame_70f662c7a85b2b4718173c3a289214c5, exception_keeper_lineno_9);
    } else if (exception_keeper_lineno_9 != 0) {
        exception_keeper_tb_9 = ADD_TRACEBACK(exception_keeper_tb_9, frame_70f662c7a85b2b4718173c3a289214c5, exception_keeper_lineno_9);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_9, &exception_keeper_value_9, &exception_keeper_tb_9);
    // Tried code:
    {
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        tmp_cmp_expr_left_5 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_5 = PyExc_StopIteration;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        assert(!(tmp_res == -1));
        tmp_condition_result_6 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = EXC_VALUE(PyThreadState_GET());
        assert(var_err == NULL);
        Py_INCREF(tmp_assign_source_21);
        var_err = tmp_assign_source_21;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_string_concat_values_3;
        PyObject *tmp_tuple_element_3;
        tmp_tuple_element_3 = mod_consts[44];
        tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_4;
            PyObject *tmp_format_spec_4;
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
            CHECK_OBJECT(var_u);
            tmp_format_value_4 = var_u;
            tmp_format_spec_4 = mod_consts[15];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[37];
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 2, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_string_concat_values_3);
        goto try_except_handler_14;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_assign_source_22 = PyUnicode_Join(mod_consts[15], tmp_string_concat_values_3);
        Py_DECREF(tmp_string_concat_values_3);
        if (tmp_assign_source_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_14;
        }
        assert(var_msg == NULL);
        var_msg = tmp_assign_source_22;
    }
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_3;
        PyObject *tmp_raise_cause_3;
        CHECK_OBJECT(var_msg);
        tmp_make_exception_arg_3 = var_msg;
        frame_70f662c7a85b2b4718173c3a289214c5->m_frame.f_lineno = 267;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_3 == NULL));
        CHECK_OBJECT(var_err);
        tmp_raise_cause_3 = var_err;
        exception_type = tmp_raise_type_3;
        exception_value = NULL;
        Py_INCREF(tmp_raise_cause_3);
        exception_lineno = 267;
        RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_type, &exception_value, &exception_tb, tmp_raise_cause_3);
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_14;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_err);
    var_err = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto try_except_handler_13;
    // End of try:
    goto branch_end_6;
    branch_no_6:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 263;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_70f662c7a85b2b4718173c3a289214c5->m_frame) frame_70f662c7a85b2b4718173c3a289214c5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_13;
    branch_end_6:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_3);

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto try_except_handler_11;
    // End of try:
    // End of try:
    try_end_5:;
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_7;
        CHECK_OBJECT(var_line);
        tmp_expression_value_5 = var_line;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[31]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_11;
        }
        if (par_comments == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 268;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_11;
        }

        tmp_args_element_value_7 = par_comments;
        frame_70f662c7a85b2b4718173c3a289214c5->m_frame.f_lineno = 268;
        tmp_assign_source_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_5);
        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_11;
        }
        {
            PyObject *old = var_p;
            var_p = tmp_assign_source_23;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        CHECK_OBJECT(var_p);
        tmp_cmp_expr_left_6 = var_p;
        tmp_cmp_expr_right_6 = mod_consts[12];
        tmp_condition_result_7 = RICH_COMPARE_GE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_11;
        }
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_stop_value_2;
        CHECK_OBJECT(var_line);
        tmp_expression_value_6 = var_line;
        CHECK_OBJECT(var_p);
        tmp_stop_value_2 = var_p;
        tmp_subscript_value_2 = MAKE_SLICE_OBJECT1(tmp_stop_value_2);
        assert(!(tmp_subscript_value_2 == NULL));
        tmp_assign_source_24 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_2);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_11;
        }
        {
            PyObject *old = var_line;
            assert(old != NULL);
            var_line = tmp_assign_source_24;
            Py_DECREF(old);
        }

    }
    branch_no_7:;
    {
        nuitka_bool tmp_condition_result_8;
        int tmp_truth_name_1;
        if (var_line == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 271;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_11;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE(var_line);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_condition_result_8 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    goto loop_end_3;
    branch_no_8:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 262;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_11;
    }
    goto loop_start_3;
    loop_end_3:;
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_8;
        if (var_line == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 273;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_11;
        }

        tmp_expression_value_8 = var_line;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[34]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_11;
        }
        frame_70f662c7a85b2b4718173c3a289214c5->m_frame.f_lineno = 273;
        tmp_expression_value_7 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_7);
        Py_DECREF(tmp_called_value_7);
        if (tmp_expression_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[35]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_11;
        }
        if (par_delimiter == NULL) {
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 273;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_11;
        }

        tmp_args_element_value_8 = par_delimiter;
        frame_70f662c7a85b2b4718173c3a289214c5->m_frame.f_lineno = 273;
        tmp_assign_source_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_6);
        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_11;
        }
        {
            PyObject *old = var_vlist;
            var_vlist = tmp_assign_source_25;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(var_vlist);
        tmp_len_arg_1 = var_vlist;
        tmp_assign_source_26 = BUILTIN_LEN(tstate, tmp_len_arg_1);
        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_11;
        }
        {
            PyObject *old = var_numb;
            var_numb = tmp_assign_source_26;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_7;
        nuitka_digit tmp_cmp_expr_right_7;
        CHECK_OBJECT(var_numb);
        tmp_cmp_expr_left_7 = var_numb;
        tmp_cmp_expr_right_7 = 1;
        tmp_condition_result_9 = RICH_COMPARE_LT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    goto loop_start_2;
    branch_no_9:;
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(var_vlist);
        tmp_expression_value_9 = var_vlist;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[45]);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_11;
        }
        frame_70f662c7a85b2b4718173c3a289214c5->m_frame.f_lineno = 277;
        tmp_assign_source_27 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_8, mod_consts[46]);

        Py_DECREF(tmp_called_value_8);
        if (tmp_assign_source_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_11;
        }
        {
            PyObject *old = var_v;
            var_v = tmp_assign_source_27;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        tmp_str_arg_value_1 = mod_consts[15];
        CHECK_OBJECT(var_vlist);
        tmp_iterable_value_1 = var_vlist;
        tmp_assign_source_28 = UNICODE_JOIN(tstate, tmp_str_arg_value_1, tmp_iterable_value_1);
        if (tmp_assign_source_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_11;
        }
        {
            PyObject *old = var_data;
            var_data = tmp_assign_source_28;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_10;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        if (par_nodetype == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 279;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_11;
        }

        tmp_cmp_expr_left_8 = par_nodetype;
        tmp_cmp_expr_right_8 = Py_None;
        tmp_condition_result_10 = (tmp_cmp_expr_left_8 != tmp_cmp_expr_right_8) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    // Tried code:
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_9;
        if (par_nodetype == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 281;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_15;
        }

        tmp_called_value_9 = par_nodetype;
        CHECK_OBJECT(var_v);
        tmp_args_element_value_9 = var_v;
        frame_70f662c7a85b2b4718173c3a289214c5->m_frame.f_lineno = 281;
        tmp_assign_source_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_9);
        if (tmp_assign_source_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_15;
        }
        {
            PyObject *old = var_v;
            assert(old != NULL);
            var_v = tmp_assign_source_29;
            Py_DECREF(old);
        }

    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 4.
    exception_preserved_4 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_12 == NULL) {
        exception_keeper_tb_12 = MAKE_TRACEBACK(frame_70f662c7a85b2b4718173c3a289214c5, exception_keeper_lineno_12);
    } else if (exception_keeper_lineno_12 != 0) {
        exception_keeper_tb_12 = ADD_TRACEBACK(exception_keeper_tb_12, frame_70f662c7a85b2b4718173c3a289214c5, exception_keeper_lineno_12);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_12, &exception_keeper_value_12, &exception_keeper_tb_12);
    // Tried code:
    {
        bool tmp_condition_result_11;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        tmp_cmp_expr_left_9 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_9 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
        assert(!(tmp_res == -1));
        tmp_condition_result_11 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = EXC_VALUE(PyThreadState_GET());
        assert(var_err == NULL);
        Py_INCREF(tmp_assign_source_30);
        var_err = tmp_assign_source_30;
    }
    // Tried code:
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_make_exception_arg_4;
        PyObject *tmp_string_concat_values_4;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_raise_cause_4;
        tmp_tuple_element_4 = mod_consts[39];
        tmp_string_concat_values_4 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_format_value_5;
            PyObject *tmp_format_spec_5;
            PyObject *tmp_format_value_6;
            PyObject *tmp_format_spec_6;
            PyTuple_SET_ITEM0(tmp_string_concat_values_4, 0, tmp_tuple_element_4);
            if (var_v == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[47]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 284;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_4;
            }

            tmp_format_value_5 = var_v;
            tmp_format_spec_5 = mod_consts[15];
            tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_5, tmp_format_spec_5);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 284;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_4, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[41];
            PyTuple_SET_ITEM0(tmp_string_concat_values_4, 2, tmp_tuple_element_4);
            if (par_nodetype == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[38]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 284;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_4;
            }

            tmp_format_value_6 = par_nodetype;
            tmp_format_spec_6 = mod_consts[15];
            tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_6, tmp_format_spec_6);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 284;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_4, 3, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_string_concat_values_4);
        goto try_except_handler_17;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_make_exception_arg_4 = PyUnicode_Join(mod_consts[15], tmp_string_concat_values_4);
        Py_DECREF(tmp_string_concat_values_4);
        if (tmp_make_exception_arg_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_17;
        }
        frame_70f662c7a85b2b4718173c3a289214c5->m_frame.f_lineno = 283;
        tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_4);
        Py_DECREF(tmp_make_exception_arg_4);
        assert(!(tmp_raise_type_4 == NULL));
        CHECK_OBJECT(var_err);
        tmp_raise_cause_4 = var_err;
        exception_type = tmp_raise_type_4;
        exception_value = NULL;
        Py_INCREF(tmp_raise_cause_4);
        exception_lineno = 285;
        RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_type, &exception_value, &exception_tb, tmp_raise_cause_4);
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_17;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_err);
    var_err = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto try_except_handler_16;
    // End of try:
    goto branch_end_11;
    branch_no_11:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 280;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_70f662c7a85b2b4718173c3a289214c5->m_frame) frame_70f662c7a85b2b4718173c3a289214c5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_16;
    branch_end_11:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 4.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_4);

    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto try_except_handler_11;
    // End of try:
    // End of try:
    try_end_6:;
    branch_no_10:;
    {
        bool tmp_condition_result_12;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        if (par_edgetype == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 286;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_11;
        }

        tmp_cmp_expr_left_10 = par_edgetype;
        tmp_cmp_expr_right_10 = Py_None;
        tmp_condition_result_12 = (tmp_cmp_expr_left_10 != tmp_cmp_expr_right_10) ? true : false;
        if (tmp_condition_result_12 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    // Tried code:
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_called_value_10;
        PyObject *tmp_args_element_value_10;
        tmp_dict_key_1 = mod_consts[49];
        if (par_edgetype == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 288;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_18;
        }

        tmp_called_value_10 = par_edgetype;
        CHECK_OBJECT(var_data);
        tmp_args_element_value_10 = var_data;
        frame_70f662c7a85b2b4718173c3a289214c5->m_frame.f_lineno = 288;
        tmp_dict_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_10);
        if (tmp_dict_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_18;
        }
        tmp_assign_source_31 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_assign_source_31, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        {
            PyObject *old = var_edgedata;
            var_edgedata = tmp_assign_source_31;
            Py_XDECREF(old);
        }

    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 5.
    exception_preserved_5 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_15 == NULL) {
        exception_keeper_tb_15 = MAKE_TRACEBACK(frame_70f662c7a85b2b4718173c3a289214c5, exception_keeper_lineno_15);
    } else if (exception_keeper_lineno_15 != 0) {
        exception_keeper_tb_15 = ADD_TRACEBACK(exception_keeper_tb_15, frame_70f662c7a85b2b4718173c3a289214c5, exception_keeper_lineno_15);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_15, &exception_keeper_value_15, &exception_keeper_tb_15);
    // Tried code:
    {
        bool tmp_condition_result_13;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        tmp_cmp_expr_left_11 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_11 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
        assert(!(tmp_res == -1));
        tmp_condition_result_13 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_13 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = EXC_VALUE(PyThreadState_GET());
        assert(var_err == NULL);
        Py_INCREF(tmp_assign_source_32);
        var_err = tmp_assign_source_32;
    }
    // Tried code:
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_make_exception_arg_5;
        PyObject *tmp_string_concat_values_5;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_raise_cause_5;
        tmp_tuple_element_5 = mod_consts[50];
        tmp_string_concat_values_5 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_format_value_7;
            PyObject *tmp_format_spec_7;
            PyObject *tmp_format_value_8;
            PyObject *tmp_format_spec_8;
            PyTuple_SET_ITEM0(tmp_string_concat_values_5, 0, tmp_tuple_element_5);
            if (var_data == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[51]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 291;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_5;
            }

            tmp_format_value_7 = var_data;
            tmp_format_spec_7 = mod_consts[15];
            tmp_tuple_element_5 = BUILTIN_FORMAT(tstate, tmp_format_value_7, tmp_format_spec_7);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 291;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_5, 1, tmp_tuple_element_5);
            tmp_tuple_element_5 = mod_consts[41];
            PyTuple_SET_ITEM0(tmp_string_concat_values_5, 2, tmp_tuple_element_5);
            if (par_edgetype == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 291;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_5;
            }

            tmp_format_value_8 = par_edgetype;
            tmp_format_spec_8 = mod_consts[15];
            tmp_tuple_element_5 = BUILTIN_FORMAT(tstate, tmp_format_value_8, tmp_format_spec_8);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 291;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_5, 3, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_string_concat_values_5);
        goto try_except_handler_20;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_make_exception_arg_5 = PyUnicode_Join(mod_consts[15], tmp_string_concat_values_5);
        Py_DECREF(tmp_string_concat_values_5);
        if (tmp_make_exception_arg_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_20;
        }
        frame_70f662c7a85b2b4718173c3a289214c5->m_frame.f_lineno = 290;
        tmp_raise_type_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_TypeError, tmp_make_exception_arg_5);
        Py_DECREF(tmp_make_exception_arg_5);
        assert(!(tmp_raise_type_5 == NULL));
        CHECK_OBJECT(var_err);
        tmp_raise_cause_5 = var_err;
        exception_type = tmp_raise_type_5;
        exception_value = NULL;
        Py_INCREF(tmp_raise_cause_5);
        exception_lineno = 292;
        RAISE_EXCEPTION_WITH_CAUSE(tstate, &exception_type, &exception_value, &exception_tb, tmp_raise_cause_5);
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_20;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_err);
    var_err = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto try_except_handler_19;
    // End of try:
    goto branch_end_13;
    branch_no_13:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 287;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_70f662c7a85b2b4718173c3a289214c5->m_frame) frame_70f662c7a85b2b4718173c3a289214c5->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_19;
    branch_end_13:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 5.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_5);

    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto try_except_handler_11;
    // End of try:
    // End of try:
    try_end_7:;
    goto branch_end_12;
    branch_no_12:;
    // Tried code:
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_value_11;
        PyObject *tmp_args_element_value_11;
        if (var_literal_eval == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 295;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_21;
        }

        tmp_called_value_11 = var_literal_eval;
        CHECK_OBJECT(var_data);
        tmp_args_element_value_11 = var_data;
        frame_70f662c7a85b2b4718173c3a289214c5->m_frame.f_lineno = 295;
        tmp_assign_source_33 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_11);
        if (tmp_assign_source_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_21;
        }
        {
            PyObject *old = var_edgedata;
            var_edgedata = tmp_assign_source_33;
            Py_XDECREF(old);
        }

    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 6.
    exception_preserved_6 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_18 == NULL) {
        exception_keeper_tb_18 = MAKE_TRACEBACK(frame_70f662c7a85b2b4718173c3a289214c5, exception_keeper_lineno_18);
    } else if (exception_keeper_lineno_18 != 0) {
        exception_keeper_tb_18 = ADD_TRACEBACK(exception_keeper_tb_18, frame_70f662c7a85b2b4718173c3a289214c5, exception_keeper_lineno_18);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_18, &exception_keeper_value_18, &exception_keeper_tb_18);
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = MAKE_DICT_EMPTY();
        {
            PyObject *old = var_edgedata;
            var_edgedata = tmp_assign_source_34;
            Py_XDECREF(old);
        }

    }
    // Restore previous exception id 6.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_6);

    goto try_end_8;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_8:;
    branch_end_12:;
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_call_result_2;
        if (var_G == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[1]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 298;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_11;
        }

        tmp_expression_value_10 = var_G;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[52]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_11;
        }
        CHECK_OBJECT(var_u);
        tmp_tuple_element_6 = var_u;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_6);
        CHECK_OBJECT(var_v);
        tmp_tuple_element_6 = var_v;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 1, tmp_tuple_element_6);
        CHECK_OBJECT(var_edgedata);
        tmp_dircall_arg3_1 = var_edgedata;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_call_result_2 = impl___main__$$$function__4_complex_call_helper_pos_star_dict(tstate, dir_call_args);
        }
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_11;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 261;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_11;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
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
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto try_except_handler_2;
    // End of try:
    try_end_9:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 242;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_10;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
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
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    if (var_G == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[1]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 300;
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_G;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_70f662c7a85b2b4718173c3a289214c5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_70f662c7a85b2b4718173c3a289214c5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_70f662c7a85b2b4718173c3a289214c5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_70f662c7a85b2b4718173c3a289214c5,
        type_description_1,
        par_lines,
        par_comments,
        par_delimiter,
        par_create_using,
        par_nodetype,
        par_edgetype,
        var_literal_eval,
        var_G,
        var_line,
        var_p,
        var_u,
        var_deg,
        var_err,
        var_i,
        var_msg,
        var_vlist,
        var_numb,
        var_v,
        var_data,
        var_edgedata
    );


    // Release cached frame if used for exception.
    if (frame_70f662c7a85b2b4718173c3a289214c5 == cache_frame_70f662c7a85b2b4718173c3a289214c5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_70f662c7a85b2b4718173c3a289214c5);
        cache_frame_70f662c7a85b2b4718173c3a289214c5 = NULL;
    }

    assertFrameObject(frame_70f662c7a85b2b4718173c3a289214c5);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_literal_eval);
    var_literal_eval = NULL;
    Py_XDECREF(var_G);
    var_G = NULL;
    Py_XDECREF(var_line);
    var_line = NULL;
    Py_XDECREF(var_p);
    var_p = NULL;
    Py_XDECREF(var_u);
    var_u = NULL;
    Py_XDECREF(var_deg);
    var_deg = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_vlist);
    var_vlist = NULL;
    Py_XDECREF(var_numb);
    var_numb = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
    Py_XDECREF(var_data);
    var_data = NULL;
    Py_XDECREF(var_edgedata);
    var_edgedata = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_literal_eval);
    var_literal_eval = NULL;
    Py_XDECREF(var_G);
    var_G = NULL;
    Py_XDECREF(var_line);
    var_line = NULL;
    Py_XDECREF(var_p);
    var_p = NULL;
    Py_XDECREF(var_u);
    var_u = NULL;
    Py_XDECREF(var_deg);
    var_deg = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_msg);
    var_msg = NULL;
    Py_XDECREF(var_vlist);
    var_vlist = NULL;
    Py_XDECREF(var_numb);
    var_numb = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
    Py_XDECREF(var_data);
    var_data = NULL;
    Py_XDECREF(var_edgedata);
    var_edgedata = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_lines);
    Py_DECREF(par_lines);
    CHECK_OBJECT(par_comments);
    Py_DECREF(par_comments);
    CHECK_OBJECT(par_delimiter);
    Py_DECREF(par_delimiter);
    CHECK_OBJECT(par_create_using);
    Py_DECREF(par_create_using);
    CHECK_OBJECT(par_nodetype);
    Py_DECREF(par_nodetype);
    CHECK_OBJECT(par_edgetype);
    Py_DECREF(par_edgetype);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_lines);
    Py_DECREF(par_lines);
    CHECK_OBJECT(par_comments);
    Py_DECREF(par_comments);
    CHECK_OBJECT(par_delimiter);
    Py_DECREF(par_delimiter);
    CHECK_OBJECT(par_create_using);
    Py_DECREF(par_create_using);
    CHECK_OBJECT(par_nodetype);
    Py_DECREF(par_nodetype);
    CHECK_OBJECT(par_edgetype);
    Py_DECREF(par_edgetype);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_networkx$readwrite$multiline_adjlist$$$function__4_read_multiline_adjlist(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_path = python_pars[0];
    PyObject *par_comments = python_pars[1];
    PyObject *par_delimiter = python_pars[2];
    PyObject *par_create_using = python_pars[3];
    PyObject *par_nodetype = python_pars[4];
    PyObject *par_edgetype = python_pars[5];
    struct Nuitka_CellObject *par_encoding = Nuitka_Cell_New1(python_pars[6]);
    PyObject *var_lines = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_174cb8c710dbc78e790ff2f1f25fd38c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_174cb8c710dbc78e790ff2f1f25fd38c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_174cb8c710dbc78e790ff2f1f25fd38c)) {
        Py_XDECREF(cache_frame_174cb8c710dbc78e790ff2f1f25fd38c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_174cb8c710dbc78e790ff2f1f25fd38c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_174cb8c710dbc78e790ff2f1f25fd38c = MAKE_FUNCTION_FRAME(tstate, codeobj_174cb8c710dbc78e790ff2f1f25fd38c, module_networkx$readwrite$multiline_adjlist, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_174cb8c710dbc78e790ff2f1f25fd38c->m_type_description == NULL);
    frame_174cb8c710dbc78e790ff2f1f25fd38c = cache_frame_174cb8c710dbc78e790ff2f1f25fd38c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_174cb8c710dbc78e790ff2f1f25fd38c);
    assert(Py_REFCNT(frame_174cb8c710dbc78e790ff2f1f25fd38c) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(par_path);
            tmp_iter_arg_1 = par_path;
            tmp_assign_source_2 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
            if (tmp_assign_source_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 385;
                type_description_1 = "ooooooco";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_2;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[2];

            tmp_closure_1[0] = par_encoding;
            Py_INCREF(tmp_closure_1[0]);
            tmp_closure_1[1] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_assign_source_1 = MAKE_GENERATOR_networkx$readwrite$multiline_adjlist$$$function__4_read_multiline_adjlist$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_2;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        assert(var_lines == NULL);
        var_lines = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_kw_call_dict_value_3_1;
        PyObject *tmp_kw_call_dict_value_4_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_networkx$readwrite$multiline_adjlist, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[54]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "ooooooco";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_lines);
        tmp_kw_call_arg_value_0_1 = var_lines;
        CHECK_OBJECT(par_comments);
        tmp_kw_call_dict_value_0_1 = par_comments;
        CHECK_OBJECT(par_delimiter);
        tmp_kw_call_dict_value_1_1 = par_delimiter;
        CHECK_OBJECT(par_create_using);
        tmp_kw_call_dict_value_2_1 = par_create_using;
        CHECK_OBJECT(par_nodetype);
        tmp_kw_call_dict_value_3_1 = par_nodetype;
        CHECK_OBJECT(par_edgetype);
        tmp_kw_call_dict_value_4_1 = par_edgetype;
        frame_174cb8c710dbc78e790ff2f1f25fd38c->m_frame.f_lineno = 386;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[5] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[55]);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "ooooooco";
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
        exception_tb = MAKE_TRACEBACK(frame_174cb8c710dbc78e790ff2f1f25fd38c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_174cb8c710dbc78e790ff2f1f25fd38c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_174cb8c710dbc78e790ff2f1f25fd38c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_174cb8c710dbc78e790ff2f1f25fd38c,
        type_description_1,
        par_path,
        par_comments,
        par_delimiter,
        par_create_using,
        par_nodetype,
        par_edgetype,
        par_encoding,
        var_lines
    );


    // Release cached frame if used for exception.
    if (frame_174cb8c710dbc78e790ff2f1f25fd38c == cache_frame_174cb8c710dbc78e790ff2f1f25fd38c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_174cb8c710dbc78e790ff2f1f25fd38c);
        cache_frame_174cb8c710dbc78e790ff2f1f25fd38c = NULL;
    }

    assertFrameObject(frame_174cb8c710dbc78e790ff2f1f25fd38c);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_lines);
    Py_DECREF(var_lines);
    var_lines = NULL;
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

    Py_XDECREF(var_lines);
    var_lines = NULL;
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
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_comments);
    Py_DECREF(par_comments);
    CHECK_OBJECT(par_delimiter);
    Py_DECREF(par_delimiter);
    CHECK_OBJECT(par_create_using);
    Py_DECREF(par_create_using);
    CHECK_OBJECT(par_nodetype);
    Py_DECREF(par_nodetype);
    CHECK_OBJECT(par_edgetype);
    Py_DECREF(par_edgetype);
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_comments);
    Py_DECREF(par_comments);
    CHECK_OBJECT(par_delimiter);
    Py_DECREF(par_delimiter);
    CHECK_OBJECT(par_create_using);
    Py_DECREF(par_create_using);
    CHECK_OBJECT(par_nodetype);
    Py_DECREF(par_nodetype);
    CHECK_OBJECT(par_edgetype);
    Py_DECREF(par_edgetype);
    CHECK_OBJECT(par_encoding);
    Py_DECREF(par_encoding);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



#if 1
struct networkx$readwrite$multiline_adjlist$$$function__4_read_multiline_adjlist$$$genexpr__1_genexpr_locals {
    PyObject *var_line;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
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

static PyObject *networkx$readwrite$multiline_adjlist$$$function__4_read_multiline_adjlist$$$genexpr__1_genexpr_context(PyThreadState *tstate, struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

#if 1
    // Heap access.
    struct networkx$readwrite$multiline_adjlist$$$function__4_read_multiline_adjlist$$$genexpr__1_genexpr_locals *generator_heap = (struct networkx$readwrite$multiline_adjlist$$$function__4_read_multiline_adjlist$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;
#endif

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_line = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(tstate, codeobj_97c3ccadb4506122faf8eca860b9c3fc, module_networkx$readwrite$multiline_adjlist, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
                generator_heap->type_description_1 = "Noc";
                generator_heap->exception_lineno = 385;
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
            PyObject *old = generator_heap->var_line;
            generator_heap->var_line = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_line);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_line);
        tmp_expression_value_2 = generator_heap->var_line;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[57]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 385;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[24]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(tstate, generator_heap->exception_value);

            generator_heap->exception_lineno = 385;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        generator->m_frame->m_frame.f_lineno = 385;
        tmp_expression_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 385;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 385;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
        Py_DECREF(tmp_yield_result_1);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 385;
        generator_heap->type_description_1 = "Noc";
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
            generator_heap->var_line,
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

    Py_XDECREF(generator_heap->var_line);
    generator_heap->var_line = NULL;
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
    Py_XDECREF(generator_heap->var_line);
    generator_heap->var_line = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(tstate, generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_networkx$readwrite$multiline_adjlist$$$function__4_read_multiline_adjlist$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        networkx$readwrite$multiline_adjlist$$$function__4_read_multiline_adjlist$$$genexpr__1_genexpr_context,
        module_networkx$readwrite$multiline_adjlist,
        mod_consts[58],
#if PYTHON_VERSION >= 0x350
        mod_consts[59],
#endif
        codeobj_97c3ccadb4506122faf8eca860b9c3fc,
        closure,
        2,
#if 1
        sizeof(struct networkx$readwrite$multiline_adjlist$$$function__4_read_multiline_adjlist$$$genexpr__1_genexpr_locals)
#else
        0
#endif
    );
}



static PyObject *MAKE_FUNCTION_networkx$readwrite$multiline_adjlist$$$function__1_generate_multiline_adjlist(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_networkx$readwrite$multiline_adjlist$$$function__1_generate_multiline_adjlist,
        mod_consts[10],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4b10a249262c902bb64e9dfd65c6070b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_networkx$readwrite$multiline_adjlist,
        mod_consts[0],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_networkx$readwrite$multiline_adjlist$$$function__2_write_multiline_adjlist(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_networkx$readwrite$multiline_adjlist$$$function__2_write_multiline_adjlist,
        mod_consts[77],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_72cdaeef78023934ac46cb97f3f677de,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_networkx$readwrite$multiline_adjlist,
        mod_consts[25],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_networkx$readwrite$multiline_adjlist$$$function__3_parse_multiline_adjlist(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_networkx$readwrite$multiline_adjlist$$$function__3_parse_multiline_adjlist,
        mod_consts[54],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_70f662c7a85b2b4718173c3a289214c5,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_networkx$readwrite$multiline_adjlist,
        mod_consts[53],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_networkx$readwrite$multiline_adjlist$$$function__4_read_multiline_adjlist(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_networkx$readwrite$multiline_adjlist$$$function__4_read_multiline_adjlist,
        mod_consts[84],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_174cb8c710dbc78e790ff2f1f25fd38c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_networkx$readwrite$multiline_adjlist,
        mod_consts[56],
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

static function_impl_code const function_table_networkx$readwrite$multiline_adjlist[] = {
    impl_networkx$readwrite$multiline_adjlist$$$function__1_generate_multiline_adjlist,
    impl_networkx$readwrite$multiline_adjlist$$$function__2_write_multiline_adjlist,
    impl_networkx$readwrite$multiline_adjlist$$$function__3_parse_multiline_adjlist,
    impl_networkx$readwrite$multiline_adjlist$$$function__4_read_multiline_adjlist,
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

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_networkx$readwrite$multiline_adjlist);

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
        module_networkx$readwrite$multiline_adjlist,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        function_table_networkx$readwrite$multiline_adjlist,
        sizeof(function_table_networkx$readwrite$multiline_adjlist) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_networkx$readwrite$multiline_adjlist(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("networkx$readwrite$multiline_adjlist");

    // Store the module for future use.
    module_networkx$readwrite$multiline_adjlist = module;

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
        PRINT_STRING("networkx$readwrite$multiline_adjlist: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("networkx$readwrite$multiline_adjlist: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initnetworkx$readwrite$multiline_adjlist\n");

    moduledict_networkx$readwrite$multiline_adjlist = MODULE_DICT(module_networkx$readwrite$multiline_adjlist);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_networkx$readwrite$multiline_adjlist,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_networkx$readwrite$multiline_adjlist,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[15]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_networkx$readwrite$multiline_adjlist, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_networkx$readwrite$multiline_adjlist,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_networkx$readwrite$multiline_adjlist, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_networkx$readwrite$multiline_adjlist,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_networkx$readwrite$multiline_adjlist, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_networkx$readwrite$multiline_adjlist,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_networkx$readwrite$multiline_adjlist);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_networkx$readwrite$multiline_adjlist, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_networkx$readwrite$multiline_adjlist, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_networkx$readwrite$multiline_adjlist, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_networkx$readwrite$multiline_adjlist, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_networkx$readwrite$multiline_adjlist);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_networkx$readwrite$multiline_adjlist, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_0061c97648365cacbaf478db9858af6c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[60];
        UPDATE_STRING_DICT0(moduledict_networkx$readwrite$multiline_adjlist, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_networkx$readwrite$multiline_adjlist, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_2);
    }
    frame_0061c97648365cacbaf478db9858af6c = MAKE_MODULE_FRAME(codeobj_0061c97648365cacbaf478db9858af6c, module_networkx$readwrite$multiline_adjlist);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_0061c97648365cacbaf478db9858af6c);
    assert(Py_REFCNT(frame_0061c97648365cacbaf478db9858af6c) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_networkx$readwrite$multiline_adjlist, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[64], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_networkx$readwrite$multiline_adjlist, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[63]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[65], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_networkx$readwrite$multiline_adjlist, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = MAKE_LIST4(mod_consts[67]);
        UPDATE_STRING_DICT1(moduledict_networkx$readwrite$multiline_adjlist, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[69];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_networkx$readwrite$multiline_adjlist;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[12];
        frame_0061c97648365cacbaf478db9858af6c->m_frame.f_lineno = 35;
        tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_networkx$readwrite$multiline_adjlist, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[70];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_networkx$readwrite$multiline_adjlist;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[71];
        tmp_level_value_2 = mod_consts[12];
        frame_0061c97648365cacbaf478db9858af6c->m_frame.f_lineno = 36;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_networkx$readwrite$multiline_adjlist,
                mod_consts[72],
                mod_consts[12]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[72]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_networkx$readwrite$multiline_adjlist, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[73];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_7 = MAKE_FUNCTION_networkx$readwrite$multiline_adjlist$$$function__1_generate_multiline_adjlist(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_networkx$readwrite$multiline_adjlist, (Nuitka_StringObject *)mod_consts[10], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_defaults_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_networkx$readwrite$multiline_adjlist, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[72]);
        }

        assert(!(tmp_called_value_2 == NULL));
        frame_0061c97648365cacbaf478db9858af6c->m_frame.f_lineno = 136;
        tmp_called_value_1 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_2, &PyTuple_GET_ITEM(mod_consts[74], 0), mod_consts[75]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        tmp_defaults_2 = mod_consts[76];
        Py_INCREF(tmp_defaults_2);


        tmp_args_element_value_1 = MAKE_FUNCTION_networkx$readwrite$multiline_adjlist$$$function__2_write_multiline_adjlist(tmp_defaults_2);

        frame_0061c97648365cacbaf478db9858af6c->m_frame.f_lineno = 136;
        tmp_assign_source_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_networkx$readwrite$multiline_adjlist, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_defaults_3;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_networkx$readwrite$multiline_adjlist, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[78]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        frame_0061c97648365cacbaf478db9858af6c->m_frame.f_lineno = 194;
        tmp_called_value_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_4, &PyTuple_GET_ITEM(mod_consts[79], 0), mod_consts[80]);
        Py_DECREF(tmp_called_value_4);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        tmp_defaults_3 = mod_consts[81];
        Py_INCREF(tmp_defaults_3);


        tmp_args_element_value_2 = MAKE_FUNCTION_networkx$readwrite$multiline_adjlist$$$function__3_parse_multiline_adjlist(tmp_defaults_3);

        frame_0061c97648365cacbaf478db9858af6c->m_frame.f_lineno = 194;
        tmp_assign_source_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_networkx$readwrite$multiline_adjlist, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_5;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_value_7;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_defaults_4;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_networkx$readwrite$multiline_adjlist, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[72]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;

            goto frame_exception_exit_1;
        }
        frame_0061c97648365cacbaf478db9858af6c->m_frame.f_lineno = 303;
        tmp_called_value_5 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_6, &PyTuple_GET_ITEM(mod_consts[82], 0), mod_consts[75]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_networkx$readwrite$multiline_adjlist, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 304;

            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[78]);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 304;

            goto frame_exception_exit_1;
        }
        frame_0061c97648365cacbaf478db9858af6c->m_frame.f_lineno = 304;
        tmp_called_value_7 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_8, &PyTuple_GET_ITEM(mod_consts[79], 0), mod_consts[80]);
        Py_DECREF(tmp_called_value_8);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 304;

            goto frame_exception_exit_1;
        }
        tmp_defaults_4 = mod_consts[83];
        Py_INCREF(tmp_defaults_4);


        tmp_args_element_value_4 = MAKE_FUNCTION_networkx$readwrite$multiline_adjlist$$$function__4_read_multiline_adjlist(tmp_defaults_4);

        frame_0061c97648365cacbaf478db9858af6c->m_frame.f_lineno = 304;
        tmp_args_element_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 304;

            goto frame_exception_exit_1;
        }
        frame_0061c97648365cacbaf478db9858af6c->m_frame.f_lineno = 303;
        tmp_assign_source_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_networkx$readwrite$multiline_adjlist, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_10);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0061c97648365cacbaf478db9858af6c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0061c97648365cacbaf478db9858af6c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0061c97648365cacbaf478db9858af6c, exception_lineno);
    }



    assertFrameObject(frame_0061c97648365cacbaf478db9858af6c);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("networkx$readwrite$multiline_adjlist", false);

    Py_INCREF(module_networkx$readwrite$multiline_adjlist);
    return module_networkx$readwrite$multiline_adjlist;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_networkx$readwrite$multiline_adjlist, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("networkx$readwrite$multiline_adjlist", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
