/* Generated code for Python module 'networkx$generators$social'
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

/* The "module_networkx$generators$social" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_networkx$generators$social;
PyDictObject *moduledict_networkx$generators$social;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[330];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[330];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("networkx.generators.social"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 330; i++) {
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
void checkModuleConstants_networkx$generators$social(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 330; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_b98c702cea466dafd8fcc79ff15f587f;
static PyCodeObject *codeobj_b52bae8e04964b165c61533fd3fb341e;
static PyCodeObject *codeobj_248290f67f950d16d2a756c4b3116258;
static PyCodeObject *codeobj_96b675af87b4a45abb1980b66f3bf7da;
static PyCodeObject *codeobj_1576e603a9ba92bb7e4d328382c60c50;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[324]); CHECK_OBJECT(module_filename_obj);
    codeobj_b98c702cea466dafd8fcc79ff15f587f = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[325], mod_consts[325], NULL, NULL, 0, 0, 0);
    codeobj_b52bae8e04964b165c61533fd3fb341e = MAKE_CODE_OBJECT(module_filename_obj, 97, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[321], mod_consts[321], mod_consts[326], NULL, 0, 0, 0);
    codeobj_248290f67f950d16d2a756c4b3116258 = MAKE_CODE_OBJECT(module_filename_obj, 248, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[322], mod_consts[322], mod_consts[327], NULL, 0, 0, 0);
    codeobj_96b675af87b4a45abb1980b66f3bf7da = MAKE_CODE_OBJECT(module_filename_obj, 15, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[320], mod_consts[320], mod_consts[328], NULL, 0, 0, 0);
    codeobj_1576e603a9ba92bb7e4d328382c60c50 = MAKE_CODE_OBJECT(module_filename_obj, 282, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[323], mod_consts[323], mod_consts[327], NULL, 0, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_networkx$generators$social$$$function__1_karate_club_graph();


static PyObject *MAKE_FUNCTION_networkx$generators$social$$$function__2_davis_southern_women_graph();


static PyObject *MAKE_FUNCTION_networkx$generators$social$$$function__3_florentine_families_graph();


static PyObject *MAKE_FUNCTION_networkx$generators$social$$$function__4_les_miserables_graph();


// The module function definitions.
static PyObject *impl_networkx$generators$social$$$function__1_karate_club_graph(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *var_all_members = NULL;
    PyObject *var_club1 = NULL;
    PyObject *var_G = NULL;
    PyObject *var_row = NULL;
    PyObject *var_line = NULL;
    PyObject *var_thisrow = NULL;
    PyObject *var_col = NULL;
    PyObject *var_entry = NULL;
    PyObject *var_v = NULL;
    PyObject *outline_0_var_b = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_96b675af87b4a45abb1980b66f3bf7da;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
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
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    int tmp_res;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_96b675af87b4a45abb1980b66f3bf7da = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PySet_New(mod_consts[0]);
        assert(var_all_members == NULL);
        var_all_members = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = PySet_New(mod_consts[1]);
        assert(var_club1 == NULL);
        var_club1 = tmp_assign_source_2;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_96b675af87b4a45abb1980b66f3bf7da)) {
        Py_XDECREF(cache_frame_96b675af87b4a45abb1980b66f3bf7da);

#if _DEBUG_REFCOUNTS
        if (cache_frame_96b675af87b4a45abb1980b66f3bf7da == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_96b675af87b4a45abb1980b66f3bf7da = MAKE_FUNCTION_FRAME(tstate, codeobj_96b675af87b4a45abb1980b66f3bf7da, module_networkx$generators$social, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_96b675af87b4a45abb1980b66f3bf7da->m_type_description == NULL);
    frame_96b675af87b4a45abb1980b66f3bf7da = cache_frame_96b675af87b4a45abb1980b66f3bf7da;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_96b675af87b4a45abb1980b66f3bf7da);
    assert(Py_REFCNT(frame_96b675af87b4a45abb1980b66f3bf7da) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_networkx$generators$social, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        frame_96b675af87b4a45abb1980b66f3bf7da->m_frame.f_lineno = 44;
        tmp_assign_source_3 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[3]);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        assert(var_G == NULL);
        var_G = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(var_G);
        tmp_called_instance_2 = var_G;
        CHECK_OBJECT(var_all_members);
        tmp_args_element_value_1 = var_all_members;
        frame_96b675af87b4a45abb1980b66f3bf7da->m_frame.f_lineno = 45;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[4], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[5];
        CHECK_OBJECT(var_G);
        tmp_assattr_target_1 = var_G;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[6], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_arg_element_1;
        tmp_called_value_1 = (PyObject *)&PyEnum_Type;
        tmp_call_arg_element_1 = LIST_COPY(mod_consts[7]);
        frame_96b675af87b4a45abb1980b66f3bf7da->m_frame.f_lineno = 84;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_call_arg_element_1);
        Py_DECREF(tmp_call_arg_element_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = MAKE_ITERATOR(tstate, tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_4;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_5 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooNoooooo";
                exception_lineno = 84;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_6 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oooNoooooo";
            goto try_except_handler_3;
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
        tmp_assign_source_7 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 2);
        if (tmp_assign_source_7 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooNoooooo";
            exception_lineno = 84;
            goto try_except_handler_4;
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
        tmp_assign_source_8 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 2);
        if (tmp_assign_source_8 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooNoooooo";
            exception_lineno = 84;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_8;
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

                    type_description_1 = "oooNoooooo";
                    exception_lineno = 84;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[8];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooNoooooo";
            exception_lineno = 84;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
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

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_row;
            var_row = tmp_assign_source_9;
            Py_INCREF(var_row);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_line;
            var_line = tmp_assign_source_10;
            Py_INCREF(var_line);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_11;
        // Tried code:
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_iter_arg_3;
            PyObject *tmp_called_value_2;
            PyObject *tmp_expression_value_1;
            CHECK_OBJECT(var_line);
            tmp_expression_value_1 = var_line;
            tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[9]);
            if (tmp_called_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_1 = "oooNoooooo";
                goto try_except_handler_5;
            }
            frame_96b675af87b4a45abb1980b66f3bf7da->m_frame.f_lineno = 85;
            tmp_iter_arg_3 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
            Py_DECREF(tmp_called_value_2);
            if (tmp_iter_arg_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_1 = "oooNoooooo";
                goto try_except_handler_5;
            }
            tmp_assign_source_12 = MAKE_ITERATOR(tstate, tmp_iter_arg_3);
            Py_DECREF(tmp_iter_arg_3);
            if (tmp_assign_source_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_1 = "oooNoooooo";
                goto try_except_handler_5;
            }
            {
                PyObject *old = tmp_listcomp_1__$0;
                tmp_listcomp_1__$0 = tmp_assign_source_12;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_13;
            tmp_assign_source_13 = MAKE_LIST_EMPTY(0);
            {
                PyObject *old = tmp_listcomp_1__contraction;
                tmp_listcomp_1__contraction = tmp_assign_source_13;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_14;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_2 = tmp_listcomp_1__$0;
            tmp_assign_source_14 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_14 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                    type_description_1 = "oooNoooooo";
                    exception_lineno = 85;
                    goto try_except_handler_6;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_14;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_15;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_15 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_b;
                outline_0_var_b = tmp_assign_source_15;
                Py_INCREF(outline_0_var_b);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_int_arg_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_b);
            tmp_int_arg_1 = outline_0_var_b;
            tmp_append_value_1 = PyNumber_Int(tmp_int_arg_1);
            if (tmp_append_value_1 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_1 = "oooNoooooo";
                goto try_except_handler_6;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;
                type_description_1 = "oooNoooooo";
                goto try_except_handler_6;
            }
        }
        if (CONSIDER_THREADING(tstate) == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oooNoooooo";
            goto try_except_handler_6;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_11 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_11);
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
        Py_XDECREF(outline_0_var_b);
        outline_0_var_b = NULL;
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

        Py_XDECREF(outline_0_var_b);
        outline_0_var_b = NULL;
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
        exception_lineno = 85;
        goto try_except_handler_2;
        outline_result_1:;
        {
            PyObject *old = var_thisrow;
            var_thisrow = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_3 = (PyObject *)&PyEnum_Type;
        CHECK_OBJECT(var_thisrow);
        tmp_args_element_value_2 = var_thisrow;
        frame_96b675af87b4a45abb1980b66f3bf7da->m_frame.f_lineno = 86;
        tmp_iter_arg_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
        if (tmp_iter_arg_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "oooNoooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_16 = MAKE_ITERATOR(tstate, tmp_iter_arg_4);
        Py_DECREF(tmp_iter_arg_4);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "oooNoooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_3 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_17 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_17 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooNoooooo";
                exception_lineno = 86;
                goto try_except_handler_7;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_iter_arg_5;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_iter_arg_5 = tmp_for_loop_2__iter_value;
        tmp_assign_source_18 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "oooNoooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_19 = UNPACK_NEXT(tstate, tmp_unpack_3, 0, 2);
        if (tmp_assign_source_19 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooNoooooo";
            exception_lineno = 86;
            goto try_except_handler_9;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_19;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_20 = UNPACK_NEXT(tstate, tmp_unpack_4, 1, 2);
        if (tmp_assign_source_20 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooNoooooo";
            exception_lineno = 86;
            goto try_except_handler_9;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_20;
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

                    type_description_1 = "oooNoooooo";
                    exception_lineno = 86;
                    goto try_except_handler_9;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[8];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooNoooooo";
            exception_lineno = 86;
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
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_21 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_col;
            var_col = tmp_assign_source_21;
            Py_INCREF(var_col);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_22 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_entry;
            var_entry = tmp_assign_source_22;
            Py_INCREF(var_entry);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_entry);
        tmp_cmp_expr_left_1 = var_entry;
        tmp_cmp_expr_right_1 = mod_consts[10];
        tmp_condition_result_1 = RICH_COMPARE_GE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oooNoooooo";
            goto try_except_handler_7;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        if (var_G == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 88;
            type_description_1 = "oooNoooooo";
            goto try_except_handler_7;
        }

        tmp_expression_value_2 = var_G;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[12]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oooNoooooo";
            goto try_except_handler_7;
        }
        if (var_row == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[13]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 88;
            type_description_1 = "oooNoooooo";
            goto try_except_handler_7;
        }

        tmp_kw_call_arg_value_0_1 = var_row;
        CHECK_OBJECT(var_col);
        tmp_kw_call_arg_value_1_1 = var_col;
        CHECK_OBJECT(var_entry);
        tmp_kw_call_dict_value_0_1 = var_entry;
        frame_96b675af87b4a45abb1980b66f3bf7da->m_frame.f_lineno = 88;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tstate, tmp_called_value_4, args, kw_values, mod_consts[14]);
        }

        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oooNoooooo";
            goto try_except_handler_7;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_1:;
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 86;
        type_description_1 = "oooNoooooo";
        goto try_except_handler_7;
    }
    goto loop_start_3;
    loop_end_3:;
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

    goto try_except_handler_2;
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


        exception_lineno = 84;
        type_description_1 = "oooNoooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_2:;
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
        PyObject *tmp_assign_source_23;
        PyObject *tmp_iter_arg_6;
        if (var_G == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 91;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_6 = var_G;
        tmp_assign_source_23 = MAKE_ITERATOR(tstate, tmp_iter_arg_6);
        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oooNoooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_3__for_iterator == NULL);
        tmp_for_loop_3__for_iterator = tmp_assign_source_23;
    }
    // Tried code:
    loop_start_4:;
    {
        PyObject *tmp_next_source_4;
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT(tmp_for_loop_3__for_iterator);
        tmp_next_source_4 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_24 = ITERATOR_NEXT(tmp_next_source_4);
        if (tmp_assign_source_24 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED(tstate)) {

                goto loop_end_4;
            } else {

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooNoooooo";
                exception_lineno = 91;
                goto try_except_handler_10;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_24;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_25;
        CHECK_OBJECT(tmp_for_loop_3__iter_value);
        tmp_assign_source_25 = tmp_for_loop_3__iter_value;
        {
            PyObject *old = var_v;
            var_v = tmp_assign_source_25;
            Py_INCREF(var_v);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_1;
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_v);
        tmp_cmp_expr_left_2 = var_v;
        CHECK_OBJECT(var_club1);
        tmp_cmp_expr_right_2 = var_club1;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooNoooooo";
            goto try_except_handler_10;
        }
        tmp_condition_result_2 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_ass_subvalue_1 = mod_consts[15];
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_ass_subvalue_1 = mod_consts[16];
        condexpr_end_1:;
        if (var_G == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(tstate, exception_value);

            exception_lineno = 92;
            type_description_1 = "oooNoooooo";
            goto try_except_handler_10;
        }

        tmp_expression_value_4 = var_G;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[17]);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooNoooooo";
            goto try_except_handler_10;
        }
        CHECK_OBJECT(var_v);
        tmp_subscript_value_1 = var_v;
        tmp_ass_subscribed_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooNoooooo";
            goto try_except_handler_10;
        }
        tmp_ass_subscript_1 = mod_consts[18];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooNoooooo";
            goto try_except_handler_10;
        }
    }
    if (CONSIDER_THREADING(tstate) == false) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 91;
        type_description_1 = "oooNoooooo";
        goto try_except_handler_10;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
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
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    if (var_G == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[11]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(tstate, &exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(tstate, exception_value);

        exception_lineno = 93;
        type_description_1 = "oooNoooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_96b675af87b4a45abb1980b66f3bf7da, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_96b675af87b4a45abb1980b66f3bf7da->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_96b675af87b4a45abb1980b66f3bf7da, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_96b675af87b4a45abb1980b66f3bf7da,
        type_description_1,
        var_all_members,
        var_club1,
        var_G,
        NULL,
        var_row,
        var_line,
        var_thisrow,
        var_col,
        var_entry,
        var_v
    );


    // Release cached frame if used for exception.
    if (frame_96b675af87b4a45abb1980b66f3bf7da == cache_frame_96b675af87b4a45abb1980b66f3bf7da) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_96b675af87b4a45abb1980b66f3bf7da);
        cache_frame_96b675af87b4a45abb1980b66f3bf7da = NULL;
    }

    assertFrameObject(frame_96b675af87b4a45abb1980b66f3bf7da);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_all_members);
    Py_DECREF(var_all_members);
    var_all_members = NULL;
    CHECK_OBJECT(var_club1);
    Py_DECREF(var_club1);
    var_club1 = NULL;
    Py_XDECREF(var_G);
    var_G = NULL;
    Py_XDECREF(var_row);
    var_row = NULL;
    Py_XDECREF(var_line);
    var_line = NULL;
    Py_XDECREF(var_thisrow);
    var_thisrow = NULL;
    Py_XDECREF(var_col);
    var_col = NULL;
    Py_XDECREF(var_entry);
    var_entry = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(var_all_members);
    Py_DECREF(var_all_members);
    var_all_members = NULL;
    CHECK_OBJECT(var_club1);
    Py_DECREF(var_club1);
    var_club1 = NULL;
    Py_XDECREF(var_G);
    var_G = NULL;
    Py_XDECREF(var_row);
    var_row = NULL;
    Py_XDECREF(var_line);
    var_line = NULL;
    Py_XDECREF(var_thisrow);
    var_thisrow = NULL;
    Py_XDECREF(var_col);
    var_col = NULL;
    Py_XDECREF(var_entry);
    var_entry = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto function_exception_exit;
    // End of try:

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


static PyObject *impl_networkx$generators$social$$$function__2_davis_southern_women_graph(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *var_G = NULL;
    PyObject *var_women = NULL;
    PyObject *var_events = NULL;
    struct Nuitka_FrameObject *frame_b52bae8e04964b165c61533fd3fb341e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_b52bae8e04964b165c61533fd3fb341e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b52bae8e04964b165c61533fd3fb341e)) {
        Py_XDECREF(cache_frame_b52bae8e04964b165c61533fd3fb341e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b52bae8e04964b165c61533fd3fb341e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b52bae8e04964b165c61533fd3fb341e = MAKE_FUNCTION_FRAME(tstate, codeobj_b52bae8e04964b165c61533fd3fb341e, module_networkx$generators$social, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b52bae8e04964b165c61533fd3fb341e->m_type_description == NULL);
    frame_b52bae8e04964b165c61533fd3fb341e = cache_frame_b52bae8e04964b165c61533fd3fb341e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_b52bae8e04964b165c61533fd3fb341e);
    assert(Py_REFCNT(frame_b52bae8e04964b165c61533fd3fb341e) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_networkx$generators$social, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_b52bae8e04964b165c61533fd3fb341e->m_frame.f_lineno = 107;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[3]);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_G == NULL);
        var_G = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = LIST_COPY(mod_consts[20]);
        assert(var_women == NULL);
        var_women = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(var_G);
        tmp_expression_value_1 = var_G;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[4]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_women);
        tmp_tuple_element_1 = var_women;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[21]);
        frame_b52bae8e04964b165c61533fd3fb341e->m_frame.f_lineno = 129;
        tmp_call_result_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = LIST_COPY(mod_consts[22]);
        assert(var_events == NULL);
        var_events = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_2;
        CHECK_OBJECT(var_G);
        tmp_expression_value_2 = var_G;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[4]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_events);
        tmp_tuple_element_2 = var_events;
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
        tmp_kwargs_value_2 = DICT_COPY(mod_consts[23]);
        frame_b52bae8e04964b165c61533fd3fb341e->m_frame.f_lineno = 147;
        tmp_call_result_2 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_3;
        PyObject *tmp_call_arg_element_1;
        CHECK_OBJECT(var_G);
        tmp_called_instance_2 = var_G;
        tmp_call_arg_element_1 = LIST_COPY(mod_consts[25]);
        frame_b52bae8e04964b165c61533fd3fb341e->m_frame.f_lineno = 149;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[24], tmp_call_arg_element_1);
        Py_DECREF(tmp_call_arg_element_1);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_women);
        tmp_ass_subvalue_1 = var_women;
        CHECK_OBJECT(var_G);
        tmp_expression_value_3 = var_G;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[26]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[27];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(var_events);
        tmp_ass_subvalue_2 = var_events;
        CHECK_OBJECT(var_G);
        tmp_expression_value_4 = var_G;
        tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[26]);
        if (tmp_ass_subscribed_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_2 = mod_consts[28];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscribed_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b52bae8e04964b165c61533fd3fb341e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b52bae8e04964b165c61533fd3fb341e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b52bae8e04964b165c61533fd3fb341e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b52bae8e04964b165c61533fd3fb341e,
        type_description_1,
        var_G,
        var_women,
        var_events
    );


    // Release cached frame if used for exception.
    if (frame_b52bae8e04964b165c61533fd3fb341e == cache_frame_b52bae8e04964b165c61533fd3fb341e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b52bae8e04964b165c61533fd3fb341e);
        cache_frame_b52bae8e04964b165c61533fd3fb341e = NULL;
    }

    assertFrameObject(frame_b52bae8e04964b165c61533fd3fb341e);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_G);
    tmp_return_value = var_G;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_G);
    Py_DECREF(var_G);
    var_G = NULL;
    CHECK_OBJECT(var_women);
    Py_DECREF(var_women);
    var_women = NULL;
    CHECK_OBJECT(var_events);
    Py_DECREF(var_events);
    var_events = NULL;
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

    Py_XDECREF(var_G);
    var_G = NULL;
    Py_XDECREF(var_women);
    var_women = NULL;
    Py_XDECREF(var_events);
    var_events = NULL;
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


static PyObject *impl_networkx$generators$social$$$function__3_florentine_families_graph(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *var_G = NULL;
    struct Nuitka_FrameObject *frame_248290f67f950d16d2a756c4b3116258;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_248290f67f950d16d2a756c4b3116258 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_248290f67f950d16d2a756c4b3116258)) {
        Py_XDECREF(cache_frame_248290f67f950d16d2a756c4b3116258);

#if _DEBUG_REFCOUNTS
        if (cache_frame_248290f67f950d16d2a756c4b3116258 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_248290f67f950d16d2a756c4b3116258 = MAKE_FUNCTION_FRAME(tstate, codeobj_248290f67f950d16d2a756c4b3116258, module_networkx$generators$social, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_248290f67f950d16d2a756c4b3116258->m_type_description == NULL);
    frame_248290f67f950d16d2a756c4b3116258 = cache_frame_248290f67f950d16d2a756c4b3116258;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_248290f67f950d16d2a756c4b3116258);
    assert(Py_REFCNT(frame_248290f67f950d16d2a756c4b3116258) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_networkx$generators$social, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_248290f67f950d16d2a756c4b3116258->m_frame.f_lineno = 257;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[3]);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        assert(var_G == NULL);
        var_G = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(var_G);
        tmp_called_instance_2 = var_G;
        frame_248290f67f950d16d2a756c4b3116258->m_frame.f_lineno = 258;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
            tstate,
            tmp_called_instance_2,
            mod_consts[12],
            &PyTuple_GET_ITEM(mod_consts[30], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(var_G);
        tmp_called_instance_3 = var_G;
        frame_248290f67f950d16d2a756c4b3116258->m_frame.f_lineno = 259;
        tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
            tstate,
            tmp_called_instance_3,
            mod_consts[12],
            &PyTuple_GET_ITEM(mod_consts[31], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(var_G);
        tmp_called_instance_4 = var_G;
        frame_248290f67f950d16d2a756c4b3116258->m_frame.f_lineno = 260;
        tmp_call_result_3 = CALL_METHOD_WITH_ARGS2(
            tstate,
            tmp_called_instance_4,
            mod_consts[12],
            &PyTuple_GET_ITEM(mod_consts[32], 0)
        );

        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(var_G);
        tmp_called_instance_5 = var_G;
        frame_248290f67f950d16d2a756c4b3116258->m_frame.f_lineno = 261;
        tmp_call_result_4 = CALL_METHOD_WITH_ARGS2(
            tstate,
            tmp_called_instance_5,
            mod_consts[12],
            &PyTuple_GET_ITEM(mod_consts[33], 0)
        );

        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_5;
        CHECK_OBJECT(var_G);
        tmp_called_instance_6 = var_G;
        frame_248290f67f950d16d2a756c4b3116258->m_frame.f_lineno = 262;
        tmp_call_result_5 = CALL_METHOD_WITH_ARGS2(
            tstate,
            tmp_called_instance_6,
            mod_consts[12],
            &PyTuple_GET_ITEM(mod_consts[34], 0)
        );

        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_instance_7;
        PyObject *tmp_call_result_6;
        CHECK_OBJECT(var_G);
        tmp_called_instance_7 = var_G;
        frame_248290f67f950d16d2a756c4b3116258->m_frame.f_lineno = 263;
        tmp_call_result_6 = CALL_METHOD_WITH_ARGS2(
            tstate,
            tmp_called_instance_7,
            mod_consts[12],
            &PyTuple_GET_ITEM(mod_consts[35], 0)
        );

        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_instance_8;
        PyObject *tmp_call_result_7;
        CHECK_OBJECT(var_G);
        tmp_called_instance_8 = var_G;
        frame_248290f67f950d16d2a756c4b3116258->m_frame.f_lineno = 264;
        tmp_call_result_7 = CALL_METHOD_WITH_ARGS2(
            tstate,
            tmp_called_instance_8,
            mod_consts[12],
            &PyTuple_GET_ITEM(mod_consts[36], 0)
        );

        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_instance_9;
        PyObject *tmp_call_result_8;
        CHECK_OBJECT(var_G);
        tmp_called_instance_9 = var_G;
        frame_248290f67f950d16d2a756c4b3116258->m_frame.f_lineno = 265;
        tmp_call_result_8 = CALL_METHOD_WITH_ARGS2(
            tstate,
            tmp_called_instance_9,
            mod_consts[12],
            &PyTuple_GET_ITEM(mod_consts[37], 0)
        );

        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_instance_10;
        PyObject *tmp_call_result_9;
        CHECK_OBJECT(var_G);
        tmp_called_instance_10 = var_G;
        frame_248290f67f950d16d2a756c4b3116258->m_frame.f_lineno = 266;
        tmp_call_result_9 = CALL_METHOD_WITH_ARGS2(
            tstate,
            tmp_called_instance_10,
            mod_consts[12],
            &PyTuple_GET_ITEM(mod_consts[38], 0)
        );

        if (tmp_call_result_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_instance_11;
        PyObject *tmp_call_result_10;
        CHECK_OBJECT(var_G);
        tmp_called_instance_11 = var_G;
        frame_248290f67f950d16d2a756c4b3116258->m_frame.f_lineno = 267;
        tmp_call_result_10 = CALL_METHOD_WITH_ARGS2(
            tstate,
            tmp_called_instance_11,
            mod_consts[12],
            &PyTuple_GET_ITEM(mod_consts[39], 0)
        );

        if (tmp_call_result_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_instance_12;
        PyObject *tmp_call_result_11;
        CHECK_OBJECT(var_G);
        tmp_called_instance_12 = var_G;
        frame_248290f67f950d16d2a756c4b3116258->m_frame.f_lineno = 268;
        tmp_call_result_11 = CALL_METHOD_WITH_ARGS2(
            tstate,
            tmp_called_instance_12,
            mod_consts[12],
            &PyTuple_GET_ITEM(mod_consts[40], 0)
        );

        if (tmp_call_result_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_called_instance_13;
        PyObject *tmp_call_result_12;
        CHECK_OBJECT(var_G);
        tmp_called_instance_13 = var_G;
        frame_248290f67f950d16d2a756c4b3116258->m_frame.f_lineno = 269;
        tmp_call_result_12 = CALL_METHOD_WITH_ARGS2(
            tstate,
            tmp_called_instance_13,
            mod_consts[12],
            &PyTuple_GET_ITEM(mod_consts[41], 0)
        );

        if (tmp_call_result_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_called_instance_14;
        PyObject *tmp_call_result_13;
        CHECK_OBJECT(var_G);
        tmp_called_instance_14 = var_G;
        frame_248290f67f950d16d2a756c4b3116258->m_frame.f_lineno = 270;
        tmp_call_result_13 = CALL_METHOD_WITH_ARGS2(
            tstate,
            tmp_called_instance_14,
            mod_consts[12],
            &PyTuple_GET_ITEM(mod_consts[42], 0)
        );

        if (tmp_call_result_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        PyObject *tmp_called_instance_15;
        PyObject *tmp_call_result_14;
        CHECK_OBJECT(var_G);
        tmp_called_instance_15 = var_G;
        frame_248290f67f950d16d2a756c4b3116258->m_frame.f_lineno = 271;
        tmp_call_result_14 = CALL_METHOD_WITH_ARGS2(
            tstate,
            tmp_called_instance_15,
            mod_consts[12],
            &PyTuple_GET_ITEM(mod_consts[43], 0)
        );

        if (tmp_call_result_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_called_instance_16;
        PyObject *tmp_call_result_15;
        CHECK_OBJECT(var_G);
        tmp_called_instance_16 = var_G;
        frame_248290f67f950d16d2a756c4b3116258->m_frame.f_lineno = 272;
        tmp_call_result_15 = CALL_METHOD_WITH_ARGS2(
            tstate,
            tmp_called_instance_16,
            mod_consts[12],
            &PyTuple_GET_ITEM(mod_consts[44], 0)
        );

        if (tmp_call_result_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_15);
    }
    {
        PyObject *tmp_called_instance_17;
        PyObject *tmp_call_result_16;
        CHECK_OBJECT(var_G);
        tmp_called_instance_17 = var_G;
        frame_248290f67f950d16d2a756c4b3116258->m_frame.f_lineno = 273;
        tmp_call_result_16 = CALL_METHOD_WITH_ARGS2(
            tstate,
            tmp_called_instance_17,
            mod_consts[12],
            &PyTuple_GET_ITEM(mod_consts[45], 0)
        );

        if (tmp_call_result_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_16);
    }
    {
        PyObject *tmp_called_instance_18;
        PyObject *tmp_call_result_17;
        CHECK_OBJECT(var_G);
        tmp_called_instance_18 = var_G;
        frame_248290f67f950d16d2a756c4b3116258->m_frame.f_lineno = 274;
        tmp_call_result_17 = CALL_METHOD_WITH_ARGS2(
            tstate,
            tmp_called_instance_18,
            mod_consts[12],
            &PyTuple_GET_ITEM(mod_consts[46], 0)
        );

        if (tmp_call_result_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_17);
    }
    {
        PyObject *tmp_called_instance_19;
        PyObject *tmp_call_result_18;
        CHECK_OBJECT(var_G);
        tmp_called_instance_19 = var_G;
        frame_248290f67f950d16d2a756c4b3116258->m_frame.f_lineno = 275;
        tmp_call_result_18 = CALL_METHOD_WITH_ARGS2(
            tstate,
            tmp_called_instance_19,
            mod_consts[12],
            &PyTuple_GET_ITEM(mod_consts[47], 0)
        );

        if (tmp_call_result_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_18);
    }
    {
        PyObject *tmp_called_instance_20;
        PyObject *tmp_call_result_19;
        CHECK_OBJECT(var_G);
        tmp_called_instance_20 = var_G;
        frame_248290f67f950d16d2a756c4b3116258->m_frame.f_lineno = 276;
        tmp_call_result_19 = CALL_METHOD_WITH_ARGS2(
            tstate,
            tmp_called_instance_20,
            mod_consts[12],
            &PyTuple_GET_ITEM(mod_consts[48], 0)
        );

        if (tmp_call_result_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_19);
    }
    {
        PyObject *tmp_called_instance_21;
        PyObject *tmp_call_result_20;
        CHECK_OBJECT(var_G);
        tmp_called_instance_21 = var_G;
        frame_248290f67f950d16d2a756c4b3116258->m_frame.f_lineno = 277;
        tmp_call_result_20 = CALL_METHOD_WITH_ARGS2(
            tstate,
            tmp_called_instance_21,
            mod_consts[12],
            &PyTuple_GET_ITEM(mod_consts[49], 0)
        );

        if (tmp_call_result_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_20);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_248290f67f950d16d2a756c4b3116258, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_248290f67f950d16d2a756c4b3116258->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_248290f67f950d16d2a756c4b3116258, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_248290f67f950d16d2a756c4b3116258,
        type_description_1,
        var_G
    );


    // Release cached frame if used for exception.
    if (frame_248290f67f950d16d2a756c4b3116258 == cache_frame_248290f67f950d16d2a756c4b3116258) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_248290f67f950d16d2a756c4b3116258);
        cache_frame_248290f67f950d16d2a756c4b3116258 = NULL;
    }

    assertFrameObject(frame_248290f67f950d16d2a756c4b3116258);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_G);
    tmp_return_value = var_G;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_G);
    Py_DECREF(var_G);
    var_G = NULL;
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

    Py_XDECREF(var_G);
    var_G = NULL;
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


static PyObject *impl_networkx$generators$social$$$function__4_les_miserables_graph(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *var_G = NULL;
    struct Nuitka_FrameObject *frame_1576e603a9ba92bb7e4d328382c60c50;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_1576e603a9ba92bb7e4d328382c60c50 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1576e603a9ba92bb7e4d328382c60c50)) {
        Py_XDECREF(cache_frame_1576e603a9ba92bb7e4d328382c60c50);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1576e603a9ba92bb7e4d328382c60c50 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1576e603a9ba92bb7e4d328382c60c50 = MAKE_FUNCTION_FRAME(tstate, codeobj_1576e603a9ba92bb7e4d328382c60c50, module_networkx$generators$social, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1576e603a9ba92bb7e4d328382c60c50->m_type_description == NULL);
    frame_1576e603a9ba92bb7e4d328382c60c50 = cache_frame_1576e603a9ba92bb7e4d328382c60c50;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1576e603a9ba92bb7e4d328382c60c50);
    assert(Py_REFCNT(frame_1576e603a9ba92bb7e4d328382c60c50) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_networkx$generators$social, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 291;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[3]);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        assert(var_G == NULL);
        var_G = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(var_G);
        tmp_expression_value_1 = var_G;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[12]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 292;
        tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[51], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(var_G);
        tmp_expression_value_2 = var_G;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[12]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 293;
        tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_2, &PyTuple_GET_ITEM(mod_consts[52], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(var_G);
        tmp_expression_value_3 = var_G;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[12]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 294;
        tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_3, &PyTuple_GET_ITEM(mod_consts[53], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(var_G);
        tmp_expression_value_4 = var_G;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[12]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 295;
        tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_4, &PyTuple_GET_ITEM(mod_consts[54], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_5;
        CHECK_OBJECT(var_G);
        tmp_expression_value_5 = var_G;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[12]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 296;
        tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_5, &PyTuple_GET_ITEM(mod_consts[55], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_5);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_6;
        CHECK_OBJECT(var_G);
        tmp_expression_value_6 = var_G;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[12]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 297;
        tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_6, &PyTuple_GET_ITEM(mod_consts[56], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_6);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_7;
        CHECK_OBJECT(var_G);
        tmp_expression_value_7 = var_G;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[12]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 298;
        tmp_call_result_7 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_7, &PyTuple_GET_ITEM(mod_consts[57], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_7);
        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_8;
        CHECK_OBJECT(var_G);
        tmp_expression_value_8 = var_G;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[12]);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 299;
        tmp_call_result_8 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_8, &PyTuple_GET_ITEM(mod_consts[58], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_8);
        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_9;
        CHECK_OBJECT(var_G);
        tmp_expression_value_9 = var_G;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[12]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 300;
        tmp_call_result_9 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_9, &PyTuple_GET_ITEM(mod_consts[59], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_9);
        if (tmp_call_result_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_call_result_10;
        CHECK_OBJECT(var_G);
        tmp_expression_value_10 = var_G;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[12]);
        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 301;
        tmp_call_result_10 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_10, &PyTuple_GET_ITEM(mod_consts[60], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_10);
        if (tmp_call_result_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_11;
        CHECK_OBJECT(var_G);
        tmp_expression_value_11 = var_G;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[12]);
        if (tmp_called_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 302;
        tmp_call_result_11 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_11, &PyTuple_GET_ITEM(mod_consts[61], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_11);
        if (tmp_call_result_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_call_result_12;
        CHECK_OBJECT(var_G);
        tmp_expression_value_12 = var_G;
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[12]);
        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 303;
        tmp_call_result_12 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_12, &PyTuple_GET_ITEM(mod_consts[62], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_12);
        if (tmp_call_result_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_13;
        CHECK_OBJECT(var_G);
        tmp_expression_value_13 = var_G;
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[12]);
        if (tmp_called_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 304;
        tmp_call_result_13 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_13, &PyTuple_GET_ITEM(mod_consts[63], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_13);
        if (tmp_call_result_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_call_result_14;
        CHECK_OBJECT(var_G);
        tmp_expression_value_14 = var_G;
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[12]);
        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 305;
        tmp_call_result_14 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_14, &PyTuple_GET_ITEM(mod_consts[64], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_14);
        if (tmp_call_result_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_call_result_15;
        CHECK_OBJECT(var_G);
        tmp_expression_value_15 = var_G;
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[12]);
        if (tmp_called_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 306;
        tmp_call_result_15 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_15, &PyTuple_GET_ITEM(mod_consts[65], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_15);
        if (tmp_call_result_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_15);
    }
    {
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_call_result_16;
        CHECK_OBJECT(var_G);
        tmp_expression_value_16 = var_G;
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[12]);
        if (tmp_called_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 307;
        tmp_call_result_16 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_16, &PyTuple_GET_ITEM(mod_consts[66], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_16);
        if (tmp_call_result_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_16);
    }
    {
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_call_result_17;
        CHECK_OBJECT(var_G);
        tmp_expression_value_17 = var_G;
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[12]);
        if (tmp_called_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 308;
        tmp_call_result_17 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_17, &PyTuple_GET_ITEM(mod_consts[67], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_17);
        if (tmp_call_result_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_17);
    }
    {
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_call_result_18;
        CHECK_OBJECT(var_G);
        tmp_expression_value_18 = var_G;
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[12]);
        if (tmp_called_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 309;
        tmp_call_result_18 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_18, &PyTuple_GET_ITEM(mod_consts[68], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_18);
        if (tmp_call_result_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_18);
    }
    {
        PyObject *tmp_called_value_19;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_call_result_19;
        CHECK_OBJECT(var_G);
        tmp_expression_value_19 = var_G;
        tmp_called_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[12]);
        if (tmp_called_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 310;
        tmp_call_result_19 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_19, &PyTuple_GET_ITEM(mod_consts[69], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_19);
        if (tmp_call_result_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_19);
    }
    {
        PyObject *tmp_called_value_20;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_call_result_20;
        CHECK_OBJECT(var_G);
        tmp_expression_value_20 = var_G;
        tmp_called_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[12]);
        if (tmp_called_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 311;
        tmp_call_result_20 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_20, &PyTuple_GET_ITEM(mod_consts[70], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_20);
        if (tmp_call_result_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_20);
    }
    {
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_call_result_21;
        CHECK_OBJECT(var_G);
        tmp_expression_value_21 = var_G;
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[12]);
        if (tmp_called_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 312;
        tmp_call_result_21 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_21, &PyTuple_GET_ITEM(mod_consts[71], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_21);
        if (tmp_call_result_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_21);
    }
    {
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_call_result_22;
        CHECK_OBJECT(var_G);
        tmp_expression_value_22 = var_G;
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[12]);
        if (tmp_called_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 313;
        tmp_call_result_22 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_22, &PyTuple_GET_ITEM(mod_consts[72], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_22);
        if (tmp_call_result_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_22);
    }
    {
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_call_result_23;
        CHECK_OBJECT(var_G);
        tmp_expression_value_23 = var_G;
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[12]);
        if (tmp_called_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 314;
        tmp_call_result_23 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_23, &PyTuple_GET_ITEM(mod_consts[73], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_23);
        if (tmp_call_result_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_23);
    }
    {
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_call_result_24;
        CHECK_OBJECT(var_G);
        tmp_expression_value_24 = var_G;
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[12]);
        if (tmp_called_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 315;
        tmp_call_result_24 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_24, &PyTuple_GET_ITEM(mod_consts[74], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_24);
        if (tmp_call_result_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_24);
    }
    {
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_call_result_25;
        CHECK_OBJECT(var_G);
        tmp_expression_value_25 = var_G;
        tmp_called_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[12]);
        if (tmp_called_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 316;
        tmp_call_result_25 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_25, &PyTuple_GET_ITEM(mod_consts[75], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_25);
        if (tmp_call_result_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_25);
    }
    {
        PyObject *tmp_called_value_26;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_call_result_26;
        CHECK_OBJECT(var_G);
        tmp_expression_value_26 = var_G;
        tmp_called_value_26 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[12]);
        if (tmp_called_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 317;
        tmp_call_result_26 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_26, &PyTuple_GET_ITEM(mod_consts[76], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_26);
        if (tmp_call_result_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_26);
    }
    {
        PyObject *tmp_called_value_27;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_call_result_27;
        CHECK_OBJECT(var_G);
        tmp_expression_value_27 = var_G;
        tmp_called_value_27 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[12]);
        if (tmp_called_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 318;
        tmp_call_result_27 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_27, &PyTuple_GET_ITEM(mod_consts[77], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_27);
        if (tmp_call_result_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_27);
    }
    {
        PyObject *tmp_called_value_28;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_call_result_28;
        CHECK_OBJECT(var_G);
        tmp_expression_value_28 = var_G;
        tmp_called_value_28 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_28, mod_consts[12]);
        if (tmp_called_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 319;
        tmp_call_result_28 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_28, &PyTuple_GET_ITEM(mod_consts[78], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_28);
        if (tmp_call_result_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_28);
    }
    {
        PyObject *tmp_called_value_29;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_call_result_29;
        CHECK_OBJECT(var_G);
        tmp_expression_value_29 = var_G;
        tmp_called_value_29 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_29, mod_consts[12]);
        if (tmp_called_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 320;
        tmp_call_result_29 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_29, &PyTuple_GET_ITEM(mod_consts[79], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_29);
        if (tmp_call_result_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_29);
    }
    {
        PyObject *tmp_called_value_30;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_call_result_30;
        CHECK_OBJECT(var_G);
        tmp_expression_value_30 = var_G;
        tmp_called_value_30 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[12]);
        if (tmp_called_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 321;
        tmp_call_result_30 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_30, &PyTuple_GET_ITEM(mod_consts[80], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_30);
        if (tmp_call_result_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_30);
    }
    {
        PyObject *tmp_called_value_31;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_call_result_31;
        CHECK_OBJECT(var_G);
        tmp_expression_value_31 = var_G;
        tmp_called_value_31 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_31, mod_consts[12]);
        if (tmp_called_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 322;
        tmp_call_result_31 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_31, &PyTuple_GET_ITEM(mod_consts[81], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_31);
        if (tmp_call_result_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_31);
    }
    {
        PyObject *tmp_called_value_32;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_call_result_32;
        CHECK_OBJECT(var_G);
        tmp_expression_value_32 = var_G;
        tmp_called_value_32 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_32, mod_consts[12]);
        if (tmp_called_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 323;
        tmp_call_result_32 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_32, &PyTuple_GET_ITEM(mod_consts[82], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_32);
        if (tmp_call_result_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_32);
    }
    {
        PyObject *tmp_called_value_33;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_call_result_33;
        CHECK_OBJECT(var_G);
        tmp_expression_value_33 = var_G;
        tmp_called_value_33 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[12]);
        if (tmp_called_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 324;
        tmp_call_result_33 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_33, &PyTuple_GET_ITEM(mod_consts[83], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_33);
        if (tmp_call_result_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_33);
    }
    {
        PyObject *tmp_called_value_34;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_call_result_34;
        CHECK_OBJECT(var_G);
        tmp_expression_value_34 = var_G;
        tmp_called_value_34 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_34, mod_consts[12]);
        if (tmp_called_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 325;
        tmp_call_result_34 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_34, &PyTuple_GET_ITEM(mod_consts[84], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_34);
        if (tmp_call_result_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_34);
    }
    {
        PyObject *tmp_called_value_35;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_call_result_35;
        CHECK_OBJECT(var_G);
        tmp_expression_value_35 = var_G;
        tmp_called_value_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_35, mod_consts[12]);
        if (tmp_called_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 326;
        tmp_call_result_35 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_35, &PyTuple_GET_ITEM(mod_consts[85], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_35);
        if (tmp_call_result_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_35);
    }
    {
        PyObject *tmp_called_value_36;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_call_result_36;
        CHECK_OBJECT(var_G);
        tmp_expression_value_36 = var_G;
        tmp_called_value_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[12]);
        if (tmp_called_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 327;
        tmp_call_result_36 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_36, &PyTuple_GET_ITEM(mod_consts[86], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_36);
        if (tmp_call_result_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_36);
    }
    {
        PyObject *tmp_called_value_37;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_call_result_37;
        CHECK_OBJECT(var_G);
        tmp_expression_value_37 = var_G;
        tmp_called_value_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_37, mod_consts[12]);
        if (tmp_called_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 328;
        tmp_call_result_37 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_37, &PyTuple_GET_ITEM(mod_consts[87], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_37);
        if (tmp_call_result_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_37);
    }
    {
        PyObject *tmp_called_value_38;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_call_result_38;
        CHECK_OBJECT(var_G);
        tmp_expression_value_38 = var_G;
        tmp_called_value_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_38, mod_consts[12]);
        if (tmp_called_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 329;
        tmp_call_result_38 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_38, &PyTuple_GET_ITEM(mod_consts[88], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_38);
        if (tmp_call_result_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_38);
    }
    {
        PyObject *tmp_called_value_39;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_call_result_39;
        CHECK_OBJECT(var_G);
        tmp_expression_value_39 = var_G;
        tmp_called_value_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_39, mod_consts[12]);
        if (tmp_called_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 330;
        tmp_call_result_39 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_39, &PyTuple_GET_ITEM(mod_consts[89], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_39);
        if (tmp_call_result_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_39);
    }
    {
        PyObject *tmp_called_value_40;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_call_result_40;
        CHECK_OBJECT(var_G);
        tmp_expression_value_40 = var_G;
        tmp_called_value_40 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_40, mod_consts[12]);
        if (tmp_called_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 331;
        tmp_call_result_40 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_40, &PyTuple_GET_ITEM(mod_consts[90], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_40);
        if (tmp_call_result_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_40);
    }
    {
        PyObject *tmp_called_value_41;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_call_result_41;
        CHECK_OBJECT(var_G);
        tmp_expression_value_41 = var_G;
        tmp_called_value_41 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_41, mod_consts[12]);
        if (tmp_called_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 332;
        tmp_call_result_41 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_41, &PyTuple_GET_ITEM(mod_consts[91], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_41);
        if (tmp_call_result_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_41);
    }
    {
        PyObject *tmp_called_value_42;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_call_result_42;
        CHECK_OBJECT(var_G);
        tmp_expression_value_42 = var_G;
        tmp_called_value_42 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_42, mod_consts[12]);
        if (tmp_called_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 333;
        tmp_call_result_42 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_42, &PyTuple_GET_ITEM(mod_consts[92], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_42);
        if (tmp_call_result_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_42);
    }
    {
        PyObject *tmp_called_value_43;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_call_result_43;
        CHECK_OBJECT(var_G);
        tmp_expression_value_43 = var_G;
        tmp_called_value_43 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_43, mod_consts[12]);
        if (tmp_called_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 334;
        tmp_call_result_43 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_43, &PyTuple_GET_ITEM(mod_consts[93], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_43);
        if (tmp_call_result_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_43);
    }
    {
        PyObject *tmp_called_value_44;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_call_result_44;
        CHECK_OBJECT(var_G);
        tmp_expression_value_44 = var_G;
        tmp_called_value_44 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_44, mod_consts[12]);
        if (tmp_called_value_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 335;
        tmp_call_result_44 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_44, &PyTuple_GET_ITEM(mod_consts[94], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_44);
        if (tmp_call_result_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_44);
    }
    {
        PyObject *tmp_called_value_45;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_call_result_45;
        CHECK_OBJECT(var_G);
        tmp_expression_value_45 = var_G;
        tmp_called_value_45 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_45, mod_consts[12]);
        if (tmp_called_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 336;
        tmp_call_result_45 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_45, &PyTuple_GET_ITEM(mod_consts[95], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_45);
        if (tmp_call_result_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_45);
    }
    {
        PyObject *tmp_called_value_46;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_call_result_46;
        CHECK_OBJECT(var_G);
        tmp_expression_value_46 = var_G;
        tmp_called_value_46 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_46, mod_consts[12]);
        if (tmp_called_value_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 337;
        tmp_call_result_46 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_46, &PyTuple_GET_ITEM(mod_consts[96], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_46);
        if (tmp_call_result_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_46);
    }
    {
        PyObject *tmp_called_value_47;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_call_result_47;
        CHECK_OBJECT(var_G);
        tmp_expression_value_47 = var_G;
        tmp_called_value_47 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_47, mod_consts[12]);
        if (tmp_called_value_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 338;
        tmp_call_result_47 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_47, &PyTuple_GET_ITEM(mod_consts[97], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_47);
        if (tmp_call_result_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_47);
    }
    {
        PyObject *tmp_called_value_48;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_call_result_48;
        CHECK_OBJECT(var_G);
        tmp_expression_value_48 = var_G;
        tmp_called_value_48 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_48, mod_consts[12]);
        if (tmp_called_value_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 339;
        tmp_call_result_48 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_48, &PyTuple_GET_ITEM(mod_consts[98], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_48);
        if (tmp_call_result_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_48);
    }
    {
        PyObject *tmp_called_value_49;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_call_result_49;
        CHECK_OBJECT(var_G);
        tmp_expression_value_49 = var_G;
        tmp_called_value_49 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_49, mod_consts[12]);
        if (tmp_called_value_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 340;
        tmp_call_result_49 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_49, &PyTuple_GET_ITEM(mod_consts[99], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_49);
        if (tmp_call_result_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_49);
    }
    {
        PyObject *tmp_called_value_50;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_call_result_50;
        CHECK_OBJECT(var_G);
        tmp_expression_value_50 = var_G;
        tmp_called_value_50 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_50, mod_consts[12]);
        if (tmp_called_value_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 341;
        tmp_call_result_50 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_50, &PyTuple_GET_ITEM(mod_consts[100], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_50);
        if (tmp_call_result_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_50);
    }
    {
        PyObject *tmp_called_value_51;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_call_result_51;
        CHECK_OBJECT(var_G);
        tmp_expression_value_51 = var_G;
        tmp_called_value_51 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_51, mod_consts[12]);
        if (tmp_called_value_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 342;
        tmp_call_result_51 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_51, &PyTuple_GET_ITEM(mod_consts[101], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_51);
        if (tmp_call_result_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_51);
    }
    {
        PyObject *tmp_called_value_52;
        PyObject *tmp_expression_value_52;
        PyObject *tmp_call_result_52;
        CHECK_OBJECT(var_G);
        tmp_expression_value_52 = var_G;
        tmp_called_value_52 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_52, mod_consts[12]);
        if (tmp_called_value_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 343;
        tmp_call_result_52 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_52, &PyTuple_GET_ITEM(mod_consts[102], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_52);
        if (tmp_call_result_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_52);
    }
    {
        PyObject *tmp_called_value_53;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_call_result_53;
        CHECK_OBJECT(var_G);
        tmp_expression_value_53 = var_G;
        tmp_called_value_53 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_53, mod_consts[12]);
        if (tmp_called_value_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 344;
        tmp_call_result_53 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_53, &PyTuple_GET_ITEM(mod_consts[103], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_53);
        if (tmp_call_result_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_53);
    }
    {
        PyObject *tmp_called_value_54;
        PyObject *tmp_expression_value_54;
        PyObject *tmp_call_result_54;
        CHECK_OBJECT(var_G);
        tmp_expression_value_54 = var_G;
        tmp_called_value_54 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_54, mod_consts[12]);
        if (tmp_called_value_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 345;
        tmp_call_result_54 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_54, &PyTuple_GET_ITEM(mod_consts[104], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_54);
        if (tmp_call_result_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_54);
    }
    {
        PyObject *tmp_called_value_55;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_call_result_55;
        CHECK_OBJECT(var_G);
        tmp_expression_value_55 = var_G;
        tmp_called_value_55 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_55, mod_consts[12]);
        if (tmp_called_value_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 346;
        tmp_call_result_55 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_55, &PyTuple_GET_ITEM(mod_consts[105], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_55);
        if (tmp_call_result_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_55);
    }
    {
        PyObject *tmp_called_value_56;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_call_result_56;
        CHECK_OBJECT(var_G);
        tmp_expression_value_56 = var_G;
        tmp_called_value_56 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_56, mod_consts[12]);
        if (tmp_called_value_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 347;
        tmp_call_result_56 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_56, &PyTuple_GET_ITEM(mod_consts[106], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_56);
        if (tmp_call_result_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_56);
    }
    {
        PyObject *tmp_called_value_57;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_call_result_57;
        CHECK_OBJECT(var_G);
        tmp_expression_value_57 = var_G;
        tmp_called_value_57 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_57, mod_consts[12]);
        if (tmp_called_value_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 348;
        tmp_call_result_57 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_57, &PyTuple_GET_ITEM(mod_consts[107], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_57);
        if (tmp_call_result_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_57);
    }
    {
        PyObject *tmp_called_value_58;
        PyObject *tmp_expression_value_58;
        PyObject *tmp_call_result_58;
        CHECK_OBJECT(var_G);
        tmp_expression_value_58 = var_G;
        tmp_called_value_58 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_58, mod_consts[12]);
        if (tmp_called_value_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 349;
        tmp_call_result_58 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_58, &PyTuple_GET_ITEM(mod_consts[108], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_58);
        if (tmp_call_result_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_58);
    }
    {
        PyObject *tmp_called_value_59;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_call_result_59;
        CHECK_OBJECT(var_G);
        tmp_expression_value_59 = var_G;
        tmp_called_value_59 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_59, mod_consts[12]);
        if (tmp_called_value_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 350;
        tmp_call_result_59 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_59, &PyTuple_GET_ITEM(mod_consts[109], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_59);
        if (tmp_call_result_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_59);
    }
    {
        PyObject *tmp_called_value_60;
        PyObject *tmp_expression_value_60;
        PyObject *tmp_call_result_60;
        CHECK_OBJECT(var_G);
        tmp_expression_value_60 = var_G;
        tmp_called_value_60 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_60, mod_consts[12]);
        if (tmp_called_value_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 351;
        tmp_call_result_60 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_60, &PyTuple_GET_ITEM(mod_consts[110], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_60);
        if (tmp_call_result_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_60);
    }
    {
        PyObject *tmp_called_value_61;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_call_result_61;
        CHECK_OBJECT(var_G);
        tmp_expression_value_61 = var_G;
        tmp_called_value_61 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_61, mod_consts[12]);
        if (tmp_called_value_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 352;
        tmp_call_result_61 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_61, &PyTuple_GET_ITEM(mod_consts[111], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_61);
        if (tmp_call_result_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_61);
    }
    {
        PyObject *tmp_called_value_62;
        PyObject *tmp_expression_value_62;
        PyObject *tmp_call_result_62;
        CHECK_OBJECT(var_G);
        tmp_expression_value_62 = var_G;
        tmp_called_value_62 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_62, mod_consts[12]);
        if (tmp_called_value_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 353;
        tmp_call_result_62 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_62, &PyTuple_GET_ITEM(mod_consts[112], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_62);
        if (tmp_call_result_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_62);
    }
    {
        PyObject *tmp_called_value_63;
        PyObject *tmp_expression_value_63;
        PyObject *tmp_call_result_63;
        CHECK_OBJECT(var_G);
        tmp_expression_value_63 = var_G;
        tmp_called_value_63 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_63, mod_consts[12]);
        if (tmp_called_value_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 354;
        tmp_call_result_63 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_63, &PyTuple_GET_ITEM(mod_consts[113], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_63);
        if (tmp_call_result_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_63);
    }
    {
        PyObject *tmp_called_value_64;
        PyObject *tmp_expression_value_64;
        PyObject *tmp_call_result_64;
        CHECK_OBJECT(var_G);
        tmp_expression_value_64 = var_G;
        tmp_called_value_64 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_64, mod_consts[12]);
        if (tmp_called_value_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 355;
        tmp_call_result_64 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_64, &PyTuple_GET_ITEM(mod_consts[114], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_64);
        if (tmp_call_result_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_64);
    }
    {
        PyObject *tmp_called_value_65;
        PyObject *tmp_expression_value_65;
        PyObject *tmp_call_result_65;
        CHECK_OBJECT(var_G);
        tmp_expression_value_65 = var_G;
        tmp_called_value_65 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_65, mod_consts[12]);
        if (tmp_called_value_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 356;
        tmp_call_result_65 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_65, &PyTuple_GET_ITEM(mod_consts[115], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_65);
        if (tmp_call_result_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_65);
    }
    {
        PyObject *tmp_called_value_66;
        PyObject *tmp_expression_value_66;
        PyObject *tmp_call_result_66;
        CHECK_OBJECT(var_G);
        tmp_expression_value_66 = var_G;
        tmp_called_value_66 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_66, mod_consts[12]);
        if (tmp_called_value_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 357;
        tmp_call_result_66 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_66, &PyTuple_GET_ITEM(mod_consts[116], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_66);
        if (tmp_call_result_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_66);
    }
    {
        PyObject *tmp_called_value_67;
        PyObject *tmp_expression_value_67;
        PyObject *tmp_call_result_67;
        CHECK_OBJECT(var_G);
        tmp_expression_value_67 = var_G;
        tmp_called_value_67 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_67, mod_consts[12]);
        if (tmp_called_value_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 358;
        tmp_call_result_67 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_67, &PyTuple_GET_ITEM(mod_consts[117], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_67);
        if (tmp_call_result_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_67);
    }
    {
        PyObject *tmp_called_value_68;
        PyObject *tmp_expression_value_68;
        PyObject *tmp_call_result_68;
        CHECK_OBJECT(var_G);
        tmp_expression_value_68 = var_G;
        tmp_called_value_68 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_68, mod_consts[12]);
        if (tmp_called_value_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 359;
        tmp_call_result_68 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_68, &PyTuple_GET_ITEM(mod_consts[118], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_68);
        if (tmp_call_result_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_68);
    }
    {
        PyObject *tmp_called_value_69;
        PyObject *tmp_expression_value_69;
        PyObject *tmp_call_result_69;
        CHECK_OBJECT(var_G);
        tmp_expression_value_69 = var_G;
        tmp_called_value_69 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_69, mod_consts[12]);
        if (tmp_called_value_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 360;
        tmp_call_result_69 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_69, &PyTuple_GET_ITEM(mod_consts[119], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_69);
        if (tmp_call_result_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_69);
    }
    {
        PyObject *tmp_called_value_70;
        PyObject *tmp_expression_value_70;
        PyObject *tmp_call_result_70;
        CHECK_OBJECT(var_G);
        tmp_expression_value_70 = var_G;
        tmp_called_value_70 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_70, mod_consts[12]);
        if (tmp_called_value_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 361;
        tmp_call_result_70 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_70, &PyTuple_GET_ITEM(mod_consts[120], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_70);
        if (tmp_call_result_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_70);
    }
    {
        PyObject *tmp_called_value_71;
        PyObject *tmp_expression_value_71;
        PyObject *tmp_call_result_71;
        CHECK_OBJECT(var_G);
        tmp_expression_value_71 = var_G;
        tmp_called_value_71 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_71, mod_consts[12]);
        if (tmp_called_value_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 362;
        tmp_call_result_71 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_71, &PyTuple_GET_ITEM(mod_consts[121], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_71);
        if (tmp_call_result_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_71);
    }
    {
        PyObject *tmp_called_value_72;
        PyObject *tmp_expression_value_72;
        PyObject *tmp_call_result_72;
        CHECK_OBJECT(var_G);
        tmp_expression_value_72 = var_G;
        tmp_called_value_72 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_72, mod_consts[12]);
        if (tmp_called_value_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 363;
        tmp_call_result_72 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_72, &PyTuple_GET_ITEM(mod_consts[122], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_72);
        if (tmp_call_result_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_72);
    }
    {
        PyObject *tmp_called_value_73;
        PyObject *tmp_expression_value_73;
        PyObject *tmp_call_result_73;
        CHECK_OBJECT(var_G);
        tmp_expression_value_73 = var_G;
        tmp_called_value_73 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_73, mod_consts[12]);
        if (tmp_called_value_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 364;
        tmp_call_result_73 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_73, &PyTuple_GET_ITEM(mod_consts[123], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_73);
        if (tmp_call_result_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_73);
    }
    {
        PyObject *tmp_called_value_74;
        PyObject *tmp_expression_value_74;
        PyObject *tmp_call_result_74;
        CHECK_OBJECT(var_G);
        tmp_expression_value_74 = var_G;
        tmp_called_value_74 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_74, mod_consts[12]);
        if (tmp_called_value_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 365;
        tmp_call_result_74 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_74, &PyTuple_GET_ITEM(mod_consts[124], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_74);
        if (tmp_call_result_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_74);
    }
    {
        PyObject *tmp_called_value_75;
        PyObject *tmp_expression_value_75;
        PyObject *tmp_call_result_75;
        CHECK_OBJECT(var_G);
        tmp_expression_value_75 = var_G;
        tmp_called_value_75 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_75, mod_consts[12]);
        if (tmp_called_value_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 366;
        tmp_call_result_75 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_75, &PyTuple_GET_ITEM(mod_consts[125], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_75);
        if (tmp_call_result_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_75);
    }
    {
        PyObject *tmp_called_value_76;
        PyObject *tmp_expression_value_76;
        PyObject *tmp_call_result_76;
        CHECK_OBJECT(var_G);
        tmp_expression_value_76 = var_G;
        tmp_called_value_76 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_76, mod_consts[12]);
        if (tmp_called_value_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 367;
        tmp_call_result_76 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_76, &PyTuple_GET_ITEM(mod_consts[126], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_76);
        if (tmp_call_result_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_76);
    }
    {
        PyObject *tmp_called_value_77;
        PyObject *tmp_expression_value_77;
        PyObject *tmp_call_result_77;
        CHECK_OBJECT(var_G);
        tmp_expression_value_77 = var_G;
        tmp_called_value_77 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_77, mod_consts[12]);
        if (tmp_called_value_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 368;
        tmp_call_result_77 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_77, &PyTuple_GET_ITEM(mod_consts[127], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_77);
        if (tmp_call_result_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_77);
    }
    {
        PyObject *tmp_called_value_78;
        PyObject *tmp_expression_value_78;
        PyObject *tmp_call_result_78;
        CHECK_OBJECT(var_G);
        tmp_expression_value_78 = var_G;
        tmp_called_value_78 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_78, mod_consts[12]);
        if (tmp_called_value_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 369;
        tmp_call_result_78 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_78, &PyTuple_GET_ITEM(mod_consts[128], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_78);
        if (tmp_call_result_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_78);
    }
    {
        PyObject *tmp_called_value_79;
        PyObject *tmp_expression_value_79;
        PyObject *tmp_call_result_79;
        CHECK_OBJECT(var_G);
        tmp_expression_value_79 = var_G;
        tmp_called_value_79 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_79, mod_consts[12]);
        if (tmp_called_value_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 370;
        tmp_call_result_79 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_79, &PyTuple_GET_ITEM(mod_consts[129], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_79);
        if (tmp_call_result_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_79);
    }
    {
        PyObject *tmp_called_value_80;
        PyObject *tmp_expression_value_80;
        PyObject *tmp_call_result_80;
        CHECK_OBJECT(var_G);
        tmp_expression_value_80 = var_G;
        tmp_called_value_80 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_80, mod_consts[12]);
        if (tmp_called_value_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 371;
        tmp_call_result_80 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_80, &PyTuple_GET_ITEM(mod_consts[130], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_80);
        if (tmp_call_result_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_80);
    }
    {
        PyObject *tmp_called_value_81;
        PyObject *tmp_expression_value_81;
        PyObject *tmp_call_result_81;
        CHECK_OBJECT(var_G);
        tmp_expression_value_81 = var_G;
        tmp_called_value_81 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_81, mod_consts[12]);
        if (tmp_called_value_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 372;
        tmp_call_result_81 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_81, &PyTuple_GET_ITEM(mod_consts[131], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_81);
        if (tmp_call_result_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_81);
    }
    {
        PyObject *tmp_called_value_82;
        PyObject *tmp_expression_value_82;
        PyObject *tmp_call_result_82;
        CHECK_OBJECT(var_G);
        tmp_expression_value_82 = var_G;
        tmp_called_value_82 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_82, mod_consts[12]);
        if (tmp_called_value_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 373;
        tmp_call_result_82 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_82, &PyTuple_GET_ITEM(mod_consts[132], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_82);
        if (tmp_call_result_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_82);
    }
    {
        PyObject *tmp_called_value_83;
        PyObject *tmp_expression_value_83;
        PyObject *tmp_call_result_83;
        CHECK_OBJECT(var_G);
        tmp_expression_value_83 = var_G;
        tmp_called_value_83 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_83, mod_consts[12]);
        if (tmp_called_value_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 374;
        tmp_call_result_83 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_83, &PyTuple_GET_ITEM(mod_consts[133], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_83);
        if (tmp_call_result_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_83);
    }
    {
        PyObject *tmp_called_value_84;
        PyObject *tmp_expression_value_84;
        PyObject *tmp_call_result_84;
        CHECK_OBJECT(var_G);
        tmp_expression_value_84 = var_G;
        tmp_called_value_84 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_84, mod_consts[12]);
        if (tmp_called_value_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 375;
        tmp_call_result_84 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_84, &PyTuple_GET_ITEM(mod_consts[134], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_84);
        if (tmp_call_result_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_84);
    }
    {
        PyObject *tmp_called_value_85;
        PyObject *tmp_expression_value_85;
        PyObject *tmp_call_result_85;
        CHECK_OBJECT(var_G);
        tmp_expression_value_85 = var_G;
        tmp_called_value_85 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_85, mod_consts[12]);
        if (tmp_called_value_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 376;
        tmp_call_result_85 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_85, &PyTuple_GET_ITEM(mod_consts[135], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_85);
        if (tmp_call_result_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_85);
    }
    {
        PyObject *tmp_called_value_86;
        PyObject *tmp_expression_value_86;
        PyObject *tmp_call_result_86;
        CHECK_OBJECT(var_G);
        tmp_expression_value_86 = var_G;
        tmp_called_value_86 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_86, mod_consts[12]);
        if (tmp_called_value_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 377;
        tmp_call_result_86 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_86, &PyTuple_GET_ITEM(mod_consts[136], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_86);
        if (tmp_call_result_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_86);
    }
    {
        PyObject *tmp_called_value_87;
        PyObject *tmp_expression_value_87;
        PyObject *tmp_call_result_87;
        CHECK_OBJECT(var_G);
        tmp_expression_value_87 = var_G;
        tmp_called_value_87 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_87, mod_consts[12]);
        if (tmp_called_value_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 378;
        tmp_call_result_87 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_87, &PyTuple_GET_ITEM(mod_consts[137], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_87);
        if (tmp_call_result_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_87);
    }
    {
        PyObject *tmp_called_value_88;
        PyObject *tmp_expression_value_88;
        PyObject *tmp_call_result_88;
        CHECK_OBJECT(var_G);
        tmp_expression_value_88 = var_G;
        tmp_called_value_88 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_88, mod_consts[12]);
        if (tmp_called_value_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 379;
        tmp_call_result_88 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_88, &PyTuple_GET_ITEM(mod_consts[138], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_88);
        if (tmp_call_result_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_88);
    }
    {
        PyObject *tmp_called_value_89;
        PyObject *tmp_expression_value_89;
        PyObject *tmp_call_result_89;
        CHECK_OBJECT(var_G);
        tmp_expression_value_89 = var_G;
        tmp_called_value_89 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_89, mod_consts[12]);
        if (tmp_called_value_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 380;
        tmp_call_result_89 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_89, &PyTuple_GET_ITEM(mod_consts[139], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_89);
        if (tmp_call_result_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_89);
    }
    {
        PyObject *tmp_called_value_90;
        PyObject *tmp_expression_value_90;
        PyObject *tmp_call_result_90;
        CHECK_OBJECT(var_G);
        tmp_expression_value_90 = var_G;
        tmp_called_value_90 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_90, mod_consts[12]);
        if (tmp_called_value_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 381;
        tmp_call_result_90 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_90, &PyTuple_GET_ITEM(mod_consts[140], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_90);
        if (tmp_call_result_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_90);
    }
    {
        PyObject *tmp_called_value_91;
        PyObject *tmp_expression_value_91;
        PyObject *tmp_call_result_91;
        CHECK_OBJECT(var_G);
        tmp_expression_value_91 = var_G;
        tmp_called_value_91 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_91, mod_consts[12]);
        if (tmp_called_value_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 382;
        tmp_call_result_91 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_91, &PyTuple_GET_ITEM(mod_consts[141], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_91);
        if (tmp_call_result_91 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_91);
    }
    {
        PyObject *tmp_called_value_92;
        PyObject *tmp_expression_value_92;
        PyObject *tmp_call_result_92;
        CHECK_OBJECT(var_G);
        tmp_expression_value_92 = var_G;
        tmp_called_value_92 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_92, mod_consts[12]);
        if (tmp_called_value_92 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 383;
        tmp_call_result_92 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_92, &PyTuple_GET_ITEM(mod_consts[142], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_92);
        if (tmp_call_result_92 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_92);
    }
    {
        PyObject *tmp_called_value_93;
        PyObject *tmp_expression_value_93;
        PyObject *tmp_call_result_93;
        CHECK_OBJECT(var_G);
        tmp_expression_value_93 = var_G;
        tmp_called_value_93 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_93, mod_consts[12]);
        if (tmp_called_value_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 384;
        tmp_call_result_93 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_93, &PyTuple_GET_ITEM(mod_consts[143], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_93);
        if (tmp_call_result_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_93);
    }
    {
        PyObject *tmp_called_value_94;
        PyObject *tmp_expression_value_94;
        PyObject *tmp_call_result_94;
        CHECK_OBJECT(var_G);
        tmp_expression_value_94 = var_G;
        tmp_called_value_94 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_94, mod_consts[12]);
        if (tmp_called_value_94 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 385;
        tmp_call_result_94 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_94, &PyTuple_GET_ITEM(mod_consts[144], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_94);
        if (tmp_call_result_94 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_94);
    }
    {
        PyObject *tmp_called_value_95;
        PyObject *tmp_expression_value_95;
        PyObject *tmp_call_result_95;
        CHECK_OBJECT(var_G);
        tmp_expression_value_95 = var_G;
        tmp_called_value_95 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_95, mod_consts[12]);
        if (tmp_called_value_95 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 386;
        tmp_call_result_95 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_95, &PyTuple_GET_ITEM(mod_consts[145], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_95);
        if (tmp_call_result_95 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_95);
    }
    {
        PyObject *tmp_called_value_96;
        PyObject *tmp_expression_value_96;
        PyObject *tmp_call_result_96;
        CHECK_OBJECT(var_G);
        tmp_expression_value_96 = var_G;
        tmp_called_value_96 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_96, mod_consts[12]);
        if (tmp_called_value_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 387;
        tmp_call_result_96 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_96, &PyTuple_GET_ITEM(mod_consts[146], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_96);
        if (tmp_call_result_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_96);
    }
    {
        PyObject *tmp_called_value_97;
        PyObject *tmp_expression_value_97;
        PyObject *tmp_call_result_97;
        CHECK_OBJECT(var_G);
        tmp_expression_value_97 = var_G;
        tmp_called_value_97 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_97, mod_consts[12]);
        if (tmp_called_value_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 388;
        tmp_call_result_97 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_97, &PyTuple_GET_ITEM(mod_consts[147], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_97);
        if (tmp_call_result_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_97);
    }
    {
        PyObject *tmp_called_value_98;
        PyObject *tmp_expression_value_98;
        PyObject *tmp_call_result_98;
        CHECK_OBJECT(var_G);
        tmp_expression_value_98 = var_G;
        tmp_called_value_98 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_98, mod_consts[12]);
        if (tmp_called_value_98 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 389;
        tmp_call_result_98 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_98, &PyTuple_GET_ITEM(mod_consts[148], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_98);
        if (tmp_call_result_98 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_98);
    }
    {
        PyObject *tmp_called_value_99;
        PyObject *tmp_expression_value_99;
        PyObject *tmp_call_result_99;
        CHECK_OBJECT(var_G);
        tmp_expression_value_99 = var_G;
        tmp_called_value_99 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_99, mod_consts[12]);
        if (tmp_called_value_99 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 390;
        tmp_call_result_99 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_99, &PyTuple_GET_ITEM(mod_consts[149], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_99);
        if (tmp_call_result_99 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_99);
    }
    {
        PyObject *tmp_called_value_100;
        PyObject *tmp_expression_value_100;
        PyObject *tmp_call_result_100;
        CHECK_OBJECT(var_G);
        tmp_expression_value_100 = var_G;
        tmp_called_value_100 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_100, mod_consts[12]);
        if (tmp_called_value_100 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 391;
        tmp_call_result_100 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_100, &PyTuple_GET_ITEM(mod_consts[150], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_100);
        if (tmp_call_result_100 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 391;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_100);
    }
    {
        PyObject *tmp_called_value_101;
        PyObject *tmp_expression_value_101;
        PyObject *tmp_call_result_101;
        CHECK_OBJECT(var_G);
        tmp_expression_value_101 = var_G;
        tmp_called_value_101 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_101, mod_consts[12]);
        if (tmp_called_value_101 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 392;
        tmp_call_result_101 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_101, &PyTuple_GET_ITEM(mod_consts[151], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_101);
        if (tmp_call_result_101 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_101);
    }
    {
        PyObject *tmp_called_value_102;
        PyObject *tmp_expression_value_102;
        PyObject *tmp_call_result_102;
        CHECK_OBJECT(var_G);
        tmp_expression_value_102 = var_G;
        tmp_called_value_102 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_102, mod_consts[12]);
        if (tmp_called_value_102 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 393;
        tmp_call_result_102 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_102, &PyTuple_GET_ITEM(mod_consts[152], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_102);
        if (tmp_call_result_102 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_102);
    }
    {
        PyObject *tmp_called_value_103;
        PyObject *tmp_expression_value_103;
        PyObject *tmp_call_result_103;
        CHECK_OBJECT(var_G);
        tmp_expression_value_103 = var_G;
        tmp_called_value_103 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_103, mod_consts[12]);
        if (tmp_called_value_103 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 394;
        tmp_call_result_103 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_103, &PyTuple_GET_ITEM(mod_consts[153], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_103);
        if (tmp_call_result_103 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_103);
    }
    {
        PyObject *tmp_called_value_104;
        PyObject *tmp_expression_value_104;
        PyObject *tmp_call_result_104;
        CHECK_OBJECT(var_G);
        tmp_expression_value_104 = var_G;
        tmp_called_value_104 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_104, mod_consts[12]);
        if (tmp_called_value_104 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 395;
        tmp_call_result_104 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_104, &PyTuple_GET_ITEM(mod_consts[154], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_104);
        if (tmp_call_result_104 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_104);
    }
    {
        PyObject *tmp_called_value_105;
        PyObject *tmp_expression_value_105;
        PyObject *tmp_call_result_105;
        CHECK_OBJECT(var_G);
        tmp_expression_value_105 = var_G;
        tmp_called_value_105 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_105, mod_consts[12]);
        if (tmp_called_value_105 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 396;
        tmp_call_result_105 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_105, &PyTuple_GET_ITEM(mod_consts[155], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_105);
        if (tmp_call_result_105 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_105);
    }
    {
        PyObject *tmp_called_value_106;
        PyObject *tmp_expression_value_106;
        PyObject *tmp_call_result_106;
        CHECK_OBJECT(var_G);
        tmp_expression_value_106 = var_G;
        tmp_called_value_106 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_106, mod_consts[12]);
        if (tmp_called_value_106 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 397;
        tmp_call_result_106 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_106, &PyTuple_GET_ITEM(mod_consts[156], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_106);
        if (tmp_call_result_106 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_106);
    }
    {
        PyObject *tmp_called_value_107;
        PyObject *tmp_expression_value_107;
        PyObject *tmp_call_result_107;
        CHECK_OBJECT(var_G);
        tmp_expression_value_107 = var_G;
        tmp_called_value_107 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_107, mod_consts[12]);
        if (tmp_called_value_107 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 398;
        tmp_call_result_107 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_107, &PyTuple_GET_ITEM(mod_consts[157], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_107);
        if (tmp_call_result_107 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_107);
    }
    {
        PyObject *tmp_called_value_108;
        PyObject *tmp_expression_value_108;
        PyObject *tmp_call_result_108;
        CHECK_OBJECT(var_G);
        tmp_expression_value_108 = var_G;
        tmp_called_value_108 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_108, mod_consts[12]);
        if (tmp_called_value_108 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 399;
        tmp_call_result_108 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_108, &PyTuple_GET_ITEM(mod_consts[158], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_108);
        if (tmp_call_result_108 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_108);
    }
    {
        PyObject *tmp_called_value_109;
        PyObject *tmp_expression_value_109;
        PyObject *tmp_call_result_109;
        CHECK_OBJECT(var_G);
        tmp_expression_value_109 = var_G;
        tmp_called_value_109 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_109, mod_consts[12]);
        if (tmp_called_value_109 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 400;
        tmp_call_result_109 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_109, &PyTuple_GET_ITEM(mod_consts[159], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_109);
        if (tmp_call_result_109 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_109);
    }
    {
        PyObject *tmp_called_value_110;
        PyObject *tmp_expression_value_110;
        PyObject *tmp_call_result_110;
        CHECK_OBJECT(var_G);
        tmp_expression_value_110 = var_G;
        tmp_called_value_110 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_110, mod_consts[12]);
        if (tmp_called_value_110 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 401;
        tmp_call_result_110 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_110, &PyTuple_GET_ITEM(mod_consts[160], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_110);
        if (tmp_call_result_110 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_110);
    }
    {
        PyObject *tmp_called_value_111;
        PyObject *tmp_expression_value_111;
        PyObject *tmp_call_result_111;
        CHECK_OBJECT(var_G);
        tmp_expression_value_111 = var_G;
        tmp_called_value_111 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_111, mod_consts[12]);
        if (tmp_called_value_111 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 402;
        tmp_call_result_111 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_111, &PyTuple_GET_ITEM(mod_consts[161], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_111);
        if (tmp_call_result_111 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_111);
    }
    {
        PyObject *tmp_called_value_112;
        PyObject *tmp_expression_value_112;
        PyObject *tmp_call_result_112;
        CHECK_OBJECT(var_G);
        tmp_expression_value_112 = var_G;
        tmp_called_value_112 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_112, mod_consts[12]);
        if (tmp_called_value_112 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 403;
        tmp_call_result_112 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_112, &PyTuple_GET_ITEM(mod_consts[162], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_112);
        if (tmp_call_result_112 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_112);
    }
    {
        PyObject *tmp_called_value_113;
        PyObject *tmp_expression_value_113;
        PyObject *tmp_call_result_113;
        CHECK_OBJECT(var_G);
        tmp_expression_value_113 = var_G;
        tmp_called_value_113 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_113, mod_consts[12]);
        if (tmp_called_value_113 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 404;
        tmp_call_result_113 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_113, &PyTuple_GET_ITEM(mod_consts[163], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_113);
        if (tmp_call_result_113 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_113);
    }
    {
        PyObject *tmp_called_value_114;
        PyObject *tmp_expression_value_114;
        PyObject *tmp_call_result_114;
        CHECK_OBJECT(var_G);
        tmp_expression_value_114 = var_G;
        tmp_called_value_114 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_114, mod_consts[12]);
        if (tmp_called_value_114 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 405;
        tmp_call_result_114 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_114, &PyTuple_GET_ITEM(mod_consts[164], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_114);
        if (tmp_call_result_114 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_114);
    }
    {
        PyObject *tmp_called_value_115;
        PyObject *tmp_expression_value_115;
        PyObject *tmp_call_result_115;
        CHECK_OBJECT(var_G);
        tmp_expression_value_115 = var_G;
        tmp_called_value_115 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_115, mod_consts[12]);
        if (tmp_called_value_115 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 406;
        tmp_call_result_115 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_115, &PyTuple_GET_ITEM(mod_consts[165], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_115);
        if (tmp_call_result_115 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_115);
    }
    {
        PyObject *tmp_called_value_116;
        PyObject *tmp_expression_value_116;
        PyObject *tmp_call_result_116;
        CHECK_OBJECT(var_G);
        tmp_expression_value_116 = var_G;
        tmp_called_value_116 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_116, mod_consts[12]);
        if (tmp_called_value_116 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 407;
        tmp_call_result_116 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_116, &PyTuple_GET_ITEM(mod_consts[166], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_116);
        if (tmp_call_result_116 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_116);
    }
    {
        PyObject *tmp_called_value_117;
        PyObject *tmp_expression_value_117;
        PyObject *tmp_call_result_117;
        CHECK_OBJECT(var_G);
        tmp_expression_value_117 = var_G;
        tmp_called_value_117 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_117, mod_consts[12]);
        if (tmp_called_value_117 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 408;
        tmp_call_result_117 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_117, &PyTuple_GET_ITEM(mod_consts[167], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_117);
        if (tmp_call_result_117 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_117);
    }
    {
        PyObject *tmp_called_value_118;
        PyObject *tmp_expression_value_118;
        PyObject *tmp_call_result_118;
        CHECK_OBJECT(var_G);
        tmp_expression_value_118 = var_G;
        tmp_called_value_118 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_118, mod_consts[12]);
        if (tmp_called_value_118 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 409;
        tmp_call_result_118 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_118, &PyTuple_GET_ITEM(mod_consts[168], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_118);
        if (tmp_call_result_118 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_118);
    }
    {
        PyObject *tmp_called_value_119;
        PyObject *tmp_expression_value_119;
        PyObject *tmp_call_result_119;
        CHECK_OBJECT(var_G);
        tmp_expression_value_119 = var_G;
        tmp_called_value_119 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_119, mod_consts[12]);
        if (tmp_called_value_119 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 410;
        tmp_call_result_119 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_119, &PyTuple_GET_ITEM(mod_consts[169], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_119);
        if (tmp_call_result_119 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_119);
    }
    {
        PyObject *tmp_called_value_120;
        PyObject *tmp_expression_value_120;
        PyObject *tmp_call_result_120;
        CHECK_OBJECT(var_G);
        tmp_expression_value_120 = var_G;
        tmp_called_value_120 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_120, mod_consts[12]);
        if (tmp_called_value_120 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 411;
        tmp_call_result_120 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_120, &PyTuple_GET_ITEM(mod_consts[170], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_120);
        if (tmp_call_result_120 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_120);
    }
    {
        PyObject *tmp_called_value_121;
        PyObject *tmp_expression_value_121;
        PyObject *tmp_call_result_121;
        CHECK_OBJECT(var_G);
        tmp_expression_value_121 = var_G;
        tmp_called_value_121 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_121, mod_consts[12]);
        if (tmp_called_value_121 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 412;
        tmp_call_result_121 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_121, &PyTuple_GET_ITEM(mod_consts[171], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_121);
        if (tmp_call_result_121 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_121);
    }
    {
        PyObject *tmp_called_value_122;
        PyObject *tmp_expression_value_122;
        PyObject *tmp_call_result_122;
        CHECK_OBJECT(var_G);
        tmp_expression_value_122 = var_G;
        tmp_called_value_122 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_122, mod_consts[12]);
        if (tmp_called_value_122 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 413;
        tmp_call_result_122 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_122, &PyTuple_GET_ITEM(mod_consts[172], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_122);
        if (tmp_call_result_122 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_122);
    }
    {
        PyObject *tmp_called_value_123;
        PyObject *tmp_expression_value_123;
        PyObject *tmp_call_result_123;
        CHECK_OBJECT(var_G);
        tmp_expression_value_123 = var_G;
        tmp_called_value_123 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_123, mod_consts[12]);
        if (tmp_called_value_123 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 414;
        tmp_call_result_123 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_123, &PyTuple_GET_ITEM(mod_consts[173], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_123);
        if (tmp_call_result_123 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_123);
    }
    {
        PyObject *tmp_called_value_124;
        PyObject *tmp_expression_value_124;
        PyObject *tmp_call_result_124;
        CHECK_OBJECT(var_G);
        tmp_expression_value_124 = var_G;
        tmp_called_value_124 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_124, mod_consts[12]);
        if (tmp_called_value_124 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 415;
        tmp_call_result_124 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_124, &PyTuple_GET_ITEM(mod_consts[174], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_124);
        if (tmp_call_result_124 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_124);
    }
    {
        PyObject *tmp_called_value_125;
        PyObject *tmp_expression_value_125;
        PyObject *tmp_call_result_125;
        CHECK_OBJECT(var_G);
        tmp_expression_value_125 = var_G;
        tmp_called_value_125 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_125, mod_consts[12]);
        if (tmp_called_value_125 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 416;
        tmp_call_result_125 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_125, &PyTuple_GET_ITEM(mod_consts[175], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_125);
        if (tmp_call_result_125 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_125);
    }
    {
        PyObject *tmp_called_value_126;
        PyObject *tmp_expression_value_126;
        PyObject *tmp_call_result_126;
        CHECK_OBJECT(var_G);
        tmp_expression_value_126 = var_G;
        tmp_called_value_126 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_126, mod_consts[12]);
        if (tmp_called_value_126 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 417;
        tmp_call_result_126 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_126, &PyTuple_GET_ITEM(mod_consts[176], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_126);
        if (tmp_call_result_126 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_126);
    }
    {
        PyObject *tmp_called_value_127;
        PyObject *tmp_expression_value_127;
        PyObject *tmp_call_result_127;
        CHECK_OBJECT(var_G);
        tmp_expression_value_127 = var_G;
        tmp_called_value_127 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_127, mod_consts[12]);
        if (tmp_called_value_127 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 418;
        tmp_call_result_127 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_127, &PyTuple_GET_ITEM(mod_consts[177], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_127);
        if (tmp_call_result_127 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_127);
    }
    {
        PyObject *tmp_called_value_128;
        PyObject *tmp_expression_value_128;
        PyObject *tmp_call_result_128;
        CHECK_OBJECT(var_G);
        tmp_expression_value_128 = var_G;
        tmp_called_value_128 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_128, mod_consts[12]);
        if (tmp_called_value_128 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 419;
        tmp_call_result_128 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_128, &PyTuple_GET_ITEM(mod_consts[178], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_128);
        if (tmp_call_result_128 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_128);
    }
    {
        PyObject *tmp_called_value_129;
        PyObject *tmp_expression_value_129;
        PyObject *tmp_call_result_129;
        CHECK_OBJECT(var_G);
        tmp_expression_value_129 = var_G;
        tmp_called_value_129 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_129, mod_consts[12]);
        if (tmp_called_value_129 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 420;
        tmp_call_result_129 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_129, &PyTuple_GET_ITEM(mod_consts[179], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_129);
        if (tmp_call_result_129 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_129);
    }
    {
        PyObject *tmp_called_value_130;
        PyObject *tmp_expression_value_130;
        PyObject *tmp_call_result_130;
        CHECK_OBJECT(var_G);
        tmp_expression_value_130 = var_G;
        tmp_called_value_130 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_130, mod_consts[12]);
        if (tmp_called_value_130 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 421;
        tmp_call_result_130 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_130, &PyTuple_GET_ITEM(mod_consts[180], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_130);
        if (tmp_call_result_130 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_130);
    }
    {
        PyObject *tmp_called_value_131;
        PyObject *tmp_expression_value_131;
        PyObject *tmp_call_result_131;
        CHECK_OBJECT(var_G);
        tmp_expression_value_131 = var_G;
        tmp_called_value_131 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_131, mod_consts[12]);
        if (tmp_called_value_131 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 422;
        tmp_call_result_131 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_131, &PyTuple_GET_ITEM(mod_consts[181], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_131);
        if (tmp_call_result_131 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_131);
    }
    {
        PyObject *tmp_called_value_132;
        PyObject *tmp_expression_value_132;
        PyObject *tmp_call_result_132;
        CHECK_OBJECT(var_G);
        tmp_expression_value_132 = var_G;
        tmp_called_value_132 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_132, mod_consts[12]);
        if (tmp_called_value_132 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 423;
        tmp_call_result_132 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_132, &PyTuple_GET_ITEM(mod_consts[182], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_132);
        if (tmp_call_result_132 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 423;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_132);
    }
    {
        PyObject *tmp_called_value_133;
        PyObject *tmp_expression_value_133;
        PyObject *tmp_call_result_133;
        CHECK_OBJECT(var_G);
        tmp_expression_value_133 = var_G;
        tmp_called_value_133 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_133, mod_consts[12]);
        if (tmp_called_value_133 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 424;
        tmp_call_result_133 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_133, &PyTuple_GET_ITEM(mod_consts[183], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_133);
        if (tmp_call_result_133 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_133);
    }
    {
        PyObject *tmp_called_value_134;
        PyObject *tmp_expression_value_134;
        PyObject *tmp_call_result_134;
        CHECK_OBJECT(var_G);
        tmp_expression_value_134 = var_G;
        tmp_called_value_134 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_134, mod_consts[12]);
        if (tmp_called_value_134 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 425;
        tmp_call_result_134 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_134, &PyTuple_GET_ITEM(mod_consts[184], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_134);
        if (tmp_call_result_134 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_134);
    }
    {
        PyObject *tmp_called_value_135;
        PyObject *tmp_expression_value_135;
        PyObject *tmp_call_result_135;
        CHECK_OBJECT(var_G);
        tmp_expression_value_135 = var_G;
        tmp_called_value_135 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_135, mod_consts[12]);
        if (tmp_called_value_135 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 426;
        tmp_call_result_135 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_135, &PyTuple_GET_ITEM(mod_consts[185], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_135);
        if (tmp_call_result_135 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_135);
    }
    {
        PyObject *tmp_called_value_136;
        PyObject *tmp_expression_value_136;
        PyObject *tmp_call_result_136;
        CHECK_OBJECT(var_G);
        tmp_expression_value_136 = var_G;
        tmp_called_value_136 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_136, mod_consts[12]);
        if (tmp_called_value_136 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 427;
        tmp_call_result_136 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_136, &PyTuple_GET_ITEM(mod_consts[186], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_136);
        if (tmp_call_result_136 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_136);
    }
    {
        PyObject *tmp_called_value_137;
        PyObject *tmp_expression_value_137;
        PyObject *tmp_call_result_137;
        CHECK_OBJECT(var_G);
        tmp_expression_value_137 = var_G;
        tmp_called_value_137 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_137, mod_consts[12]);
        if (tmp_called_value_137 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 428;
        tmp_call_result_137 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_137, &PyTuple_GET_ITEM(mod_consts[187], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_137);
        if (tmp_call_result_137 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_137);
    }
    {
        PyObject *tmp_called_value_138;
        PyObject *tmp_expression_value_138;
        PyObject *tmp_call_result_138;
        CHECK_OBJECT(var_G);
        tmp_expression_value_138 = var_G;
        tmp_called_value_138 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_138, mod_consts[12]);
        if (tmp_called_value_138 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 429;
        tmp_call_result_138 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_138, &PyTuple_GET_ITEM(mod_consts[188], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_138);
        if (tmp_call_result_138 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_138);
    }
    {
        PyObject *tmp_called_value_139;
        PyObject *tmp_expression_value_139;
        PyObject *tmp_call_result_139;
        CHECK_OBJECT(var_G);
        tmp_expression_value_139 = var_G;
        tmp_called_value_139 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_139, mod_consts[12]);
        if (tmp_called_value_139 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 430;
        tmp_call_result_139 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_139, &PyTuple_GET_ITEM(mod_consts[189], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_139);
        if (tmp_call_result_139 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_139);
    }
    {
        PyObject *tmp_called_value_140;
        PyObject *tmp_expression_value_140;
        PyObject *tmp_call_result_140;
        CHECK_OBJECT(var_G);
        tmp_expression_value_140 = var_G;
        tmp_called_value_140 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_140, mod_consts[12]);
        if (tmp_called_value_140 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 431;
        tmp_call_result_140 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_140, &PyTuple_GET_ITEM(mod_consts[190], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_140);
        if (tmp_call_result_140 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_140);
    }
    {
        PyObject *tmp_called_value_141;
        PyObject *tmp_expression_value_141;
        PyObject *tmp_call_result_141;
        CHECK_OBJECT(var_G);
        tmp_expression_value_141 = var_G;
        tmp_called_value_141 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_141, mod_consts[12]);
        if (tmp_called_value_141 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 432;
        tmp_call_result_141 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_141, &PyTuple_GET_ITEM(mod_consts[191], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_141);
        if (tmp_call_result_141 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_141);
    }
    {
        PyObject *tmp_called_value_142;
        PyObject *tmp_expression_value_142;
        PyObject *tmp_call_result_142;
        CHECK_OBJECT(var_G);
        tmp_expression_value_142 = var_G;
        tmp_called_value_142 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_142, mod_consts[12]);
        if (tmp_called_value_142 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 433;
        tmp_call_result_142 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_142, &PyTuple_GET_ITEM(mod_consts[192], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_142);
        if (tmp_call_result_142 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_142);
    }
    {
        PyObject *tmp_called_value_143;
        PyObject *tmp_expression_value_143;
        PyObject *tmp_call_result_143;
        CHECK_OBJECT(var_G);
        tmp_expression_value_143 = var_G;
        tmp_called_value_143 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_143, mod_consts[12]);
        if (tmp_called_value_143 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 434;
        tmp_call_result_143 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_143, &PyTuple_GET_ITEM(mod_consts[193], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_143);
        if (tmp_call_result_143 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_143);
    }
    {
        PyObject *tmp_called_value_144;
        PyObject *tmp_expression_value_144;
        PyObject *tmp_call_result_144;
        CHECK_OBJECT(var_G);
        tmp_expression_value_144 = var_G;
        tmp_called_value_144 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_144, mod_consts[12]);
        if (tmp_called_value_144 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 435;
        tmp_call_result_144 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_144, &PyTuple_GET_ITEM(mod_consts[194], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_144);
        if (tmp_call_result_144 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_144);
    }
    {
        PyObject *tmp_called_value_145;
        PyObject *tmp_expression_value_145;
        PyObject *tmp_call_result_145;
        CHECK_OBJECT(var_G);
        tmp_expression_value_145 = var_G;
        tmp_called_value_145 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_145, mod_consts[12]);
        if (tmp_called_value_145 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 436;
        tmp_call_result_145 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_145, &PyTuple_GET_ITEM(mod_consts[195], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_145);
        if (tmp_call_result_145 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_145);
    }
    {
        PyObject *tmp_called_value_146;
        PyObject *tmp_expression_value_146;
        PyObject *tmp_call_result_146;
        CHECK_OBJECT(var_G);
        tmp_expression_value_146 = var_G;
        tmp_called_value_146 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_146, mod_consts[12]);
        if (tmp_called_value_146 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 437;
        tmp_call_result_146 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_146, &PyTuple_GET_ITEM(mod_consts[196], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_146);
        if (tmp_call_result_146 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_146);
    }
    {
        PyObject *tmp_called_value_147;
        PyObject *tmp_expression_value_147;
        PyObject *tmp_call_result_147;
        CHECK_OBJECT(var_G);
        tmp_expression_value_147 = var_G;
        tmp_called_value_147 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_147, mod_consts[12]);
        if (tmp_called_value_147 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 438;
        tmp_call_result_147 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_147, &PyTuple_GET_ITEM(mod_consts[197], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_147);
        if (tmp_call_result_147 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_147);
    }
    {
        PyObject *tmp_called_value_148;
        PyObject *tmp_expression_value_148;
        PyObject *tmp_call_result_148;
        CHECK_OBJECT(var_G);
        tmp_expression_value_148 = var_G;
        tmp_called_value_148 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_148, mod_consts[12]);
        if (tmp_called_value_148 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 439;
        tmp_call_result_148 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_148, &PyTuple_GET_ITEM(mod_consts[198], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_148);
        if (tmp_call_result_148 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_148);
    }
    {
        PyObject *tmp_called_value_149;
        PyObject *tmp_expression_value_149;
        PyObject *tmp_call_result_149;
        CHECK_OBJECT(var_G);
        tmp_expression_value_149 = var_G;
        tmp_called_value_149 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_149, mod_consts[12]);
        if (tmp_called_value_149 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 440;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 440;
        tmp_call_result_149 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_149, &PyTuple_GET_ITEM(mod_consts[199], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_149);
        if (tmp_call_result_149 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 440;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_149);
    }
    {
        PyObject *tmp_called_value_150;
        PyObject *tmp_expression_value_150;
        PyObject *tmp_call_result_150;
        CHECK_OBJECT(var_G);
        tmp_expression_value_150 = var_G;
        tmp_called_value_150 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_150, mod_consts[12]);
        if (tmp_called_value_150 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 441;
        tmp_call_result_150 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_150, &PyTuple_GET_ITEM(mod_consts[200], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_150);
        if (tmp_call_result_150 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_150);
    }
    {
        PyObject *tmp_called_value_151;
        PyObject *tmp_expression_value_151;
        PyObject *tmp_call_result_151;
        CHECK_OBJECT(var_G);
        tmp_expression_value_151 = var_G;
        tmp_called_value_151 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_151, mod_consts[12]);
        if (tmp_called_value_151 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 442;
        tmp_call_result_151 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_151, &PyTuple_GET_ITEM(mod_consts[201], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_151);
        if (tmp_call_result_151 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_151);
    }
    {
        PyObject *tmp_called_value_152;
        PyObject *tmp_expression_value_152;
        PyObject *tmp_call_result_152;
        CHECK_OBJECT(var_G);
        tmp_expression_value_152 = var_G;
        tmp_called_value_152 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_152, mod_consts[12]);
        if (tmp_called_value_152 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 443;
        tmp_call_result_152 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_152, &PyTuple_GET_ITEM(mod_consts[202], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_152);
        if (tmp_call_result_152 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_152);
    }
    {
        PyObject *tmp_called_value_153;
        PyObject *tmp_expression_value_153;
        PyObject *tmp_call_result_153;
        CHECK_OBJECT(var_G);
        tmp_expression_value_153 = var_G;
        tmp_called_value_153 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_153, mod_consts[12]);
        if (tmp_called_value_153 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 444;
        tmp_call_result_153 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_153, &PyTuple_GET_ITEM(mod_consts[203], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_153);
        if (tmp_call_result_153 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_153);
    }
    {
        PyObject *tmp_called_value_154;
        PyObject *tmp_expression_value_154;
        PyObject *tmp_call_result_154;
        CHECK_OBJECT(var_G);
        tmp_expression_value_154 = var_G;
        tmp_called_value_154 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_154, mod_consts[12]);
        if (tmp_called_value_154 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 445;
        tmp_call_result_154 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_154, &PyTuple_GET_ITEM(mod_consts[204], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_154);
        if (tmp_call_result_154 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_154);
    }
    {
        PyObject *tmp_called_value_155;
        PyObject *tmp_expression_value_155;
        PyObject *tmp_call_result_155;
        CHECK_OBJECT(var_G);
        tmp_expression_value_155 = var_G;
        tmp_called_value_155 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_155, mod_consts[12]);
        if (tmp_called_value_155 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 446;
        tmp_call_result_155 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_155, &PyTuple_GET_ITEM(mod_consts[205], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_155);
        if (tmp_call_result_155 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_155);
    }
    {
        PyObject *tmp_called_value_156;
        PyObject *tmp_expression_value_156;
        PyObject *tmp_call_result_156;
        CHECK_OBJECT(var_G);
        tmp_expression_value_156 = var_G;
        tmp_called_value_156 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_156, mod_consts[12]);
        if (tmp_called_value_156 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 447;
        tmp_call_result_156 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_156, &PyTuple_GET_ITEM(mod_consts[206], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_156);
        if (tmp_call_result_156 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_156);
    }
    {
        PyObject *tmp_called_value_157;
        PyObject *tmp_expression_value_157;
        PyObject *tmp_call_result_157;
        CHECK_OBJECT(var_G);
        tmp_expression_value_157 = var_G;
        tmp_called_value_157 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_157, mod_consts[12]);
        if (tmp_called_value_157 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 448;
        tmp_call_result_157 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_157, &PyTuple_GET_ITEM(mod_consts[207], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_157);
        if (tmp_call_result_157 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_157);
    }
    {
        PyObject *tmp_called_value_158;
        PyObject *tmp_expression_value_158;
        PyObject *tmp_call_result_158;
        CHECK_OBJECT(var_G);
        tmp_expression_value_158 = var_G;
        tmp_called_value_158 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_158, mod_consts[12]);
        if (tmp_called_value_158 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 449;
        tmp_call_result_158 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_158, &PyTuple_GET_ITEM(mod_consts[208], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_158);
        if (tmp_call_result_158 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_158);
    }
    {
        PyObject *tmp_called_value_159;
        PyObject *tmp_expression_value_159;
        PyObject *tmp_call_result_159;
        CHECK_OBJECT(var_G);
        tmp_expression_value_159 = var_G;
        tmp_called_value_159 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_159, mod_consts[12]);
        if (tmp_called_value_159 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 450;
        tmp_call_result_159 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_159, &PyTuple_GET_ITEM(mod_consts[209], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_159);
        if (tmp_call_result_159 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_159);
    }
    {
        PyObject *tmp_called_value_160;
        PyObject *tmp_expression_value_160;
        PyObject *tmp_call_result_160;
        CHECK_OBJECT(var_G);
        tmp_expression_value_160 = var_G;
        tmp_called_value_160 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_160, mod_consts[12]);
        if (tmp_called_value_160 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 451;
        tmp_call_result_160 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_160, &PyTuple_GET_ITEM(mod_consts[210], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_160);
        if (tmp_call_result_160 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_160);
    }
    {
        PyObject *tmp_called_value_161;
        PyObject *tmp_expression_value_161;
        PyObject *tmp_call_result_161;
        CHECK_OBJECT(var_G);
        tmp_expression_value_161 = var_G;
        tmp_called_value_161 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_161, mod_consts[12]);
        if (tmp_called_value_161 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 452;
        tmp_call_result_161 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_161, &PyTuple_GET_ITEM(mod_consts[211], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_161);
        if (tmp_call_result_161 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_161);
    }
    {
        PyObject *tmp_called_value_162;
        PyObject *tmp_expression_value_162;
        PyObject *tmp_call_result_162;
        CHECK_OBJECT(var_G);
        tmp_expression_value_162 = var_G;
        tmp_called_value_162 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_162, mod_consts[12]);
        if (tmp_called_value_162 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 453;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 453;
        tmp_call_result_162 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_162, &PyTuple_GET_ITEM(mod_consts[212], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_162);
        if (tmp_call_result_162 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 453;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_162);
    }
    {
        PyObject *tmp_called_value_163;
        PyObject *tmp_expression_value_163;
        PyObject *tmp_call_result_163;
        CHECK_OBJECT(var_G);
        tmp_expression_value_163 = var_G;
        tmp_called_value_163 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_163, mod_consts[12]);
        if (tmp_called_value_163 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 454;
        tmp_call_result_163 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_163, &PyTuple_GET_ITEM(mod_consts[213], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_163);
        if (tmp_call_result_163 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_163);
    }
    {
        PyObject *tmp_called_value_164;
        PyObject *tmp_expression_value_164;
        PyObject *tmp_call_result_164;
        CHECK_OBJECT(var_G);
        tmp_expression_value_164 = var_G;
        tmp_called_value_164 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_164, mod_consts[12]);
        if (tmp_called_value_164 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 455;
        tmp_call_result_164 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_164, &PyTuple_GET_ITEM(mod_consts[214], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_164);
        if (tmp_call_result_164 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_164);
    }
    {
        PyObject *tmp_called_value_165;
        PyObject *tmp_expression_value_165;
        PyObject *tmp_call_result_165;
        CHECK_OBJECT(var_G);
        tmp_expression_value_165 = var_G;
        tmp_called_value_165 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_165, mod_consts[12]);
        if (tmp_called_value_165 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 456;
        tmp_call_result_165 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_165, &PyTuple_GET_ITEM(mod_consts[215], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_165);
        if (tmp_call_result_165 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_165);
    }
    {
        PyObject *tmp_called_value_166;
        PyObject *tmp_expression_value_166;
        PyObject *tmp_call_result_166;
        CHECK_OBJECT(var_G);
        tmp_expression_value_166 = var_G;
        tmp_called_value_166 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_166, mod_consts[12]);
        if (tmp_called_value_166 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 457;
        tmp_call_result_166 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_166, &PyTuple_GET_ITEM(mod_consts[216], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_166);
        if (tmp_call_result_166 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_166);
    }
    {
        PyObject *tmp_called_value_167;
        PyObject *tmp_expression_value_167;
        PyObject *tmp_call_result_167;
        CHECK_OBJECT(var_G);
        tmp_expression_value_167 = var_G;
        tmp_called_value_167 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_167, mod_consts[12]);
        if (tmp_called_value_167 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 458;
        tmp_call_result_167 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_167, &PyTuple_GET_ITEM(mod_consts[217], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_167);
        if (tmp_call_result_167 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_167);
    }
    {
        PyObject *tmp_called_value_168;
        PyObject *tmp_expression_value_168;
        PyObject *tmp_call_result_168;
        CHECK_OBJECT(var_G);
        tmp_expression_value_168 = var_G;
        tmp_called_value_168 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_168, mod_consts[12]);
        if (tmp_called_value_168 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 459;
        tmp_call_result_168 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_168, &PyTuple_GET_ITEM(mod_consts[218], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_168);
        if (tmp_call_result_168 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_168);
    }
    {
        PyObject *tmp_called_value_169;
        PyObject *tmp_expression_value_169;
        PyObject *tmp_call_result_169;
        CHECK_OBJECT(var_G);
        tmp_expression_value_169 = var_G;
        tmp_called_value_169 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_169, mod_consts[12]);
        if (tmp_called_value_169 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 460;
        tmp_call_result_169 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_169, &PyTuple_GET_ITEM(mod_consts[219], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_169);
        if (tmp_call_result_169 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_169);
    }
    {
        PyObject *tmp_called_value_170;
        PyObject *tmp_expression_value_170;
        PyObject *tmp_call_result_170;
        CHECK_OBJECT(var_G);
        tmp_expression_value_170 = var_G;
        tmp_called_value_170 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_170, mod_consts[12]);
        if (tmp_called_value_170 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 461;
        tmp_call_result_170 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_170, &PyTuple_GET_ITEM(mod_consts[220], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_170);
        if (tmp_call_result_170 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_170);
    }
    {
        PyObject *tmp_called_value_171;
        PyObject *tmp_expression_value_171;
        PyObject *tmp_call_result_171;
        CHECK_OBJECT(var_G);
        tmp_expression_value_171 = var_G;
        tmp_called_value_171 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_171, mod_consts[12]);
        if (tmp_called_value_171 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 462;
        tmp_call_result_171 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_171, &PyTuple_GET_ITEM(mod_consts[221], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_171);
        if (tmp_call_result_171 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_171);
    }
    {
        PyObject *tmp_called_value_172;
        PyObject *tmp_expression_value_172;
        PyObject *tmp_call_result_172;
        CHECK_OBJECT(var_G);
        tmp_expression_value_172 = var_G;
        tmp_called_value_172 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_172, mod_consts[12]);
        if (tmp_called_value_172 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 463;
        tmp_call_result_172 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_172, &PyTuple_GET_ITEM(mod_consts[222], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_172);
        if (tmp_call_result_172 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_172);
    }
    {
        PyObject *tmp_called_value_173;
        PyObject *tmp_expression_value_173;
        PyObject *tmp_call_result_173;
        CHECK_OBJECT(var_G);
        tmp_expression_value_173 = var_G;
        tmp_called_value_173 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_173, mod_consts[12]);
        if (tmp_called_value_173 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 464;
        tmp_call_result_173 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_173, &PyTuple_GET_ITEM(mod_consts[223], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_173);
        if (tmp_call_result_173 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_173);
    }
    {
        PyObject *tmp_called_value_174;
        PyObject *tmp_expression_value_174;
        PyObject *tmp_call_result_174;
        CHECK_OBJECT(var_G);
        tmp_expression_value_174 = var_G;
        tmp_called_value_174 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_174, mod_consts[12]);
        if (tmp_called_value_174 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 465;
        tmp_call_result_174 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_174, &PyTuple_GET_ITEM(mod_consts[224], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_174);
        if (tmp_call_result_174 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_174);
    }
    {
        PyObject *tmp_called_value_175;
        PyObject *tmp_expression_value_175;
        PyObject *tmp_call_result_175;
        CHECK_OBJECT(var_G);
        tmp_expression_value_175 = var_G;
        tmp_called_value_175 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_175, mod_consts[12]);
        if (tmp_called_value_175 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 466;
        tmp_call_result_175 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_175, &PyTuple_GET_ITEM(mod_consts[225], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_175);
        if (tmp_call_result_175 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_175);
    }
    {
        PyObject *tmp_called_value_176;
        PyObject *tmp_expression_value_176;
        PyObject *tmp_call_result_176;
        CHECK_OBJECT(var_G);
        tmp_expression_value_176 = var_G;
        tmp_called_value_176 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_176, mod_consts[12]);
        if (tmp_called_value_176 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 467;
        tmp_call_result_176 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_176, &PyTuple_GET_ITEM(mod_consts[226], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_176);
        if (tmp_call_result_176 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_176);
    }
    {
        PyObject *tmp_called_value_177;
        PyObject *tmp_expression_value_177;
        PyObject *tmp_call_result_177;
        CHECK_OBJECT(var_G);
        tmp_expression_value_177 = var_G;
        tmp_called_value_177 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_177, mod_consts[12]);
        if (tmp_called_value_177 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 468;
        tmp_call_result_177 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_177, &PyTuple_GET_ITEM(mod_consts[227], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_177);
        if (tmp_call_result_177 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_177);
    }
    {
        PyObject *tmp_called_value_178;
        PyObject *tmp_expression_value_178;
        PyObject *tmp_call_result_178;
        CHECK_OBJECT(var_G);
        tmp_expression_value_178 = var_G;
        tmp_called_value_178 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_178, mod_consts[12]);
        if (tmp_called_value_178 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 469;
        tmp_call_result_178 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_178, &PyTuple_GET_ITEM(mod_consts[228], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_178);
        if (tmp_call_result_178 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_178);
    }
    {
        PyObject *tmp_called_value_179;
        PyObject *tmp_expression_value_179;
        PyObject *tmp_call_result_179;
        CHECK_OBJECT(var_G);
        tmp_expression_value_179 = var_G;
        tmp_called_value_179 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_179, mod_consts[12]);
        if (tmp_called_value_179 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 470;
        tmp_call_result_179 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_179, &PyTuple_GET_ITEM(mod_consts[229], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_179);
        if (tmp_call_result_179 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_179);
    }
    {
        PyObject *tmp_called_value_180;
        PyObject *tmp_expression_value_180;
        PyObject *tmp_call_result_180;
        CHECK_OBJECT(var_G);
        tmp_expression_value_180 = var_G;
        tmp_called_value_180 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_180, mod_consts[12]);
        if (tmp_called_value_180 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 471;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 471;
        tmp_call_result_180 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_180, &PyTuple_GET_ITEM(mod_consts[230], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_180);
        if (tmp_call_result_180 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 471;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_180);
    }
    {
        PyObject *tmp_called_value_181;
        PyObject *tmp_expression_value_181;
        PyObject *tmp_call_result_181;
        CHECK_OBJECT(var_G);
        tmp_expression_value_181 = var_G;
        tmp_called_value_181 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_181, mod_consts[12]);
        if (tmp_called_value_181 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 472;
        tmp_call_result_181 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_181, &PyTuple_GET_ITEM(mod_consts[231], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_181);
        if (tmp_call_result_181 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 472;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_181);
    }
    {
        PyObject *tmp_called_value_182;
        PyObject *tmp_expression_value_182;
        PyObject *tmp_call_result_182;
        CHECK_OBJECT(var_G);
        tmp_expression_value_182 = var_G;
        tmp_called_value_182 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_182, mod_consts[12]);
        if (tmp_called_value_182 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 473;
        tmp_call_result_182 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_182, &PyTuple_GET_ITEM(mod_consts[232], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_182);
        if (tmp_call_result_182 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_182);
    }
    {
        PyObject *tmp_called_value_183;
        PyObject *tmp_expression_value_183;
        PyObject *tmp_call_result_183;
        CHECK_OBJECT(var_G);
        tmp_expression_value_183 = var_G;
        tmp_called_value_183 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_183, mod_consts[12]);
        if (tmp_called_value_183 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 474;
        tmp_call_result_183 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_183, &PyTuple_GET_ITEM(mod_consts[233], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_183);
        if (tmp_call_result_183 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_183);
    }
    {
        PyObject *tmp_called_value_184;
        PyObject *tmp_expression_value_184;
        PyObject *tmp_call_result_184;
        CHECK_OBJECT(var_G);
        tmp_expression_value_184 = var_G;
        tmp_called_value_184 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_184, mod_consts[12]);
        if (tmp_called_value_184 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 475;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 475;
        tmp_call_result_184 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_184, &PyTuple_GET_ITEM(mod_consts[234], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_184);
        if (tmp_call_result_184 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 475;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_184);
    }
    {
        PyObject *tmp_called_value_185;
        PyObject *tmp_expression_value_185;
        PyObject *tmp_call_result_185;
        CHECK_OBJECT(var_G);
        tmp_expression_value_185 = var_G;
        tmp_called_value_185 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_185, mod_consts[12]);
        if (tmp_called_value_185 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 476;
        tmp_call_result_185 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_185, &PyTuple_GET_ITEM(mod_consts[235], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_185);
        if (tmp_call_result_185 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_185);
    }
    {
        PyObject *tmp_called_value_186;
        PyObject *tmp_expression_value_186;
        PyObject *tmp_call_result_186;
        CHECK_OBJECT(var_G);
        tmp_expression_value_186 = var_G;
        tmp_called_value_186 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_186, mod_consts[12]);
        if (tmp_called_value_186 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 477;
        tmp_call_result_186 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_186, &PyTuple_GET_ITEM(mod_consts[236], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_186);
        if (tmp_call_result_186 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 477;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_186);
    }
    {
        PyObject *tmp_called_value_187;
        PyObject *tmp_expression_value_187;
        PyObject *tmp_call_result_187;
        CHECK_OBJECT(var_G);
        tmp_expression_value_187 = var_G;
        tmp_called_value_187 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_187, mod_consts[12]);
        if (tmp_called_value_187 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 478;
        tmp_call_result_187 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_187, &PyTuple_GET_ITEM(mod_consts[237], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_187);
        if (tmp_call_result_187 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_187);
    }
    {
        PyObject *tmp_called_value_188;
        PyObject *tmp_expression_value_188;
        PyObject *tmp_call_result_188;
        CHECK_OBJECT(var_G);
        tmp_expression_value_188 = var_G;
        tmp_called_value_188 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_188, mod_consts[12]);
        if (tmp_called_value_188 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 479;
        tmp_call_result_188 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_188, &PyTuple_GET_ITEM(mod_consts[238], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_188);
        if (tmp_call_result_188 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_188);
    }
    {
        PyObject *tmp_called_value_189;
        PyObject *tmp_expression_value_189;
        PyObject *tmp_call_result_189;
        CHECK_OBJECT(var_G);
        tmp_expression_value_189 = var_G;
        tmp_called_value_189 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_189, mod_consts[12]);
        if (tmp_called_value_189 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 480;
        tmp_call_result_189 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_189, &PyTuple_GET_ITEM(mod_consts[239], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_189);
        if (tmp_call_result_189 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 480;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_189);
    }
    {
        PyObject *tmp_called_value_190;
        PyObject *tmp_expression_value_190;
        PyObject *tmp_call_result_190;
        CHECK_OBJECT(var_G);
        tmp_expression_value_190 = var_G;
        tmp_called_value_190 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_190, mod_consts[12]);
        if (tmp_called_value_190 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 481;
        tmp_call_result_190 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_190, &PyTuple_GET_ITEM(mod_consts[240], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_190);
        if (tmp_call_result_190 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_190);
    }
    {
        PyObject *tmp_called_value_191;
        PyObject *tmp_expression_value_191;
        PyObject *tmp_call_result_191;
        CHECK_OBJECT(var_G);
        tmp_expression_value_191 = var_G;
        tmp_called_value_191 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_191, mod_consts[12]);
        if (tmp_called_value_191 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 482;
        tmp_call_result_191 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_191, &PyTuple_GET_ITEM(mod_consts[241], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_191);
        if (tmp_call_result_191 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_191);
    }
    {
        PyObject *tmp_called_value_192;
        PyObject *tmp_expression_value_192;
        PyObject *tmp_call_result_192;
        CHECK_OBJECT(var_G);
        tmp_expression_value_192 = var_G;
        tmp_called_value_192 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_192, mod_consts[12]);
        if (tmp_called_value_192 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 483;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 483;
        tmp_call_result_192 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_192, &PyTuple_GET_ITEM(mod_consts[242], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_192);
        if (tmp_call_result_192 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 483;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_192);
    }
    {
        PyObject *tmp_called_value_193;
        PyObject *tmp_expression_value_193;
        PyObject *tmp_call_result_193;
        CHECK_OBJECT(var_G);
        tmp_expression_value_193 = var_G;
        tmp_called_value_193 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_193, mod_consts[12]);
        if (tmp_called_value_193 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 484;
        tmp_call_result_193 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_193, &PyTuple_GET_ITEM(mod_consts[243], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_193);
        if (tmp_call_result_193 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_193);
    }
    {
        PyObject *tmp_called_value_194;
        PyObject *tmp_expression_value_194;
        PyObject *tmp_call_result_194;
        CHECK_OBJECT(var_G);
        tmp_expression_value_194 = var_G;
        tmp_called_value_194 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_194, mod_consts[12]);
        if (tmp_called_value_194 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 485;
        tmp_call_result_194 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_194, &PyTuple_GET_ITEM(mod_consts[244], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_194);
        if (tmp_call_result_194 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_194);
    }
    {
        PyObject *tmp_called_value_195;
        PyObject *tmp_expression_value_195;
        PyObject *tmp_call_result_195;
        CHECK_OBJECT(var_G);
        tmp_expression_value_195 = var_G;
        tmp_called_value_195 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_195, mod_consts[12]);
        if (tmp_called_value_195 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 486;
        tmp_call_result_195 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_195, &PyTuple_GET_ITEM(mod_consts[245], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_195);
        if (tmp_call_result_195 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_195);
    }
    {
        PyObject *tmp_called_value_196;
        PyObject *tmp_expression_value_196;
        PyObject *tmp_call_result_196;
        CHECK_OBJECT(var_G);
        tmp_expression_value_196 = var_G;
        tmp_called_value_196 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_196, mod_consts[12]);
        if (tmp_called_value_196 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 487;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 487;
        tmp_call_result_196 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_196, &PyTuple_GET_ITEM(mod_consts[246], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_196);
        if (tmp_call_result_196 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 487;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_196);
    }
    {
        PyObject *tmp_called_value_197;
        PyObject *tmp_expression_value_197;
        PyObject *tmp_call_result_197;
        CHECK_OBJECT(var_G);
        tmp_expression_value_197 = var_G;
        tmp_called_value_197 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_197, mod_consts[12]);
        if (tmp_called_value_197 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 488;
        tmp_call_result_197 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_197, &PyTuple_GET_ITEM(mod_consts[247], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_197);
        if (tmp_call_result_197 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_197);
    }
    {
        PyObject *tmp_called_value_198;
        PyObject *tmp_expression_value_198;
        PyObject *tmp_call_result_198;
        CHECK_OBJECT(var_G);
        tmp_expression_value_198 = var_G;
        tmp_called_value_198 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_198, mod_consts[12]);
        if (tmp_called_value_198 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 489;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 489;
        tmp_call_result_198 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_198, &PyTuple_GET_ITEM(mod_consts[248], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_198);
        if (tmp_call_result_198 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 489;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_198);
    }
    {
        PyObject *tmp_called_value_199;
        PyObject *tmp_expression_value_199;
        PyObject *tmp_call_result_199;
        CHECK_OBJECT(var_G);
        tmp_expression_value_199 = var_G;
        tmp_called_value_199 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_199, mod_consts[12]);
        if (tmp_called_value_199 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 490;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 490;
        tmp_call_result_199 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_199, &PyTuple_GET_ITEM(mod_consts[249], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_199);
        if (tmp_call_result_199 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 490;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_199);
    }
    {
        PyObject *tmp_called_value_200;
        PyObject *tmp_expression_value_200;
        PyObject *tmp_call_result_200;
        CHECK_OBJECT(var_G);
        tmp_expression_value_200 = var_G;
        tmp_called_value_200 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_200, mod_consts[12]);
        if (tmp_called_value_200 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 491;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 491;
        tmp_call_result_200 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_200, &PyTuple_GET_ITEM(mod_consts[250], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_200);
        if (tmp_call_result_200 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 491;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_200);
    }
    {
        PyObject *tmp_called_value_201;
        PyObject *tmp_expression_value_201;
        PyObject *tmp_call_result_201;
        CHECK_OBJECT(var_G);
        tmp_expression_value_201 = var_G;
        tmp_called_value_201 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_201, mod_consts[12]);
        if (tmp_called_value_201 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 492;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 492;
        tmp_call_result_201 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_201, &PyTuple_GET_ITEM(mod_consts[251], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_201);
        if (tmp_call_result_201 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 492;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_201);
    }
    {
        PyObject *tmp_called_value_202;
        PyObject *tmp_expression_value_202;
        PyObject *tmp_call_result_202;
        CHECK_OBJECT(var_G);
        tmp_expression_value_202 = var_G;
        tmp_called_value_202 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_202, mod_consts[12]);
        if (tmp_called_value_202 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 493;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 493;
        tmp_call_result_202 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_202, &PyTuple_GET_ITEM(mod_consts[252], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_202);
        if (tmp_call_result_202 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 493;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_202);
    }
    {
        PyObject *tmp_called_value_203;
        PyObject *tmp_expression_value_203;
        PyObject *tmp_call_result_203;
        CHECK_OBJECT(var_G);
        tmp_expression_value_203 = var_G;
        tmp_called_value_203 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_203, mod_consts[12]);
        if (tmp_called_value_203 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 494;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 494;
        tmp_call_result_203 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_203, &PyTuple_GET_ITEM(mod_consts[253], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_203);
        if (tmp_call_result_203 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 494;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_203);
    }
    {
        PyObject *tmp_called_value_204;
        PyObject *tmp_expression_value_204;
        PyObject *tmp_call_result_204;
        CHECK_OBJECT(var_G);
        tmp_expression_value_204 = var_G;
        tmp_called_value_204 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_204, mod_consts[12]);
        if (tmp_called_value_204 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 495;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 495;
        tmp_call_result_204 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_204, &PyTuple_GET_ITEM(mod_consts[254], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_204);
        if (tmp_call_result_204 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 495;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_204);
    }
    {
        PyObject *tmp_called_value_205;
        PyObject *tmp_expression_value_205;
        PyObject *tmp_call_result_205;
        CHECK_OBJECT(var_G);
        tmp_expression_value_205 = var_G;
        tmp_called_value_205 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_205, mod_consts[12]);
        if (tmp_called_value_205 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 496;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 496;
        tmp_call_result_205 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_205, &PyTuple_GET_ITEM(mod_consts[255], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_205);
        if (tmp_call_result_205 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 496;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_205);
    }
    {
        PyObject *tmp_called_value_206;
        PyObject *tmp_expression_value_206;
        PyObject *tmp_call_result_206;
        CHECK_OBJECT(var_G);
        tmp_expression_value_206 = var_G;
        tmp_called_value_206 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_206, mod_consts[12]);
        if (tmp_called_value_206 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 497;
        tmp_call_result_206 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_206, &PyTuple_GET_ITEM(mod_consts[256], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_206);
        if (tmp_call_result_206 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_206);
    }
    {
        PyObject *tmp_called_value_207;
        PyObject *tmp_expression_value_207;
        PyObject *tmp_call_result_207;
        CHECK_OBJECT(var_G);
        tmp_expression_value_207 = var_G;
        tmp_called_value_207 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_207, mod_consts[12]);
        if (tmp_called_value_207 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 498;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 498;
        tmp_call_result_207 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_207, &PyTuple_GET_ITEM(mod_consts[257], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_207);
        if (tmp_call_result_207 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 498;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_207);
    }
    {
        PyObject *tmp_called_value_208;
        PyObject *tmp_expression_value_208;
        PyObject *tmp_call_result_208;
        CHECK_OBJECT(var_G);
        tmp_expression_value_208 = var_G;
        tmp_called_value_208 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_208, mod_consts[12]);
        if (tmp_called_value_208 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 499;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 499;
        tmp_call_result_208 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_208, &PyTuple_GET_ITEM(mod_consts[258], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_208);
        if (tmp_call_result_208 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 499;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_208);
    }
    {
        PyObject *tmp_called_value_209;
        PyObject *tmp_expression_value_209;
        PyObject *tmp_call_result_209;
        CHECK_OBJECT(var_G);
        tmp_expression_value_209 = var_G;
        tmp_called_value_209 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_209, mod_consts[12]);
        if (tmp_called_value_209 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 500;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 500;
        tmp_call_result_209 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_209, &PyTuple_GET_ITEM(mod_consts[259], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_209);
        if (tmp_call_result_209 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 500;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_209);
    }
    {
        PyObject *tmp_called_value_210;
        PyObject *tmp_expression_value_210;
        PyObject *tmp_call_result_210;
        CHECK_OBJECT(var_G);
        tmp_expression_value_210 = var_G;
        tmp_called_value_210 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_210, mod_consts[12]);
        if (tmp_called_value_210 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 501;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 501;
        tmp_call_result_210 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_210, &PyTuple_GET_ITEM(mod_consts[260], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_210);
        if (tmp_call_result_210 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 501;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_210);
    }
    {
        PyObject *tmp_called_value_211;
        PyObject *tmp_expression_value_211;
        PyObject *tmp_call_result_211;
        CHECK_OBJECT(var_G);
        tmp_expression_value_211 = var_G;
        tmp_called_value_211 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_211, mod_consts[12]);
        if (tmp_called_value_211 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 502;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 502;
        tmp_call_result_211 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_211, &PyTuple_GET_ITEM(mod_consts[261], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_211);
        if (tmp_call_result_211 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 502;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_211);
    }
    {
        PyObject *tmp_called_value_212;
        PyObject *tmp_expression_value_212;
        PyObject *tmp_call_result_212;
        CHECK_OBJECT(var_G);
        tmp_expression_value_212 = var_G;
        tmp_called_value_212 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_212, mod_consts[12]);
        if (tmp_called_value_212 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 503;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 503;
        tmp_call_result_212 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_212, &PyTuple_GET_ITEM(mod_consts[262], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_212);
        if (tmp_call_result_212 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 503;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_212);
    }
    {
        PyObject *tmp_called_value_213;
        PyObject *tmp_expression_value_213;
        PyObject *tmp_call_result_213;
        CHECK_OBJECT(var_G);
        tmp_expression_value_213 = var_G;
        tmp_called_value_213 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_213, mod_consts[12]);
        if (tmp_called_value_213 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 504;
        tmp_call_result_213 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_213, &PyTuple_GET_ITEM(mod_consts[263], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_213);
        if (tmp_call_result_213 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_213);
    }
    {
        PyObject *tmp_called_value_214;
        PyObject *tmp_expression_value_214;
        PyObject *tmp_call_result_214;
        CHECK_OBJECT(var_G);
        tmp_expression_value_214 = var_G;
        tmp_called_value_214 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_214, mod_consts[12]);
        if (tmp_called_value_214 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 505;
        tmp_call_result_214 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_214, &PyTuple_GET_ITEM(mod_consts[264], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_214);
        if (tmp_call_result_214 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_214);
    }
    {
        PyObject *tmp_called_value_215;
        PyObject *tmp_expression_value_215;
        PyObject *tmp_call_result_215;
        CHECK_OBJECT(var_G);
        tmp_expression_value_215 = var_G;
        tmp_called_value_215 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_215, mod_consts[12]);
        if (tmp_called_value_215 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 506;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 506;
        tmp_call_result_215 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_215, &PyTuple_GET_ITEM(mod_consts[265], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_215);
        if (tmp_call_result_215 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 506;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_215);
    }
    {
        PyObject *tmp_called_value_216;
        PyObject *tmp_expression_value_216;
        PyObject *tmp_call_result_216;
        CHECK_OBJECT(var_G);
        tmp_expression_value_216 = var_G;
        tmp_called_value_216 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_216, mod_consts[12]);
        if (tmp_called_value_216 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 507;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 507;
        tmp_call_result_216 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_216, &PyTuple_GET_ITEM(mod_consts[266], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_216);
        if (tmp_call_result_216 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 507;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_216);
    }
    {
        PyObject *tmp_called_value_217;
        PyObject *tmp_expression_value_217;
        PyObject *tmp_call_result_217;
        CHECK_OBJECT(var_G);
        tmp_expression_value_217 = var_G;
        tmp_called_value_217 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_217, mod_consts[12]);
        if (tmp_called_value_217 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 508;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 508;
        tmp_call_result_217 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_217, &PyTuple_GET_ITEM(mod_consts[267], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_217);
        if (tmp_call_result_217 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 508;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_217);
    }
    {
        PyObject *tmp_called_value_218;
        PyObject *tmp_expression_value_218;
        PyObject *tmp_call_result_218;
        CHECK_OBJECT(var_G);
        tmp_expression_value_218 = var_G;
        tmp_called_value_218 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_218, mod_consts[12]);
        if (tmp_called_value_218 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 509;
        tmp_call_result_218 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_218, &PyTuple_GET_ITEM(mod_consts[268], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_218);
        if (tmp_call_result_218 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_218);
    }
    {
        PyObject *tmp_called_value_219;
        PyObject *tmp_expression_value_219;
        PyObject *tmp_call_result_219;
        CHECK_OBJECT(var_G);
        tmp_expression_value_219 = var_G;
        tmp_called_value_219 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_219, mod_consts[12]);
        if (tmp_called_value_219 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 510;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 510;
        tmp_call_result_219 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_219, &PyTuple_GET_ITEM(mod_consts[269], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_219);
        if (tmp_call_result_219 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 510;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_219);
    }
    {
        PyObject *tmp_called_value_220;
        PyObject *tmp_expression_value_220;
        PyObject *tmp_call_result_220;
        CHECK_OBJECT(var_G);
        tmp_expression_value_220 = var_G;
        tmp_called_value_220 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_220, mod_consts[12]);
        if (tmp_called_value_220 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 511;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 511;
        tmp_call_result_220 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_220, &PyTuple_GET_ITEM(mod_consts[270], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_220);
        if (tmp_call_result_220 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 511;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_220);
    }
    {
        PyObject *tmp_called_value_221;
        PyObject *tmp_expression_value_221;
        PyObject *tmp_call_result_221;
        CHECK_OBJECT(var_G);
        tmp_expression_value_221 = var_G;
        tmp_called_value_221 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_221, mod_consts[12]);
        if (tmp_called_value_221 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 512;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 512;
        tmp_call_result_221 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_221, &PyTuple_GET_ITEM(mod_consts[271], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_221);
        if (tmp_call_result_221 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 512;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_221);
    }
    {
        PyObject *tmp_called_value_222;
        PyObject *tmp_expression_value_222;
        PyObject *tmp_call_result_222;
        CHECK_OBJECT(var_G);
        tmp_expression_value_222 = var_G;
        tmp_called_value_222 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_222, mod_consts[12]);
        if (tmp_called_value_222 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 513;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 513;
        tmp_call_result_222 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_222, &PyTuple_GET_ITEM(mod_consts[272], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_222);
        if (tmp_call_result_222 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 513;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_222);
    }
    {
        PyObject *tmp_called_value_223;
        PyObject *tmp_expression_value_223;
        PyObject *tmp_call_result_223;
        CHECK_OBJECT(var_G);
        tmp_expression_value_223 = var_G;
        tmp_called_value_223 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_223, mod_consts[12]);
        if (tmp_called_value_223 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 514;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 514;
        tmp_call_result_223 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_223, &PyTuple_GET_ITEM(mod_consts[273], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_223);
        if (tmp_call_result_223 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 514;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_223);
    }
    {
        PyObject *tmp_called_value_224;
        PyObject *tmp_expression_value_224;
        PyObject *tmp_call_result_224;
        CHECK_OBJECT(var_G);
        tmp_expression_value_224 = var_G;
        tmp_called_value_224 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_224, mod_consts[12]);
        if (tmp_called_value_224 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 515;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 515;
        tmp_call_result_224 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_224, &PyTuple_GET_ITEM(mod_consts[274], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_224);
        if (tmp_call_result_224 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 515;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_224);
    }
    {
        PyObject *tmp_called_value_225;
        PyObject *tmp_expression_value_225;
        PyObject *tmp_call_result_225;
        CHECK_OBJECT(var_G);
        tmp_expression_value_225 = var_G;
        tmp_called_value_225 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_225, mod_consts[12]);
        if (tmp_called_value_225 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 516;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 516;
        tmp_call_result_225 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_225, &PyTuple_GET_ITEM(mod_consts[275], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_225);
        if (tmp_call_result_225 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 516;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_225);
    }
    {
        PyObject *tmp_called_value_226;
        PyObject *tmp_expression_value_226;
        PyObject *tmp_call_result_226;
        CHECK_OBJECT(var_G);
        tmp_expression_value_226 = var_G;
        tmp_called_value_226 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_226, mod_consts[12]);
        if (tmp_called_value_226 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 517;
        tmp_call_result_226 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_226, &PyTuple_GET_ITEM(mod_consts[276], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_226);
        if (tmp_call_result_226 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_226);
    }
    {
        PyObject *tmp_called_value_227;
        PyObject *tmp_expression_value_227;
        PyObject *tmp_call_result_227;
        CHECK_OBJECT(var_G);
        tmp_expression_value_227 = var_G;
        tmp_called_value_227 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_227, mod_consts[12]);
        if (tmp_called_value_227 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 518;
        tmp_call_result_227 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_227, &PyTuple_GET_ITEM(mod_consts[277], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_227);
        if (tmp_call_result_227 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 518;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_227);
    }
    {
        PyObject *tmp_called_value_228;
        PyObject *tmp_expression_value_228;
        PyObject *tmp_call_result_228;
        CHECK_OBJECT(var_G);
        tmp_expression_value_228 = var_G;
        tmp_called_value_228 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_228, mod_consts[12]);
        if (tmp_called_value_228 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 519;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 519;
        tmp_call_result_228 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_228, &PyTuple_GET_ITEM(mod_consts[278], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_228);
        if (tmp_call_result_228 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 519;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_228);
    }
    {
        PyObject *tmp_called_value_229;
        PyObject *tmp_expression_value_229;
        PyObject *tmp_call_result_229;
        CHECK_OBJECT(var_G);
        tmp_expression_value_229 = var_G;
        tmp_called_value_229 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_229, mod_consts[12]);
        if (tmp_called_value_229 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 520;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 520;
        tmp_call_result_229 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_229, &PyTuple_GET_ITEM(mod_consts[279], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_229);
        if (tmp_call_result_229 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 520;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_229);
    }
    {
        PyObject *tmp_called_value_230;
        PyObject *tmp_expression_value_230;
        PyObject *tmp_call_result_230;
        CHECK_OBJECT(var_G);
        tmp_expression_value_230 = var_G;
        tmp_called_value_230 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_230, mod_consts[12]);
        if (tmp_called_value_230 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 521;
        tmp_call_result_230 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_230, &PyTuple_GET_ITEM(mod_consts[280], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_230);
        if (tmp_call_result_230 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 521;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_230);
    }
    {
        PyObject *tmp_called_value_231;
        PyObject *tmp_expression_value_231;
        PyObject *tmp_call_result_231;
        CHECK_OBJECT(var_G);
        tmp_expression_value_231 = var_G;
        tmp_called_value_231 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_231, mod_consts[12]);
        if (tmp_called_value_231 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 522;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 522;
        tmp_call_result_231 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_231, &PyTuple_GET_ITEM(mod_consts[281], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_231);
        if (tmp_call_result_231 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 522;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_231);
    }
    {
        PyObject *tmp_called_value_232;
        PyObject *tmp_expression_value_232;
        PyObject *tmp_call_result_232;
        CHECK_OBJECT(var_G);
        tmp_expression_value_232 = var_G;
        tmp_called_value_232 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_232, mod_consts[12]);
        if (tmp_called_value_232 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 523;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 523;
        tmp_call_result_232 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_232, &PyTuple_GET_ITEM(mod_consts[282], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_232);
        if (tmp_call_result_232 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 523;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_232);
    }
    {
        PyObject *tmp_called_value_233;
        PyObject *tmp_expression_value_233;
        PyObject *tmp_call_result_233;
        CHECK_OBJECT(var_G);
        tmp_expression_value_233 = var_G;
        tmp_called_value_233 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_233, mod_consts[12]);
        if (tmp_called_value_233 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 524;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 524;
        tmp_call_result_233 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_233, &PyTuple_GET_ITEM(mod_consts[283], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_233);
        if (tmp_call_result_233 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 524;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_233);
    }
    {
        PyObject *tmp_called_value_234;
        PyObject *tmp_expression_value_234;
        PyObject *tmp_call_result_234;
        CHECK_OBJECT(var_G);
        tmp_expression_value_234 = var_G;
        tmp_called_value_234 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_234, mod_consts[12]);
        if (tmp_called_value_234 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 525;
        tmp_call_result_234 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_234, &PyTuple_GET_ITEM(mod_consts[284], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_234);
        if (tmp_call_result_234 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_234);
    }
    {
        PyObject *tmp_called_value_235;
        PyObject *tmp_expression_value_235;
        PyObject *tmp_call_result_235;
        CHECK_OBJECT(var_G);
        tmp_expression_value_235 = var_G;
        tmp_called_value_235 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_235, mod_consts[12]);
        if (tmp_called_value_235 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 526;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 526;
        tmp_call_result_235 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_235, &PyTuple_GET_ITEM(mod_consts[285], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_235);
        if (tmp_call_result_235 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 526;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_235);
    }
    {
        PyObject *tmp_called_value_236;
        PyObject *tmp_expression_value_236;
        PyObject *tmp_call_result_236;
        CHECK_OBJECT(var_G);
        tmp_expression_value_236 = var_G;
        tmp_called_value_236 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_236, mod_consts[12]);
        if (tmp_called_value_236 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 527;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 527;
        tmp_call_result_236 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_236, &PyTuple_GET_ITEM(mod_consts[286], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_236);
        if (tmp_call_result_236 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 527;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_236);
    }
    {
        PyObject *tmp_called_value_237;
        PyObject *tmp_expression_value_237;
        PyObject *tmp_call_result_237;
        CHECK_OBJECT(var_G);
        tmp_expression_value_237 = var_G;
        tmp_called_value_237 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_237, mod_consts[12]);
        if (tmp_called_value_237 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 528;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 528;
        tmp_call_result_237 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_237, &PyTuple_GET_ITEM(mod_consts[287], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_237);
        if (tmp_call_result_237 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 528;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_237);
    }
    {
        PyObject *tmp_called_value_238;
        PyObject *tmp_expression_value_238;
        PyObject *tmp_call_result_238;
        CHECK_OBJECT(var_G);
        tmp_expression_value_238 = var_G;
        tmp_called_value_238 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_238, mod_consts[12]);
        if (tmp_called_value_238 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 529;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 529;
        tmp_call_result_238 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_238, &PyTuple_GET_ITEM(mod_consts[288], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_238);
        if (tmp_call_result_238 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 529;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_238);
    }
    {
        PyObject *tmp_called_value_239;
        PyObject *tmp_expression_value_239;
        PyObject *tmp_call_result_239;
        CHECK_OBJECT(var_G);
        tmp_expression_value_239 = var_G;
        tmp_called_value_239 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_239, mod_consts[12]);
        if (tmp_called_value_239 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 530;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 530;
        tmp_call_result_239 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_239, &PyTuple_GET_ITEM(mod_consts[289], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_239);
        if (tmp_call_result_239 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 530;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_239);
    }
    {
        PyObject *tmp_called_value_240;
        PyObject *tmp_expression_value_240;
        PyObject *tmp_call_result_240;
        CHECK_OBJECT(var_G);
        tmp_expression_value_240 = var_G;
        tmp_called_value_240 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_240, mod_consts[12]);
        if (tmp_called_value_240 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 531;
        tmp_call_result_240 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_240, &PyTuple_GET_ITEM(mod_consts[290], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_240);
        if (tmp_call_result_240 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_240);
    }
    {
        PyObject *tmp_called_value_241;
        PyObject *tmp_expression_value_241;
        PyObject *tmp_call_result_241;
        CHECK_OBJECT(var_G);
        tmp_expression_value_241 = var_G;
        tmp_called_value_241 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_241, mod_consts[12]);
        if (tmp_called_value_241 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 532;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 532;
        tmp_call_result_241 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_241, &PyTuple_GET_ITEM(mod_consts[291], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_241);
        if (tmp_call_result_241 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 532;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_241);
    }
    {
        PyObject *tmp_called_value_242;
        PyObject *tmp_expression_value_242;
        PyObject *tmp_call_result_242;
        CHECK_OBJECT(var_G);
        tmp_expression_value_242 = var_G;
        tmp_called_value_242 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_242, mod_consts[12]);
        if (tmp_called_value_242 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 533;
        tmp_call_result_242 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_242, &PyTuple_GET_ITEM(mod_consts[292], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_242);
        if (tmp_call_result_242 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_242);
    }
    {
        PyObject *tmp_called_value_243;
        PyObject *tmp_expression_value_243;
        PyObject *tmp_call_result_243;
        CHECK_OBJECT(var_G);
        tmp_expression_value_243 = var_G;
        tmp_called_value_243 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_243, mod_consts[12]);
        if (tmp_called_value_243 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 534;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 534;
        tmp_call_result_243 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_243, &PyTuple_GET_ITEM(mod_consts[293], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_243);
        if (tmp_call_result_243 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 534;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_243);
    }
    {
        PyObject *tmp_called_value_244;
        PyObject *tmp_expression_value_244;
        PyObject *tmp_call_result_244;
        CHECK_OBJECT(var_G);
        tmp_expression_value_244 = var_G;
        tmp_called_value_244 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_244, mod_consts[12]);
        if (tmp_called_value_244 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 535;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 535;
        tmp_call_result_244 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_244, &PyTuple_GET_ITEM(mod_consts[294], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_244);
        if (tmp_call_result_244 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 535;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_244);
    }
    {
        PyObject *tmp_called_value_245;
        PyObject *tmp_expression_value_245;
        PyObject *tmp_call_result_245;
        CHECK_OBJECT(var_G);
        tmp_expression_value_245 = var_G;
        tmp_called_value_245 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_245, mod_consts[12]);
        if (tmp_called_value_245 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 536;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 536;
        tmp_call_result_245 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_245, &PyTuple_GET_ITEM(mod_consts[295], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_245);
        if (tmp_call_result_245 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 536;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_245);
    }
    {
        PyObject *tmp_called_value_246;
        PyObject *tmp_expression_value_246;
        PyObject *tmp_call_result_246;
        CHECK_OBJECT(var_G);
        tmp_expression_value_246 = var_G;
        tmp_called_value_246 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_246, mod_consts[12]);
        if (tmp_called_value_246 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 537;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 537;
        tmp_call_result_246 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_246, &PyTuple_GET_ITEM(mod_consts[296], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_246);
        if (tmp_call_result_246 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 537;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_246);
    }
    {
        PyObject *tmp_called_value_247;
        PyObject *tmp_expression_value_247;
        PyObject *tmp_call_result_247;
        CHECK_OBJECT(var_G);
        tmp_expression_value_247 = var_G;
        tmp_called_value_247 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_247, mod_consts[12]);
        if (tmp_called_value_247 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 538;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 538;
        tmp_call_result_247 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_247, &PyTuple_GET_ITEM(mod_consts[297], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_247);
        if (tmp_call_result_247 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 538;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_247);
    }
    {
        PyObject *tmp_called_value_248;
        PyObject *tmp_expression_value_248;
        PyObject *tmp_call_result_248;
        CHECK_OBJECT(var_G);
        tmp_expression_value_248 = var_G;
        tmp_called_value_248 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_248, mod_consts[12]);
        if (tmp_called_value_248 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 539;
        tmp_call_result_248 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_248, &PyTuple_GET_ITEM(mod_consts[298], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_248);
        if (tmp_call_result_248 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 539;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_248);
    }
    {
        PyObject *tmp_called_value_249;
        PyObject *tmp_expression_value_249;
        PyObject *tmp_call_result_249;
        CHECK_OBJECT(var_G);
        tmp_expression_value_249 = var_G;
        tmp_called_value_249 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_249, mod_consts[12]);
        if (tmp_called_value_249 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 540;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 540;
        tmp_call_result_249 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_249, &PyTuple_GET_ITEM(mod_consts[299], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_249);
        if (tmp_call_result_249 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 540;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_249);
    }
    {
        PyObject *tmp_called_value_250;
        PyObject *tmp_expression_value_250;
        PyObject *tmp_call_result_250;
        CHECK_OBJECT(var_G);
        tmp_expression_value_250 = var_G;
        tmp_called_value_250 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_250, mod_consts[12]);
        if (tmp_called_value_250 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 541;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 541;
        tmp_call_result_250 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_250, &PyTuple_GET_ITEM(mod_consts[300], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_250);
        if (tmp_call_result_250 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 541;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_250);
    }
    {
        PyObject *tmp_called_value_251;
        PyObject *tmp_expression_value_251;
        PyObject *tmp_call_result_251;
        CHECK_OBJECT(var_G);
        tmp_expression_value_251 = var_G;
        tmp_called_value_251 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_251, mod_consts[12]);
        if (tmp_called_value_251 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 542;
        tmp_call_result_251 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_251, &PyTuple_GET_ITEM(mod_consts[301], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_251);
        if (tmp_call_result_251 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_251);
    }
    {
        PyObject *tmp_called_value_252;
        PyObject *tmp_expression_value_252;
        PyObject *tmp_call_result_252;
        CHECK_OBJECT(var_G);
        tmp_expression_value_252 = var_G;
        tmp_called_value_252 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_252, mod_consts[12]);
        if (tmp_called_value_252 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 543;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 543;
        tmp_call_result_252 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_252, &PyTuple_GET_ITEM(mod_consts[302], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_252);
        if (tmp_call_result_252 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 543;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_252);
    }
    {
        PyObject *tmp_called_value_253;
        PyObject *tmp_expression_value_253;
        PyObject *tmp_call_result_253;
        CHECK_OBJECT(var_G);
        tmp_expression_value_253 = var_G;
        tmp_called_value_253 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_253, mod_consts[12]);
        if (tmp_called_value_253 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 544;
        tmp_call_result_253 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_253, &PyTuple_GET_ITEM(mod_consts[303], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_253);
        if (tmp_call_result_253 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_253);
    }
    {
        PyObject *tmp_called_value_254;
        PyObject *tmp_expression_value_254;
        PyObject *tmp_call_result_254;
        CHECK_OBJECT(var_G);
        tmp_expression_value_254 = var_G;
        tmp_called_value_254 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_254, mod_consts[12]);
        if (tmp_called_value_254 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 545;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1576e603a9ba92bb7e4d328382c60c50->m_frame.f_lineno = 545;
        tmp_call_result_254 = CALL_FUNCTION_WITH_ARGS2_VECTORCALL(tstate, tmp_called_value_254, &PyTuple_GET_ITEM(mod_consts[304], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_254);
        if (tmp_call_result_254 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 545;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_254);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1576e603a9ba92bb7e4d328382c60c50, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1576e603a9ba92bb7e4d328382c60c50->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1576e603a9ba92bb7e4d328382c60c50, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1576e603a9ba92bb7e4d328382c60c50,
        type_description_1,
        var_G
    );


    // Release cached frame if used for exception.
    if (frame_1576e603a9ba92bb7e4d328382c60c50 == cache_frame_1576e603a9ba92bb7e4d328382c60c50) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1576e603a9ba92bb7e4d328382c60c50);
        cache_frame_1576e603a9ba92bb7e4d328382c60c50 = NULL;
    }

    assertFrameObject(frame_1576e603a9ba92bb7e4d328382c60c50);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_G);
    tmp_return_value = var_G;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_G);
    Py_DECREF(var_G);
    var_G = NULL;
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

    Py_XDECREF(var_G);
    var_G = NULL;
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



static PyObject *MAKE_FUNCTION_networkx$generators$social$$$function__1_karate_club_graph() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_networkx$generators$social$$$function__1_karate_club_graph,
        mod_consts[320],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_96b675af87b4a45abb1980b66f3bf7da,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_networkx$generators$social,
        mod_consts[19],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_networkx$generators$social$$$function__2_davis_southern_women_graph() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_networkx$generators$social$$$function__2_davis_southern_women_graph,
        mod_consts[321],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b52bae8e04964b165c61533fd3fb341e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_networkx$generators$social,
        mod_consts[29],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_networkx$generators$social$$$function__3_florentine_families_graph() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_networkx$generators$social$$$function__3_florentine_families_graph,
        mod_consts[322],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_248290f67f950d16d2a756c4b3116258,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_networkx$generators$social,
        mod_consts[50],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_networkx$generators$social$$$function__4_les_miserables_graph() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_networkx$generators$social$$$function__4_les_miserables_graph,
        mod_consts[323],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1576e603a9ba92bb7e4d328382c60c50,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_networkx$generators$social,
        mod_consts[305],
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

static function_impl_code const function_table_networkx$generators$social[] = {
    impl_networkx$generators$social$$$function__1_karate_club_graph,
    impl_networkx$generators$social$$$function__2_davis_southern_women_graph,
    impl_networkx$generators$social$$$function__3_florentine_families_graph,
    impl_networkx$generators$social$$$function__4_les_miserables_graph,
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

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_networkx$generators$social);

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
        module_networkx$generators$social,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        function_table_networkx$generators$social,
        sizeof(function_table_networkx$generators$social) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_networkx$generators$social(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("networkx$generators$social");

    // Store the module for future use.
    module_networkx$generators$social = module;

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
        PRINT_STRING("networkx$generators$social: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("networkx$generators$social: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initnetworkx$generators$social\n");

    moduledict_networkx$generators$social = MODULE_DICT(module_networkx$generators$social);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_networkx$generators$social,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_networkx$generators$social,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[329]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_networkx$generators$social, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_networkx$generators$social,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_networkx$generators$social, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_networkx$generators$social,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_networkx$generators$social, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_networkx$generators$social,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_networkx$generators$social);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_networkx$generators$social, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_networkx$generators$social, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_networkx$generators$social, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_networkx$generators$social, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_networkx$generators$social);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_networkx$generators$social, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_b98c702cea466dafd8fcc79ff15f587f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[306];
        UPDATE_STRING_DICT0(moduledict_networkx$generators$social, (Nuitka_StringObject *)mod_consts[307], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_networkx$generators$social, (Nuitka_StringObject *)mod_consts[308], tmp_assign_source_2);
    }
    frame_b98c702cea466dafd8fcc79ff15f587f = MAKE_MODULE_FRAME(codeobj_b98c702cea466dafd8fcc79ff15f587f, module_networkx$generators$social);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_b98c702cea466dafd8fcc79ff15f587f);
    assert(Py_REFCNT(frame_b98c702cea466dafd8fcc79ff15f587f) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_networkx$generators$social, (Nuitka_StringObject *)mod_consts[309]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[309]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[310], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_networkx$generators$social, (Nuitka_StringObject *)mod_consts[309]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[309]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[311], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_networkx$generators$social, (Nuitka_StringObject *)mod_consts[312], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[313];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_networkx$generators$social;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[314];
        frame_b98c702cea466dafd8fcc79ff15f587f->m_frame.f_lineno = 4;
        tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_networkx$generators$social, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = MAKE_LIST4(mod_consts[315]);
        UPDATE_STRING_DICT1(moduledict_networkx$generators$social, (Nuitka_StringObject *)mod_consts[316], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_networkx$generators$social, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[317]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        frame_b98c702cea466dafd8fcc79ff15f587f->m_frame.f_lineno = 14;
        tmp_called_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_2, &PyTuple_GET_ITEM(mod_consts[318], 0), mod_consts[319]);
        Py_DECREF(tmp_called_value_2);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_1 = MAKE_FUNCTION_networkx$generators$social$$$function__1_karate_club_graph();

        frame_b98c702cea466dafd8fcc79ff15f587f->m_frame.f_lineno = 14;
        tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_networkx$generators$social, (Nuitka_StringObject *)mod_consts[320], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_networkx$generators$social, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[317]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        frame_b98c702cea466dafd8fcc79ff15f587f->m_frame.f_lineno = 96;
        tmp_called_value_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_4, &PyTuple_GET_ITEM(mod_consts[318], 0), mod_consts[319]);
        Py_DECREF(tmp_called_value_4);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_2 = MAKE_FUNCTION_networkx$generators$social$$$function__2_davis_southern_women_graph();

        frame_b98c702cea466dafd8fcc79ff15f587f->m_frame.f_lineno = 96;
        tmp_assign_source_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_networkx$generators$social, (Nuitka_StringObject *)mod_consts[321], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_5;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_3;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_networkx$generators$social, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;

            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[317]);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;

            goto frame_exception_exit_1;
        }
        frame_b98c702cea466dafd8fcc79ff15f587f->m_frame.f_lineno = 247;
        tmp_called_value_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_6, &PyTuple_GET_ITEM(mod_consts[318], 0), mod_consts[319]);
        Py_DECREF(tmp_called_value_6);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_3 = MAKE_FUNCTION_networkx$generators$social$$$function__3_florentine_families_graph();

        frame_b98c702cea466dafd8fcc79ff15f587f->m_frame.f_lineno = 247;
        tmp_assign_source_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_networkx$generators$social, (Nuitka_StringObject *)mod_consts[322], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_7;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_4;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_networkx$generators$social, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[317]);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto frame_exception_exit_1;
        }
        frame_b98c702cea466dafd8fcc79ff15f587f->m_frame.f_lineno = 281;
        tmp_called_value_7 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_8, &PyTuple_GET_ITEM(mod_consts[318], 0), mod_consts[319]);
        Py_DECREF(tmp_called_value_8);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_4 = MAKE_FUNCTION_networkx$generators$social$$$function__4_les_miserables_graph();

        frame_b98c702cea466dafd8fcc79ff15f587f->m_frame.f_lineno = 281;
        tmp_assign_source_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_networkx$generators$social, (Nuitka_StringObject *)mod_consts[323], tmp_assign_source_9);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b98c702cea466dafd8fcc79ff15f587f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b98c702cea466dafd8fcc79ff15f587f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b98c702cea466dafd8fcc79ff15f587f, exception_lineno);
    }



    assertFrameObject(frame_b98c702cea466dafd8fcc79ff15f587f);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("networkx$generators$social", false);

    Py_INCREF(module_networkx$generators$social);
    return module_networkx$generators$social;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_networkx$generators$social, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("networkx$generators$social", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
