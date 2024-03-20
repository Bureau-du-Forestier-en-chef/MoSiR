/* Generated code for Python module 'seaborn$algorithms'
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

/* The "module_seaborn$algorithms" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_seaborn$algorithms;
PyDictObject *moduledict_seaborn$algorithms;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[62];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[62];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("seaborn.algorithms"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 62; i++) {
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
void checkModuleConstants_seaborn$algorithms(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 62; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_6b0f9c3ea0fa15e21040f9d03a8658c9;
static PyCodeObject *codeobj_3ed56312ae227d2b6cf35b1dfa4dd77c;
static PyCodeObject *codeobj_8916dfd82e0fc9d132e8d1a8b7118bce;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[58]); CHECK_OBJECT(module_filename_obj);
    codeobj_6b0f9c3ea0fa15e21040f9d03a8658c9 = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[59], mod_consts[59], NULL, NULL, 0, 0, 0);
    codeobj_3ed56312ae227d2b6cf35b1dfa4dd77c = MAKE_CODE_OBJECT(module_filename_obj, 104, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[32], mod_consts[32], mod_consts[60], NULL, 6, 0, 0);
    codeobj_8916dfd82e0fc9d132e8d1a8b7118bce = MAKE_CODE_OBJECT(module_filename_obj, 6, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS, mod_consts[57], mod_consts[57], mod_consts[61], NULL, 0, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__6_complex_call_helper_star_list_star_dict(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_seaborn$algorithms$$$function__1_bootstrap();


static PyObject *MAKE_FUNCTION_seaborn$algorithms$$$function__2__structured_bootstrap();


// The module function definitions.
static PyObject *impl_seaborn$algorithms$$$function__1_bootstrap(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    PyObject *par_kwargs = python_pars[1];
    PyObject *var_n = NULL;
    PyObject *var_n_boot = NULL;
    PyObject *var_func = NULL;
    PyObject *var_axis = NULL;
    PyObject *var_units = NULL;
    PyObject *var_random_seed = NULL;
    PyObject *var_msg = NULL;
    PyObject *var_seed = NULL;
    PyObject *var_func_kwargs = NULL;
    PyObject *var_rng = NULL;
    PyObject *var_f = NULL;
    PyObject *var_missing_data = NULL;
    PyObject *var_nanf = NULL;
    PyObject *var_integers = NULL;
    PyObject *var_boot_dist = NULL;
    PyObject *var_i = NULL;
    PyObject *var_resampler = NULL;
    PyObject *var_sample = NULL;
    PyObject *outline_0_var_a = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_8916dfd82e0fc9d132e8d1a8b7118bce;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_8916dfd82e0fc9d132e8d1a8b7118bce = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8916dfd82e0fc9d132e8d1a8b7118bce)) {
        Py_XDECREF(cache_frame_8916dfd82e0fc9d132e8d1a8b7118bce);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8916dfd82e0fc9d132e8d1a8b7118bce == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8916dfd82e0fc9d132e8d1a8b7118bce = MAKE_FUNCTION_FRAME(tstate, codeobj_8916dfd82e0fc9d132e8d1a8b7118bce, module_seaborn$algorithms, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8916dfd82e0fc9d132e8d1a8b7118bce->m_type_description == NULL);
    frame_8916dfd82e0fc9d132e8d1a8b7118bce = cache_frame_8916dfd82e0fc9d132e8d1a8b7118bce;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_8916dfd82e0fc9d132e8d1a8b7118bce);
    assert(Py_REFCNT(frame_8916dfd82e0fc9d132e8d1a8b7118bce) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        nuitka_digit tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_seaborn$algorithms, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[1]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = (PyObject *)&PyMap_Type;
        tmp_args_element_value_2 = LOOKUP_BUILTIN(mod_consts[2]);
        assert(tmp_args_element_value_2 != NULL);
        CHECK_OBJECT(par_args);
        tmp_args_element_value_3 = par_args;
        frame_8916dfd82e0fc9d132e8d1a8b7118bce->m_frame.f_lineno = 36;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_list_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        if (tmp_list_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 36;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = MAKE_LIST(tstate, tmp_list_arg_1);
        Py_DECREF(tmp_list_arg_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 36;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_8916dfd82e0fc9d132e8d1a8b7118bce->m_frame.f_lineno = 36;
        tmp_len_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_len_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tstate, tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = 1;
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[3];
        frame_8916dfd82e0fc9d132e8d1a8b7118bce->m_frame.f_lineno = 37;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 37;
        RAISE_EXCEPTION_WITH_TYPE(tstate, &exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_args);
        tmp_expression_value_2 = par_args;
        tmp_subscript_value_1 = mod_consts[4];
        tmp_len_arg_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_2, tmp_subscript_value_1, 0);
        if (tmp_len_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BUILTIN_LEN(tstate, tmp_len_arg_2);
        Py_DECREF(tmp_len_arg_2);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_n == NULL);
        var_n = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_default_value_1;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_1 = par_kwargs;
        tmp_key_value_1 = mod_consts[5];
        tmp_default_value_1 = mod_consts[6];
        tmp_assign_source_2 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_1, tmp_key_value_1);
        if (tmp_assign_source_2 == NULL) {
            tmp_assign_source_2 = tmp_default_value_1;
            Py_INCREF(tmp_assign_source_2);
        }
        assert(!(tmp_assign_source_2 == NULL));
        assert(var_n_boot == NULL);
        var_n_boot = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_dict_arg_value_2;
        PyObject *tmp_key_value_2;
        PyObject *tmp_default_value_2;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_2 = par_kwargs;
        tmp_key_value_2 = mod_consts[7];
        tmp_default_value_2 = mod_consts[8];
        tmp_assign_source_3 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_2, tmp_key_value_2);
        if (tmp_assign_source_3 == NULL) {
            tmp_assign_source_3 = tmp_default_value_2;
            Py_INCREF(tmp_assign_source_3);
        }
        assert(!(tmp_assign_source_3 == NULL));
        assert(var_func == NULL);
        var_func = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_dict_arg_value_3;
        PyObject *tmp_key_value_3;
        PyObject *tmp_default_value_3;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_3 = par_kwargs;
        tmp_key_value_3 = mod_consts[9];
        tmp_default_value_3 = Py_None;
        tmp_assign_source_4 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_3, tmp_key_value_3);
        if (tmp_assign_source_4 == NULL) {
            tmp_assign_source_4 = tmp_default_value_3;
            Py_INCREF(tmp_assign_source_4);
        }
        assert(!(tmp_assign_source_4 == NULL));
        assert(var_axis == NULL);
        var_axis = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_dict_arg_value_4;
        PyObject *tmp_key_value_4;
        PyObject *tmp_default_value_4;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_4 = par_kwargs;
        tmp_key_value_4 = mod_consts[10];
        tmp_default_value_4 = Py_None;
        tmp_assign_source_5 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_4, tmp_key_value_4);
        if (tmp_assign_source_5 == NULL) {
            tmp_assign_source_5 = tmp_default_value_4;
            Py_INCREF(tmp_assign_source_5);
        }
        assert(!(tmp_assign_source_5 == NULL));
        assert(var_units == NULL);
        var_units = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_dict_arg_value_5;
        PyObject *tmp_key_value_5;
        PyObject *tmp_default_value_5;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_5 = par_kwargs;
        tmp_key_value_5 = mod_consts[11];
        tmp_default_value_5 = Py_None;
        tmp_assign_source_6 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_5, tmp_key_value_5);
        if (tmp_assign_source_6 == NULL) {
            tmp_assign_source_6 = tmp_default_value_5;
            Py_INCREF(tmp_assign_source_6);
        }
        assert(!(tmp_assign_source_6 == NULL));
        assert(var_random_seed == NULL);
        var_random_seed = tmp_assign_source_6;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_random_seed);
        tmp_cmp_expr_left_2 = var_random_seed;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_seaborn$algorithms, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_8916dfd82e0fc9d132e8d1a8b7118bce->m_frame.f_lineno = 48;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tstate,
            tmp_called_instance_1,
            mod_consts[13],
            PyTuple_GET_ITEM(mod_consts[14], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_dict_arg_value_6;
        PyObject *tmp_key_value_6;
        PyObject *tmp_default_value_6;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_6 = par_kwargs;
        tmp_key_value_6 = mod_consts[15];
        CHECK_OBJECT(var_random_seed);
        tmp_default_value_6 = var_random_seed;
        tmp_assign_source_7 = DICT_GET_ITEM1(tstate, tmp_dict_arg_value_6, tmp_key_value_6);
        if (tmp_assign_source_7 == NULL) {
            tmp_assign_source_7 = tmp_default_value_6;
            Py_INCREF(tmp_assign_source_7);
        }
        assert(!(tmp_assign_source_7 == NULL));
        assert(var_seed == NULL);
        var_seed = tmp_assign_source_7;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_axis);
        tmp_cmp_expr_left_3 = var_axis;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = MAKE_DICT_EMPTY();
        assert(var_func_kwargs == NULL);
        var_func_kwargs = tmp_assign_source_8;
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[9];
        CHECK_OBJECT(var_axis);
        tmp_dict_value_1 = var_axis;
        tmp_assign_source_9 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_assign_source_9, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        assert(var_func_kwargs == NULL);
        var_func_kwargs = tmp_assign_source_9;
    }
    branch_end_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_seed);
        tmp_isinstance_inst_1 = var_seed;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_seaborn$algorithms, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[16]);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[17]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(var_seed);
        tmp_assign_source_10 = var_seed;
        assert(var_rng == NULL);
        Py_INCREF(tmp_assign_source_10);
        var_rng = tmp_assign_source_10;
    }
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_4;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_seaborn$algorithms, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[16]);
        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_seed);
        tmp_args_element_value_4 = var_seed;
        frame_8916dfd82e0fc9d132e8d1a8b7118bce->m_frame.f_lineno = 59;
        tmp_assign_source_11 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[18], tmp_args_element_value_4);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_rng == NULL);
        var_rng = tmp_assign_source_11;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_list_arg_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_6;
        tmp_called_value_3 = (PyObject *)&PyMap_Type;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_seaborn$algorithms, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[19]);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_args);
        tmp_args_element_value_6 = par_args;
        frame_8916dfd82e0fc9d132e8d1a8b7118bce->m_frame.f_lineno = 62;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_list_arg_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_args_element_value_5);
        if (tmp_list_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_12 = MAKE_LIST(tstate, tmp_list_arg_2);
        Py_DECREF(tmp_list_arg_2);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_args;
            assert(old != NULL);
            par_args = tmp_assign_source_12;
            Py_DECREF(old);
        }

    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(var_units);
        tmp_cmp_expr_left_4 = var_units;
        tmp_cmp_expr_right_4 = Py_None;
        tmp_condition_result_5 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_7;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_seaborn$algorithms, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_units);
        tmp_args_element_value_7 = var_units;
        frame_8916dfd82e0fc9d132e8d1a8b7118bce->m_frame.f_lineno = 64;
        tmp_assign_source_13 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_3, mod_consts[19], tmp_args_element_value_7);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_units;
            assert(old != NULL);
            var_units = tmp_assign_source_13;
            Py_DECREF(old);
        }

    }
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        CHECK_OBJECT(var_func);
        tmp_isinstance_inst_2 = var_func;
        tmp_isinstance_cls_2 = (PyObject *)&PyUnicode_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_name_value_1;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_seaborn$algorithms, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_func);
        tmp_name_value_1 = var_func;
        tmp_assign_source_14 = BUILTIN_GETATTR(tstate, tmp_expression_value_7, tmp_name_value_1, NULL);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_f == NULL);
        var_f = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_10;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_seaborn$algorithms, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[20]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_seaborn$algorithms, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 72;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[21]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 72;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_seaborn$algorithms, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 72;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_args);
        tmp_args_element_value_10 = par_args;
        frame_8916dfd82e0fc9d132e8d1a8b7118bce->m_frame.f_lineno = 72;
        tmp_args_element_value_9 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_4, mod_consts[22], tmp_args_element_value_10);
        if (tmp_args_element_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 72;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_8916dfd82e0fc9d132e8d1a8b7118bce->m_frame.f_lineno = 72;
        tmp_args_element_value_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 72;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_8916dfd82e0fc9d132e8d1a8b7118bce->m_frame.f_lineno = 72;
        tmp_assign_source_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_missing_data == NULL);
        var_missing_data = tmp_assign_source_15;
    }
    {
        nuitka_bool tmp_condition_result_7;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(var_missing_data);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_missing_data);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_func);
        tmp_expression_value_10 = var_func;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[23]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_8916dfd82e0fc9d132e8d1a8b7118bce->m_frame.f_lineno = 74;
        tmp_operand_value_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_6, mod_consts[24]);

        Py_DECREF(tmp_called_value_6);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_7 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_7 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_name_value_2;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_default_value_7;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_seaborn$algorithms, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[25];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            if (var_func == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 75;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_1;
            }

            tmp_format_value_1 = var_func;
            tmp_format_spec_1 = mod_consts[26];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tstate, tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_name_value_2 = PyUnicode_Join(mod_consts[26], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_name_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_default_value_7 = Py_None;
        tmp_assign_source_16 = BUILTIN_GETATTR(tstate, tmp_expression_value_11, tmp_name_value_2, tmp_default_value_7);
        Py_DECREF(tmp_name_value_2);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_nanf == NULL);
        var_nanf = tmp_assign_source_16;
    }
    {
        bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(var_nanf);
        tmp_cmp_expr_left_5 = var_nanf;
        tmp_cmp_expr_right_5 = Py_None;
        tmp_condition_result_8 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = mod_consts[27];
        tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_format_spec_2;
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_2);
            if (var_func == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 77;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_2;
            }

            tmp_format_value_2 = var_func;
            tmp_format_spec_2 = mod_consts[26];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tstate, tmp_format_value_2, tmp_format_spec_2);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;
                type_description_1 = "oooooooooooooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[28];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_string_concat_values_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_assign_source_17 = PyUnicode_Join(mod_consts[26], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_msg == NULL);
        var_msg = tmp_assign_source_17;
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_seaborn$algorithms, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[13]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_msg);
        tmp_args_element_value_11 = var_msg;
        tmp_args_element_value_12 = GET_STRING_DICT_VALUE(moduledict_seaborn$algorithms, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_args_element_value_12 == NULL)) {
            tmp_args_element_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
        }

        if (tmp_args_element_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 78;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_8916dfd82e0fc9d132e8d1a8b7118bce->m_frame.f_lineno = 78;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_7, call_args);
        }

        Py_DECREF(tmp_called_value_7);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto branch_end_8;
    branch_no_8:;
    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(var_nanf);
        tmp_assign_source_18 = var_nanf;
        {
            PyObject *old = var_f;
            assert(old != NULL);
            var_f = tmp_assign_source_18;
            Py_INCREF(var_f);
            Py_DECREF(old);
        }

    }
    branch_end_8:;
    branch_no_7:;
    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT(var_func);
        tmp_assign_source_19 = var_func;
        assert(var_f == NULL);
        Py_INCREF(tmp_assign_source_19);
        var_f = tmp_assign_source_19;
    }
    branch_end_6:;
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_expression_value_13;
        CHECK_OBJECT(var_rng);
        tmp_expression_value_13 = var_rng;
        tmp_assign_source_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[30]);
        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(var_integers == NULL);
        var_integers = tmp_assign_source_20;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_8916dfd82e0fc9d132e8d1a8b7118bce, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_8916dfd82e0fc9d132e8d1a8b7118bce, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        tmp_cmp_expr_left_6 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_6 = PyExc_AttributeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        assert(!(tmp_res == -1));
        tmp_condition_result_9 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(var_rng);
        tmp_expression_value_14 = var_rng;
        tmp_assign_source_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[31]);
        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_3;
        }
        assert(var_integers == NULL);
        var_integers = tmp_assign_source_21;
    }
    goto branch_end_9;
    branch_no_9:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 86;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_8916dfd82e0fc9d132e8d1a8b7118bce->m_frame) frame_8916dfd82e0fc9d132e8d1a8b7118bce->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooooooooooooooo";
    goto try_except_handler_3;
    branch_end_9:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    {
        bool tmp_condition_result_10;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        CHECK_OBJECT(var_units);
        tmp_cmp_expr_left_7 = var_units;
        tmp_cmp_expr_right_7 = Py_None;
        tmp_condition_result_10 = (tmp_cmp_expr_left_7 != tmp_cmp_expr_right_7) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_seaborn$algorithms, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[32]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_args);
        tmp_args_element_value_13 = par_args;
        CHECK_OBJECT(var_n_boot);
        tmp_args_element_value_14 = var_n_boot;
        CHECK_OBJECT(var_units);
        tmp_args_element_value_15 = var_units;
        CHECK_OBJECT(var_f);
        tmp_args_element_value_16 = var_f;
        CHECK_OBJECT(var_func_kwargs);
        tmp_args_element_value_17 = var_func_kwargs;
        CHECK_OBJECT(var_integers);
        tmp_args_element_value_18 = var_integers;
        frame_8916dfd82e0fc9d132e8d1a8b7118bce->m_frame.f_lineno = 93;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS6(tstate, tmp_called_value_8, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_10:;
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = MAKE_LIST_EMPTY(0);
        assert(var_boot_dist == NULL);
        var_boot_dist = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_int_arg_1;
        CHECK_OBJECT(var_n_boot);
        tmp_int_arg_1 = var_n_boot;
        tmp_xrange_low_1 = PyNumber_Int(tmp_int_arg_1);
        if (tmp_xrange_low_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_1 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_1);
        Py_DECREF(tmp_xrange_low_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_23 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_23;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_24 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_24 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooooooo";
                exception_lineno = 97;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_24;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_25;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_25 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_25;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_value_9;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_15;
        if (var_integers == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 98;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_value_9 = var_integers;
        tmp_kw_call_arg_value_0_1 = mod_consts[4];
        if (var_n == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 98;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_kw_call_arg_value_1_1 = var_n;
        if (var_n == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 98;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_kw_call_arg_value_2_1 = var_n;
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_seaborn$algorithms, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[34]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_8916dfd82e0fc9d132e8d1a8b7118bce->m_frame.f_lineno = 98;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_26 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_9, args, kw_values, mod_consts[35]);
        }

        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_resampler;
            var_resampler = tmp_assign_source_26;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_27;
        // Tried code:
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_iter_arg_2;
            if (par_args == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[36]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 99;
                type_description_1 = "oooooooooooooooooooo";
                goto try_except_handler_5;
            }

            tmp_iter_arg_2 = par_args;
            tmp_assign_source_28 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
            if (tmp_assign_source_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_1 = "oooooooooooooooooooo";
                goto try_except_handler_5;
            }
            {
                PyObject *old = tmp_listcomp_1__$0;
                tmp_listcomp_1__$0 = tmp_assign_source_28;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_29;
            tmp_assign_source_29 = MAKE_LIST_EMPTY(0);
            {
                PyObject *old = tmp_listcomp_1__contraction;
                tmp_listcomp_1__contraction = tmp_assign_source_29;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_30;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_2 = tmp_listcomp_1__$0;
            tmp_assign_source_30 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_30 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    type_description_1 = "oooooooooooooooooooo";
                    exception_lineno = 99;
                    goto try_except_handler_6;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_30;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_31;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_31 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_a;
                outline_0_var_a = tmp_assign_source_31;
                Py_INCREF(outline_0_var_a);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_value_10;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kwargs_value_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_a);
            tmp_expression_value_16 = outline_0_var_a;
            tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[37]);
            if (tmp_called_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_1 = "oooooooooooooooooooo";
                goto try_except_handler_6;
            }
            if (var_resampler == NULL) {
                Py_DECREF(tmp_called_value_10);
                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[38]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 99;
                type_description_1 = "oooooooooooooooooooo";
                goto try_except_handler_6;
            }

            tmp_tuple_element_3 = var_resampler;
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_3);
            tmp_kwargs_value_1 = DICT_COPY(mod_consts[39]);
            frame_8916dfd82e0fc9d132e8d1a8b7118bce->m_frame.f_lineno = 99;
            tmp_append_value_1 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_args_value_1);
            Py_DECREF(tmp_kwargs_value_1);
            if (tmp_append_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_1 = "oooooooooooooooooooo";
                goto try_except_handler_6;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;
                type_description_1 = "oooooooooooooooooooo";
                goto try_except_handler_6;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_6;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_27 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_27);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto try_return_handler_5;
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

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_XDECREF(outline_0_var_a);
        outline_0_var_a = NULL;
        goto outline_result_1;
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

        Py_XDECREF(outline_0_var_a);
        outline_0_var_a = NULL;
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
        exception_lineno = 99;
        goto try_except_handler_4;
        outline_result_1:;
        {
            PyObject *old = var_sample;
            var_sample = tmp_assign_source_27;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        if (var_boot_dist == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[40]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 100;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_17 = var_boot_dist;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[41]);
        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_f);
        tmp_dircall_arg1_1 = var_f;
        CHECK_OBJECT(var_sample);
        tmp_dircall_arg2_1 = var_sample;
        CHECK_OBJECT(var_func_kwargs);
        tmp_dircall_arg3_1 = var_func_kwargs;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_args_element_value_19 = impl___main__$$$function__6_complex_call_helper_star_list_star_dict(tstate, dir_call_args);
        }
        if (tmp_args_element_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 100;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_8916dfd82e0fc9d132e8d1a8b7118bce->m_frame.f_lineno = 100;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_11, tmp_args_element_value_19);
        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_element_value_19);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_3);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 97;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
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
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_args_element_value_20;
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_seaborn$algorithms, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[42]);
        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_boot_dist == NULL) {
            Py_DECREF(tmp_called_value_12);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[40]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 101;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_20 = var_boot_dist;
        frame_8916dfd82e0fc9d132e8d1a8b7118bce->m_frame.f_lineno = 101;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_20);
        Py_DECREF(tmp_called_value_12);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooooooooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_8916dfd82e0fc9d132e8d1a8b7118bce, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8916dfd82e0fc9d132e8d1a8b7118bce->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8916dfd82e0fc9d132e8d1a8b7118bce, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8916dfd82e0fc9d132e8d1a8b7118bce,
        type_description_1,
        par_args,
        par_kwargs,
        var_n,
        var_n_boot,
        var_func,
        var_axis,
        var_units,
        var_random_seed,
        var_msg,
        var_seed,
        var_func_kwargs,
        var_rng,
        var_f,
        var_missing_data,
        var_nanf,
        var_integers,
        var_boot_dist,
        var_i,
        var_resampler,
        var_sample
    );


    // Release cached frame if used for exception.
    if (frame_8916dfd82e0fc9d132e8d1a8b7118bce == cache_frame_8916dfd82e0fc9d132e8d1a8b7118bce) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8916dfd82e0fc9d132e8d1a8b7118bce);
        cache_frame_8916dfd82e0fc9d132e8d1a8b7118bce = NULL;
    }

    assertFrameObject(frame_8916dfd82e0fc9d132e8d1a8b7118bce);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_args);
    par_args = NULL;
    Py_XDECREF(var_n);
    var_n = NULL;
    Py_XDECREF(var_n_boot);
    var_n_boot = NULL;
    Py_XDECREF(var_func);
    var_func = NULL;
    CHECK_OBJECT(var_axis);
    Py_DECREF(var_axis);
    var_axis = NULL;
    CHECK_OBJECT(var_units);
    Py_DECREF(var_units);
    var_units = NULL;
    CHECK_OBJECT(var_random_seed);
    Py_DECREF(var_random_seed);
    var_random_seed = NULL;
    Py_XDECREF(var_msg);
    var_msg = NULL;
    Py_XDECREF(var_seed);
    var_seed = NULL;
    CHECK_OBJECT(var_func_kwargs);
    Py_DECREF(var_func_kwargs);
    var_func_kwargs = NULL;
    CHECK_OBJECT(var_rng);
    Py_DECREF(var_rng);
    var_rng = NULL;
    CHECK_OBJECT(var_f);
    Py_DECREF(var_f);
    var_f = NULL;
    Py_XDECREF(var_missing_data);
    var_missing_data = NULL;
    Py_XDECREF(var_nanf);
    var_nanf = NULL;
    Py_XDECREF(var_integers);
    var_integers = NULL;
    Py_XDECREF(var_boot_dist);
    var_boot_dist = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_resampler);
    var_resampler = NULL;
    Py_XDECREF(var_sample);
    var_sample = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_args);
    par_args = NULL;
    Py_XDECREF(var_n);
    var_n = NULL;
    Py_XDECREF(var_n_boot);
    var_n_boot = NULL;
    Py_XDECREF(var_func);
    var_func = NULL;
    Py_XDECREF(var_axis);
    var_axis = NULL;
    Py_XDECREF(var_units);
    var_units = NULL;
    Py_XDECREF(var_random_seed);
    var_random_seed = NULL;
    Py_XDECREF(var_msg);
    var_msg = NULL;
    Py_XDECREF(var_seed);
    var_seed = NULL;
    Py_XDECREF(var_func_kwargs);
    var_func_kwargs = NULL;
    Py_XDECREF(var_rng);
    var_rng = NULL;
    Py_XDECREF(var_f);
    var_f = NULL;
    Py_XDECREF(var_missing_data);
    var_missing_data = NULL;
    Py_XDECREF(var_nanf);
    var_nanf = NULL;
    Py_XDECREF(var_integers);
    var_integers = NULL;
    Py_XDECREF(var_boot_dist);
    var_boot_dist = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_resampler);
    var_resampler = NULL;
    Py_XDECREF(var_sample);
    var_sample = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_seaborn$algorithms$$$function__2__structured_bootstrap(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[0];
    PyObject *par_n_boot = python_pars[1];
    PyObject *par_units = python_pars[2];
    PyObject *par_func = python_pars[3];
    PyObject *par_func_kwargs = python_pars[4];
    PyObject *par_integers = python_pars[5];
    PyObject *var_unique_units = NULL;
    PyObject *var_n_units = NULL;
    PyObject *var_boot_dist = NULL;
    PyObject *var_i = NULL;
    PyObject *var_resampler = NULL;
    PyObject *var_sample = NULL;
    PyObject *var_lengths = NULL;
    PyObject *outline_0_var_a = NULL;
    PyObject *outline_1_var_unit = NULL;
    PyObject *outline_2_var_a = NULL;
    PyObject *outline_3_var_i = NULL;
    PyObject *outline_4_var_n = NULL;
    PyObject *outline_5_var_a = NULL;
    PyObject *outline_6_var_c = NULL;
    PyObject *outline_6_var_r = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_listcomp$listcomp$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_listcomp$listcomp$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_listcomp$listcomp$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_listcomp$listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp$listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp$listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp$listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp$listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp$listcomp_2__iter_value_0 = NULL;
    PyObject *tmp_listcomp$listcomp_3__$0 = NULL;
    PyObject *tmp_listcomp$listcomp_3__contraction = NULL;
    PyObject *tmp_listcomp$listcomp_3__iter_value_0 = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    PyObject *tmp_listcomp_3__$0 = NULL;
    PyObject *tmp_listcomp_3__contraction = NULL;
    PyObject *tmp_listcomp_3__iter_value_0 = NULL;
    PyObject *tmp_listcomp_4__$0 = NULL;
    PyObject *tmp_listcomp_4__contraction = NULL;
    PyObject *tmp_listcomp_4__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_3ed56312ae227d2b6cf35b1dfa4dd77c;
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
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *tmp_iterator_attempt;
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
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_3ed56312ae227d2b6cf35b1dfa4dd77c = NULL;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3ed56312ae227d2b6cf35b1dfa4dd77c)) {
        Py_XDECREF(cache_frame_3ed56312ae227d2b6cf35b1dfa4dd77c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3ed56312ae227d2b6cf35b1dfa4dd77c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3ed56312ae227d2b6cf35b1dfa4dd77c = MAKE_FUNCTION_FRAME(tstate, codeobj_3ed56312ae227d2b6cf35b1dfa4dd77c, module_seaborn$algorithms, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3ed56312ae227d2b6cf35b1dfa4dd77c->m_type_description == NULL);
    frame_3ed56312ae227d2b6cf35b1dfa4dd77c = cache_frame_3ed56312ae227d2b6cf35b1dfa4dd77c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_3ed56312ae227d2b6cf35b1dfa4dd77c);
    assert(Py_REFCNT(frame_3ed56312ae227d2b6cf35b1dfa4dd77c) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_seaborn$algorithms, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_units);
        tmp_args_element_value_1 = par_units;
        frame_3ed56312ae227d2b6cf35b1dfa4dd77c->m_frame.f_lineno = 106;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[1], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_unique_units == NULL);
        var_unique_units = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(var_unique_units);
        tmp_len_arg_1 = var_unique_units;
        tmp_assign_source_2 = BUILTIN_LEN(tstate, tmp_len_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_n_units == NULL);
        var_n_units = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        // Tried code:
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(par_args);
            tmp_iter_arg_1 = par_args;
            tmp_assign_source_4 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
            if (tmp_assign_source_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_2;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_4;
        }
        {
            PyObject *tmp_assign_source_5;
            tmp_assign_source_5 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_5;
        }
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_6;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_6 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    type_description_1 = "ooooooooooooo";
                    exception_lineno = 109;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_6;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_7;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_7 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_a;
                outline_0_var_a = tmp_assign_source_7;
                Py_INCREF(outline_0_var_a);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            // Tried code:
            {
                PyObject *tmp_assign_source_8;
                PyObject *tmp_iter_arg_2;
                if (var_unique_units == NULL) {

                    FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[44]);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(tstate, exception_value);

                    exception_lineno = 109;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_4;
                }

                tmp_iter_arg_2 = var_unique_units;
                tmp_assign_source_8 = MAKE_ITERATOR(tstate, tmp_iter_arg_2);
                if (tmp_assign_source_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 109;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_4;
                }
                {
                    PyObject *old = tmp_listcomp$listcomp_1__$0;
                    tmp_listcomp$listcomp_1__$0 = tmp_assign_source_8;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_assign_source_9;
                tmp_assign_source_9 = MAKE_LIST_EMPTY(0);
                {
                    PyObject *old = tmp_listcomp$listcomp_1__contraction;
                    tmp_listcomp$listcomp_1__contraction = tmp_assign_source_9;
                    Py_XDECREF(old);
                }

            }
            // Tried code:
            loop_start_2:;
            {
                PyObject *tmp_next_source_2;
                PyObject *tmp_assign_source_10;
                CHECK_OBJECT(tmp_listcomp$listcomp_1__$0);
                tmp_next_source_2 = tmp_listcomp$listcomp_1__$0;
                tmp_assign_source_10 = ITERATOR_NEXT(tmp_next_source_2);
                if (tmp_assign_source_10 == NULL) {
                    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                        goto loop_end_2;
                    } else {

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        type_description_1 = "ooooooooooooo";
                        exception_lineno = 109;
                        goto try_except_handler_5;
                    }
                }

                {
                    PyObject *old = tmp_listcomp$listcomp_1__iter_value_0;
                    tmp_listcomp$listcomp_1__iter_value_0 = tmp_assign_source_10;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_assign_source_11;
                CHECK_OBJECT(tmp_listcomp$listcomp_1__iter_value_0);
                tmp_assign_source_11 = tmp_listcomp$listcomp_1__iter_value_0;
                {
                    PyObject *old = outline_1_var_unit;
                    outline_1_var_unit = tmp_assign_source_11;
                    Py_INCREF(outline_1_var_unit);
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_append_list_2;
                PyObject *tmp_append_value_2;
                PyObject *tmp_expression_value_1;
                PyObject *tmp_subscript_value_1;
                PyObject *tmp_cmp_expr_left_1;
                PyObject *tmp_cmp_expr_right_1;
                CHECK_OBJECT(tmp_listcomp$listcomp_1__contraction);
                tmp_append_list_2 = tmp_listcomp$listcomp_1__contraction;
                CHECK_OBJECT(outline_0_var_a);
                tmp_expression_value_1 = outline_0_var_a;
                CHECK_OBJECT(par_units);
                tmp_cmp_expr_left_1 = par_units;
                CHECK_OBJECT(outline_1_var_unit);
                tmp_cmp_expr_right_1 = outline_1_var_unit;
                tmp_subscript_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
                if (tmp_subscript_value_1 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 109;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_5;
                }
                tmp_append_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
                Py_DECREF(tmp_subscript_value_1);
                if (tmp_append_value_2 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 109;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_5;
                }
                tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
                if (tmp_result == false) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 109;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_5;
                }
            }
            if (CONSIDER_THREADING(tstate) == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_5;
            }
            goto loop_start_2;
            loop_end_2:;
            CHECK_OBJECT(tmp_listcomp$listcomp_1__contraction);
            tmp_append_value_1 = tmp_listcomp$listcomp_1__contraction;
            Py_INCREF(tmp_append_value_1);
            goto try_return_handler_5;
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_5:;
            CHECK_OBJECT(tmp_listcomp$listcomp_1__$0);
            Py_DECREF(tmp_listcomp$listcomp_1__$0);
            tmp_listcomp$listcomp_1__$0 = NULL;
            CHECK_OBJECT(tmp_listcomp$listcomp_1__contraction);
            Py_DECREF(tmp_listcomp$listcomp_1__contraction);
            tmp_listcomp$listcomp_1__contraction = NULL;
            Py_XDECREF(tmp_listcomp$listcomp_1__iter_value_0);
            tmp_listcomp$listcomp_1__iter_value_0 = NULL;
            goto try_return_handler_4;
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

            CHECK_OBJECT(tmp_listcomp$listcomp_1__$0);
            Py_DECREF(tmp_listcomp$listcomp_1__$0);
            tmp_listcomp$listcomp_1__$0 = NULL;
            CHECK_OBJECT(tmp_listcomp$listcomp_1__contraction);
            Py_DECREF(tmp_listcomp$listcomp_1__contraction);
            tmp_listcomp$listcomp_1__contraction = NULL;
            Py_XDECREF(tmp_listcomp$listcomp_1__iter_value_0);
            tmp_listcomp$listcomp_1__iter_value_0 = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_1;
            exception_value = exception_keeper_value_1;
            exception_tb = exception_keeper_tb_1;
            exception_lineno = exception_keeper_lineno_1;

            goto try_except_handler_4;
            // End of try:
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_4:;
            Py_XDECREF(outline_1_var_unit);
            outline_1_var_unit = NULL;
            goto outline_result_2;
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

            Py_XDECREF(outline_1_var_unit);
            outline_1_var_unit = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_2;
            exception_value = exception_keeper_value_2;
            exception_tb = exception_keeper_tb_2;
            exception_lineno = exception_keeper_lineno_2;

            goto outline_exception_2;
            // End of try:
            NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
            return NULL;
            outline_exception_2:;
            exception_lineno = 109;
            goto try_except_handler_3;
            outline_result_2:;
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_3 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_3);
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
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
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
        Py_XDECREF(outline_0_var_a);
        outline_0_var_a = NULL;
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

        Py_XDECREF(outline_0_var_a);
        outline_0_var_a = NULL;
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
        exception_lineno = 109;
        goto frame_exception_exit_1;
        outline_result_1:;
        {
            PyObject *old = par_args;
            assert(old != NULL);
            par_args = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = MAKE_LIST_EMPTY(0);
        assert(var_boot_dist == NULL);
        var_boot_dist = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_int_arg_1;
        CHECK_OBJECT(par_n_boot);
        tmp_int_arg_1 = par_n_boot;
        tmp_xrange_low_1 = PyNumber_Int(tmp_int_arg_1);
        if (tmp_xrange_low_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_3 = BUILTIN_XRANGE1(tstate, tmp_xrange_low_1);
        Py_DECREF(tmp_xrange_low_1);
        if (tmp_iter_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_13 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_13;
    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_3 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_14 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_14 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooo";
                exception_lineno = 112;
                goto try_except_handler_6;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_15 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_15;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_2;
        if (par_integers == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[30]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 113;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_called_value_1 = par_integers;
        tmp_kw_call_arg_value_0_1 = mod_consts[4];
        if (var_n_units == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 113;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_kw_call_arg_value_1_1 = var_n_units;
        if (var_n_units == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 113;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_kw_call_arg_value_2_1 = var_n_units;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_seaborn$algorithms, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[34]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
        frame_3ed56312ae227d2b6cf35b1dfa4dd77c->m_frame.f_lineno = 113;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[35]);
        }

        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_resampler;
            var_resampler = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_17;
        // Tried code:
        {
            PyObject *tmp_assign_source_18;
            PyObject *tmp_iter_arg_4;
            if (par_args == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[36]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 114;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_7;
            }

            tmp_iter_arg_4 = par_args;
            tmp_assign_source_18 = MAKE_ITERATOR(tstate, tmp_iter_arg_4);
            if (tmp_assign_source_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_7;
            }
            {
                PyObject *old = tmp_listcomp_2__$0;
                tmp_listcomp_2__$0 = tmp_assign_source_18;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_19;
            tmp_assign_source_19 = MAKE_LIST_EMPTY(0);
            {
                PyObject *old = tmp_listcomp_2__contraction;
                tmp_listcomp_2__contraction = tmp_assign_source_19;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        loop_start_4:;
        {
            PyObject *tmp_next_source_4;
            PyObject *tmp_assign_source_20;
            CHECK_OBJECT(tmp_listcomp_2__$0);
            tmp_next_source_4 = tmp_listcomp_2__$0;
            tmp_assign_source_20 = ITERATOR_NEXT(tmp_next_source_4);
            if (tmp_assign_source_20 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_4;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    type_description_1 = "ooooooooooooo";
                    exception_lineno = 114;
                    goto try_except_handler_8;
                }
            }

            {
                PyObject *old = tmp_listcomp_2__iter_value_0;
                tmp_listcomp_2__iter_value_0 = tmp_assign_source_20;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_21;
            CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
            tmp_assign_source_21 = tmp_listcomp_2__iter_value_0;
            {
                PyObject *old = outline_2_var_a;
                outline_2_var_a = tmp_assign_source_21;
                Py_INCREF(outline_2_var_a);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_3;
            PyObject *tmp_append_value_3;
            CHECK_OBJECT(tmp_listcomp_2__contraction);
            tmp_append_list_3 = tmp_listcomp_2__contraction;
            // Tried code:
            {
                PyObject *tmp_assign_source_22;
                PyObject *tmp_iter_arg_5;
                if (var_resampler == NULL) {

                    FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[38]);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(tstate, exception_value);

                    exception_lineno = 114;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_9;
                }

                tmp_iter_arg_5 = var_resampler;
                tmp_assign_source_22 = MAKE_ITERATOR(tstate, tmp_iter_arg_5);
                if (tmp_assign_source_22 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 114;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_9;
                }
                {
                    PyObject *old = tmp_listcomp$listcomp_2__$0;
                    tmp_listcomp$listcomp_2__$0 = tmp_assign_source_22;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_assign_source_23;
                tmp_assign_source_23 = MAKE_LIST_EMPTY(0);
                {
                    PyObject *old = tmp_listcomp$listcomp_2__contraction;
                    tmp_listcomp$listcomp_2__contraction = tmp_assign_source_23;
                    Py_XDECREF(old);
                }

            }
            // Tried code:
            loop_start_5:;
            {
                PyObject *tmp_next_source_5;
                PyObject *tmp_assign_source_24;
                CHECK_OBJECT(tmp_listcomp$listcomp_2__$0);
                tmp_next_source_5 = tmp_listcomp$listcomp_2__$0;
                tmp_assign_source_24 = ITERATOR_NEXT(tmp_next_source_5);
                if (tmp_assign_source_24 == NULL) {
                    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                        goto loop_end_5;
                    } else {

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        type_description_1 = "ooooooooooooo";
                        exception_lineno = 114;
                        goto try_except_handler_10;
                    }
                }

                {
                    PyObject *old = tmp_listcomp$listcomp_2__iter_value_0;
                    tmp_listcomp$listcomp_2__iter_value_0 = tmp_assign_source_24;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_assign_source_25;
                CHECK_OBJECT(tmp_listcomp$listcomp_2__iter_value_0);
                tmp_assign_source_25 = tmp_listcomp$listcomp_2__iter_value_0;
                {
                    PyObject *old = outline_3_var_i;
                    outline_3_var_i = tmp_assign_source_25;
                    Py_INCREF(outline_3_var_i);
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_append_list_4;
                PyObject *tmp_append_value_4;
                PyObject *tmp_expression_value_3;
                PyObject *tmp_subscript_value_2;
                CHECK_OBJECT(tmp_listcomp$listcomp_2__contraction);
                tmp_append_list_4 = tmp_listcomp$listcomp_2__contraction;
                CHECK_OBJECT(outline_2_var_a);
                tmp_expression_value_3 = outline_2_var_a;
                CHECK_OBJECT(outline_3_var_i);
                tmp_subscript_value_2 = outline_3_var_i;
                tmp_append_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_2);
                if (tmp_append_value_4 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 114;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_10;
                }
                tmp_result = LIST_APPEND1(tmp_append_list_4, tmp_append_value_4);
                if (tmp_result == false) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 114;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_10;
                }
            }
            if (CONSIDER_THREADING(tstate) == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_10;
            }
            goto loop_start_5;
            loop_end_5:;
            CHECK_OBJECT(tmp_listcomp$listcomp_2__contraction);
            tmp_append_value_3 = tmp_listcomp$listcomp_2__contraction;
            Py_INCREF(tmp_append_value_3);
            goto try_return_handler_10;
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_10:;
            CHECK_OBJECT(tmp_listcomp$listcomp_2__$0);
            Py_DECREF(tmp_listcomp$listcomp_2__$0);
            tmp_listcomp$listcomp_2__$0 = NULL;
            CHECK_OBJECT(tmp_listcomp$listcomp_2__contraction);
            Py_DECREF(tmp_listcomp$listcomp_2__contraction);
            tmp_listcomp$listcomp_2__contraction = NULL;
            Py_XDECREF(tmp_listcomp$listcomp_2__iter_value_0);
            tmp_listcomp$listcomp_2__iter_value_0 = NULL;
            goto try_return_handler_9;
            // Exception handler code:
            try_except_handler_10:;
            exception_keeper_type_5 = exception_type;
            exception_keeper_value_5 = exception_value;
            exception_keeper_tb_5 = exception_tb;
            exception_keeper_lineno_5 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT(tmp_listcomp$listcomp_2__$0);
            Py_DECREF(tmp_listcomp$listcomp_2__$0);
            tmp_listcomp$listcomp_2__$0 = NULL;
            CHECK_OBJECT(tmp_listcomp$listcomp_2__contraction);
            Py_DECREF(tmp_listcomp$listcomp_2__contraction);
            tmp_listcomp$listcomp_2__contraction = NULL;
            Py_XDECREF(tmp_listcomp$listcomp_2__iter_value_0);
            tmp_listcomp$listcomp_2__iter_value_0 = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_5;
            exception_value = exception_keeper_value_5;
            exception_tb = exception_keeper_tb_5;
            exception_lineno = exception_keeper_lineno_5;

            goto try_except_handler_9;
            // End of try:
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_9:;
            Py_XDECREF(outline_3_var_i);
            outline_3_var_i = NULL;
            goto outline_result_4;
            // Exception handler code:
            try_except_handler_9:;
            exception_keeper_type_6 = exception_type;
            exception_keeper_value_6 = exception_value;
            exception_keeper_tb_6 = exception_tb;
            exception_keeper_lineno_6 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_XDECREF(outline_3_var_i);
            outline_3_var_i = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_6;
            exception_value = exception_keeper_value_6;
            exception_tb = exception_keeper_tb_6;
            exception_lineno = exception_keeper_lineno_6;

            goto outline_exception_4;
            // End of try:
            NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
            return NULL;
            outline_exception_4:;
            exception_lineno = 114;
            goto try_except_handler_8;
            outline_result_4:;
            tmp_result = LIST_APPEND1(tmp_append_list_3, tmp_append_value_3);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_8;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_8;
        }
        goto loop_start_4;
        loop_end_4:;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        tmp_assign_source_17 = tmp_listcomp_2__contraction;
        Py_INCREF(tmp_assign_source_17);
        goto try_return_handler_8;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        goto try_return_handler_7;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_XDECREF(outline_2_var_a);
        outline_2_var_a = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_2_var_a);
        outline_2_var_a = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 114;
        goto try_except_handler_6;
        outline_result_3:;
        {
            PyObject *old = var_sample;
            var_sample = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_3;
        tmp_called_value_2 = (PyObject *)&PyMap_Type;
        tmp_args_element_value_2 = LOOKUP_BUILTIN(mod_consts[2]);
        assert(tmp_args_element_value_2 != NULL);
        CHECK_OBJECT(var_sample);
        tmp_expression_value_4 = var_sample;
        tmp_subscript_value_3 = mod_consts[4];
        tmp_args_element_value_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_3, 0);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
        frame_3ed56312ae227d2b6cf35b1dfa4dd77c->m_frame.f_lineno = 115;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_26 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_lengths;
            var_lengths = tmp_assign_source_26;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_27;
        // Tried code:
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_iter_arg_6;
            CHECK_OBJECT(var_lengths);
            tmp_iter_arg_6 = var_lengths;
            tmp_assign_source_28 = MAKE_ITERATOR(tstate, tmp_iter_arg_6);
            if (tmp_assign_source_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_11;
            }
            {
                PyObject *old = tmp_listcomp_3__$0;
                tmp_listcomp_3__$0 = tmp_assign_source_28;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_29;
            tmp_assign_source_29 = MAKE_LIST_EMPTY(0);
            {
                PyObject *old = tmp_listcomp_3__contraction;
                tmp_listcomp_3__contraction = tmp_assign_source_29;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        loop_start_6:;
        {
            PyObject *tmp_next_source_6;
            PyObject *tmp_assign_source_30;
            CHECK_OBJECT(tmp_listcomp_3__$0);
            tmp_next_source_6 = tmp_listcomp_3__$0;
            tmp_assign_source_30 = ITERATOR_NEXT(tmp_next_source_6);
            if (tmp_assign_source_30 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_6;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    type_description_1 = "ooooooooooooo";
                    exception_lineno = 116;
                    goto try_except_handler_12;
                }
            }

            {
                PyObject *old = tmp_listcomp_3__iter_value_0;
                tmp_listcomp_3__iter_value_0 = tmp_assign_source_30;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_31;
            CHECK_OBJECT(tmp_listcomp_3__iter_value_0);
            tmp_assign_source_31 = tmp_listcomp_3__iter_value_0;
            {
                PyObject *old = outline_4_var_n;
                outline_4_var_n = tmp_assign_source_31;
                Py_INCREF(outline_4_var_n);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_5;
            PyObject *tmp_append_value_5;
            PyObject *tmp_called_value_3;
            PyObject *tmp_kw_call_arg_value_0_2;
            PyObject *tmp_kw_call_arg_value_1_2;
            PyObject *tmp_kw_call_arg_value_2_2;
            PyObject *tmp_kw_call_dict_value_0_2;
            PyObject *tmp_expression_value_5;
            CHECK_OBJECT(tmp_listcomp_3__contraction);
            tmp_append_list_5 = tmp_listcomp_3__contraction;
            if (par_integers == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[30]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(tstate, exception_value);

                exception_lineno = 116;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_12;
            }

            tmp_called_value_3 = par_integers;
            tmp_kw_call_arg_value_0_2 = mod_consts[4];
            CHECK_OBJECT(outline_4_var_n);
            tmp_kw_call_arg_value_1_2 = outline_4_var_n;
            CHECK_OBJECT(outline_4_var_n);
            tmp_kw_call_arg_value_2_2 = outline_4_var_n;
            tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_seaborn$algorithms, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_5 == NULL)) {
                tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
            }

            if (tmp_expression_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_12;
            }
            tmp_kw_call_dict_value_0_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[34]);
            if (tmp_kw_call_dict_value_0_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_12;
            }
            frame_3ed56312ae227d2b6cf35b1dfa4dd77c->m_frame.f_lineno = 116;
            {
                PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2, tmp_kw_call_arg_value_2_2};
                PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
                tmp_append_value_5 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tstate, tmp_called_value_3, args, kw_values, mod_consts[35]);
            }

            Py_DECREF(tmp_kw_call_dict_value_0_2);
            if (tmp_append_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_12;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_5, tmp_append_value_5);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_12;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_12;
        }
        goto loop_start_6;
        loop_end_6:;
        CHECK_OBJECT(tmp_listcomp_3__contraction);
        tmp_assign_source_27 = tmp_listcomp_3__contraction;
        Py_INCREF(tmp_assign_source_27);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        CHECK_OBJECT(tmp_listcomp_3__$0);
        Py_DECREF(tmp_listcomp_3__$0);
        tmp_listcomp_3__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_3__contraction);
        Py_DECREF(tmp_listcomp_3__contraction);
        tmp_listcomp_3__contraction = NULL;
        Py_XDECREF(tmp_listcomp_3__iter_value_0);
        tmp_listcomp_3__iter_value_0 = NULL;
        goto try_return_handler_11;
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

        CHECK_OBJECT(tmp_listcomp_3__$0);
        Py_DECREF(tmp_listcomp_3__$0);
        tmp_listcomp_3__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_3__contraction);
        Py_DECREF(tmp_listcomp_3__contraction);
        tmp_listcomp_3__contraction = NULL;
        Py_XDECREF(tmp_listcomp_3__iter_value_0);
        tmp_listcomp_3__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto try_except_handler_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        Py_XDECREF(outline_4_var_n);
        outline_4_var_n = NULL;
        goto outline_result_5;
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

        Py_XDECREF(outline_4_var_n);
        outline_4_var_n = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 116;
        goto try_except_handler_6;
        outline_result_5:;
        {
            PyObject *old = var_resampler;
            var_resampler = tmp_assign_source_27;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_32;
        // Tried code:
        {
            PyObject *tmp_assign_source_33;
            PyObject *tmp_iter_arg_7;
            CHECK_OBJECT(var_sample);
            tmp_iter_arg_7 = var_sample;
            tmp_assign_source_33 = MAKE_ITERATOR(tstate, tmp_iter_arg_7);
            if (tmp_assign_source_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_13;
            }
            {
                PyObject *old = tmp_listcomp_4__$0;
                tmp_listcomp_4__$0 = tmp_assign_source_33;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_34;
            tmp_assign_source_34 = MAKE_LIST_EMPTY(0);
            {
                PyObject *old = tmp_listcomp_4__contraction;
                tmp_listcomp_4__contraction = tmp_assign_source_34;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        loop_start_7:;
        {
            PyObject *tmp_next_source_7;
            PyObject *tmp_assign_source_35;
            CHECK_OBJECT(tmp_listcomp_4__$0);
            tmp_next_source_7 = tmp_listcomp_4__$0;
            tmp_assign_source_35 = ITERATOR_NEXT(tmp_next_source_7);
            if (tmp_assign_source_35 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_7;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    type_description_1 = "ooooooooooooo";
                    exception_lineno = 117;
                    goto try_except_handler_14;
                }
            }

            {
                PyObject *old = tmp_listcomp_4__iter_value_0;
                tmp_listcomp_4__iter_value_0 = tmp_assign_source_35;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_36;
            CHECK_OBJECT(tmp_listcomp_4__iter_value_0);
            tmp_assign_source_36 = tmp_listcomp_4__iter_value_0;
            {
                PyObject *old = outline_5_var_a;
                outline_5_var_a = tmp_assign_source_36;
                Py_INCREF(outline_5_var_a);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_6;
            PyObject *tmp_append_value_6;
            CHECK_OBJECT(tmp_listcomp_4__contraction);
            tmp_append_list_6 = tmp_listcomp_4__contraction;
            // Tried code:
            {
                PyObject *tmp_assign_source_37;
                PyObject *tmp_iter_arg_8;
                PyObject *tmp_called_value_4;
                PyObject *tmp_args_element_value_4;
                PyObject *tmp_args_element_value_5;
                tmp_called_value_4 = (PyObject *)&PyZip_Type;
                CHECK_OBJECT(outline_5_var_a);
                tmp_args_element_value_4 = outline_5_var_a;
                if (var_resampler == NULL) {

                    FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[38]);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(tstate, exception_value);

                    exception_lineno = 117;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_15;
                }

                tmp_args_element_value_5 = var_resampler;
                frame_3ed56312ae227d2b6cf35b1dfa4dd77c->m_frame.f_lineno = 117;
                {
                    PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
                    tmp_iter_arg_8 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
                }

                if (tmp_iter_arg_8 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 117;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_15;
                }
                tmp_assign_source_37 = MAKE_ITERATOR(tstate, tmp_iter_arg_8);
                Py_DECREF(tmp_iter_arg_8);
                if (tmp_assign_source_37 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 117;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_15;
                }
                {
                    PyObject *old = tmp_listcomp$listcomp_3__$0;
                    tmp_listcomp$listcomp_3__$0 = tmp_assign_source_37;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_assign_source_38;
                tmp_assign_source_38 = MAKE_LIST_EMPTY(0);
                {
                    PyObject *old = tmp_listcomp$listcomp_3__contraction;
                    tmp_listcomp$listcomp_3__contraction = tmp_assign_source_38;
                    Py_XDECREF(old);
                }

            }
            // Tried code:
            loop_start_8:;
            {
                PyObject *tmp_next_source_8;
                PyObject *tmp_assign_source_39;
                CHECK_OBJECT(tmp_listcomp$listcomp_3__$0);
                tmp_next_source_8 = tmp_listcomp$listcomp_3__$0;
                tmp_assign_source_39 = ITERATOR_NEXT(tmp_next_source_8);
                if (tmp_assign_source_39 == NULL) {
                    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                        goto loop_end_8;
                    } else {

                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                        type_description_1 = "ooooooooooooo";
                        exception_lineno = 117;
                        goto try_except_handler_16;
                    }
                }

                {
                    PyObject *old = tmp_listcomp$listcomp_3__iter_value_0;
                    tmp_listcomp$listcomp_3__iter_value_0 = tmp_assign_source_39;
                    Py_XDECREF(old);
                }

            }
            // Tried code:
            {
                PyObject *tmp_assign_source_40;
                PyObject *tmp_iter_arg_9;
                CHECK_OBJECT(tmp_listcomp$listcomp_3__iter_value_0);
                tmp_iter_arg_9 = tmp_listcomp$listcomp_3__iter_value_0;
                tmp_assign_source_40 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_9);
                if (tmp_assign_source_40 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 117;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_17;
                }
                {
                    PyObject *old = tmp_listcomp$listcomp$tuple_unpack_1__source_iter;
                    tmp_listcomp$listcomp$tuple_unpack_1__source_iter = tmp_assign_source_40;
                    Py_XDECREF(old);
                }

            }
            // Tried code:
            {
                PyObject *tmp_assign_source_41;
                PyObject *tmp_unpack_1;
                CHECK_OBJECT(tmp_listcomp$listcomp$tuple_unpack_1__source_iter);
                tmp_unpack_1 = tmp_listcomp$listcomp$tuple_unpack_1__source_iter;
                tmp_assign_source_41 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 2);
                if (tmp_assign_source_41 == NULL) {
                    if (!HAS_ERROR_OCCURRED(tstate)) {
                        exception_type = PyExc_StopIteration;
                        Py_INCREF(exception_type);
                        exception_value = NULL;
                        exception_tb = NULL;
                    } else {
                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    }


                    type_description_1 = "ooooooooooooo";
                    exception_lineno = 117;
                    goto try_except_handler_18;
                }
                {
                    PyObject *old = tmp_listcomp$listcomp$tuple_unpack_1__element_1;
                    tmp_listcomp$listcomp$tuple_unpack_1__element_1 = tmp_assign_source_41;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_assign_source_42;
                PyObject *tmp_unpack_2;
                CHECK_OBJECT(tmp_listcomp$listcomp$tuple_unpack_1__source_iter);
                tmp_unpack_2 = tmp_listcomp$listcomp$tuple_unpack_1__source_iter;
                tmp_assign_source_42 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 2);
                if (tmp_assign_source_42 == NULL) {
                    if (!HAS_ERROR_OCCURRED(tstate)) {
                        exception_type = PyExc_StopIteration;
                        Py_INCREF(exception_type);
                        exception_value = NULL;
                        exception_tb = NULL;
                    } else {
                        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    }


                    type_description_1 = "ooooooooooooo";
                    exception_lineno = 117;
                    goto try_except_handler_18;
                }
                {
                    PyObject *old = tmp_listcomp$listcomp$tuple_unpack_1__element_2;
                    tmp_listcomp$listcomp$tuple_unpack_1__element_2 = tmp_assign_source_42;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_iterator_name_1;
                CHECK_OBJECT(tmp_listcomp$listcomp$tuple_unpack_1__source_iter);
                tmp_iterator_name_1 = tmp_listcomp$listcomp$tuple_unpack_1__source_iter;
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

                            type_description_1 = "ooooooooooooo";
                            exception_lineno = 117;
                            goto try_except_handler_18;
                        }
                    }
                } else {
                    Py_DECREF(tmp_iterator_attempt);

                    exception_type = PyExc_ValueError;
                    Py_INCREF(PyExc_ValueError);
                    exception_value = mod_consts[46];
                    Py_INCREF(exception_value);
                    exception_tb = NULL;

                    type_description_1 = "ooooooooooooo";
                    exception_lineno = 117;
                    goto try_except_handler_18;
                }
            }
            goto try_end_1;
            // Exception handler code:
            try_except_handler_18:;
            exception_keeper_type_11 = exception_type;
            exception_keeper_value_11 = exception_value;
            exception_keeper_tb_11 = exception_tb;
            exception_keeper_lineno_11 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT(tmp_listcomp$listcomp$tuple_unpack_1__source_iter);
            Py_DECREF(tmp_listcomp$listcomp$tuple_unpack_1__source_iter);
            tmp_listcomp$listcomp$tuple_unpack_1__source_iter = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_11;
            exception_value = exception_keeper_value_11;
            exception_tb = exception_keeper_tb_11;
            exception_lineno = exception_keeper_lineno_11;

            goto try_except_handler_17;
            // End of try:
            try_end_1:;
            goto try_end_2;
            // Exception handler code:
            try_except_handler_17:;
            exception_keeper_type_12 = exception_type;
            exception_keeper_value_12 = exception_value;
            exception_keeper_tb_12 = exception_tb;
            exception_keeper_lineno_12 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_XDECREF(tmp_listcomp$listcomp$tuple_unpack_1__element_1);
            tmp_listcomp$listcomp$tuple_unpack_1__element_1 = NULL;
            Py_XDECREF(tmp_listcomp$listcomp$tuple_unpack_1__element_2);
            tmp_listcomp$listcomp$tuple_unpack_1__element_2 = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_12;
            exception_value = exception_keeper_value_12;
            exception_tb = exception_keeper_tb_12;
            exception_lineno = exception_keeper_lineno_12;

            goto try_except_handler_16;
            // End of try:
            try_end_2:;
            CHECK_OBJECT(tmp_listcomp$listcomp$tuple_unpack_1__source_iter);
            Py_DECREF(tmp_listcomp$listcomp$tuple_unpack_1__source_iter);
            tmp_listcomp$listcomp$tuple_unpack_1__source_iter = NULL;
            {
                PyObject *tmp_assign_source_43;
                CHECK_OBJECT(tmp_listcomp$listcomp$tuple_unpack_1__element_1);
                tmp_assign_source_43 = tmp_listcomp$listcomp$tuple_unpack_1__element_1;
                {
                    PyObject *old = outline_6_var_c;
                    outline_6_var_c = tmp_assign_source_43;
                    Py_INCREF(outline_6_var_c);
                    Py_XDECREF(old);
                }

            }
            Py_XDECREF(tmp_listcomp$listcomp$tuple_unpack_1__element_1);
            tmp_listcomp$listcomp$tuple_unpack_1__element_1 = NULL;

            {
                PyObject *tmp_assign_source_44;
                CHECK_OBJECT(tmp_listcomp$listcomp$tuple_unpack_1__element_2);
                tmp_assign_source_44 = tmp_listcomp$listcomp$tuple_unpack_1__element_2;
                {
                    PyObject *old = outline_6_var_r;
                    outline_6_var_r = tmp_assign_source_44;
                    Py_INCREF(outline_6_var_r);
                    Py_XDECREF(old);
                }

            }
            Py_XDECREF(tmp_listcomp$listcomp$tuple_unpack_1__element_2);
            tmp_listcomp$listcomp$tuple_unpack_1__element_2 = NULL;

            {
                PyObject *tmp_append_list_7;
                PyObject *tmp_append_value_7;
                PyObject *tmp_called_value_5;
                PyObject *tmp_expression_value_6;
                PyObject *tmp_args_value_1;
                PyObject *tmp_tuple_element_1;
                PyObject *tmp_kwargs_value_1;
                CHECK_OBJECT(tmp_listcomp$listcomp_3__contraction);
                tmp_append_list_7 = tmp_listcomp$listcomp_3__contraction;
                CHECK_OBJECT(outline_6_var_c);
                tmp_expression_value_6 = outline_6_var_c;
                tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[37]);
                if (tmp_called_value_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 117;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_16;
                }
                CHECK_OBJECT(outline_6_var_r);
                tmp_tuple_element_1 = outline_6_var_r;
                tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
                PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
                tmp_kwargs_value_1 = DICT_COPY(mod_consts[39]);
                frame_3ed56312ae227d2b6cf35b1dfa4dd77c->m_frame.f_lineno = 117;
                tmp_append_value_7 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_1, tmp_kwargs_value_1);
                Py_DECREF(tmp_called_value_5);
                Py_DECREF(tmp_args_value_1);
                Py_DECREF(tmp_kwargs_value_1);
                if (tmp_append_value_7 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 117;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_16;
                }
                tmp_result = LIST_APPEND1(tmp_append_list_7, tmp_append_value_7);
                if (tmp_result == false) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 117;
                    type_description_1 = "ooooooooooooo";
                    goto try_except_handler_16;
                }
            }
            if (CONSIDER_THREADING(tstate) == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_16;
            }
            goto loop_start_8;
            loop_end_8:;
            CHECK_OBJECT(tmp_listcomp$listcomp_3__contraction);
            tmp_append_value_6 = tmp_listcomp$listcomp_3__contraction;
            Py_INCREF(tmp_append_value_6);
            goto try_return_handler_16;
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_16:;
            CHECK_OBJECT(tmp_listcomp$listcomp_3__$0);
            Py_DECREF(tmp_listcomp$listcomp_3__$0);
            tmp_listcomp$listcomp_3__$0 = NULL;
            CHECK_OBJECT(tmp_listcomp$listcomp_3__contraction);
            Py_DECREF(tmp_listcomp$listcomp_3__contraction);
            tmp_listcomp$listcomp_3__contraction = NULL;
            Py_XDECREF(tmp_listcomp$listcomp_3__iter_value_0);
            tmp_listcomp$listcomp_3__iter_value_0 = NULL;
            goto try_return_handler_15;
            // Exception handler code:
            try_except_handler_16:;
            exception_keeper_type_13 = exception_type;
            exception_keeper_value_13 = exception_value;
            exception_keeper_tb_13 = exception_tb;
            exception_keeper_lineno_13 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT(tmp_listcomp$listcomp_3__$0);
            Py_DECREF(tmp_listcomp$listcomp_3__$0);
            tmp_listcomp$listcomp_3__$0 = NULL;
            CHECK_OBJECT(tmp_listcomp$listcomp_3__contraction);
            Py_DECREF(tmp_listcomp$listcomp_3__contraction);
            tmp_listcomp$listcomp_3__contraction = NULL;
            Py_XDECREF(tmp_listcomp$listcomp_3__iter_value_0);
            tmp_listcomp$listcomp_3__iter_value_0 = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_13;
            exception_value = exception_keeper_value_13;
            exception_tb = exception_keeper_tb_13;
            exception_lineno = exception_keeper_lineno_13;

            goto try_except_handler_15;
            // End of try:
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_15:;
            Py_XDECREF(outline_6_var_c);
            outline_6_var_c = NULL;
            Py_XDECREF(outline_6_var_r);
            outline_6_var_r = NULL;
            goto outline_result_7;
            // Exception handler code:
            try_except_handler_15:;
            exception_keeper_type_14 = exception_type;
            exception_keeper_value_14 = exception_value;
            exception_keeper_tb_14 = exception_tb;
            exception_keeper_lineno_14 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_XDECREF(outline_6_var_c);
            outline_6_var_c = NULL;
            Py_XDECREF(outline_6_var_r);
            outline_6_var_r = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_14;
            exception_value = exception_keeper_value_14;
            exception_tb = exception_keeper_tb_14;
            exception_lineno = exception_keeper_lineno_14;

            goto outline_exception_7;
            // End of try:
            NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
            return NULL;
            outline_exception_7:;
            exception_lineno = 117;
            goto try_except_handler_14;
            outline_result_7:;
            tmp_result = LIST_APPEND1(tmp_append_list_6, tmp_append_value_6);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;
                type_description_1 = "ooooooooooooo";
                goto try_except_handler_14;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_14;
        }
        goto loop_start_7;
        loop_end_7:;
        CHECK_OBJECT(tmp_listcomp_4__contraction);
        tmp_assign_source_32 = tmp_listcomp_4__contraction;
        Py_INCREF(tmp_assign_source_32);
        goto try_return_handler_14;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        CHECK_OBJECT(tmp_listcomp_4__$0);
        Py_DECREF(tmp_listcomp_4__$0);
        tmp_listcomp_4__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_4__contraction);
        Py_DECREF(tmp_listcomp_4__contraction);
        tmp_listcomp_4__contraction = NULL;
        Py_XDECREF(tmp_listcomp_4__iter_value_0);
        tmp_listcomp_4__iter_value_0 = NULL;
        goto try_return_handler_13;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_15 = exception_type;
        exception_keeper_value_15 = exception_value;
        exception_keeper_tb_15 = exception_tb;
        exception_keeper_lineno_15 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_4__$0);
        Py_DECREF(tmp_listcomp_4__$0);
        tmp_listcomp_4__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_4__contraction);
        Py_DECREF(tmp_listcomp_4__contraction);
        tmp_listcomp_4__contraction = NULL;
        Py_XDECREF(tmp_listcomp_4__iter_value_0);
        tmp_listcomp_4__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;
        exception_lineno = exception_keeper_lineno_15;

        goto try_except_handler_13;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        Py_XDECREF(outline_5_var_a);
        outline_5_var_a = NULL;
        goto outline_result_6;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_5_var_a);
        outline_5_var_a = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto outline_exception_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_6:;
        exception_lineno = 117;
        goto try_except_handler_6;
        outline_result_6:;
        {
            PyObject *old = var_sample;
            assert(old != NULL);
            var_sample = tmp_assign_source_32;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_7;
        tmp_called_value_6 = (PyObject *)&PyMap_Type;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_seaborn$algorithms, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[47]);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_sample);
        tmp_args_element_value_7 = var_sample;
        frame_3ed56312ae227d2b6cf35b1dfa4dd77c->m_frame.f_lineno = 118;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_list_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_args_element_value_6);
        if (tmp_list_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_45 = MAKE_LIST(tstate, tmp_list_arg_1);
        Py_DECREF(tmp_list_arg_1);
        if (tmp_assign_source_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_sample;
            assert(old != NULL);
            var_sample = tmp_assign_source_45;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        if (var_boot_dist == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[40]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 119;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_8 = var_boot_dist;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[41]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(par_func);
        tmp_dircall_arg1_1 = par_func;
        CHECK_OBJECT(var_sample);
        tmp_dircall_arg2_1 = var_sample;
        CHECK_OBJECT(par_func_kwargs);
        tmp_dircall_arg3_1 = par_func_kwargs;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_args_element_value_8 = impl___main__$$$function__6_complex_call_helper_star_list_star_dict(tstate, dir_call_args);
        }
        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 119;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
        frame_3ed56312ae227d2b6cf35b1dfa4dd77c->m_frame.f_lineno = 119;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "ooooooooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 112;
        type_description_1 = "ooooooooooooo";
        goto try_except_handler_6;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
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
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_9;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_seaborn$algorithms, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[42]);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (var_boot_dist == NULL) {
            Py_DECREF(tmp_called_value_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[40]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 120;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_9 = var_boot_dist;
        frame_3ed56312ae227d2b6cf35b1dfa4dd77c->m_frame.f_lineno = 120;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_8);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "ooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_3ed56312ae227d2b6cf35b1dfa4dd77c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3ed56312ae227d2b6cf35b1dfa4dd77c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3ed56312ae227d2b6cf35b1dfa4dd77c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3ed56312ae227d2b6cf35b1dfa4dd77c,
        type_description_1,
        par_args,
        par_n_boot,
        par_units,
        par_func,
        par_func_kwargs,
        par_integers,
        var_unique_units,
        var_n_units,
        var_boot_dist,
        var_i,
        var_resampler,
        var_sample,
        var_lengths
    );


    // Release cached frame if used for exception.
    if (frame_3ed56312ae227d2b6cf35b1dfa4dd77c == cache_frame_3ed56312ae227d2b6cf35b1dfa4dd77c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3ed56312ae227d2b6cf35b1dfa4dd77c);
        cache_frame_3ed56312ae227d2b6cf35b1dfa4dd77c = NULL;
    }

    assertFrameObject(frame_3ed56312ae227d2b6cf35b1dfa4dd77c);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_args);
    par_args = NULL;
    Py_XDECREF(var_unique_units);
    var_unique_units = NULL;
    Py_XDECREF(var_n_units);
    var_n_units = NULL;
    Py_XDECREF(var_boot_dist);
    var_boot_dist = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_resampler);
    var_resampler = NULL;
    Py_XDECREF(var_sample);
    var_sample = NULL;
    Py_XDECREF(var_lengths);
    var_lengths = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_args);
    par_args = NULL;
    Py_XDECREF(var_unique_units);
    var_unique_units = NULL;
    Py_XDECREF(var_n_units);
    var_n_units = NULL;
    Py_XDECREF(var_boot_dist);
    var_boot_dist = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_resampler);
    var_resampler = NULL;
    Py_XDECREF(var_sample);
    var_sample = NULL;
    Py_XDECREF(var_lengths);
    var_lengths = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_n_boot);
    Py_DECREF(par_n_boot);
    CHECK_OBJECT(par_units);
    Py_DECREF(par_units);
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    CHECK_OBJECT(par_func_kwargs);
    Py_DECREF(par_func_kwargs);
    CHECK_OBJECT(par_integers);
    Py_DECREF(par_integers);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_n_boot);
    Py_DECREF(par_n_boot);
    CHECK_OBJECT(par_units);
    Py_DECREF(par_units);
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    CHECK_OBJECT(par_func_kwargs);
    Py_DECREF(par_func_kwargs);
    CHECK_OBJECT(par_integers);
    Py_DECREF(par_integers);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_seaborn$algorithms$$$function__1_bootstrap() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_seaborn$algorithms$$$function__1_bootstrap,
        mod_consts[57],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8916dfd82e0fc9d132e8d1a8b7118bce,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_seaborn$algorithms,
        mod_consts[43],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_seaborn$algorithms$$$function__2__structured_bootstrap() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_seaborn$algorithms$$$function__2__structured_bootstrap,
        mod_consts[32],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3ed56312ae227d2b6cf35b1dfa4dd77c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_seaborn$algorithms,
        mod_consts[48],
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

static function_impl_code const function_table_seaborn$algorithms[] = {
    impl_seaborn$algorithms$$$function__1_bootstrap,
    impl_seaborn$algorithms$$$function__2__structured_bootstrap,
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

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_seaborn$algorithms);

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
        module_seaborn$algorithms,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        function_table_seaborn$algorithms,
        sizeof(function_table_seaborn$algorithms) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_seaborn$algorithms(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("seaborn$algorithms");

    // Store the module for future use.
    module_seaborn$algorithms = module;

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
        PRINT_STRING("seaborn$algorithms: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("seaborn$algorithms: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initseaborn$algorithms\n");

    moduledict_seaborn$algorithms = MODULE_DICT(module_seaborn$algorithms);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_seaborn$algorithms,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_seaborn$algorithms,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[26]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_seaborn$algorithms, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_seaborn$algorithms,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_seaborn$algorithms, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_seaborn$algorithms,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_seaborn$algorithms, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_seaborn$algorithms,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_seaborn$algorithms);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_seaborn$algorithms, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_seaborn$algorithms, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_seaborn$algorithms, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_seaborn$algorithms, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_seaborn$algorithms);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_seaborn$algorithms, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_6b0f9c3ea0fa15e21040f9d03a8658c9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[49];
        UPDATE_STRING_DICT0(moduledict_seaborn$algorithms, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_seaborn$algorithms, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_2);
    }
    frame_6b0f9c3ea0fa15e21040f9d03a8658c9 = MAKE_MODULE_FRAME(codeobj_6b0f9c3ea0fa15e21040f9d03a8658c9, module_seaborn$algorithms);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_6b0f9c3ea0fa15e21040f9d03a8658c9);
    assert(Py_REFCNT(frame_6b0f9c3ea0fa15e21040f9d03a8658c9) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_seaborn$algorithms, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[53], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_seaborn$algorithms, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[52]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[54], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_seaborn$algorithms, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[56];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_seaborn$algorithms;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[4];
        frame_6b0f9c3ea0fa15e21040f9d03a8658c9->m_frame.f_lineno = 2;
        tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_seaborn$algorithms, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[12];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_seaborn$algorithms;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[4];
        frame_6b0f9c3ea0fa15e21040f9d03a8658c9->m_frame.f_lineno = 3;
        tmp_assign_source_5 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_seaborn$algorithms, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_5);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6b0f9c3ea0fa15e21040f9d03a8658c9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6b0f9c3ea0fa15e21040f9d03a8658c9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6b0f9c3ea0fa15e21040f9d03a8658c9, exception_lineno);
    }



    assertFrameObject(frame_6b0f9c3ea0fa15e21040f9d03a8658c9);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_6;


        tmp_assign_source_6 = MAKE_FUNCTION_seaborn$algorithms$$$function__1_bootstrap();

        UPDATE_STRING_DICT1(moduledict_seaborn$algorithms, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;


        tmp_assign_source_7 = MAKE_FUNCTION_seaborn$algorithms$$$function__2__structured_bootstrap();

        UPDATE_STRING_DICT1(moduledict_seaborn$algorithms, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_7);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("seaborn$algorithms", false);

    Py_INCREF(module_seaborn$algorithms);
    return module_seaborn$algorithms;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_seaborn$algorithms, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("seaborn$algorithms", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
