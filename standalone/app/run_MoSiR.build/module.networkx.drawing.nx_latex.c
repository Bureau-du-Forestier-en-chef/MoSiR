/* Generated code for Python module 'networkx$drawing$nx_latex'
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

/* The "module_networkx$drawing$nx_latex" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_networkx$drawing$nx_latex;
PyDictObject *moduledict_networkx$drawing$nx_latex;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[111];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[111];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("networkx.drawing.nx_latex"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 111; i++) {
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
void checkModuleConstants_networkx$drawing$nx_latex(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 111; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_9ff1ebda0e43d6d4325ddc42ab6045d3;
static PyCodeObject *codeobj_871be03b1a7f8a8f5a4bd403fa87bf58;
static PyCodeObject *codeobj_5c896678dc60424688bf7973e944fac7;
static PyCodeObject *codeobj_3efb9c6ac690d7b4cf3da233cace2506;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[106]); CHECK_OBJECT(module_filename_obj);
    codeobj_9ff1ebda0e43d6d4325ddc42ab6045d3 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[107], mod_consts[107], NULL, NULL, 0, 0, 0);
    codeobj_871be03b1a7f8a8f5a4bd403fa87bf58 = MAKE_CODE_OBJECT(module_filename_obj, 312, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[78], mod_consts[78], mod_consts[108], NULL, 19, 0, 0);
    codeobj_5c896678dc60424688bf7973e944fac7 = MAKE_CODE_OBJECT(module_filename_obj, 142, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[51], mod_consts[51], mod_consts[109], NULL, 10, 0, 0);
    codeobj_3efb9c6ac690d7b4cf3da233cace2506 = MAKE_CODE_OBJECT(module_filename_obj, 483, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts[91], mod_consts[91], mod_consts[110], NULL, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__4_complex_call_helper_pos_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_networkx$drawing$nx_latex$$$function__1_to_latex_raw(PyObject *defaults);


static PyObject *MAKE_FUNCTION_networkx$drawing$nx_latex$$$function__2_to_latex(PyObject *defaults);


static PyObject *MAKE_FUNCTION_networkx$drawing$nx_latex$$$function__3_write_latex();


// The module function definitions.
static PyObject *impl_networkx$drawing$nx_latex$$$function__1_to_latex_raw(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_G = python_pars[0];
    PyObject *par_pos = python_pars[1];
    PyObject *par_tikz_options = python_pars[2];
    PyObject *par_default_node_options = python_pars[3];
    PyObject *par_node_options = python_pars[4];
    PyObject *par_node_label = python_pars[5];
    PyObject *par_default_edge_options = python_pars[6];
    PyObject *par_edge_options = python_pars[7];
    PyObject *par_edge_label = python_pars[8];
    PyObject *par_edge_label_options = python_pars[9];
    PyObject *var_i8 = NULL;
    PyObject *var_node = NULL;
    PyObject *var_posnode = NULL;
    PyObject *var_posx = NULL;
    PyObject *var_posy = NULL;
    PyObject *var_msg = NULL;
    PyObject *var_topts = NULL;
    PyObject *var_defn = NULL;
    PyObject *var_linestyle = NULL;
    PyObject *var_defe = NULL;
    PyObject *var_result = NULL;
    PyObject *var_n = NULL;
    PyObject *var_nopts = NULL;
    PyObject *var_ntext = NULL;
    PyObject *var_edge = NULL;
    PyObject *var_u = NULL;
    PyObject *var_v = NULL;
    PyObject *var_e_opts = NULL;
    PyObject *var_els = NULL;
    PyObject *var_e_label = NULL;
    PyObject *outline_0_var_i = NULL;
    PyObject *outline_0_var_n = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_dictcontraction_1__$0 = NULL;
    PyObject *tmp_dictcontraction_1__contraction = NULL;
    PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_5c896678dc60424688bf7973e944fac7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
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
    bool tmp_result;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
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
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    static struct Nuitka_FrameObject *cache_frame_5c896678dc60424688bf7973e944fac7 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[0];
        assert(var_i8 == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_i8 = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_5c896678dc60424688bf7973e944fac7)) {
        Py_XDECREF(cache_frame_5c896678dc60424688bf7973e944fac7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5c896678dc60424688bf7973e944fac7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5c896678dc60424688bf7973e944fac7 = MAKE_FUNCTION_FRAME(tstate, codeobj_5c896678dc60424688bf7973e944fac7, module_networkx$drawing$nx_latex, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5c896678dc60424688bf7973e944fac7->m_type_description == NULL);
    frame_5c896678dc60424688bf7973e944fac7 = cache_frame_5c896678dc60424688bf7973e944fac7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_5c896678dc60424688bf7973e944fac7);
    assert(Py_REFCNT(frame_5c896678dc60424688bf7973e944fac7) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_pos);
        tmp_isinstance_inst_1 = par_pos;
        tmp_isinstance_cls_1 = (PyObject *)&PyDict_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
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
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_networkx$drawing$nx_latex, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_G);
        tmp_args_element_value_1 = par_G;
        CHECK_OBJECT(par_pos);
        tmp_args_element_value_2 = par_pos;
        frame_5c896678dc60424688bf7973e944fac7->m_frame.f_lineno = 218;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS2(
                tstate,
                tmp_called_instance_1,
                mod_consts[2],
                call_args
            );
        }

        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_pos;
            assert(old != NULL);
            par_pos = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_2;
        CHECK_OBJECT(par_pos);
        tmp_operand_value_2 = par_pos;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_3;
        // Tried code:
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_element_value_3;
            tmp_called_value_1 = (PyObject *)&PyEnum_Type;
            if (par_G == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[3]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 221;
                type_description_1 = "ooooooooooNoooooooooooooooooooo";
                goto try_except_handler_2;
            }

            tmp_args_element_value_3 = par_G;
            frame_5c896678dc60424688bf7973e944fac7->m_frame.f_lineno = 221;
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_3);
            if (tmp_iter_arg_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;
                type_description_1 = "ooooooooooNoooooooooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_4 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;
                type_description_1 = "ooooooooooNoooooooooooooooooooo";
                goto try_except_handler_2;
            }
            assert(tmp_dictcontraction_1__$0 == NULL);
            tmp_dictcontraction_1__$0 = tmp_assign_source_4;
        }
        {
            PyObject *tmp_assign_source_5;
            tmp_assign_source_5 = MAKE_DICT_EMPTY();
            assert(tmp_dictcontraction_1__contraction == NULL);
            tmp_dictcontraction_1__contraction = tmp_assign_source_5;
        }
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_6;
            CHECK_OBJECT(tmp_dictcontraction_1__$0);
            tmp_next_source_1 = tmp_dictcontraction_1__$0;
            tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_6 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    type_description_1 = "ooooooooooNoooooooooooooooooooo";
                    exception_lineno = 221;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_dictcontraction_1__iter_value_0;
                tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_6;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT(tmp_dictcontraction_1__iter_value_0);
            tmp_iter_arg_2 = tmp_dictcontraction_1__iter_value_0;
            tmp_assign_source_7 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;
                type_description_1 = "ooooooooooNoooooooooooooooooooo";
                goto try_except_handler_4;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_1__source_iter;
                tmp_dictcontraction$tuple_unpack_1__source_iter = tmp_assign_source_7;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
            tmp_unpack_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
            tmp_assign_source_8 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 2);
            if (tmp_assign_source_8 == NULL) {
                if (!HAS_ERROR_OCCURRED(tstate)) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                }


                type_description_1 = "ooooooooooNoooooooooooooooooooo";
                exception_lineno = 221;
                goto try_except_handler_5;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_1;
                tmp_dictcontraction$tuple_unpack_1__element_1 = tmp_assign_source_8;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_9;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
            tmp_unpack_2 = tmp_dictcontraction$tuple_unpack_1__source_iter;
            tmp_assign_source_9 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 2);
            if (tmp_assign_source_9 == NULL) {
                if (!HAS_ERROR_OCCURRED(tstate)) {
                    exception_type = PyExc_StopIteration;
                    Py_INCREF(exception_type);
                    exception_value = NULL;
                    exception_tb = NULL;
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                }


                type_description_1 = "ooooooooooNoooooooooooooooooooo";
                exception_lineno = 221;
                goto try_except_handler_5;
            }
            {
                PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_2;
                tmp_dictcontraction$tuple_unpack_1__element_2 = tmp_assign_source_9;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_iterator_name_1;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
            tmp_iterator_name_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
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

                        type_description_1 = "ooooooooooNoooooooooooooooooooo";
                        exception_lineno = 221;
                        goto try_except_handler_5;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[4];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_1 = "ooooooooooNoooooooooooooooooooo";
                exception_lineno = 221;
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

        CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
        tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
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

        Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
        tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
        tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        try_end_2:;
        CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
        tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
        {
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_1);
            tmp_assign_source_10 = tmp_dictcontraction$tuple_unpack_1__element_1;
            {
                PyObject *old = outline_0_var_i;
                outline_0_var_i = tmp_assign_source_10;
                Py_INCREF(outline_0_var_i);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
        tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_11;
            CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_2);
            tmp_assign_source_11 = tmp_dictcontraction$tuple_unpack_1__element_2;
            {
                PyObject *old = outline_0_var_n;
                outline_0_var_n = tmp_assign_source_11;
                Py_INCREF(outline_0_var_n);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
        tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_dictset38_key_1;
            PyObject *tmp_dictset38_value_1;
            PyObject *tmp_string_concat_values_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_dictset38_dict_1;
            CHECK_OBJECT(outline_0_var_n);
            tmp_dictset38_key_1 = outline_0_var_n;
            tmp_tuple_element_1 = mod_consts[5];
            tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_format_value_1;
                PyObject *tmp_called_value_2;
                PyObject *tmp_args_element_value_4;
                PyObject *tmp_truediv_expr_left_1;
                PyObject *tmp_truediv_expr_right_1;
                PyObject *tmp_mult_expr_left_1;
                PyObject *tmp_mult_expr_right_1;
                PyObject *tmp_len_arg_1;
                PyObject *tmp_args_element_value_5;
                PyObject *tmp_format_spec_1;
                PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
                tmp_called_value_2 = LOOKUP_BUILTIN(mod_consts[6]);
                assert(tmp_called_value_2 != NULL);
                tmp_mult_expr_left_1 = mod_consts[7];
                CHECK_OBJECT(outline_0_var_i);
                tmp_mult_expr_right_1 = outline_0_var_i;
                tmp_truediv_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
                if (tmp_truediv_expr_left_1 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 221;
                    type_description_1 = "ooooooooooNoooooooooooooooooooo";
                    goto tuple_build_exception_1;
                }
                if (par_G == NULL) {
                    Py_DECREF(tmp_truediv_expr_left_1);
                    FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[3]);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(tstate, exception_value);

                    exception_lineno = 221;
                    type_description_1 = "ooooooooooNoooooooooooooooooooo";
                    goto tuple_build_exception_1;
                }

                tmp_len_arg_1 = par_G;
                tmp_truediv_expr_right_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
                if (tmp_truediv_expr_right_1 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_truediv_expr_left_1);

                    exception_lineno = 221;
                    type_description_1 = "ooooooooooNoooooooooooooooooooo";
                    goto tuple_build_exception_1;
                }
                tmp_args_element_value_4 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
                Py_DECREF(tmp_truediv_expr_left_1);
                Py_DECREF(tmp_truediv_expr_right_1);
                if (tmp_args_element_value_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 221;
                    type_description_1 = "ooooooooooNoooooooooooooooooooo";
                    goto tuple_build_exception_1;
                }
                tmp_args_element_value_5 = mod_consts[8];
                frame_5c896678dc60424688bf7973e944fac7->m_frame.f_lineno = 221;
                {
                    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
                    tmp_format_value_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
                }

                Py_DECREF(tmp_args_element_value_4);
                if (tmp_format_value_1 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 221;
                    type_description_1 = "ooooooooooNoooooooooooooooooooo";
                    goto tuple_build_exception_1;
                }
                tmp_format_spec_1 = mod_consts[9];
                tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
                Py_DECREF(tmp_format_value_1);
                if (tmp_tuple_element_1 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 221;
                    type_description_1 = "ooooooooooNoooooooooooooooooooo";
                    goto tuple_build_exception_1;
                }
                PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
                tmp_tuple_element_1 = mod_consts[10];
                PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            }
            goto tuple_build_noexception_1;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_1:;
            Py_DECREF(tmp_string_concat_values_1);
            goto try_except_handler_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_1:;
            tmp_dictset38_value_1 = PyUnicode_Join(mod_consts[9], tmp_string_concat_values_1);
            Py_DECREF(tmp_string_concat_values_1);
            if (tmp_dictset38_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;
                type_description_1 = "ooooooooooNoooooooooooooooooooo";
                goto try_except_handler_3;
            }
            CHECK_OBJECT(tmp_dictcontraction_1__contraction);
            tmp_dictset38_dict_1 = tmp_dictcontraction_1__contraction;
            assert(PyDict_CheckExact(tmp_dictset38_dict_1));
            tmp_res = PyDict_SetItem(tmp_dictset38_dict_1, tmp_dictset38_key_1, tmp_dictset38_value_1);

            Py_DECREF(tmp_dictset38_value_1);
            if (tmp_res != 0) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;
                type_description_1 = "ooooooooooNoooooooooooooooooooo";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        tmp_assign_source_3 = tmp_dictcontraction_1__contraction;
        Py_INCREF(tmp_assign_source_3);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_dictcontraction_1__$0);
        Py_DECREF(tmp_dictcontraction_1__$0);
        tmp_dictcontraction_1__$0 = NULL;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        Py_DECREF(tmp_dictcontraction_1__contraction);
        tmp_dictcontraction_1__contraction = NULL;
        Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
        tmp_dictcontraction_1__iter_value_0 = NULL;
        goto try_return_handler_2;
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

        CHECK_OBJECT(tmp_dictcontraction_1__$0);
        Py_DECREF(tmp_dictcontraction_1__$0);
        tmp_dictcontraction_1__$0 = NULL;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        Py_DECREF(tmp_dictcontraction_1__contraction);
        tmp_dictcontraction_1__contraction = NULL;
        Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
        tmp_dictcontraction_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_i);
        outline_0_var_i = NULL;
        Py_XDECREF(outline_0_var_n);
        outline_0_var_n = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_0_var_i);
        outline_0_var_i = NULL;
        Py_XDECREF(outline_0_var_n);
        outline_0_var_n = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 221;
        goto frame_exception_exit_1;
        outline_result_1:;
        {
            PyObject *old = par_pos;
            assert(old != NULL);
            par_pos = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_iter_arg_3;
        if (par_G == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 222;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_3 = par_G;
        tmp_assign_source_12 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_12;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_2 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_13 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_13 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooNoooooooooooooooooooo";
                exception_lineno = 222;
                goto try_except_handler_6;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_14 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_node;
            var_node = tmp_assign_source_14;
            Py_INCREF(var_node);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_node);
        tmp_cmp_expr_left_1 = var_node;
        if (par_pos == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 223;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_cmp_expr_right_1 = par_pos;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_networkx$drawing$nx_latex, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[12]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_tuple_element_2 = mod_consts[13];
        tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyObject *tmp_format_value_3;
            PyObject *tmp_format_spec_3;
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
            CHECK_OBJECT(var_node);
            tmp_format_value_2 = var_node;
            tmp_format_spec_2 = mod_consts[9];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;
                type_description_1 = "ooooooooooNoooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[14];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
            if (par_pos == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 224;
                type_description_1 = "ooooooooooNoooooooooooooooooooo";
                goto tuple_build_exception_2;
            }

            tmp_format_value_3 = par_pos;
            tmp_format_spec_3 = mod_consts[9];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 224;
                type_description_1 = "ooooooooooNoooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 3, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_string_concat_values_2);
        goto try_except_handler_6;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_args_element_value_6 = PyUnicode_Join(mod_consts[9], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 224;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto try_except_handler_6;
        }
        frame_5c896678dc60424688bf7973e944fac7->m_frame.f_lineno = 224;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_raise_type_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto try_except_handler_6;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 224;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooNoooooooooooooooooooo";
        goto try_except_handler_6;
    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        if (par_pos == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 225;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_2 = par_pos;
        CHECK_OBJECT(var_node);
        tmp_subscript_value_1 = var_node;
        tmp_assign_source_15 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_1);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_posnode;
            var_posnode = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        CHECK_OBJECT(var_posnode);
        tmp_isinstance_inst_2 = var_posnode;
        tmp_isinstance_cls_2 = (PyObject *)&PyUnicode_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_iter_arg_4;
        CHECK_OBJECT(var_posnode);
        tmp_iter_arg_4 = var_posnode;
        tmp_assign_source_16 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_17 = UNPACK_NEXT(tstate, tmp_unpack_3, 0, 2);
        if (tmp_assign_source_17 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            exception_lineno = 228;
            goto try_except_handler_9;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_18 = UNPACK_NEXT(tstate, tmp_unpack_4, 1, 2);
        if (tmp_assign_source_18 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            exception_lineno = 228;
            goto try_except_handler_9;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_1__source_iter;
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

                    type_description_1 = "ooooooooooNoooooooooooooooooooo";
                    exception_lineno = 228;
                    goto try_except_handler_9;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[4];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            exception_lineno = 228;
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

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_7;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_19 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_posx;
            var_posx = tmp_assign_source_19;
            Py_INCREF(var_posx);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_20 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_posy;
            var_posy = tmp_assign_source_20;
            Py_INCREF(var_posy);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_string_concat_values_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_tuple_element_3 = mod_consts[5];
        tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(5);
        {
            PyObject *tmp_format_value_4;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_args_element_value_8;
            PyObject *tmp_format_spec_4;
            PyObject *tmp_format_value_5;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_args_element_value_10;
            PyObject *tmp_format_spec_5;
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
            tmp_called_value_4 = LOOKUP_BUILTIN(mod_consts[6]);
            assert(tmp_called_value_4 != NULL);
            CHECK_OBJECT(var_posx);
            tmp_args_element_value_7 = var_posx;
            tmp_args_element_value_8 = mod_consts[8];
            frame_5c896678dc60424688bf7973e944fac7->m_frame.f_lineno = 229;
            {
                PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
                tmp_format_value_4 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
            }

            if (tmp_format_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 229;
                type_description_1 = "ooooooooooNoooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_format_spec_4 = mod_consts[9];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
            Py_DECREF(tmp_format_value_4);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 229;
                type_description_1 = "ooooooooooNoooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[15];
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 2, tmp_tuple_element_3);
            tmp_called_value_5 = LOOKUP_BUILTIN(mod_consts[6]);
            assert(tmp_called_value_5 != NULL);
            CHECK_OBJECT(var_posy);
            tmp_args_element_value_9 = var_posy;
            tmp_args_element_value_10 = mod_consts[8];
            frame_5c896678dc60424688bf7973e944fac7->m_frame.f_lineno = 229;
            {
                PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
                tmp_format_value_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_5, call_args);
            }

            if (tmp_format_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 229;
                type_description_1 = "ooooooooooNoooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            tmp_format_spec_5 = mod_consts[9];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_5, tmp_format_spec_5);
            Py_DECREF(tmp_format_value_5);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 229;
                type_description_1 = "ooooooooooNoooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_3, 3, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[16];
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 4, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_string_concat_values_3);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_ass_subvalue_1 = PyUnicode_Join(mod_consts[9], tmp_string_concat_values_3);
        Py_DECREF(tmp_string_concat_values_3);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto try_except_handler_7;
        }
        if (par_pos == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 229;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_ass_subscribed_1 = par_pos;
        CHECK_OBJECT(var_node);
        tmp_ass_subscript_1 = var_node;
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto try_except_handler_7;
        }
    }
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_7 == NULL) {
        exception_keeper_tb_7 = MAKE_TRACEBACK(frame_5c896678dc60424688bf7973e944fac7, exception_keeper_lineno_7);
    } else if (exception_keeper_lineno_7 != 0) {
        exception_keeper_tb_7 = ADD_TRACEBACK(exception_keeper_tb_7, frame_5c896678dc60424688bf7973e944fac7, exception_keeper_lineno_7);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7);
    // Tried code:
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = mod_consts[17];
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_condition_result_5 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_string_concat_values_4;
        PyObject *tmp_tuple_element_4;
        tmp_tuple_element_4 = mod_consts[18];
        tmp_string_concat_values_4 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_format_value_6;
            PyObject *tmp_format_spec_6;
            PyObject *tmp_format_value_7;
            PyObject *tmp_format_spec_7;
            PyTuple_SET_ITEM0(tmp_string_concat_values_4, 0, tmp_tuple_element_4);
            CHECK_OBJECT(var_node);
            tmp_format_value_6 = var_node;
            tmp_format_spec_6 = mod_consts[9];
            tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_6, tmp_format_spec_6);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;
                type_description_1 = "ooooooooooNoooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_4, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[19];
            PyTuple_SET_ITEM0(tmp_string_concat_values_4, 2, tmp_tuple_element_4);
            CHECK_OBJECT(var_posnode);
            tmp_format_value_7 = var_posnode;
            tmp_format_spec_7 = mod_consts[9];
            tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_7, tmp_format_spec_7);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;
                type_description_1 = "ooooooooooNoooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_4, 3, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_string_concat_values_4);
        goto try_except_handler_10;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_assign_source_21 = PyUnicode_Join(mod_consts[9], tmp_string_concat_values_4);
        Py_DECREF(tmp_string_concat_values_4);
        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto try_except_handler_10;
        }
        assert(var_msg == NULL);
        var_msg = tmp_assign_source_21;
    }
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_11;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_networkx$drawing$nx_latex, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto try_except_handler_10;
        }
        CHECK_OBJECT(var_msg);
        tmp_args_element_value_11 = var_msg;
        frame_5c896678dc60424688bf7973e944fac7->m_frame.f_lineno = 232;
        tmp_raise_type_2 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[12], tmp_args_element_value_11);
        if (tmp_raise_type_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto try_except_handler_10;
        }
        exception_type = tmp_raise_type_2;
        exception_lineno = 232;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooNoooooooooooooooooooo";
        goto try_except_handler_10;
    }
    goto branch_end_5;
    branch_no_5:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 227;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_5c896678dc60424688bf7973e944fac7->m_frame) frame_5c896678dc60424688bf7973e944fac7->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooNoooooooooooooooooooo";
    goto try_except_handler_10;
    branch_end_5:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_6;
    // End of try:
    // End of try:
    try_end_5:;
    branch_no_4:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 222;
        type_description_1 = "ooooooooooNoooooooooooooooooooo";
        goto try_except_handler_6;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
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
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

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
        PyObject *tmp_operand_value_4;
        PyObject *tmp_isinstance_inst_3;
        PyObject *tmp_isinstance_cls_3;
        CHECK_OBJECT(par_node_options);
        tmp_isinstance_inst_3 = par_node_options;
        tmp_isinstance_cls_3 = (PyObject *)&PyDict_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
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
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_networkx$drawing$nx_latex, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[2]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_G == NULL) {
            Py_DECREF(tmp_called_value_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 236;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_12 = par_G;
        CHECK_OBJECT(par_node_options);
        tmp_args_element_value_13 = par_node_options;
        frame_5c896678dc60424688bf7973e944fac7->m_frame.f_lineno = 236;
        {
            PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13};
            tmp_assign_source_22 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_called_value_6);
        if (tmp_assign_source_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_node_options;
            assert(old != NULL);
            par_node_options = tmp_assign_source_22;
            Py_DECREF(old);
        }

    }
    branch_no_6:;
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_isinstance_inst_4;
        PyObject *tmp_isinstance_cls_4;
        CHECK_OBJECT(par_node_label);
        tmp_isinstance_inst_4 = par_node_label;
        tmp_isinstance_cls_4 = (PyObject *)&PyDict_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_4, tmp_isinstance_cls_4);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_5 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_networkx$drawing$nx_latex, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[2]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_G == NULL) {
            Py_DECREF(tmp_called_value_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 238;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_14 = par_G;
        CHECK_OBJECT(par_node_label);
        tmp_args_element_value_15 = par_node_label;
        frame_5c896678dc60424688bf7973e944fac7->m_frame.f_lineno = 238;
        {
            PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15};
            tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_called_value_7);
        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_node_label;
            assert(old != NULL);
            par_node_label = tmp_assign_source_23;
            Py_DECREF(old);
        }

    }
    branch_no_7:;
    {
        bool tmp_condition_result_8;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_isinstance_inst_5;
        PyObject *tmp_isinstance_cls_5;
        CHECK_OBJECT(par_edge_options);
        tmp_isinstance_inst_5 = par_edge_options;
        tmp_isinstance_cls_5 = (PyObject *)&PyDict_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_5, tmp_isinstance_cls_5);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_6 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_networkx$drawing$nx_latex, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[20]);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_G == NULL) {
            Py_DECREF(tmp_called_value_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 240;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_16 = par_G;
        CHECK_OBJECT(par_edge_options);
        tmp_args_element_value_17 = par_edge_options;
        frame_5c896678dc60424688bf7973e944fac7->m_frame.f_lineno = 240;
        {
            PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17};
            tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_8, call_args);
        }

        Py_DECREF(tmp_called_value_8);
        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_edge_options;
            assert(old != NULL);
            par_edge_options = tmp_assign_source_24;
            Py_DECREF(old);
        }

    }
    branch_no_8:;
    {
        bool tmp_condition_result_9;
        PyObject *tmp_operand_value_7;
        PyObject *tmp_isinstance_inst_6;
        PyObject *tmp_isinstance_cls_6;
        CHECK_OBJECT(par_edge_label);
        tmp_isinstance_inst_6 = par_edge_label;
        tmp_isinstance_cls_6 = (PyObject *)&PyDict_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_6, tmp_isinstance_cls_6);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_7 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_9 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_networkx$drawing$nx_latex, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[20]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_G == NULL) {
            Py_DECREF(tmp_called_value_9);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 242;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_18 = par_G;
        CHECK_OBJECT(par_edge_label);
        tmp_args_element_value_19 = par_edge_label;
        frame_5c896678dc60424688bf7973e944fac7->m_frame.f_lineno = 242;
        {
            PyObject *call_args[] = {tmp_args_element_value_18, tmp_args_element_value_19};
            tmp_assign_source_25 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_9, call_args);
        }

        Py_DECREF(tmp_called_value_9);
        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_edge_label;
            assert(old != NULL);
            par_edge_label = tmp_assign_source_25;
            Py_DECREF(old);
        }

    }
    branch_no_9:;
    {
        bool tmp_condition_result_10;
        PyObject *tmp_operand_value_8;
        PyObject *tmp_isinstance_inst_7;
        PyObject *tmp_isinstance_cls_7;
        CHECK_OBJECT(par_edge_label_options);
        tmp_isinstance_inst_7 = par_edge_label_options;
        tmp_isinstance_cls_7 = (PyObject *)&PyDict_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_7, tmp_isinstance_cls_7);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_8 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_10 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_args_element_value_21;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_networkx$drawing$nx_latex, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[20]);
        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_G == NULL) {
            Py_DECREF(tmp_called_value_10);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 244;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_20 = par_G;
        CHECK_OBJECT(par_edge_label_options);
        tmp_args_element_value_21 = par_edge_label_options;
        frame_5c896678dc60424688bf7973e944fac7->m_frame.f_lineno = 244;
        {
            PyObject *call_args[] = {tmp_args_element_value_20, tmp_args_element_value_21};
            tmp_assign_source_26 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_10, call_args);
        }

        Py_DECREF(tmp_called_value_10);
        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_edge_label_options;
            assert(old != NULL);
            par_edge_label_options = tmp_assign_source_26;
            Py_DECREF(old);
        }

    }
    branch_no_10:;
    {
        PyObject *tmp_assign_source_27;
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_string_concat_values_5;
        PyObject *tmp_tuple_element_5;
        CHECK_OBJECT(par_tikz_options);
        tmp_cmp_expr_left_3 = par_tikz_options;
        tmp_cmp_expr_right_3 = mod_consts[9];
        tmp_condition_result_11 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_11 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_assign_source_27 = mod_consts[9];
        Py_INCREF(tmp_assign_source_27);
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_tuple_element_5 = mod_consts[21];
        tmp_string_concat_values_5 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_8;
            PyObject *tmp_called_value_11;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_format_spec_8;
            PyTuple_SET_ITEM0(tmp_string_concat_values_5, 0, tmp_tuple_element_5);
            CHECK_OBJECT(par_tikz_options);
            tmp_expression_value_8 = par_tikz_options;
            tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[22]);
            if (tmp_called_value_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;
                type_description_1 = "ooooooooooNoooooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            frame_5c896678dc60424688bf7973e944fac7->m_frame.f_lineno = 247;
            tmp_format_value_8 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_11, mod_consts[23]);

            Py_DECREF(tmp_called_value_11);
            if (tmp_format_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;
                type_description_1 = "ooooooooooNoooooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            tmp_format_spec_8 = mod_consts[9];
            tmp_tuple_element_5 = BUILTIN_FORMAT(tstate, tmp_format_value_8, tmp_format_spec_8);
            Py_DECREF(tmp_format_value_8);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;
                type_description_1 = "ooooooooooNoooooooooooooooooooo";
                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_5, 1, tmp_tuple_element_5);
            tmp_tuple_element_5 = mod_consts[24];
            PyTuple_SET_ITEM0(tmp_string_concat_values_5, 2, tmp_tuple_element_5);
        }
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_string_concat_values_5);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_assign_source_27 = PyUnicode_Join(mod_consts[9], tmp_string_concat_values_5);
        Py_DECREF(tmp_string_concat_values_5);
        if (tmp_assign_source_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
        assert(var_topts == NULL);
        var_topts = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_string_concat_values_6;
        PyObject *tmp_tuple_element_6;
        CHECK_OBJECT(par_default_node_options);
        tmp_cmp_expr_left_4 = par_default_node_options;
        tmp_cmp_expr_right_4 = mod_consts[9];
        tmp_condition_result_12 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        tmp_assign_source_28 = mod_consts[9];
        Py_INCREF(tmp_assign_source_28);
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_tuple_element_6 = mod_consts[21];
        tmp_string_concat_values_6 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_9;
            PyObject *tmp_called_value_12;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_format_spec_9;
            PyTuple_SET_ITEM0(tmp_string_concat_values_6, 0, tmp_tuple_element_6);
            CHECK_OBJECT(par_default_node_options);
            tmp_expression_value_9 = par_default_node_options;
            tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[22]);
            if (tmp_called_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;
                type_description_1 = "ooooooooooNoooooooooooooooooooo";
                goto tuple_build_exception_6;
            }
            frame_5c896678dc60424688bf7973e944fac7->m_frame.f_lineno = 248;
            tmp_format_value_9 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_12, mod_consts[23]);

            Py_DECREF(tmp_called_value_12);
            if (tmp_format_value_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;
                type_description_1 = "ooooooooooNoooooooooooooooooooo";
                goto tuple_build_exception_6;
            }
            tmp_format_spec_9 = mod_consts[9];
            tmp_tuple_element_6 = BUILTIN_FORMAT(tstate, tmp_format_value_9, tmp_format_spec_9);
            Py_DECREF(tmp_format_value_9);
            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 248;
                type_description_1 = "ooooooooooNoooooooooooooooooooo";
                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_6, 1, tmp_tuple_element_6);
            tmp_tuple_element_6 = mod_consts[24];
            PyTuple_SET_ITEM0(tmp_string_concat_values_6, 2, tmp_tuple_element_6);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_string_concat_values_6);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_assign_source_28 = PyUnicode_Join(mod_consts[9], tmp_string_concat_values_6);
        Py_DECREF(tmp_string_concat_values_6);
        if (tmp_assign_source_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_2:;
        assert(var_defn == NULL);
        var_defn = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        if (par_G == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 249;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = par_G;
        frame_5c896678dc60424688bf7973e944fac7->m_frame.f_lineno = 249;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_3, mod_consts[25]);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 249;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_13 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        tmp_assign_source_29 = mod_consts[26];
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_assign_source_29 = mod_consts[27];
        condexpr_end_3:;
        assert(var_linestyle == NULL);
        Py_INCREF(tmp_assign_source_29);
        var_linestyle = tmp_assign_source_29;
    }
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(par_default_edge_options);
        tmp_cmp_expr_left_5 = par_default_edge_options;
        tmp_cmp_expr_right_5 = mod_consts[9];
        tmp_condition_result_14 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_condition_result_14 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        tmp_add_expr_left_2 = mod_consts[21];
        CHECK_OBJECT(var_linestyle);
        tmp_add_expr_right_2 = var_linestyle;
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_2, tmp_add_expr_right_2);
        assert(!(tmp_add_expr_left_1 == NULL));
        tmp_add_expr_right_1 = mod_consts[24];
        tmp_assign_source_30 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        assert(!(tmp_assign_source_30 == NULL));
        assert(var_defe == NULL);
        var_defe = tmp_assign_source_30;
    }
    goto branch_end_11;
    branch_no_11:;
    {
        bool tmp_condition_result_15;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        tmp_cmp_expr_left_6 = mod_consts[27];
        CHECK_OBJECT(par_default_edge_options);
        tmp_cmp_expr_right_6 = par_default_edge_options;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_6, tmp_cmp_expr_left_6);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_15 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_assign_source_31;
        CHECK_OBJECT(par_default_edge_options);
        tmp_assign_source_31 = par_default_edge_options;
        assert(var_defe == NULL);
        Py_INCREF(tmp_assign_source_31);
        var_defe = tmp_assign_source_31;
    }
    goto branch_end_12;
    branch_no_12:;
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_string_concat_values_7;
        PyObject *tmp_tuple_element_7;
        tmp_tuple_element_7 = mod_consts[21];
        tmp_string_concat_values_7 = MAKE_TUPLE_EMPTY(5);
        {
            PyObject *tmp_format_value_10;
            PyObject *tmp_called_value_13;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_format_spec_10;
            PyTuple_SET_ITEM0(tmp_string_concat_values_7, 0, tmp_tuple_element_7);
            CHECK_OBJECT(var_linestyle);
            tmp_tuple_element_7 = var_linestyle;
            PyTuple_SET_ITEM0(tmp_string_concat_values_7, 1, tmp_tuple_element_7);
            tmp_tuple_element_7 = mod_consts[28];
            PyTuple_SET_ITEM0(tmp_string_concat_values_7, 2, tmp_tuple_element_7);
            CHECK_OBJECT(par_default_edge_options);
            tmp_expression_value_10 = par_default_edge_options;
            tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[22]);
            if (tmp_called_value_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 255;
                type_description_1 = "ooooooooooNoooooooooooooooooooo";
                goto tuple_build_exception_7;
            }
            frame_5c896678dc60424688bf7973e944fac7->m_frame.f_lineno = 255;
            tmp_format_value_10 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_13, mod_consts[23]);

            Py_DECREF(tmp_called_value_13);
            if (tmp_format_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 255;
                type_description_1 = "ooooooooooNoooooooooooooooooooo";
                goto tuple_build_exception_7;
            }
            tmp_format_spec_10 = mod_consts[9];
            tmp_tuple_element_7 = BUILTIN_FORMAT(tstate, tmp_format_value_10, tmp_format_spec_10);
            Py_DECREF(tmp_format_value_10);
            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 255;
                type_description_1 = "ooooooooooNoooooooooooooooooooo";
                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_7, 3, tmp_tuple_element_7);
            tmp_tuple_element_7 = mod_consts[24];
            PyTuple_SET_ITEM0(tmp_string_concat_values_7, 4, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_string_concat_values_7);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_assign_source_32 = PyUnicode_Join(mod_consts[9], tmp_string_concat_values_7);
        Py_DECREF(tmp_string_concat_values_7);
        if (tmp_assign_source_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_defe == NULL);
        var_defe = tmp_assign_source_32;
    }
    branch_end_12:;
    branch_end_11:;
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        tmp_add_expr_left_3 = mod_consts[29];
        CHECK_OBJECT(var_topts);
        tmp_add_expr_right_3 = var_topts;
        tmp_assign_source_33 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_3, tmp_add_expr_right_3);
        assert(!(tmp_assign_source_33 == NULL));
        assert(var_result == NULL);
        var_result = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        CHECK_OBJECT(var_result);
        tmp_iadd_expr_left_1 = var_result;
        tmp_add_expr_left_4 = mod_consts[30];
        CHECK_OBJECT(var_defn);
        tmp_add_expr_right_4 = var_defn;
        tmp_iadd_expr_right_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_4, tmp_add_expr_right_4);
        assert(!(tmp_iadd_expr_right_1 == NULL));
        tmp_result = INPLACE_OPERATION_ADD_UNICODE_UNICODE(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        Py_DECREF(tmp_iadd_expr_right_1);
        assert(!(tmp_result == false));
        tmp_assign_source_34 = tmp_iadd_expr_left_1;
        var_result = tmp_assign_source_34;

    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_iter_arg_5;
        if (par_G == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 261;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_5 = par_G;
        tmp_assign_source_35 = MAKE_ITERATOR(tstate, tmp_iter_arg_5);
        if (tmp_assign_source_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_35;
    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_36;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_3 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_36 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_36 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooNoooooooooooooooooooo";
                exception_lineno = 261;
                goto try_except_handler_11;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_36;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_37;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_37 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_n;
            var_n = tmp_assign_source_37;
            Py_INCREF(var_n);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_38;
        bool tmp_condition_result_16;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        PyObject *tmp_string_concat_values_8;
        PyObject *tmp_tuple_element_8;
        CHECK_OBJECT(var_n);
        tmp_cmp_expr_left_7 = var_n;
        CHECK_OBJECT(par_node_options);
        tmp_cmp_expr_right_7 = par_node_options;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_7, tmp_cmp_expr_left_7);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_condition_result_16 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_16 != false) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        tmp_tuple_element_8 = mod_consts[21];
        tmp_string_concat_values_8 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_11;
            PyObject *tmp_called_value_14;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_format_spec_11;
            PyTuple_SET_ITEM0(tmp_string_concat_values_8, 0, tmp_tuple_element_8);
            CHECK_OBJECT(par_node_options);
            tmp_expression_value_12 = par_node_options;
            CHECK_OBJECT(var_n);
            tmp_subscript_value_2 = var_n;
            tmp_expression_value_11 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_12, tmp_subscript_value_2);
            if (tmp_expression_value_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
                type_description_1 = "ooooooooooNoooooooooooooooooooo";
                goto tuple_build_exception_8;
            }
            tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[22]);
            Py_DECREF(tmp_expression_value_11);
            if (tmp_called_value_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
                type_description_1 = "ooooooooooNoooooooooooooooooooo";
                goto tuple_build_exception_8;
            }
            frame_5c896678dc60424688bf7973e944fac7->m_frame.f_lineno = 263;
            tmp_format_value_11 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_14, mod_consts[23]);

            Py_DECREF(tmp_called_value_14);
            if (tmp_format_value_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
                type_description_1 = "ooooooooooNoooooooooooooooooooo";
                goto tuple_build_exception_8;
            }
            tmp_format_spec_11 = mod_consts[9];
            tmp_tuple_element_8 = BUILTIN_FORMAT(tstate, tmp_format_value_11, tmp_format_spec_11);
            Py_DECREF(tmp_format_value_11);
            if (tmp_tuple_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 263;
                type_description_1 = "ooooooooooNoooooooooooooooooooo";
                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_8, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[24];
            PyTuple_SET_ITEM0(tmp_string_concat_values_8, 2, tmp_tuple_element_8);
        }
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_string_concat_values_8);
        goto try_except_handler_11;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        tmp_assign_source_38 = PyUnicode_Join(mod_consts[9], tmp_string_concat_values_8);
        Py_DECREF(tmp_string_concat_values_8);
        if (tmp_assign_source_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto try_except_handler_11;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_assign_source_38 = mod_consts[9];
        Py_INCREF(tmp_assign_source_38);
        condexpr_end_4:;
        {
            PyObject *old = var_nopts;
            var_nopts = tmp_assign_source_38;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_39;
        bool tmp_condition_result_17;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        PyObject *tmp_string_concat_values_9;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_string_concat_values_10;
        PyObject *tmp_tuple_element_10;
        CHECK_OBJECT(var_n);
        tmp_cmp_expr_left_8 = var_n;
        CHECK_OBJECT(par_node_label);
        tmp_cmp_expr_right_8 = par_node_label;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_8, tmp_cmp_expr_left_8);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_condition_result_17 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_17 != false) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        tmp_tuple_element_9 = mod_consts[31];
        tmp_string_concat_values_9 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_12;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_subscript_value_3;
            PyObject *tmp_format_spec_12;
            PyTuple_SET_ITEM0(tmp_string_concat_values_9, 0, tmp_tuple_element_9);
            CHECK_OBJECT(par_node_label);
            tmp_expression_value_13 = par_node_label;
            CHECK_OBJECT(var_n);
            tmp_subscript_value_3 = var_n;
            tmp_format_value_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_3);
            if (tmp_format_value_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 265;
                type_description_1 = "ooooooooooNoooooooooooooooooooo";
                goto tuple_build_exception_9;
            }
            tmp_format_spec_12 = mod_consts[9];
            tmp_tuple_element_9 = BUILTIN_FORMAT(tstate, tmp_format_value_12, tmp_format_spec_12);
            Py_DECREF(tmp_format_value_12);
            if (tmp_tuple_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 265;
                type_description_1 = "ooooooooooNoooooooooooooooooooo";
                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_9, 1, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[32];
            PyTuple_SET_ITEM0(tmp_string_concat_values_9, 2, tmp_tuple_element_9);
        }
        goto tuple_build_noexception_9;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_9:;
        Py_DECREF(tmp_string_concat_values_9);
        goto try_except_handler_11;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_9:;
        tmp_assign_source_39 = PyUnicode_Join(mod_consts[9], tmp_string_concat_values_9);
        Py_DECREF(tmp_string_concat_values_9);
        if (tmp_assign_source_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto try_except_handler_11;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_tuple_element_10 = mod_consts[31];
        tmp_string_concat_values_10 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_13;
            PyObject *tmp_format_spec_13;
            PyTuple_SET_ITEM0(tmp_string_concat_values_10, 0, tmp_tuple_element_10);
            CHECK_OBJECT(var_n);
            tmp_format_value_13 = var_n;
            tmp_format_spec_13 = mod_consts[9];
            tmp_tuple_element_10 = BUILTIN_FORMAT(tstate, tmp_format_value_13, tmp_format_spec_13);
            if (tmp_tuple_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 265;
                type_description_1 = "ooooooooooNoooooooooooooooooooo";
                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_10, 1, tmp_tuple_element_10);
            tmp_tuple_element_10 = mod_consts[32];
            PyTuple_SET_ITEM0(tmp_string_concat_values_10, 2, tmp_tuple_element_10);
        }
        goto tuple_build_noexception_10;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_10:;
        Py_DECREF(tmp_string_concat_values_10);
        goto try_except_handler_11;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_10:;
        tmp_assign_source_39 = PyUnicode_Join(mod_consts[9], tmp_string_concat_values_10);
        Py_DECREF(tmp_string_concat_values_10);
        if (tmp_assign_source_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto try_except_handler_11;
        }
        condexpr_end_5:;
        {
            PyObject *old = var_ntext;
            var_ntext = tmp_assign_source_39;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_iadd_expr_left_2;
        PyObject *tmp_iadd_expr_right_2;
        PyObject *tmp_add_expr_left_5;
        PyObject *tmp_add_expr_right_5;
        PyObject *tmp_string_concat_values_11;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_format_value_14;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_format_spec_14;
        if (var_result == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 267;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto try_except_handler_11;
        }

        tmp_iadd_expr_left_2 = var_result;
        if (var_i8 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 267;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto try_except_handler_11;
        }

        tmp_add_expr_left_5 = var_i8;
        if (par_pos == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 267;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto try_except_handler_11;
        }

        tmp_expression_value_14 = par_pos;
        CHECK_OBJECT(var_n);
        tmp_subscript_value_4 = var_n;
        tmp_format_value_14 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_14, tmp_subscript_value_4);
        if (tmp_format_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_format_spec_14 = mod_consts[9];
        tmp_tuple_element_11 = BUILTIN_FORMAT(tstate, tmp_format_value_14, tmp_format_spec_14);
        Py_DECREF(tmp_format_value_14);
        if (tmp_tuple_element_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_string_concat_values_11 = MAKE_TUPLE_EMPTY(7);
        {
            PyObject *tmp_format_value_15;
            PyObject *tmp_format_spec_15;
            PyTuple_SET_ITEM(tmp_string_concat_values_11, 0, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[35];
            PyTuple_SET_ITEM0(tmp_string_concat_values_11, 1, tmp_tuple_element_11);
            CHECK_OBJECT(var_nopts);
            tmp_tuple_element_11 = var_nopts;
            PyTuple_SET_ITEM0(tmp_string_concat_values_11, 2, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[36];
            PyTuple_SET_ITEM0(tmp_string_concat_values_11, 3, tmp_tuple_element_11);
            CHECK_OBJECT(var_n);
            tmp_format_value_15 = var_n;
            tmp_format_spec_15 = mod_consts[9];
            tmp_tuple_element_11 = BUILTIN_FORMAT(tstate, tmp_format_value_15, tmp_format_spec_15);
            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;
                type_description_1 = "ooooooooooNoooooooooooooooooooo";
                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_11, 4, tmp_tuple_element_11);
            tmp_tuple_element_11 = mod_consts[16];
            PyTuple_SET_ITEM0(tmp_string_concat_values_11, 5, tmp_tuple_element_11);
            CHECK_OBJECT(var_ntext);
            tmp_tuple_element_11 = var_ntext;
            PyTuple_SET_ITEM0(tmp_string_concat_values_11, 6, tmp_tuple_element_11);
        }
        goto tuple_build_noexception_11;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_11:;
        Py_DECREF(tmp_string_concat_values_11);
        goto try_except_handler_11;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_11:;
        tmp_add_expr_right_5 = PyUnicode_Join(mod_consts[9], tmp_string_concat_values_11);
        Py_DECREF(tmp_string_concat_values_11);
        if (tmp_add_expr_right_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_iadd_expr_right_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_5, tmp_add_expr_right_5);
        Py_DECREF(tmp_add_expr_right_5);
        if (tmp_iadd_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        Py_DECREF(tmp_iadd_expr_right_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_assign_source_40 = tmp_iadd_expr_left_2;
        var_result = tmp_assign_source_40;

    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 261;
        type_description_1 = "ooooooooooNoooooooooooooooooooo";
        goto try_except_handler_11;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
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
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_iadd_expr_left_3;
        PyObject *tmp_iadd_expr_right_3;
        if (var_result == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 268;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iadd_expr_left_3 = var_result;
        tmp_iadd_expr_right_3 = mod_consts[37];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_41 = tmp_iadd_expr_left_3;
        var_result = tmp_assign_source_41;

    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_iadd_expr_left_4;
        PyObject *tmp_iadd_expr_right_4;
        PyObject *tmp_add_expr_left_6;
        PyObject *tmp_add_expr_right_6;
        CHECK_OBJECT(var_result);
        tmp_iadd_expr_left_4 = var_result;
        tmp_add_expr_left_6 = mod_consts[38];
        CHECK_OBJECT(var_defe);
        tmp_add_expr_right_6 = var_defe;
        tmp_iadd_expr_right_4 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_6, tmp_add_expr_right_6);
        if (tmp_iadd_expr_right_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_4, tmp_iadd_expr_right_4);
        Py_DECREF(tmp_iadd_expr_right_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_42 = tmp_iadd_expr_left_4;
        var_result = tmp_assign_source_42;

    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_iter_arg_6;
        PyObject *tmp_expression_value_15;
        if (par_G == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[3]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 272;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_15 = par_G;
        tmp_iter_arg_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[39]);
        if (tmp_iter_arg_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_43 = MAKE_ITERATOR(tstate, tmp_iter_arg_6);
        Py_DECREF(tmp_iter_arg_6);
        if (tmp_assign_source_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_3__for_iterator == NULL);
        tmp_for_loop_3__for_iterator = tmp_assign_source_43;
    }
    // Tried code:
    loop_start_4:;
    {
        PyObject *tmp_next_source_4;
        PyObject *tmp_assign_source_44;
        CHECK_OBJECT(tmp_for_loop_3__for_iterator);
        tmp_next_source_4 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_44 = ITERATOR_NEXT(tmp_next_source_4);
        if (tmp_assign_source_44 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_4;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooNoooooooooooooooooooo";
                exception_lineno = 272;
                goto try_except_handler_12;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_44;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_45;
        CHECK_OBJECT(tmp_for_loop_3__iter_value);
        tmp_assign_source_45 = tmp_for_loop_3__iter_value;
        {
            PyObject *old = var_edge;
            var_edge = tmp_assign_source_45;
            Py_INCREF(var_edge);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_iter_arg_7;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_5;
        CHECK_OBJECT(var_edge);
        tmp_expression_value_16 = var_edge;
        tmp_subscript_value_5 = mod_consts[40];
        tmp_iter_arg_7 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_16, tmp_subscript_value_5);
        if (tmp_iter_arg_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_assign_source_46 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_7);
        Py_DECREF(tmp_iter_arg_7);
        if (tmp_assign_source_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto try_except_handler_13;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_46;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_47 = UNPACK_NEXT(tstate, tmp_unpack_5, 0, 2);
        if (tmp_assign_source_47 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            exception_lineno = 273;
            goto try_except_handler_14;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_47;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_48 = UNPACK_NEXT(tstate, tmp_unpack_6, 1, 2);
        if (tmp_assign_source_48 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            exception_lineno = 273;
            goto try_except_handler_14;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_48;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_3 = tmp_tuple_unpack_2__source_iter;
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

                    type_description_1 = "ooooooooooNoooooooooooooooooooo";
                    exception_lineno = 273;
                    goto try_except_handler_14;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[4];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            exception_lineno = 273;
            goto try_except_handler_14;
        }
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto try_except_handler_13;
    // End of try:
    try_end_8:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto try_except_handler_12;
    // End of try:
    try_end_9:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_49;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_49 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_u;
            var_u = tmp_assign_source_49;
            Py_INCREF(var_u);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_50;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_50 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_v;
            var_v = tmp_assign_source_50;
            Py_INCREF(var_v);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_51;
        bool tmp_condition_result_18;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_format_value_16;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_format_spec_16;
        PyObject *tmp_chars_value_1;
        CHECK_OBJECT(var_edge);
        tmp_cmp_expr_left_9 = var_edge;
        CHECK_OBJECT(par_edge_options);
        tmp_cmp_expr_right_9 = par_edge_options;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_9, tmp_cmp_expr_left_9);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_condition_result_18 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_18 != false) {
            goto condexpr_true_6;
        } else {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT(par_edge_options);
        tmp_expression_value_17 = par_edge_options;
        CHECK_OBJECT(var_edge);
        tmp_subscript_value_6 = var_edge;
        tmp_format_value_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_6);
        if (tmp_format_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_format_spec_16 = mod_consts[9];
        tmp_str_arg_value_1 = BUILTIN_FORMAT(tstate, tmp_format_value_16, tmp_format_spec_16);
        Py_DECREF(tmp_format_value_16);
        if (tmp_str_arg_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_chars_value_1 = mod_consts[41];
        tmp_assign_source_51 = UNICODE_STRIP2(tstate, tmp_str_arg_value_1, tmp_chars_value_1);
        Py_DECREF(tmp_str_arg_value_1);
        if (tmp_assign_source_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto try_except_handler_12;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_assign_source_51 = mod_consts[9];
        Py_INCREF(tmp_assign_source_51);
        condexpr_end_6:;
        {
            PyObject *old = var_e_opts;
            var_e_opts = tmp_assign_source_51;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_19;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        CHECK_OBJECT(var_u);
        tmp_cmp_expr_left_10 = var_u;
        CHECK_OBJECT(var_v);
        tmp_cmp_expr_right_10 = var_v;
        tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
        if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto try_except_handler_12;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_cmp_expr_left_11 = mod_consts[42];
        CHECK_OBJECT(var_e_opts);
        tmp_cmp_expr_right_11 = var_e_opts;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_11, tmp_cmp_expr_left_11);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_and_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_19 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_19 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_add_expr_left_7;
        PyObject *tmp_add_expr_right_7;
        tmp_add_expr_left_7 = mod_consts[43];
        CHECK_OBJECT(var_e_opts);
        tmp_add_expr_right_7 = var_e_opts;
        tmp_assign_source_52 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_7, tmp_add_expr_right_7);
        assert(!(tmp_assign_source_52 == NULL));
        {
            PyObject *old = var_e_opts;
            assert(old != NULL);
            var_e_opts = tmp_assign_source_52;
            Py_DECREF(old);
        }

    }
    branch_no_13:;
    {
        PyObject *tmp_assign_source_53;
        bool tmp_condition_result_20;
        PyObject *tmp_cmp_expr_left_12;
        PyObject *tmp_cmp_expr_right_12;
        PyObject *tmp_string_concat_values_12;
        PyObject *tmp_tuple_element_12;
        CHECK_OBJECT(var_e_opts);
        tmp_cmp_expr_left_12 = var_e_opts;
        tmp_cmp_expr_right_12 = mod_consts[9];
        tmp_condition_result_20 = RICH_COMPARE_EQ_CBOOL_UNICODE_UNICODE(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
        tmp_condition_result_20 = !tmp_condition_result_20;
        if (tmp_condition_result_20 != false) {
            goto condexpr_true_7;
        } else {
            goto condexpr_false_7;
        }
        condexpr_true_7:;
        tmp_tuple_element_12 = mod_consts[21];
        tmp_string_concat_values_12 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_string_concat_values_12, 0, tmp_tuple_element_12);
        CHECK_OBJECT(var_e_opts);
        tmp_tuple_element_12 = var_e_opts;
        PyTuple_SET_ITEM0(tmp_string_concat_values_12, 1, tmp_tuple_element_12);
        tmp_tuple_element_12 = mod_consts[24];
        PyTuple_SET_ITEM0(tmp_string_concat_values_12, 2, tmp_tuple_element_12);
        tmp_assign_source_53 = PyUnicode_Join(mod_consts[9], tmp_string_concat_values_12);
        Py_DECREF(tmp_string_concat_values_12);
        if (tmp_assign_source_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto try_except_handler_12;
        }
        goto condexpr_end_7;
        condexpr_false_7:;
        tmp_assign_source_53 = mod_consts[9];
        Py_INCREF(tmp_assign_source_53);
        condexpr_end_7:;
        {
            PyObject *old = var_e_opts;
            assert(old != NULL);
            var_e_opts = tmp_assign_source_53;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_54;
        bool tmp_condition_result_21;
        PyObject *tmp_cmp_expr_left_13;
        PyObject *tmp_cmp_expr_right_13;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_subscript_value_7;
        CHECK_OBJECT(var_edge);
        tmp_cmp_expr_left_13 = var_edge;
        CHECK_OBJECT(par_edge_label_options);
        tmp_cmp_expr_right_13 = par_edge_label_options;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_13, tmp_cmp_expr_left_13);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_condition_result_21 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_21 != false) {
            goto condexpr_true_8;
        } else {
            goto condexpr_false_8;
        }
        condexpr_true_8:;
        CHECK_OBJECT(par_edge_label_options);
        tmp_expression_value_18 = par_edge_label_options;
        CHECK_OBJECT(var_edge);
        tmp_subscript_value_7 = var_edge;
        tmp_assign_source_54 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_18, tmp_subscript_value_7);
        if (tmp_assign_source_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto try_except_handler_12;
        }
        goto condexpr_end_8;
        condexpr_false_8:;
        tmp_assign_source_54 = mod_consts[9];
        Py_INCREF(tmp_assign_source_54);
        condexpr_end_8:;
        {
            PyObject *old = var_els;
            var_els = tmp_assign_source_54;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_string_concat_values_13;
        PyObject *tmp_tuple_element_13;
        tmp_tuple_element_13 = mod_consts[21];
        tmp_string_concat_values_13 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_17;
            PyObject *tmp_called_value_15;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_format_spec_17;
            PyTuple_SET_ITEM0(tmp_string_concat_values_13, 0, tmp_tuple_element_13);
            CHECK_OBJECT(var_els);
            tmp_expression_value_19 = var_els;
            tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[22]);
            if (tmp_called_value_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;
                type_description_1 = "ooooooooooNoooooooooooooooooooo";
                goto tuple_build_exception_12;
            }
            frame_5c896678dc60424688bf7973e944fac7->m_frame.f_lineno = 283;
            tmp_format_value_17 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_15, mod_consts[23]);

            Py_DECREF(tmp_called_value_15);
            if (tmp_format_value_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;
                type_description_1 = "ooooooooooNoooooooooooooooooooo";
                goto tuple_build_exception_12;
            }
            tmp_format_spec_17 = mod_consts[9];
            tmp_tuple_element_13 = BUILTIN_FORMAT(tstate, tmp_format_value_17, tmp_format_spec_17);
            Py_DECREF(tmp_format_value_17);
            if (tmp_tuple_element_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;
                type_description_1 = "ooooooooooNoooooooooooooooooooo";
                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_13, 1, tmp_tuple_element_13);
            tmp_tuple_element_13 = mod_consts[24];
            PyTuple_SET_ITEM0(tmp_string_concat_values_13, 2, tmp_tuple_element_13);
        }
        goto tuple_build_noexception_12;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_12:;
        Py_DECREF(tmp_string_concat_values_13);
        goto try_except_handler_12;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_12:;
        tmp_assign_source_55 = PyUnicode_Join(mod_consts[9], tmp_string_concat_values_13);
        Py_DECREF(tmp_string_concat_values_13);
        if (tmp_assign_source_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto try_except_handler_12;
        }
        {
            PyObject *old = var_els;
            assert(old != NULL);
            var_els = tmp_assign_source_55;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_56;
        bool tmp_condition_result_22;
        PyObject *tmp_cmp_expr_left_14;
        PyObject *tmp_cmp_expr_right_14;
        PyObject *tmp_string_concat_values_14;
        PyObject *tmp_tuple_element_14;
        CHECK_OBJECT(var_edge);
        tmp_cmp_expr_left_14 = var_edge;
        CHECK_OBJECT(par_edge_label);
        tmp_cmp_expr_right_14 = par_edge_label;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_14, tmp_cmp_expr_left_14);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_condition_result_22 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_22 != false) {
            goto condexpr_true_9;
        } else {
            goto condexpr_false_9;
        }
        condexpr_true_9:;
        tmp_tuple_element_14 = mod_consts[35];
        tmp_string_concat_values_14 = MAKE_TUPLE_EMPTY(5);
        {
            PyObject *tmp_format_value_18;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_subscript_value_8;
            PyObject *tmp_format_spec_18;
            PyTuple_SET_ITEM0(tmp_string_concat_values_14, 0, tmp_tuple_element_14);
            CHECK_OBJECT(var_els);
            tmp_tuple_element_14 = var_els;
            PyTuple_SET_ITEM0(tmp_string_concat_values_14, 1, tmp_tuple_element_14);
            tmp_tuple_element_14 = mod_consts[44];
            PyTuple_SET_ITEM0(tmp_string_concat_values_14, 2, tmp_tuple_element_14);
            CHECK_OBJECT(par_edge_label);
            tmp_expression_value_20 = par_edge_label;
            CHECK_OBJECT(var_edge);
            tmp_subscript_value_8 = var_edge;
            tmp_format_value_18 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_20, tmp_subscript_value_8);
            if (tmp_format_value_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 285;
                type_description_1 = "ooooooooooNoooooooooooooooooooo";
                goto tuple_build_exception_13;
            }
            tmp_format_spec_18 = mod_consts[9];
            tmp_tuple_element_14 = BUILTIN_FORMAT(tstate, tmp_format_value_18, tmp_format_spec_18);
            Py_DECREF(tmp_format_value_18);
            if (tmp_tuple_element_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 285;
                type_description_1 = "ooooooooooNoooooooooooooooooooo";
                goto tuple_build_exception_13;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_14, 3, tmp_tuple_element_14);
            tmp_tuple_element_14 = mod_consts[32];
            PyTuple_SET_ITEM0(tmp_string_concat_values_14, 4, tmp_tuple_element_14);
        }
        goto tuple_build_noexception_13;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_13:;
        Py_DECREF(tmp_string_concat_values_14);
        goto try_except_handler_12;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_13:;
        tmp_assign_source_56 = PyUnicode_Join(mod_consts[9], tmp_string_concat_values_14);
        Py_DECREF(tmp_string_concat_values_14);
        if (tmp_assign_source_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto try_except_handler_12;
        }
        goto condexpr_end_9;
        condexpr_false_9:;
        tmp_assign_source_56 = mod_consts[9];
        Py_INCREF(tmp_assign_source_56);
        condexpr_end_9:;
        {
            PyObject *old = var_e_label;
            var_e_label = tmp_assign_source_56;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_iadd_expr_left_5;
        PyObject *tmp_iadd_expr_right_5;
        PyObject *tmp_add_expr_left_8;
        PyObject *tmp_add_expr_right_8;
        PyObject *tmp_string_concat_values_15;
        PyObject *tmp_tuple_element_15;
        if (var_result == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 287;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto try_except_handler_12;
        }

        tmp_iadd_expr_left_5 = var_result;
        if (var_i8 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[34]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 287;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto try_except_handler_12;
        }

        tmp_add_expr_left_8 = var_i8;
        tmp_tuple_element_15 = mod_consts[45];
        tmp_string_concat_values_15 = MAKE_TUPLE_EMPTY(9);
        {
            PyObject *tmp_format_value_19;
            PyObject *tmp_format_spec_19;
            PyObject *tmp_format_value_20;
            PyObject *tmp_format_spec_20;
            PyTuple_SET_ITEM0(tmp_string_concat_values_15, 0, tmp_tuple_element_15);
            CHECK_OBJECT(var_e_opts);
            tmp_tuple_element_15 = var_e_opts;
            PyTuple_SET_ITEM0(tmp_string_concat_values_15, 1, tmp_tuple_element_15);
            tmp_tuple_element_15 = mod_consts[36];
            PyTuple_SET_ITEM0(tmp_string_concat_values_15, 2, tmp_tuple_element_15);
            CHECK_OBJECT(var_u);
            tmp_format_value_19 = var_u;
            tmp_format_spec_19 = mod_consts[9];
            tmp_tuple_element_15 = BUILTIN_FORMAT(tstate, tmp_format_value_19, tmp_format_spec_19);
            if (tmp_tuple_element_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;
                type_description_1 = "ooooooooooNoooooooooooooooooooo";
                goto tuple_build_exception_14;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_15, 3, tmp_tuple_element_15);
            tmp_tuple_element_15 = mod_consts[46];
            PyTuple_SET_ITEM0(tmp_string_concat_values_15, 4, tmp_tuple_element_15);
            CHECK_OBJECT(var_e_label);
            tmp_tuple_element_15 = var_e_label;
            PyTuple_SET_ITEM0(tmp_string_concat_values_15, 5, tmp_tuple_element_15);
            tmp_tuple_element_15 = mod_consts[36];
            PyTuple_SET_ITEM0(tmp_string_concat_values_15, 6, tmp_tuple_element_15);
            CHECK_OBJECT(var_v);
            tmp_format_value_20 = var_v;
            tmp_format_spec_20 = mod_consts[9];
            tmp_tuple_element_15 = BUILTIN_FORMAT(tstate, tmp_format_value_20, tmp_format_spec_20);
            if (tmp_tuple_element_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;
                type_description_1 = "ooooooooooNoooooooooooooooooooo";
                goto tuple_build_exception_14;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_15, 7, tmp_tuple_element_15);
            tmp_tuple_element_15 = mod_consts[47];
            PyTuple_SET_ITEM0(tmp_string_concat_values_15, 8, tmp_tuple_element_15);
        }
        goto tuple_build_noexception_14;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_14:;
        Py_DECREF(tmp_string_concat_values_15);
        goto try_except_handler_12;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_14:;
        tmp_add_expr_right_8 = PyUnicode_Join(mod_consts[9], tmp_string_concat_values_15);
        Py_DECREF(tmp_string_concat_values_15);
        if (tmp_add_expr_right_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_iadd_expr_right_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_8, tmp_add_expr_right_8);
        Py_DECREF(tmp_add_expr_right_8);
        if (tmp_iadd_expr_right_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_5, tmp_iadd_expr_right_5);
        Py_DECREF(tmp_iadd_expr_right_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto try_except_handler_12;
        }
        tmp_assign_source_57 = tmp_iadd_expr_left_5;
        var_result = tmp_assign_source_57;

    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 272;
        type_description_1 = "ooooooooooNoooooooooooooooooooo";
        goto try_except_handler_12;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_10;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_iadd_expr_left_6;
        PyObject *tmp_iadd_expr_right_6;
        if (var_result == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 289;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iadd_expr_left_6 = var_result;
        tmp_iadd_expr_right_6 = mod_consts[48];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_6, tmp_iadd_expr_right_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "ooooooooooNoooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_58 = tmp_iadd_expr_left_6;
        var_result = tmp_assign_source_58;

    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5c896678dc60424688bf7973e944fac7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5c896678dc60424688bf7973e944fac7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5c896678dc60424688bf7973e944fac7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5c896678dc60424688bf7973e944fac7,
        type_description_1,
        par_G,
        par_pos,
        par_tikz_options,
        par_default_node_options,
        par_node_options,
        par_node_label,
        par_default_edge_options,
        par_edge_options,
        par_edge_label,
        par_edge_label_options,
        NULL,
        var_i8,
        var_node,
        var_posnode,
        var_posx,
        var_posy,
        var_msg,
        var_topts,
        var_defn,
        var_linestyle,
        var_defe,
        var_result,
        var_n,
        var_nopts,
        var_ntext,
        var_edge,
        var_u,
        var_v,
        var_e_opts,
        var_els,
        var_e_label
    );


    // Release cached frame if used for exception.
    if (frame_5c896678dc60424688bf7973e944fac7 == cache_frame_5c896678dc60424688bf7973e944fac7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5c896678dc60424688bf7973e944fac7);
        cache_frame_5c896678dc60424688bf7973e944fac7 = NULL;
    }

    assertFrameObject(frame_5c896678dc60424688bf7973e944fac7);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_result);
    tmp_return_value = var_result;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_pos);
    par_pos = NULL;
    CHECK_OBJECT(par_node_options);
    Py_DECREF(par_node_options);
    par_node_options = NULL;
    CHECK_OBJECT(par_node_label);
    Py_DECREF(par_node_label);
    par_node_label = NULL;
    CHECK_OBJECT(par_edge_options);
    Py_DECREF(par_edge_options);
    par_edge_options = NULL;
    CHECK_OBJECT(par_edge_label);
    Py_DECREF(par_edge_label);
    par_edge_label = NULL;
    CHECK_OBJECT(par_edge_label_options);
    Py_DECREF(par_edge_label_options);
    par_edge_label_options = NULL;
    Py_XDECREF(var_i8);
    var_i8 = NULL;
    Py_XDECREF(var_node);
    var_node = NULL;
    Py_XDECREF(var_posnode);
    var_posnode = NULL;
    Py_XDECREF(var_posx);
    var_posx = NULL;
    Py_XDECREF(var_posy);
    var_posy = NULL;
    CHECK_OBJECT(var_topts);
    Py_DECREF(var_topts);
    var_topts = NULL;
    CHECK_OBJECT(var_defn);
    Py_DECREF(var_defn);
    var_defn = NULL;
    CHECK_OBJECT(var_linestyle);
    Py_DECREF(var_linestyle);
    var_linestyle = NULL;
    CHECK_OBJECT(var_defe);
    Py_DECREF(var_defe);
    var_defe = NULL;
    CHECK_OBJECT(var_result);
    Py_DECREF(var_result);
    var_result = NULL;
    Py_XDECREF(var_n);
    var_n = NULL;
    Py_XDECREF(var_nopts);
    var_nopts = NULL;
    Py_XDECREF(var_ntext);
    var_ntext = NULL;
    Py_XDECREF(var_edge);
    var_edge = NULL;
    Py_XDECREF(var_u);
    var_u = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
    Py_XDECREF(var_e_opts);
    var_e_opts = NULL;
    Py_XDECREF(var_els);
    var_els = NULL;
    Py_XDECREF(var_e_label);
    var_e_label = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_pos);
    par_pos = NULL;
    Py_XDECREF(par_node_options);
    par_node_options = NULL;
    Py_XDECREF(par_node_label);
    par_node_label = NULL;
    Py_XDECREF(par_edge_options);
    par_edge_options = NULL;
    Py_XDECREF(par_edge_label);
    par_edge_label = NULL;
    Py_XDECREF(par_edge_label_options);
    par_edge_label_options = NULL;
    Py_XDECREF(var_i8);
    var_i8 = NULL;
    Py_XDECREF(var_node);
    var_node = NULL;
    Py_XDECREF(var_posnode);
    var_posnode = NULL;
    Py_XDECREF(var_posx);
    var_posx = NULL;
    Py_XDECREF(var_posy);
    var_posy = NULL;
    Py_XDECREF(var_msg);
    var_msg = NULL;
    Py_XDECREF(var_topts);
    var_topts = NULL;
    Py_XDECREF(var_defn);
    var_defn = NULL;
    Py_XDECREF(var_linestyle);
    var_linestyle = NULL;
    Py_XDECREF(var_defe);
    var_defe = NULL;
    Py_XDECREF(var_result);
    var_result = NULL;
    Py_XDECREF(var_n);
    var_n = NULL;
    Py_XDECREF(var_nopts);
    var_nopts = NULL;
    Py_XDECREF(var_ntext);
    var_ntext = NULL;
    Py_XDECREF(var_edge);
    var_edge = NULL;
    Py_XDECREF(var_u);
    var_u = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
    Py_XDECREF(var_e_opts);
    var_e_opts = NULL;
    Py_XDECREF(var_els);
    var_els = NULL;
    Py_XDECREF(var_e_label);
    var_e_label = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_G);
    Py_DECREF(par_G);
    CHECK_OBJECT(par_tikz_options);
    Py_DECREF(par_tikz_options);
    CHECK_OBJECT(par_default_node_options);
    Py_DECREF(par_default_node_options);
    CHECK_OBJECT(par_default_edge_options);
    Py_DECREF(par_default_edge_options);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_G);
    Py_DECREF(par_G);
    CHECK_OBJECT(par_tikz_options);
    Py_DECREF(par_tikz_options);
    CHECK_OBJECT(par_default_node_options);
    Py_DECREF(par_default_node_options);
    CHECK_OBJECT(par_default_edge_options);
    Py_DECREF(par_default_edge_options);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_networkx$drawing$nx_latex$$$function__2_to_latex(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_Gbunch = python_pars[0];
    PyObject *par_pos = python_pars[1];
    PyObject *par_tikz_options = python_pars[2];
    PyObject *par_default_node_options = python_pars[3];
    PyObject *par_node_options = python_pars[4];
    PyObject *par_node_label = python_pars[5];
    PyObject *par_default_edge_options = python_pars[6];
    PyObject *par_edge_options = python_pars[7];
    PyObject *par_edge_label = python_pars[8];
    PyObject *par_edge_label_options = python_pars[9];
    PyObject *par_caption = python_pars[10];
    PyObject *par_latex_label = python_pars[11];
    PyObject *par_sub_captions = python_pars[12];
    PyObject *par_sub_labels = python_pars[13];
    PyObject *par_n_rows = python_pars[14];
    PyObject *par_as_document = python_pars[15];
    PyObject *par_document_wrapper = python_pars[16];
    PyObject *par_figure_wrapper = python_pars[17];
    PyObject *par_subfigure_wrapper = python_pars[18];
    PyObject *var_raw = NULL;
    PyObject *var_sbf = NULL;
    PyObject *var_size = NULL;
    PyObject *var_N = NULL;
    PyObject *var_G = NULL;
    PyObject *var_subcap = NULL;
    PyObject *var_sublbl = NULL;
    PyObject *var_subraw = NULL;
    PyObject *var_cap = NULL;
    PyObject *var_lbl = NULL;
    PyObject *var_fig = NULL;
    nuitka_bool tmp_comparison_chain_1__comparison_result = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_comparison_chain_1__operand_2 = NULL;
    PyObject *tmp_comparison_chain_1__operand_3 = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_871be03b1a7f8a8f5a4bd403fa87bf58;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    bool tmp_result;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_871be03b1a7f8a8f5a4bd403fa87bf58 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_871be03b1a7f8a8f5a4bd403fa87bf58)) {
        Py_XDECREF(cache_frame_871be03b1a7f8a8f5a4bd403fa87bf58);

#if _DEBUG_REFCOUNTS
        if (cache_frame_871be03b1a7f8a8f5a4bd403fa87bf58 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_871be03b1a7f8a8f5a4bd403fa87bf58 = MAKE_FUNCTION_FRAME(tstate, codeobj_871be03b1a7f8a8f5a4bd403fa87bf58, module_networkx$drawing$nx_latex, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_871be03b1a7f8a8f5a4bd403fa87bf58->m_type_description == NULL);
    frame_871be03b1a7f8a8f5a4bd403fa87bf58 = cache_frame_871be03b1a7f8a8f5a4bd403fa87bf58;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_871be03b1a7f8a8f5a4bd403fa87bf58);
    assert(Py_REFCNT(frame_871be03b1a7f8a8f5a4bd403fa87bf58) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_Gbunch);
        tmp_expression_value_1 = par_Gbunch;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_1, mod_consts[50]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_networkx$drawing$nx_latex, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_Gbunch);
        tmp_args_element_value_1 = par_Gbunch;
        CHECK_OBJECT(par_pos);
        tmp_args_element_value_2 = par_pos;
        CHECK_OBJECT(par_tikz_options);
        tmp_args_element_value_3 = par_tikz_options;
        CHECK_OBJECT(par_default_node_options);
        tmp_args_element_value_4 = par_default_node_options;
        CHECK_OBJECT(par_node_options);
        tmp_args_element_value_5 = par_node_options;
        CHECK_OBJECT(par_node_label);
        tmp_args_element_value_6 = par_node_label;
        CHECK_OBJECT(par_default_edge_options);
        tmp_args_element_value_7 = par_default_edge_options;
        CHECK_OBJECT(par_edge_options);
        tmp_args_element_value_8 = par_edge_options;
        CHECK_OBJECT(par_edge_label);
        tmp_args_element_value_9 = par_edge_label;
        CHECK_OBJECT(par_edge_label_options);
        tmp_args_element_value_10 = par_edge_label_options;
        frame_871be03b1a7f8a8f5a4bd403fa87bf58->m_frame.f_lineno = 425;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS10(tstate, tmp_called_value_1, call_args);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_raw == NULL);
        var_raw = tmp_assign_source_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(par_subfigure_wrapper);
        tmp_assign_source_2 = par_subfigure_wrapper;
        assert(var_sbf == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_sbf = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        tmp_truediv_expr_left_1 = mod_consts[52];
        CHECK_OBJECT(par_n_rows);
        tmp_truediv_expr_right_1 = par_n_rows;
        tmp_assign_source_3 = BINARY_OPERATION_TRUEDIV_OBJECT_LONG_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_size == NULL);
        var_size = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_Gbunch);
        tmp_len_arg_1 = par_Gbunch;
        tmp_assign_source_4 = BUILTIN_LEN(tstate, tmp_len_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_N == NULL);
        var_N = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_pos);
        tmp_isinstance_inst_1 = par_pos;
        tmp_isinstance_cls_1 = mod_consts[53];
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_list_element_1;
        CHECK_OBJECT(par_pos);
        tmp_list_element_1 = par_pos;
        tmp_mult_expr_left_1 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_mult_expr_left_1, 0, tmp_list_element_1);
        CHECK_OBJECT(var_N);
        tmp_mult_expr_right_1 = var_N;
        tmp_assign_source_5 = BINARY_OPERATION_MULT_OBJECT_LIST_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        assert(!(tmp_assign_source_5 == NULL));
        {
            PyObject *old = par_pos;
            assert(old != NULL);
            par_pos = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_sub_captions);
        tmp_cmp_expr_left_1 = par_sub_captions;
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
        PyObject *tmp_assign_source_6;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        tmp_mult_expr_left_2 = MAKE_LIST1(mod_consts[9]);
        CHECK_OBJECT(var_N);
        tmp_mult_expr_right_2 = var_N;
        tmp_assign_source_6 = BINARY_OPERATION_MULT_OBJECT_LIST_LONG(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_left_2);
        assert(!(tmp_assign_source_6 == NULL));
        {
            PyObject *old = par_sub_captions;
            assert(old != NULL);
            par_sub_captions = tmp_assign_source_6;
            Py_DECREF(old);
        }

    }
    branch_no_3:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_sub_labels);
        tmp_cmp_expr_left_2 = par_sub_labels;
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
        PyObject *tmp_assign_source_7;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        tmp_mult_expr_left_3 = MAKE_LIST1(mod_consts[9]);
        CHECK_OBJECT(var_N);
        tmp_mult_expr_right_3 = var_N;
        tmp_assign_source_7 = BINARY_OPERATION_MULT_OBJECT_LIST_LONG(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        Py_DECREF(tmp_mult_expr_left_3);
        assert(!(tmp_assign_source_7 == NULL));
        {
            PyObject *old = par_sub_labels;
            assert(old != NULL);
            par_sub_labels = tmp_assign_source_7;
            Py_DECREF(old);
        }

    }
    branch_no_4:;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_len_arg_2;
            CHECK_OBJECT(par_pos);
            tmp_len_arg_2 = par_pos;
            tmp_assign_source_8 = BUILTIN_LEN(tstate, tmp_len_arg_2);
            if (tmp_assign_source_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 448;
                type_description_1 = "oooooooooooooooooooooooooooooo";
                goto try_except_handler_2;
            }
            assert(tmp_comparison_chain_1__operand_2 == NULL);
            tmp_comparison_chain_1__operand_2 = tmp_assign_source_8;
        }
        {
            nuitka_bool tmp_assign_source_9;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            PyObject *tmp_len_arg_3;
            bool tmp_tmp_assign_source_9_cbool_1;
            CHECK_OBJECT(par_Gbunch);
            tmp_len_arg_3 = par_Gbunch;
            tmp_cmp_expr_left_3 = BUILTIN_LEN(tstate, tmp_len_arg_3);
            if (tmp_cmp_expr_left_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 448;
                type_description_1 = "oooooooooooooooooooooooooooooo";
                goto try_except_handler_2;
            }
            CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
            tmp_cmp_expr_right_3 = tmp_comparison_chain_1__operand_2;
            tmp_tmp_assign_source_9_cbool_1 = RICH_COMPARE_EQ_CBOOL_LONG_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            Py_DECREF(tmp_cmp_expr_left_3);
            tmp_assign_source_9 = tmp_tmp_assign_source_9_cbool_1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_comparison_chain_1__comparison_result = tmp_assign_source_9;
        }
        {
            bool tmp_condition_result_6;
            PyObject *tmp_operand_value_2;
            assert(tmp_comparison_chain_1__comparison_result != NUITKA_BOOL_UNASSIGNED);
            tmp_operand_value_2 = (tmp_comparison_chain_1__comparison_result == NUITKA_BOOL_TRUE) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 448;
                type_description_1 = "oooooooooooooooooooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_condition_result_6 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_6 != false) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        assert(tmp_comparison_chain_1__comparison_result != NUITKA_BOOL_UNASSIGNED);
        tmp_operand_value_1 = (tmp_comparison_chain_1__comparison_result == NUITKA_BOOL_TRUE) ? Py_True : Py_False;
        Py_INCREF(tmp_operand_value_1);
        goto try_return_handler_2;
        branch_no_6:;
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_len_arg_4;
            CHECK_OBJECT(par_sub_captions);
            tmp_len_arg_4 = par_sub_captions;
            tmp_assign_source_10 = BUILTIN_LEN(tstate, tmp_len_arg_4);
            if (tmp_assign_source_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 448;
                type_description_1 = "oooooooooooooooooooooooooooooo";
                goto try_except_handler_2;
            }
            assert(tmp_comparison_chain_1__operand_3 == NULL);
            tmp_comparison_chain_1__operand_3 = tmp_assign_source_10;
        }
        {
            nuitka_bool tmp_assign_source_11;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            bool tmp_tmp_assign_source_11_cbool_1;
            CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
            tmp_cmp_expr_left_4 = tmp_comparison_chain_1__operand_2;
            CHECK_OBJECT(tmp_comparison_chain_1__operand_3);
            tmp_cmp_expr_right_4 = tmp_comparison_chain_1__operand_3;
            tmp_tmp_assign_source_11_cbool_1 = RICH_COMPARE_EQ_CBOOL_LONG_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            tmp_assign_source_11 = tmp_tmp_assign_source_11_cbool_1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_comparison_chain_1__comparison_result = tmp_assign_source_11;
        }
        {
            bool tmp_condition_result_7;
            PyObject *tmp_operand_value_3;
            assert(tmp_comparison_chain_1__comparison_result != NUITKA_BOOL_UNASSIGNED);
            tmp_operand_value_3 = (tmp_comparison_chain_1__comparison_result == NUITKA_BOOL_TRUE) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 448;
                type_description_1 = "oooooooooooooooooooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_condition_result_7 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_7 != false) {
                goto branch_yes_7;
            } else {
                goto branch_no_7;
            }
        }
        branch_yes_7:;
        assert(tmp_comparison_chain_1__comparison_result != NUITKA_BOOL_UNASSIGNED);
        tmp_operand_value_1 = (tmp_comparison_chain_1__comparison_result == NUITKA_BOOL_TRUE) ? Py_True : Py_False;
        Py_INCREF(tmp_operand_value_1);
        goto try_return_handler_2;
        branch_no_7:;
        {
            PyObject *tmp_cmp_expr_left_5;
            PyObject *tmp_cmp_expr_right_5;
            PyObject *tmp_len_arg_5;
            bool tmp_tmp_operand_value_1_cbool_1;
            CHECK_OBJECT(tmp_comparison_chain_1__operand_3);
            tmp_cmp_expr_left_5 = tmp_comparison_chain_1__operand_3;
            CHECK_OBJECT(par_sub_labels);
            tmp_len_arg_5 = par_sub_labels;
            tmp_cmp_expr_right_5 = BUILTIN_LEN(tstate, tmp_len_arg_5);
            if (tmp_cmp_expr_right_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 448;
                type_description_1 = "oooooooooooooooooooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_tmp_operand_value_1_cbool_1 = RICH_COMPARE_EQ_CBOOL_LONG_LONG(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
            Py_DECREF(tmp_cmp_expr_right_5);
            tmp_operand_value_1 = (tmp_tmp_operand_value_1_cbool_1 != false) ? Py_True : Py_False;
            Py_INCREF(tmp_operand_value_1);
            goto try_return_handler_2;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
        Py_DECREF(tmp_comparison_chain_1__operand_2);
        tmp_comparison_chain_1__operand_2 = NULL;
        Py_XDECREF(tmp_comparison_chain_1__operand_3);
        tmp_comparison_chain_1__operand_3 = NULL;
        assert(tmp_comparison_chain_1__comparison_result != NUITKA_BOOL_UNASSIGNED);
        tmp_comparison_chain_1__comparison_result = NUITKA_BOOL_UNASSIGNED;
        goto outline_result_1;
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

        Py_XDECREF(tmp_comparison_chain_1__operand_2);
        tmp_comparison_chain_1__operand_2 = NULL;
        Py_XDECREF(tmp_comparison_chain_1__operand_3);
        tmp_comparison_chain_1__operand_3 = NULL;
        tmp_comparison_chain_1__comparison_result = NUITKA_BOOL_UNASSIGNED;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_networkx$drawing$nx_latex, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_871be03b1a7f8a8f5a4bd403fa87bf58->m_frame.f_lineno = 449;
        tmp_raise_type_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[12],
            PyTuple_GET_ITEM(mod_consts[54], 0)
        );

        if (tmp_raise_type_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 449;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_5:;
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = mod_consts[9];
        assert(var_raw == NULL);
        Py_INCREF(tmp_assign_source_12);
        var_raw = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        tmp_called_value_2 = (PyObject *)&PyZip_Type;
        CHECK_OBJECT(par_Gbunch);
        tmp_args_element_value_11 = par_Gbunch;
        CHECK_OBJECT(par_pos);
        tmp_args_element_value_12 = par_pos;
        CHECK_OBJECT(par_sub_captions);
        tmp_args_element_value_13 = par_sub_captions;
        CHECK_OBJECT(par_sub_labels);
        tmp_args_element_value_14 = par_sub_labels;
        frame_871be03b1a7f8a8f5a4bd403fa87bf58->m_frame.f_lineno = 454;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS4(tstate, tmp_called_value_2, call_args);
        }

        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_13 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_13;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_14 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_14 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooooooooooooooooo";
                exception_lineno = 454;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_15 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_16 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 4);
        if (tmp_assign_source_16 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooo";
            exception_lineno = 454;
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_17 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 4);
        if (tmp_assign_source_17 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooo";
            exception_lineno = 454;
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_18 = UNPACK_NEXT(tstate, tmp_unpack_3, 2, 4);
        if (tmp_assign_source_18 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooo";
            exception_lineno = 454;
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_3;
            tmp_tuple_unpack_1__element_3 = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_19 = UNPACK_NEXT(tstate, tmp_unpack_4, 3, 4);
        if (tmp_assign_source_19 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooooooo";
            exception_lineno = 454;
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_4;
            tmp_tuple_unpack_1__element_4 = tmp_assign_source_19;
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

                    type_description_1 = "oooooooooooooooooooooooooooooo";
                    exception_lineno = 454;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[55];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooooooooooooooo";
            exception_lineno = 454;
            goto try_except_handler_5;
        }
    }
    goto try_end_1;
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
    try_end_1:;
    goto try_end_2;
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
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_20 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_G;
            var_G = tmp_assign_source_20;
            Py_INCREF(var_G);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_21 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = par_pos;
            par_pos = tmp_assign_source_21;
            Py_INCREF(par_pos);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_22 = tmp_tuple_unpack_1__element_3;
        {
            PyObject *old = var_subcap;
            var_subcap = tmp_assign_source_22;
            Py_INCREF(var_subcap);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
        tmp_assign_source_23 = tmp_tuple_unpack_1__element_4;
        {
            PyObject *old = var_sublbl;
            var_sublbl = tmp_assign_source_23;
            Py_INCREF(var_sublbl);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_args_element_value_24;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_networkx$drawing$nx_latex, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[51]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_G);
        tmp_args_element_value_15 = var_G;
        CHECK_OBJECT(par_pos);
        tmp_args_element_value_16 = par_pos;
        if (par_tikz_options == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 458;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_args_element_value_17 = par_tikz_options;
        if (par_default_node_options == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[57]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 459;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_args_element_value_18 = par_default_node_options;
        if (par_node_options == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 460;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_args_element_value_19 = par_node_options;
        if (par_node_label == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[59]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 461;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_args_element_value_20 = par_node_label;
        if (par_default_edge_options == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 462;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_args_element_value_21 = par_default_edge_options;
        if (par_edge_options == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[61]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 463;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_args_element_value_22 = par_edge_options;
        if (par_edge_label == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[62]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 464;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_args_element_value_23 = par_edge_label;
        if (par_edge_label_options == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[63]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 465;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_args_element_value_24 = par_edge_label_options;
        frame_871be03b1a7f8a8f5a4bd403fa87bf58->m_frame.f_lineno = 455;
        {
            PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21, tmp_args_element_value_22, tmp_args_element_value_23, tmp_args_element_value_24};
            tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS10(tstate, tmp_called_value_3, call_args);
        }

        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = var_subraw;
            var_subraw = tmp_assign_source_24;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_25;
        nuitka_bool tmp_condition_result_8;
        int tmp_truth_name_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_subcap);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_subcap);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_8 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_tuple_element_1 = mod_consts[64];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_subcap);
            tmp_format_value_1 = var_subcap;
            tmp_format_spec_1 = mod_consts[9];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 467;
                type_description_1 = "oooooooooooooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[32];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_25 = PyUnicode_Join(mod_consts[9], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_25 = mod_consts[9];
        Py_INCREF(tmp_assign_source_25);
        condexpr_end_1:;
        {
            PyObject *old = var_cap;
            var_cap = tmp_assign_source_25;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_26;
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_2;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(var_sublbl);
        tmp_truth_name_2 = CHECK_IF_TRUE(var_sublbl);
        if (tmp_truth_name_2 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_9 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        tmp_tuple_element_2 = mod_consts[65];
        tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
            CHECK_OBJECT(var_sublbl);
            tmp_format_value_2 = var_sublbl;
            tmp_format_spec_2 = mod_consts[9];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 468;
                type_description_1 = "oooooooooooooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[32];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_string_concat_values_2);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_assign_source_26 = PyUnicode_Join(mod_consts[9], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_assign_source_26 = mod_consts[9];
        Py_INCREF(tmp_assign_source_26);
        condexpr_end_2:;
        {
            PyObject *old = var_lbl;
            var_lbl = tmp_assign_source_26;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        if (var_raw == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[66]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 469;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_iadd_expr_left_1 = var_raw;
        if (var_sbf == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[67]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 469;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_2 = var_sbf;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[68]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (var_size == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[69]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 469;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_kw_call_value_0_1 = var_size;
        CHECK_OBJECT(var_subraw);
        tmp_kw_call_value_1_1 = var_subraw;
        CHECK_OBJECT(var_cap);
        tmp_kw_call_value_2_1 = var_cap;
        CHECK_OBJECT(var_lbl);
        tmp_kw_call_value_3_1 = var_lbl;
        frame_871be03b1a7f8a8f5a4bd403fa87bf58->m_frame.f_lineno = 469;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

            tmp_iadd_expr_right_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_4, kw_values, mod_consts[70]);
        }

        Py_DECREF(tmp_called_value_4);
        if (tmp_iadd_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        Py_DECREF(tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_27 = tmp_iadd_expr_left_1;
        var_raw = tmp_assign_source_27;

    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_iadd_expr_left_2;
        PyObject *tmp_iadd_expr_right_2;
        CHECK_OBJECT(var_raw);
        tmp_iadd_expr_left_2 = var_raw;
        tmp_iadd_expr_right_2 = mod_consts[71];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_28 = tmp_iadd_expr_left_2;
        var_raw = tmp_assign_source_28;

    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 454;
        type_description_1 = "oooooooooooooooooooooooooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
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

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    branch_end_1:;
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        if (var_raw == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[66]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 473;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = var_raw;
        tmp_subscript_value_1 = mod_consts[72];
        tmp_assign_source_29 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
        if (tmp_assign_source_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_raw;
            var_raw = tmp_assign_source_29;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_30;
        nuitka_bool tmp_condition_result_10;
        int tmp_truth_name_3;
        PyObject *tmp_string_concat_values_3;
        PyObject *tmp_tuple_element_3;
        CHECK_OBJECT(par_caption);
        tmp_truth_name_3 = CHECK_IF_TRUE(par_caption);
        if (tmp_truth_name_3 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_10 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        tmp_tuple_element_3 = mod_consts[73];
        tmp_string_concat_values_3 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_3;
            PyObject *tmp_format_spec_3;
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 0, tmp_tuple_element_3);
            CHECK_OBJECT(par_caption);
            tmp_format_value_3 = par_caption;
            tmp_format_spec_3 = mod_consts[9];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tstate, tmp_format_value_3, tmp_format_spec_3);
            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 474;
                type_description_1 = "oooooooooooooooooooooooooooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_3, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[32];
            PyTuple_SET_ITEM0(tmp_string_concat_values_3, 2, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_string_concat_values_3);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_assign_source_30 = PyUnicode_Join(mod_consts[9], tmp_string_concat_values_3);
        Py_DECREF(tmp_string_concat_values_3);
        if (tmp_assign_source_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_assign_source_30 = mod_consts[9];
        Py_INCREF(tmp_assign_source_30);
        condexpr_end_3:;
        {
            PyObject *old = var_cap;
            var_cap = tmp_assign_source_30;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_31;
        nuitka_bool tmp_condition_result_11;
        int tmp_truth_name_4;
        PyObject *tmp_string_concat_values_4;
        PyObject *tmp_tuple_element_4;
        CHECK_OBJECT(par_latex_label);
        tmp_truth_name_4 = CHECK_IF_TRUE(par_latex_label);
        if (tmp_truth_name_4 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 475;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_11 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        tmp_tuple_element_4 = mod_consts[65];
        tmp_string_concat_values_4 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_4;
            PyObject *tmp_format_spec_4;
            PyTuple_SET_ITEM0(tmp_string_concat_values_4, 0, tmp_tuple_element_4);
            CHECK_OBJECT(par_latex_label);
            tmp_format_value_4 = par_latex_label;
            tmp_format_spec_4 = mod_consts[9];
            tmp_tuple_element_4 = BUILTIN_FORMAT(tstate, tmp_format_value_4, tmp_format_spec_4);
            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 475;
                type_description_1 = "oooooooooooooooooooooooooooooo";
                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_4, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[32];
            PyTuple_SET_ITEM0(tmp_string_concat_values_4, 2, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_string_concat_values_4);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_assign_source_31 = PyUnicode_Join(mod_consts[9], tmp_string_concat_values_4);
        Py_DECREF(tmp_string_concat_values_4);
        if (tmp_assign_source_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 475;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_assign_source_31 = mod_consts[9];
        Py_INCREF(tmp_assign_source_31);
        condexpr_end_4:;
        {
            PyObject *old = var_lbl;
            var_lbl = tmp_assign_source_31;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_kw_call_value_1_2;
        PyObject *tmp_kw_call_value_2_2;
        CHECK_OBJECT(par_figure_wrapper);
        tmp_expression_value_4 = par_figure_wrapper;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[68]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_raw);
        tmp_kw_call_value_0_2 = var_raw;
        CHECK_OBJECT(var_cap);
        tmp_kw_call_value_1_2 = var_cap;
        CHECK_OBJECT(var_lbl);
        tmp_kw_call_value_2_2 = var_lbl;
        frame_871be03b1a7f8a8f5a4bd403fa87bf58->m_frame.f_lineno = 476;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_2};

            tmp_assign_source_32 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_5, kw_values, mod_consts[74]);
        }

        Py_DECREF(tmp_called_value_5);
        if (tmp_assign_source_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_fig == NULL);
        var_fig = tmp_assign_source_32;
    }
    {
        nuitka_bool tmp_condition_result_12;
        int tmp_truth_name_5;
        CHECK_OBJECT(par_as_document);
        tmp_truth_name_5 = CHECK_IF_TRUE(par_as_document);
        if (tmp_truth_name_5 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_12 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_value_0_3;
        CHECK_OBJECT(par_document_wrapper);
        tmp_expression_value_5 = par_document_wrapper;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[68]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_fig);
        tmp_kw_call_value_0_3 = var_fig;
        frame_871be03b1a7f8a8f5a4bd403fa87bf58->m_frame.f_lineno = 478;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_3};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_6, kw_values, mod_consts[75]);
        }

        Py_DECREF(tmp_called_value_6);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;
            type_description_1 = "oooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_8:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_871be03b1a7f8a8f5a4bd403fa87bf58, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_871be03b1a7f8a8f5a4bd403fa87bf58->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_871be03b1a7f8a8f5a4bd403fa87bf58, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_871be03b1a7f8a8f5a4bd403fa87bf58,
        type_description_1,
        par_Gbunch,
        par_pos,
        par_tikz_options,
        par_default_node_options,
        par_node_options,
        par_node_label,
        par_default_edge_options,
        par_edge_options,
        par_edge_label,
        par_edge_label_options,
        par_caption,
        par_latex_label,
        par_sub_captions,
        par_sub_labels,
        par_n_rows,
        par_as_document,
        par_document_wrapper,
        par_figure_wrapper,
        par_subfigure_wrapper,
        var_raw,
        var_sbf,
        var_size,
        var_N,
        var_G,
        var_subcap,
        var_sublbl,
        var_subraw,
        var_cap,
        var_lbl,
        var_fig
    );


    // Release cached frame if used for exception.
    if (frame_871be03b1a7f8a8f5a4bd403fa87bf58 == cache_frame_871be03b1a7f8a8f5a4bd403fa87bf58) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_871be03b1a7f8a8f5a4bd403fa87bf58);
        cache_frame_871be03b1a7f8a8f5a4bd403fa87bf58 = NULL;
    }

    assertFrameObject(frame_871be03b1a7f8a8f5a4bd403fa87bf58);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_fig);
    tmp_return_value = var_fig;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_pos);
    par_pos = NULL;
    Py_XDECREF(par_sub_captions);
    par_sub_captions = NULL;
    Py_XDECREF(par_sub_labels);
    par_sub_labels = NULL;
    CHECK_OBJECT(var_raw);
    Py_DECREF(var_raw);
    var_raw = NULL;
    Py_XDECREF(var_sbf);
    var_sbf = NULL;
    Py_XDECREF(var_size);
    var_size = NULL;
    Py_XDECREF(var_N);
    var_N = NULL;
    Py_XDECREF(var_G);
    var_G = NULL;
    Py_XDECREF(var_subcap);
    var_subcap = NULL;
    Py_XDECREF(var_sublbl);
    var_sublbl = NULL;
    Py_XDECREF(var_subraw);
    var_subraw = NULL;
    CHECK_OBJECT(var_cap);
    Py_DECREF(var_cap);
    var_cap = NULL;
    CHECK_OBJECT(var_lbl);
    Py_DECREF(var_lbl);
    var_lbl = NULL;
    CHECK_OBJECT(var_fig);
    Py_DECREF(var_fig);
    var_fig = NULL;
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

    Py_XDECREF(par_pos);
    par_pos = NULL;
    Py_XDECREF(par_sub_captions);
    par_sub_captions = NULL;
    Py_XDECREF(par_sub_labels);
    par_sub_labels = NULL;
    Py_XDECREF(var_raw);
    var_raw = NULL;
    Py_XDECREF(var_sbf);
    var_sbf = NULL;
    Py_XDECREF(var_size);
    var_size = NULL;
    Py_XDECREF(var_N);
    var_N = NULL;
    Py_XDECREF(var_G);
    var_G = NULL;
    Py_XDECREF(var_subcap);
    var_subcap = NULL;
    Py_XDECREF(var_sublbl);
    var_sublbl = NULL;
    Py_XDECREF(var_subraw);
    var_subraw = NULL;
    Py_XDECREF(var_cap);
    var_cap = NULL;
    Py_XDECREF(var_lbl);
    var_lbl = NULL;
    Py_XDECREF(var_fig);
    var_fig = NULL;
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
    CHECK_OBJECT(par_Gbunch);
    Py_DECREF(par_Gbunch);
    CHECK_OBJECT(par_tikz_options);
    Py_DECREF(par_tikz_options);
    CHECK_OBJECT(par_default_node_options);
    Py_DECREF(par_default_node_options);
    CHECK_OBJECT(par_node_options);
    Py_DECREF(par_node_options);
    CHECK_OBJECT(par_node_label);
    Py_DECREF(par_node_label);
    CHECK_OBJECT(par_default_edge_options);
    Py_DECREF(par_default_edge_options);
    CHECK_OBJECT(par_edge_options);
    Py_DECREF(par_edge_options);
    CHECK_OBJECT(par_edge_label);
    Py_DECREF(par_edge_label);
    CHECK_OBJECT(par_edge_label_options);
    Py_DECREF(par_edge_label_options);
    CHECK_OBJECT(par_caption);
    Py_DECREF(par_caption);
    CHECK_OBJECT(par_latex_label);
    Py_DECREF(par_latex_label);
    CHECK_OBJECT(par_n_rows);
    Py_DECREF(par_n_rows);
    CHECK_OBJECT(par_as_document);
    Py_DECREF(par_as_document);
    CHECK_OBJECT(par_document_wrapper);
    Py_DECREF(par_document_wrapper);
    CHECK_OBJECT(par_figure_wrapper);
    Py_DECREF(par_figure_wrapper);
    CHECK_OBJECT(par_subfigure_wrapper);
    Py_DECREF(par_subfigure_wrapper);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_Gbunch);
    Py_DECREF(par_Gbunch);
    CHECK_OBJECT(par_tikz_options);
    Py_DECREF(par_tikz_options);
    CHECK_OBJECT(par_default_node_options);
    Py_DECREF(par_default_node_options);
    CHECK_OBJECT(par_node_options);
    Py_DECREF(par_node_options);
    CHECK_OBJECT(par_node_label);
    Py_DECREF(par_node_label);
    CHECK_OBJECT(par_default_edge_options);
    Py_DECREF(par_default_edge_options);
    CHECK_OBJECT(par_edge_options);
    Py_DECREF(par_edge_options);
    CHECK_OBJECT(par_edge_label);
    Py_DECREF(par_edge_label);
    CHECK_OBJECT(par_edge_label_options);
    Py_DECREF(par_edge_label_options);
    CHECK_OBJECT(par_caption);
    Py_DECREF(par_caption);
    CHECK_OBJECT(par_latex_label);
    Py_DECREF(par_latex_label);
    CHECK_OBJECT(par_n_rows);
    Py_DECREF(par_n_rows);
    CHECK_OBJECT(par_as_document);
    Py_DECREF(par_as_document);
    CHECK_OBJECT(par_document_wrapper);
    Py_DECREF(par_document_wrapper);
    CHECK_OBJECT(par_figure_wrapper);
    Py_DECREF(par_figure_wrapper);
    CHECK_OBJECT(par_subfigure_wrapper);
    Py_DECREF(par_subfigure_wrapper);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_networkx$drawing$nx_latex$$$function__3_write_latex(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_Gbunch = python_pars[0];
    PyObject *par_path = python_pars[1];
    PyObject *par_options = python_pars[2];
    struct Nuitka_FrameObject *frame_3efb9c6ac690d7b4cf3da233cace2506;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3efb9c6ac690d7b4cf3da233cace2506 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3efb9c6ac690d7b4cf3da233cace2506)) {
        Py_XDECREF(cache_frame_3efb9c6ac690d7b4cf3da233cace2506);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3efb9c6ac690d7b4cf3da233cace2506 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3efb9c6ac690d7b4cf3da233cace2506 = MAKE_FUNCTION_FRAME(tstate, codeobj_3efb9c6ac690d7b4cf3da233cace2506, module_networkx$drawing$nx_latex, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3efb9c6ac690d7b4cf3da233cace2506->m_type_description == NULL);
    frame_3efb9c6ac690d7b4cf3da233cace2506 = cache_frame_3efb9c6ac690d7b4cf3da233cace2506;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_3efb9c6ac690d7b4cf3da233cace2506);
    assert(Py_REFCNT(frame_3efb9c6ac690d7b4cf3da233cace2506) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        CHECK_OBJECT(par_path);
        tmp_expression_value_1 = par_path;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[77]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 571;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_networkx$drawing$nx_latex, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[78]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 571;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_Gbunch);
        tmp_tuple_element_1 = par_Gbunch;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_options);
        tmp_dircall_arg3_1 = par_options;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_args_element_value_1 = impl___main__$$$function__4_complex_call_helper_pos_star_dict(tstate, dir_call_args);
        }
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 571;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_3efb9c6ac690d7b4cf3da233cace2506->m_frame.f_lineno = 571;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 571;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3efb9c6ac690d7b4cf3da233cace2506, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3efb9c6ac690d7b4cf3da233cace2506->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3efb9c6ac690d7b4cf3da233cace2506, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3efb9c6ac690d7b4cf3da233cace2506,
        type_description_1,
        par_Gbunch,
        par_path,
        par_options
    );


    // Release cached frame if used for exception.
    if (frame_3efb9c6ac690d7b4cf3da233cace2506 == cache_frame_3efb9c6ac690d7b4cf3da233cace2506) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3efb9c6ac690d7b4cf3da233cace2506);
        cache_frame_3efb9c6ac690d7b4cf3da233cace2506 = NULL;
    }

    assertFrameObject(frame_3efb9c6ac690d7b4cf3da233cace2506);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_Gbunch);
    Py_DECREF(par_Gbunch);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_options);
    Py_DECREF(par_options);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_Gbunch);
    Py_DECREF(par_Gbunch);
    CHECK_OBJECT(par_path);
    Py_DECREF(par_path);
    CHECK_OBJECT(par_options);
    Py_DECREF(par_options);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_networkx$drawing$nx_latex$$$function__1_to_latex_raw(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_networkx$drawing$nx_latex$$$function__1_to_latex_raw,
        mod_consts[51],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5c896678dc60424688bf7973e944fac7,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_networkx$drawing$nx_latex,
        mod_consts[49],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_networkx$drawing$nx_latex$$$function__2_to_latex(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_networkx$drawing$nx_latex$$$function__2_to_latex,
        mod_consts[78],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_871be03b1a7f8a8f5a4bd403fa87bf58,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_networkx$drawing$nx_latex,
        mod_consts[76],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_networkx$drawing$nx_latex$$$function__3_write_latex() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_networkx$drawing$nx_latex$$$function__3_write_latex,
        mod_consts[91],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3efb9c6ac690d7b4cf3da233cace2506,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_networkx$drawing$nx_latex,
        mod_consts[79],
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

static function_impl_code const function_table_networkx$drawing$nx_latex[] = {
    impl_networkx$drawing$nx_latex$$$function__1_to_latex_raw,
    impl_networkx$drawing$nx_latex$$$function__2_to_latex,
    impl_networkx$drawing$nx_latex$$$function__3_write_latex,
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

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_networkx$drawing$nx_latex);

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
        module_networkx$drawing$nx_latex,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        function_table_networkx$drawing$nx_latex,
        sizeof(function_table_networkx$drawing$nx_latex) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_networkx$drawing$nx_latex(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("networkx$drawing$nx_latex");

    // Store the module for future use.
    module_networkx$drawing$nx_latex = module;

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
        PRINT_STRING("networkx$drawing$nx_latex: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("networkx$drawing$nx_latex: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initnetworkx$drawing$nx_latex\n");

    moduledict_networkx$drawing$nx_latex = MODULE_DICT(module_networkx$drawing$nx_latex);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_networkx$drawing$nx_latex,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_networkx$drawing$nx_latex,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[9]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_networkx$drawing$nx_latex, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_networkx$drawing$nx_latex,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_networkx$drawing$nx_latex, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_networkx$drawing$nx_latex,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_networkx$drawing$nx_latex, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_networkx$drawing$nx_latex,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_networkx$drawing$nx_latex);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_networkx$drawing$nx_latex, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_networkx$drawing$nx_latex, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_networkx$drawing$nx_latex, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_networkx$drawing$nx_latex, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_networkx$drawing$nx_latex);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_networkx$drawing$nx_latex, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_9ff1ebda0e43d6d4325ddc42ab6045d3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[80];
        UPDATE_STRING_DICT0(moduledict_networkx$drawing$nx_latex, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_networkx$drawing$nx_latex, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_2);
    }
    frame_9ff1ebda0e43d6d4325ddc42ab6045d3 = MAKE_MODULE_FRAME(codeobj_9ff1ebda0e43d6d4325ddc42ab6045d3, module_networkx$drawing$nx_latex);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_9ff1ebda0e43d6d4325ddc42ab6045d3);
    assert(Py_REFCNT(frame_9ff1ebda0e43d6d4325ddc42ab6045d3) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_networkx$drawing$nx_latex, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[84], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_networkx$drawing$nx_latex, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[83]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[85], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_networkx$drawing$nx_latex, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[87];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_networkx$drawing$nx_latex;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[88];
        frame_9ff1ebda0e43d6d4325ddc42ab6045d3->m_frame.f_lineno = 129;
        tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_networkx$drawing$nx_latex, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = IMPORT_HARD_OS();
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT0(moduledict_networkx$drawing$nx_latex, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[90];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_networkx$drawing$nx_latex;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[88];
        frame_9ff1ebda0e43d6d4325ddc42ab6045d3->m_frame.f_lineno = 132;
        tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_networkx$drawing$nx_latex, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = MAKE_LIST3(mod_consts[51],mod_consts[78],mod_consts[91]);
        UPDATE_STRING_DICT1(moduledict_networkx$drawing$nx_latex, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_defaults_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_networkx$drawing$nx_latex, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[93]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        frame_9ff1ebda0e43d6d4325ddc42ab6045d3->m_frame.f_lineno = 141;
        tmp_called_value_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[94],
            PyTuple_GET_ITEM(mod_consts[95], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        tmp_defaults_1 = mod_consts[96];
        Py_INCREF(tmp_defaults_1);


        tmp_args_element_value_1 = MAKE_FUNCTION_networkx$drawing$nx_latex$$$function__1_to_latex_raw(tmp_defaults_1);

        frame_9ff1ebda0e43d6d4325ddc42ab6045d3->m_frame.f_lineno = 141;
        tmp_assign_source_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_networkx$drawing$nx_latex, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = mod_consts[97];
        UPDATE_STRING_DICT0(moduledict_networkx$drawing$nx_latex, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = mod_consts[99];
        UPDATE_STRING_DICT0(moduledict_networkx$drawing$nx_latex, (Nuitka_StringObject *)mod_consts[100], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = mod_consts[101];
        UPDATE_STRING_DICT0(moduledict_networkx$drawing$nx_latex, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_defaults_2;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[11];
        tmp_defaults_2 = MAKE_TUPLE_EMPTY(18);
        PyTuple_SET_ITEM0(tmp_defaults_2, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[9];
        PyTuple_SET_ITEM0(tmp_defaults_2, 1, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[9];
        PyTuple_SET_ITEM0(tmp_defaults_2, 2, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[58];
        PyTuple_SET_ITEM0(tmp_defaults_2, 3, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[59];
        PyTuple_SET_ITEM0(tmp_defaults_2, 4, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[9];
        PyTuple_SET_ITEM0(tmp_defaults_2, 5, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[61];
        PyTuple_SET_ITEM0(tmp_defaults_2, 6, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[62];
        PyTuple_SET_ITEM0(tmp_defaults_2, 7, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[63];
        PyTuple_SET_ITEM0(tmp_defaults_2, 8, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[9];
        PyTuple_SET_ITEM0(tmp_defaults_2, 9, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[9];
        PyTuple_SET_ITEM0(tmp_defaults_2, 10, tmp_tuple_element_1);
        tmp_tuple_element_1 = Py_None;
        PyTuple_SET_ITEM0(tmp_defaults_2, 11, tmp_tuple_element_1);
        tmp_tuple_element_1 = Py_None;
        PyTuple_SET_ITEM0(tmp_defaults_2, 12, tmp_tuple_element_1);
        tmp_tuple_element_1 = mod_consts[52];
        PyTuple_SET_ITEM0(tmp_defaults_2, 13, tmp_tuple_element_1);
        tmp_tuple_element_1 = Py_True;
        PyTuple_SET_ITEM0(tmp_defaults_2, 14, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_networkx$drawing$nx_latex, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[98]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_defaults_2, 15, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_networkx$drawing$nx_latex, (Nuitka_StringObject *)mod_consts[100]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[100]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_defaults_2, 16, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_networkx$drawing$nx_latex, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[102]);
        }

        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM0(tmp_defaults_2, 17, tmp_tuple_element_1);


        tmp_assign_source_12 = MAKE_FUNCTION_networkx$drawing$nx_latex$$$function__2_to_latex(tmp_defaults_2);

        UPDATE_STRING_DICT1(moduledict_networkx$drawing$nx_latex, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_networkx$drawing$nx_latex, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[93]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;

            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[103]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;

            goto frame_exception_exit_1;
        }
        frame_9ff1ebda0e43d6d4325ddc42ab6045d3->m_frame.f_lineno = 482;
        tmp_called_value_2 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tstate, tmp_called_value_3, &PyTuple_GET_ITEM(mod_consts[104], 0), mod_consts[105]);
        Py_DECREF(tmp_called_value_3);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_2 = MAKE_FUNCTION_networkx$drawing$nx_latex$$$function__3_write_latex();

        frame_9ff1ebda0e43d6d4325ddc42ab6045d3->m_frame.f_lineno = 482;
        tmp_assign_source_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_networkx$drawing$nx_latex, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_13);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9ff1ebda0e43d6d4325ddc42ab6045d3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9ff1ebda0e43d6d4325ddc42ab6045d3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9ff1ebda0e43d6d4325ddc42ab6045d3, exception_lineno);
    }



    assertFrameObject(frame_9ff1ebda0e43d6d4325ddc42ab6045d3);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("networkx$drawing$nx_latex", false);

    Py_INCREF(module_networkx$drawing$nx_latex);
    return module_networkx$drawing$nx_latex;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_networkx$drawing$nx_latex, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("networkx$drawing$nx_latex", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
