/* Generated code for Python module 'prompt_toolkit$key_binding$bindings$basic'
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

/* The "module_prompt_toolkit$key_binding$bindings$basic" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_prompt_toolkit$key_binding$bindings$basic;
PyDictObject *moduledict_prompt_toolkit$key_binding$bindings$basic;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[215];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[215];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("prompt_toolkit.key_binding.bindings.basic"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 215; i++) {
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
void checkModuleConstants_prompt_toolkit$key_binding$bindings$basic(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 215; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_bcb6cac9e810ca5ecb21663716be4393;
static PyCodeObject *codeobj_193d39c961612dda17b22251bb194eb3;
static PyCodeObject *codeobj_6858ba3a68e11fad3c2c73f8499ef886;
static PyCodeObject *codeobj_db18a849cb1828b9ad64c9b8d2da7755;
static PyCodeObject *codeobj_6a338c09b77327b494d9e724c5bdf2ba;
static PyCodeObject *codeobj_979d42412083397a26113972ba68063e;
static PyCodeObject *codeobj_05939fb40126c00bb7c378758ed7d71d;
static PyCodeObject *codeobj_fbf1374f2fd7b21505f3052efe9b78f2;
static PyCodeObject *codeobj_60b6e9759b62f7c1b3683a7ad399bb1d;
static PyCodeObject *codeobj_fdd9dec57635b378121a83b572b45af6;
static PyCodeObject *codeobj_fc5b85983319aef6c1999586cf80b305;
static PyCodeObject *codeobj_7ec4f9768a0f258a5446586f1f817c46;
static PyCodeObject *codeobj_f61769e795f82a3275ac2356068ed36d;
static PyCodeObject *codeobj_00d6667bbf727d69ced472e94516a678;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[209]); CHECK_OBJECT(module_filename_obj);
    codeobj_bcb6cac9e810ca5ecb21663716be4393 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts[210], mod_consts[210], NULL, NULL, 0, 0, 0);
    codeobj_193d39c961612dda17b22251bb194eb3 = MAKE_CODE_OBJECT(module_filename_obj, 209, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[139], mod_consts[139], mod_consts[211], NULL, 1, 0, 0);
    codeobj_6858ba3a68e11fad3c2c73f8499ef886 = MAKE_CODE_OBJECT(module_filename_obj, 205, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[137], mod_consts[137], mod_consts[212], NULL, 1, 0, 0);
    codeobj_db18a849cb1828b9ad64c9b8d2da7755 = MAKE_CODE_OBJECT(module_filename_obj, 201, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[135], mod_consts[135], mod_consts[212], NULL, 1, 0, 0);
    codeobj_6a338c09b77327b494d9e724c5bdf2ba = MAKE_CODE_OBJECT(module_filename_obj, 127, CO_FUTURE_ANNOTATIONS, mod_consts[99], mod_consts[99], mod_consts[212], NULL, 1, 0, 0);
    codeobj_979d42412083397a26113972ba68063e = MAKE_CODE_OBJECT(module_filename_obj, 216, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[142], mod_consts[142], mod_consts[212], NULL, 1, 0, 0);
    codeobj_05939fb40126c00bb7c378758ed7d71d = MAKE_CODE_OBJECT(module_filename_obj, 248, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[152], mod_consts[152], mod_consts[212], NULL, 1, 0, 0);
    codeobj_fbf1374f2fd7b21505f3052efe9b78f2 = MAKE_CODE_OBJECT(module_filename_obj, 183, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[130], mod_consts[130], mod_consts[212], NULL, 1, 0, 0);
    codeobj_60b6e9759b62f7c1b3683a7ad399bb1d = MAKE_CODE_OBJECT(module_filename_obj, 190, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[133], mod_consts[133], mod_consts[212], NULL, 1, 0, 0);
    codeobj_fdd9dec57635b378121a83b572b45af6 = MAKE_CODE_OBJECT(module_filename_obj, 229, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[146], mod_consts[146], mod_consts[211], NULL, 1, 0, 0);
    codeobj_fc5b85983319aef6c1999586cf80b305 = MAKE_CODE_OBJECT(module_filename_obj, 175, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[125], mod_consts[125], NULL, NULL, 0, 0, 0);
    codeobj_7ec4f9768a0f258a5446586f1f817c46 = MAKE_CODE_OBJECT(module_filename_obj, 26, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[112], mod_consts[112], mod_consts[212], NULL, 1, 0, 0);
    codeobj_f61769e795f82a3275ac2356068ed36d = MAKE_CODE_OBJECT(module_filename_obj, 244, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[148], mod_consts[148], NULL, NULL, 0, 0, 0);
    codeobj_00d6667bbf727d69ced472e94516a678 = MAKE_CODE_OBJECT(module_filename_obj, 32, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[204], mod_consts[204], mod_consts[213], NULL, 0, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__1_if_no_repeat(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__10_in_quoted_insert(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__11__insert_text(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__1__ignore(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__2_has_text_before_cursor(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__3__newline(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__4__newline2(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__5__go_up(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__6__go_down(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__7__cut(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__8__insert_ctrl_z(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__9__paste(PyObject *annotations);


// The module function definitions.
static PyObject *impl_prompt_toolkit$key_binding$bindings$basic$$$function__1_if_no_repeat(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    struct Nuitka_FrameObject *frame_7ec4f9768a0f258a5446586f1f817c46;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_7ec4f9768a0f258a5446586f1f817c46 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7ec4f9768a0f258a5446586f1f817c46)) {
        Py_XDECREF(cache_frame_7ec4f9768a0f258a5446586f1f817c46);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7ec4f9768a0f258a5446586f1f817c46 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7ec4f9768a0f258a5446586f1f817c46 = MAKE_FUNCTION_FRAME(tstate, codeobj_7ec4f9768a0f258a5446586f1f817c46, module_prompt_toolkit$key_binding$bindings$basic, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7ec4f9768a0f258a5446586f1f817c46->m_type_description == NULL);
    frame_7ec4f9768a0f258a5446586f1f817c46 = cache_frame_7ec4f9768a0f258a5446586f1f817c46;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_7ec4f9768a0f258a5446586f1f817c46);
    assert(Py_REFCNT(frame_7ec4f9768a0f258a5446586f1f817c46) == 2);

    // Framed code:
    {
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_event);
        tmp_expression_value_1 = par_event;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[0]);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res == 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
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
        exception_tb = MAKE_TRACEBACK(frame_7ec4f9768a0f258a5446586f1f817c46, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7ec4f9768a0f258a5446586f1f817c46->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7ec4f9768a0f258a5446586f1f817c46, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7ec4f9768a0f258a5446586f1f817c46,
        type_description_1,
        par_event
    );


    // Release cached frame if used for exception.
    if (frame_7ec4f9768a0f258a5446586f1f817c46 == cache_frame_7ec4f9768a0f258a5446586f1f817c46) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7ec4f9768a0f258a5446586f1f817c46);
        cache_frame_7ec4f9768a0f258a5446586f1f817c46 = NULL;
    }

    assertFrameObject(frame_7ec4f9768a0f258a5446586f1f817c46);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *var_key_bindings = NULL;
    PyObject *var_insert_mode = NULL;
    PyObject *var_handle = NULL;
    PyObject *var__ignore = NULL;
    PyObject *var_has_text_before_cursor = NULL;
    PyObject *var__newline = NULL;
    PyObject *var__newline2 = NULL;
    PyObject *var__go_up = NULL;
    PyObject *var__go_down = NULL;
    PyObject *var__cut = NULL;
    PyObject *var__insert_ctrl_z = NULL;
    PyObject *var__paste = NULL;
    PyObject *var_in_quoted_insert = NULL;
    PyObject *var__insert_text = NULL;
    struct Nuitka_FrameObject *frame_00d6667bbf727d69ced472e94516a678;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_00d6667bbf727d69ced472e94516a678 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_00d6667bbf727d69ced472e94516a678)) {
        Py_XDECREF(cache_frame_00d6667bbf727d69ced472e94516a678);

#if _DEBUG_REFCOUNTS
        if (cache_frame_00d6667bbf727d69ced472e94516a678 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_00d6667bbf727d69ced472e94516a678 = MAKE_FUNCTION_FRAME(tstate, codeobj_00d6667bbf727d69ced472e94516a678, module_prompt_toolkit$key_binding$bindings$basic, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_00d6667bbf727d69ced472e94516a678->m_type_description == NULL);
    frame_00d6667bbf727d69ced472e94516a678 = cache_frame_00d6667bbf727d69ced472e94516a678;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_00d6667bbf727d69ced472e94516a678);
    assert(Py_REFCNT(frame_00d6667bbf727d69ced472e94516a678) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 33;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_key_bindings == NULL);
        var_key_bindings = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_bitor_expr_left_1;
        PyObject *tmp_bitor_expr_right_1;
        tmp_bitor_expr_left_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_bitor_expr_left_1 == NULL)) {
            tmp_bitor_expr_left_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
        }

        if (tmp_bitor_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_bitor_expr_right_1 == NULL)) {
            tmp_bitor_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
        }

        if (tmp_bitor_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_1, tmp_bitor_expr_right_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_insert_mode == NULL);
        var_insert_mode = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(var_key_bindings);
        tmp_expression_value_1 = var_key_bindings;
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[5]);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_handle == NULL);
        var_handle = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_6;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_value_8;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_value_10;
        PyObject *tmp_called_value_11;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_called_value_12;
        PyObject *tmp_called_value_13;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_called_value_14;
        PyObject *tmp_called_value_15;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_called_value_16;
        PyObject *tmp_called_value_17;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_called_value_18;
        PyObject *tmp_called_value_19;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_called_value_20;
        PyObject *tmp_called_value_21;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_called_value_22;
        PyObject *tmp_called_value_23;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_called_value_24;
        PyObject *tmp_called_value_25;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_called_value_26;
        PyObject *tmp_called_value_27;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_called_value_28;
        PyObject *tmp_called_value_29;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_called_value_30;
        PyObject *tmp_called_value_31;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_called_value_32;
        PyObject *tmp_called_value_33;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_called_value_34;
        PyObject *tmp_called_value_35;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_called_value_36;
        PyObject *tmp_called_value_37;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_called_value_38;
        PyObject *tmp_called_value_39;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_called_value_40;
        PyObject *tmp_called_value_41;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_called_value_42;
        PyObject *tmp_called_value_43;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_called_value_44;
        PyObject *tmp_called_value_45;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_called_value_46;
        PyObject *tmp_called_value_47;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_called_value_48;
        PyObject *tmp_called_value_49;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_called_value_50;
        PyObject *tmp_called_value_51;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_called_value_52;
        PyObject *tmp_called_value_53;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_called_value_54;
        PyObject *tmp_called_value_55;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_called_value_56;
        PyObject *tmp_called_value_57;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_called_value_58;
        PyObject *tmp_called_value_59;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_called_value_60;
        PyObject *tmp_called_value_61;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_called_value_62;
        PyObject *tmp_called_value_63;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_called_value_64;
        PyObject *tmp_called_value_65;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_called_value_66;
        PyObject *tmp_called_value_67;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_called_value_68;
        PyObject *tmp_called_value_69;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_called_value_70;
        PyObject *tmp_called_value_71;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_called_value_72;
        PyObject *tmp_called_value_73;
        PyObject *tmp_args_element_value_36;
        PyObject *tmp_called_value_74;
        PyObject *tmp_called_value_75;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_called_value_76;
        PyObject *tmp_called_value_77;
        PyObject *tmp_args_element_value_38;
        PyObject *tmp_called_value_78;
        PyObject *tmp_called_value_79;
        PyObject *tmp_args_element_value_39;
        PyObject *tmp_called_value_80;
        PyObject *tmp_called_value_81;
        PyObject *tmp_args_element_value_40;
        PyObject *tmp_called_value_82;
        PyObject *tmp_called_value_83;
        PyObject *tmp_args_element_value_41;
        PyObject *tmp_called_value_84;
        PyObject *tmp_called_value_85;
        PyObject *tmp_args_element_value_42;
        PyObject *tmp_called_value_86;
        PyObject *tmp_called_value_87;
        PyObject *tmp_args_element_value_43;
        PyObject *tmp_called_value_88;
        PyObject *tmp_called_value_89;
        PyObject *tmp_args_element_value_44;
        PyObject *tmp_called_value_90;
        PyObject *tmp_called_value_91;
        PyObject *tmp_args_element_value_45;
        PyObject *tmp_called_value_92;
        PyObject *tmp_called_value_93;
        PyObject *tmp_args_element_value_46;
        PyObject *tmp_called_value_94;
        PyObject *tmp_called_value_95;
        PyObject *tmp_args_element_value_47;
        PyObject *tmp_called_value_96;
        PyObject *tmp_called_value_97;
        PyObject *tmp_args_element_value_48;
        PyObject *tmp_called_value_98;
        PyObject *tmp_called_value_99;
        PyObject *tmp_args_element_value_49;
        PyObject *tmp_called_value_100;
        PyObject *tmp_called_value_101;
        PyObject *tmp_args_element_value_50;
        PyObject *tmp_called_value_102;
        PyObject *tmp_called_value_103;
        PyObject *tmp_args_element_value_51;
        PyObject *tmp_called_value_104;
        PyObject *tmp_called_value_105;
        PyObject *tmp_args_element_value_52;
        PyObject *tmp_called_value_106;
        PyObject *tmp_called_value_107;
        PyObject *tmp_args_element_value_53;
        PyObject *tmp_called_value_108;
        PyObject *tmp_called_value_109;
        PyObject *tmp_args_element_value_54;
        PyObject *tmp_called_value_110;
        PyObject *tmp_called_value_111;
        PyObject *tmp_args_element_value_55;
        PyObject *tmp_called_value_112;
        PyObject *tmp_called_value_113;
        PyObject *tmp_args_element_value_56;
        PyObject *tmp_called_value_114;
        PyObject *tmp_called_value_115;
        PyObject *tmp_args_element_value_57;
        PyObject *tmp_called_value_116;
        PyObject *tmp_called_value_117;
        PyObject *tmp_args_element_value_58;
        PyObject *tmp_called_value_118;
        PyObject *tmp_called_value_119;
        PyObject *tmp_args_element_value_59;
        PyObject *tmp_called_value_120;
        PyObject *tmp_called_value_121;
        PyObject *tmp_args_element_value_60;
        PyObject *tmp_called_value_122;
        PyObject *tmp_called_value_123;
        PyObject *tmp_args_element_value_61;
        PyObject *tmp_called_value_124;
        PyObject *tmp_called_value_125;
        PyObject *tmp_args_element_value_62;
        PyObject *tmp_called_value_126;
        PyObject *tmp_called_value_127;
        PyObject *tmp_args_element_value_63;
        PyObject *tmp_called_value_128;
        PyObject *tmp_called_value_129;
        PyObject *tmp_args_element_value_64;
        PyObject *tmp_called_value_130;
        PyObject *tmp_called_value_131;
        PyObject *tmp_args_element_value_65;
        PyObject *tmp_called_value_132;
        PyObject *tmp_called_value_133;
        PyObject *tmp_args_element_value_66;
        PyObject *tmp_called_value_134;
        PyObject *tmp_called_value_135;
        PyObject *tmp_args_element_value_67;
        PyObject *tmp_called_value_136;
        PyObject *tmp_called_value_137;
        PyObject *tmp_args_element_value_68;
        PyObject *tmp_called_value_138;
        PyObject *tmp_called_value_139;
        PyObject *tmp_args_element_value_69;
        PyObject *tmp_called_value_140;
        PyObject *tmp_called_value_141;
        PyObject *tmp_args_element_value_70;
        PyObject *tmp_called_value_142;
        PyObject *tmp_called_value_143;
        PyObject *tmp_args_element_value_71;
        PyObject *tmp_called_value_144;
        PyObject *tmp_called_value_145;
        PyObject *tmp_args_element_value_72;
        PyObject *tmp_called_value_146;
        PyObject *tmp_called_value_147;
        PyObject *tmp_args_element_value_73;
        PyObject *tmp_called_value_148;
        PyObject *tmp_called_value_149;
        PyObject *tmp_args_element_value_74;
        PyObject *tmp_called_value_150;
        PyObject *tmp_called_value_151;
        PyObject *tmp_args_element_value_75;
        PyObject *tmp_called_value_152;
        PyObject *tmp_called_value_153;
        PyObject *tmp_args_element_value_76;
        PyObject *tmp_called_value_154;
        PyObject *tmp_called_value_155;
        PyObject *tmp_args_element_value_77;
        PyObject *tmp_called_value_156;
        PyObject *tmp_called_value_157;
        PyObject *tmp_args_element_value_78;
        PyObject *tmp_called_value_158;
        PyObject *tmp_called_value_159;
        PyObject *tmp_args_element_value_79;
        PyObject *tmp_called_value_160;
        PyObject *tmp_called_value_161;
        PyObject *tmp_args_element_value_80;
        PyObject *tmp_called_value_162;
        PyObject *tmp_called_value_163;
        PyObject *tmp_args_element_value_81;
        PyObject *tmp_called_value_164;
        PyObject *tmp_called_value_165;
        PyObject *tmp_args_element_value_82;
        PyObject *tmp_called_value_166;
        PyObject *tmp_called_value_167;
        PyObject *tmp_args_element_value_83;
        PyObject *tmp_called_value_168;
        PyObject *tmp_called_value_169;
        PyObject *tmp_args_element_value_84;
        PyObject *tmp_called_value_170;
        PyObject *tmp_called_value_171;
        PyObject *tmp_args_element_value_85;
        PyObject *tmp_called_value_172;
        PyObject *tmp_called_value_173;
        PyObject *tmp_args_element_value_86;
        PyObject *tmp_called_value_174;
        PyObject *tmp_called_value_175;
        PyObject *tmp_args_element_value_87;
        PyObject *tmp_called_value_176;
        PyObject *tmp_called_value_177;
        PyObject *tmp_args_element_value_88;
        PyObject *tmp_called_value_178;
        PyObject *tmp_called_value_179;
        PyObject *tmp_args_element_value_89;
        PyObject *tmp_called_value_180;
        PyObject *tmp_called_value_181;
        PyObject *tmp_args_element_value_90;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_91;
        PyObject *tmp_annotations_1;
        CHECK_OBJECT(var_handle);
        tmp_called_value_3 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 37;
        tmp_called_value_2 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_3, mod_consts[6]);

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_5 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 38;
        tmp_called_value_4 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_5, mod_consts[7]);

        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 38;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_7 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 39;
        tmp_called_value_6 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_7, mod_consts[8]);

        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 39;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_9 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 40;
        tmp_called_value_8 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_9, mod_consts[9]);

        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 40;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_11 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 41;
        tmp_called_value_10 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_11, mod_consts[10]);

        if (tmp_called_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 41;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_13 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 42;
        tmp_called_value_12 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_13, mod_consts[11]);

        if (tmp_called_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 42;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_15 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 43;
        tmp_called_value_14 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_15, mod_consts[12]);

        if (tmp_called_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 43;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_17 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 44;
        tmp_called_value_16 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_17, mod_consts[13]);

        if (tmp_called_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 44;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_19 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 45;
        tmp_called_value_18 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_19, mod_consts[14]);

        if (tmp_called_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 45;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_21 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 46;
        tmp_called_value_20 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_21, mod_consts[15]);

        if (tmp_called_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 46;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_23 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 47;
        tmp_called_value_22 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_23, mod_consts[16]);

        if (tmp_called_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 47;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_25 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 48;
        tmp_called_value_24 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_25, mod_consts[17]);

        if (tmp_called_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);

            exception_lineno = 48;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_27 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 49;
        tmp_called_value_26 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_27, mod_consts[18]);

        if (tmp_called_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);

            exception_lineno = 49;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_29 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 50;
        tmp_called_value_28 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_29, mod_consts[19]);

        if (tmp_called_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 50;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_31 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 51;
        tmp_called_value_30 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_31, mod_consts[20]);

        if (tmp_called_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);

            exception_lineno = 51;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_33 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 52;
        tmp_called_value_32 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_33, mod_consts[21]);

        if (tmp_called_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);

            exception_lineno = 52;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_35 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 53;
        tmp_called_value_34 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_35, mod_consts[22]);

        if (tmp_called_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);

            exception_lineno = 53;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_37 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 54;
        tmp_called_value_36 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_37, mod_consts[23]);

        if (tmp_called_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);

            exception_lineno = 54;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_39 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 55;
        tmp_called_value_38 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_39, mod_consts[24]);

        if (tmp_called_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);

            exception_lineno = 55;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_41 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 56;
        tmp_called_value_40 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_41, mod_consts[25]);

        if (tmp_called_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);

            exception_lineno = 56;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_43 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 57;
        tmp_called_value_42 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_43, mod_consts[26]);

        if (tmp_called_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);

            exception_lineno = 57;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_45 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 58;
        tmp_called_value_44 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_45, mod_consts[27]);

        if (tmp_called_value_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);

            exception_lineno = 58;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_47 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 59;
        tmp_called_value_46 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_47, mod_consts[28]);

        if (tmp_called_value_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);

            exception_lineno = 59;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_49 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 60;
        tmp_called_value_48 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_49, mod_consts[29]);

        if (tmp_called_value_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);

            exception_lineno = 60;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_51 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 61;
        tmp_called_value_50 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_51, mod_consts[30]);

        if (tmp_called_value_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);

            exception_lineno = 61;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_53 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 62;
        tmp_called_value_52 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_53, mod_consts[31]);

        if (tmp_called_value_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);

            exception_lineno = 62;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_55 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 63;
        tmp_called_value_54 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_55, mod_consts[32]);

        if (tmp_called_value_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);

            exception_lineno = 63;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_57 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 64;
        tmp_called_value_56 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_57, mod_consts[33]);

        if (tmp_called_value_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);

            exception_lineno = 64;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_59 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 65;
        tmp_called_value_58 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_59, mod_consts[34]);

        if (tmp_called_value_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);

            exception_lineno = 65;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_61 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 66;
        tmp_called_value_60 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_61, mod_consts[35]);

        if (tmp_called_value_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);

            exception_lineno = 66;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_63 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 67;
        tmp_called_value_62 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_63, mod_consts[36]);

        if (tmp_called_value_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);

            exception_lineno = 67;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_65 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 68;
        tmp_called_value_64 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_65, mod_consts[37]);

        if (tmp_called_value_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);

            exception_lineno = 68;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_67 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 69;
        tmp_called_value_66 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_67, mod_consts[38]);

        if (tmp_called_value_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);

            exception_lineno = 69;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_69 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 70;
        tmp_called_value_68 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_69, mod_consts[39]);

        if (tmp_called_value_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);

            exception_lineno = 70;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_71 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 71;
        tmp_called_value_70 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_71, mod_consts[40]);

        if (tmp_called_value_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);

            exception_lineno = 71;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_73 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 72;
        tmp_called_value_72 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_73, mod_consts[41]);

        if (tmp_called_value_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);

            exception_lineno = 72;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_75 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 73;
        tmp_called_value_74 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_75, mod_consts[42]);

        if (tmp_called_value_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);

            exception_lineno = 73;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_77 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 74;
        tmp_called_value_76 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_77, mod_consts[43]);

        if (tmp_called_value_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);

            exception_lineno = 74;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_79 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 75;
        tmp_called_value_78 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_79, mod_consts[44]);

        if (tmp_called_value_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);

            exception_lineno = 75;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_81 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 76;
        tmp_called_value_80 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_81, mod_consts[45]);

        if (tmp_called_value_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);

            exception_lineno = 76;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_83 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 77;
        tmp_called_value_82 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_83, mod_consts[46]);

        if (tmp_called_value_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);

            exception_lineno = 77;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_85 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 78;
        tmp_called_value_84 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_85, mod_consts[47]);

        if (tmp_called_value_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);

            exception_lineno = 78;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_87 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 79;
        tmp_called_value_86 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_87, mod_consts[48]);

        if (tmp_called_value_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);

            exception_lineno = 79;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_89 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 80;
        tmp_called_value_88 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_89, mod_consts[49]);

        if (tmp_called_value_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);

            exception_lineno = 80;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_91 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 81;
        tmp_called_value_90 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_91, mod_consts[50]);

        if (tmp_called_value_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);

            exception_lineno = 81;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_93 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 82;
        tmp_called_value_92 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_93, mod_consts[51]);

        if (tmp_called_value_92 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);

            exception_lineno = 82;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_95 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 83;
        tmp_called_value_94 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_95, mod_consts[52]);

        if (tmp_called_value_94 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);

            exception_lineno = 83;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_97 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 84;
        tmp_called_value_96 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_97, mod_consts[53]);

        if (tmp_called_value_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);

            exception_lineno = 84;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_99 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 85;
        tmp_called_value_98 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_99, mod_consts[54]);

        if (tmp_called_value_98 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);

            exception_lineno = 85;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_101 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 86;
        tmp_called_value_100 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_101, mod_consts[55]);

        if (tmp_called_value_100 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);

            exception_lineno = 86;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_103 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 87;
        tmp_called_value_102 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_103, mod_consts[56]);

        if (tmp_called_value_102 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);

            exception_lineno = 87;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_105 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 88;
        tmp_called_value_104 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_105, mod_consts[57]);

        if (tmp_called_value_104 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);

            exception_lineno = 88;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_107 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 89;
        tmp_called_value_106 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_107, mod_consts[58]);

        if (tmp_called_value_106 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);

            exception_lineno = 89;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_109 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 90;
        tmp_called_value_108 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_109, mod_consts[59]);

        if (tmp_called_value_108 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);

            exception_lineno = 90;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_111 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 91;
        tmp_called_value_110 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_111, mod_consts[60]);

        if (tmp_called_value_110 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);

            exception_lineno = 91;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_113 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 92;
        tmp_called_value_112 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_113, mod_consts[61]);

        if (tmp_called_value_112 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);

            exception_lineno = 92;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_115 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 93;
        tmp_called_value_114 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_115, mod_consts[62]);

        if (tmp_called_value_114 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);

            exception_lineno = 93;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_117 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 94;
        tmp_called_value_116 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_117, mod_consts[63]);

        if (tmp_called_value_116 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);

            exception_lineno = 94;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_119 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 95;
        tmp_called_value_118 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_119, mod_consts[64]);

        if (tmp_called_value_118 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);

            exception_lineno = 95;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_121 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 96;
        tmp_called_value_120 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_121, mod_consts[65]);

        if (tmp_called_value_120 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);

            exception_lineno = 96;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_123 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 97;
        tmp_called_value_122 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_123, mod_consts[66]);

        if (tmp_called_value_122 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);

            exception_lineno = 97;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_125 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 98;
        tmp_called_value_124 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_125, mod_consts[67]);

        if (tmp_called_value_124 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);

            exception_lineno = 98;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_127 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 99;
        tmp_called_value_126 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_127, mod_consts[68]);

        if (tmp_called_value_126 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);

            exception_lineno = 99;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_129 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 100;
        tmp_called_value_128 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_129, mod_consts[69]);

        if (tmp_called_value_128 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);

            exception_lineno = 100;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_131 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 101;
        tmp_called_value_130 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_131, mod_consts[70]);

        if (tmp_called_value_130 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);

            exception_lineno = 101;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_133 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 102;
        tmp_called_value_132 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_133, mod_consts[71]);

        if (tmp_called_value_132 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);

            exception_lineno = 102;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_135 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 103;
        tmp_called_value_134 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_135, mod_consts[72]);

        if (tmp_called_value_134 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);

            exception_lineno = 103;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_137 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 104;
        tmp_called_value_136 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_137, mod_consts[73]);

        if (tmp_called_value_136 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);

            exception_lineno = 104;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_139 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 105;
        tmp_called_value_138 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_139, mod_consts[74]);

        if (tmp_called_value_138 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);

            exception_lineno = 105;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_141 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 106;
        tmp_called_value_140 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_141, mod_consts[75]);

        if (tmp_called_value_140 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);

            exception_lineno = 106;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_143 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 107;
        tmp_called_value_142 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_143, mod_consts[76]);

        if (tmp_called_value_142 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);

            exception_lineno = 107;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_145 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 108;
        tmp_called_value_144 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_145, mod_consts[77]);

        if (tmp_called_value_144 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);

            exception_lineno = 108;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_147 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 109;
        tmp_called_value_146 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_147, mod_consts[78]);

        if (tmp_called_value_146 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);

            exception_lineno = 109;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_149 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 110;
        tmp_called_value_148 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_149, mod_consts[79]);

        if (tmp_called_value_148 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);

            exception_lineno = 110;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_151 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 111;
        tmp_called_value_150 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_151, mod_consts[80]);

        if (tmp_called_value_150 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);

            exception_lineno = 111;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_153 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 112;
        tmp_called_value_152 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_153, mod_consts[81]);

        if (tmp_called_value_152 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);

            exception_lineno = 112;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_155 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 113;
        tmp_called_value_154 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_155, mod_consts[82]);

        if (tmp_called_value_154 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_called_value_152);

            exception_lineno = 113;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_157 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 114;
        tmp_called_value_156 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_157, mod_consts[83]);

        if (tmp_called_value_156 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_called_value_154);

            exception_lineno = 114;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_159 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 115;
        tmp_called_value_158 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_159, mod_consts[84]);

        if (tmp_called_value_158 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_called_value_154);
            Py_DECREF(tmp_called_value_156);

            exception_lineno = 115;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_161 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 116;
        tmp_called_value_160 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_161, mod_consts[85]);

        if (tmp_called_value_160 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_called_value_154);
            Py_DECREF(tmp_called_value_156);
            Py_DECREF(tmp_called_value_158);

            exception_lineno = 116;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_163 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 117;
        tmp_called_value_162 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_163, mod_consts[86]);

        if (tmp_called_value_162 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_called_value_154);
            Py_DECREF(tmp_called_value_156);
            Py_DECREF(tmp_called_value_158);
            Py_DECREF(tmp_called_value_160);

            exception_lineno = 117;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_165 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 118;
        tmp_called_value_164 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_165, mod_consts[87]);

        if (tmp_called_value_164 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_called_value_154);
            Py_DECREF(tmp_called_value_156);
            Py_DECREF(tmp_called_value_158);
            Py_DECREF(tmp_called_value_160);
            Py_DECREF(tmp_called_value_162);

            exception_lineno = 118;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_167 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 119;
        tmp_called_value_166 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_167, mod_consts[88]);

        if (tmp_called_value_166 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_called_value_154);
            Py_DECREF(tmp_called_value_156);
            Py_DECREF(tmp_called_value_158);
            Py_DECREF(tmp_called_value_160);
            Py_DECREF(tmp_called_value_162);
            Py_DECREF(tmp_called_value_164);

            exception_lineno = 119;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_169 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 120;
        tmp_called_value_168 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_169, mod_consts[89]);

        if (tmp_called_value_168 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_called_value_154);
            Py_DECREF(tmp_called_value_156);
            Py_DECREF(tmp_called_value_158);
            Py_DECREF(tmp_called_value_160);
            Py_DECREF(tmp_called_value_162);
            Py_DECREF(tmp_called_value_164);
            Py_DECREF(tmp_called_value_166);

            exception_lineno = 120;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_171 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 121;
        tmp_called_value_170 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_171, mod_consts[90]);

        if (tmp_called_value_170 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_called_value_154);
            Py_DECREF(tmp_called_value_156);
            Py_DECREF(tmp_called_value_158);
            Py_DECREF(tmp_called_value_160);
            Py_DECREF(tmp_called_value_162);
            Py_DECREF(tmp_called_value_164);
            Py_DECREF(tmp_called_value_166);
            Py_DECREF(tmp_called_value_168);

            exception_lineno = 121;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_173 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 122;
        tmp_called_value_172 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_173, mod_consts[91]);

        if (tmp_called_value_172 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_called_value_154);
            Py_DECREF(tmp_called_value_156);
            Py_DECREF(tmp_called_value_158);
            Py_DECREF(tmp_called_value_160);
            Py_DECREF(tmp_called_value_162);
            Py_DECREF(tmp_called_value_164);
            Py_DECREF(tmp_called_value_166);
            Py_DECREF(tmp_called_value_168);
            Py_DECREF(tmp_called_value_170);

            exception_lineno = 122;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_175 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 123;
        tmp_called_value_174 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_175, mod_consts[92]);

        if (tmp_called_value_174 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_called_value_154);
            Py_DECREF(tmp_called_value_156);
            Py_DECREF(tmp_called_value_158);
            Py_DECREF(tmp_called_value_160);
            Py_DECREF(tmp_called_value_162);
            Py_DECREF(tmp_called_value_164);
            Py_DECREF(tmp_called_value_166);
            Py_DECREF(tmp_called_value_168);
            Py_DECREF(tmp_called_value_170);
            Py_DECREF(tmp_called_value_172);

            exception_lineno = 123;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_177 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 124;
        tmp_called_value_176 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_177, mod_consts[93]);

        if (tmp_called_value_176 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_called_value_154);
            Py_DECREF(tmp_called_value_156);
            Py_DECREF(tmp_called_value_158);
            Py_DECREF(tmp_called_value_160);
            Py_DECREF(tmp_called_value_162);
            Py_DECREF(tmp_called_value_164);
            Py_DECREF(tmp_called_value_166);
            Py_DECREF(tmp_called_value_168);
            Py_DECREF(tmp_called_value_170);
            Py_DECREF(tmp_called_value_172);
            Py_DECREF(tmp_called_value_174);

            exception_lineno = 124;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_179 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 125;
        tmp_called_value_178 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_179, mod_consts[94]);

        if (tmp_called_value_178 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_called_value_154);
            Py_DECREF(tmp_called_value_156);
            Py_DECREF(tmp_called_value_158);
            Py_DECREF(tmp_called_value_160);
            Py_DECREF(tmp_called_value_162);
            Py_DECREF(tmp_called_value_164);
            Py_DECREF(tmp_called_value_166);
            Py_DECREF(tmp_called_value_168);
            Py_DECREF(tmp_called_value_170);
            Py_DECREF(tmp_called_value_172);
            Py_DECREF(tmp_called_value_174);
            Py_DECREF(tmp_called_value_176);

            exception_lineno = 125;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_handle);
        tmp_called_value_181 = var_handle;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[95]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_called_value_154);
            Py_DECREF(tmp_called_value_156);
            Py_DECREF(tmp_called_value_158);
            Py_DECREF(tmp_called_value_160);
            Py_DECREF(tmp_called_value_162);
            Py_DECREF(tmp_called_value_164);
            Py_DECREF(tmp_called_value_166);
            Py_DECREF(tmp_called_value_168);
            Py_DECREF(tmp_called_value_170);
            Py_DECREF(tmp_called_value_172);
            Py_DECREF(tmp_called_value_174);
            Py_DECREF(tmp_called_value_176);
            Py_DECREF(tmp_called_value_178);

            exception_lineno = 126;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_90 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[96]);
        if (tmp_args_element_value_90 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_called_value_154);
            Py_DECREF(tmp_called_value_156);
            Py_DECREF(tmp_called_value_158);
            Py_DECREF(tmp_called_value_160);
            Py_DECREF(tmp_called_value_162);
            Py_DECREF(tmp_called_value_164);
            Py_DECREF(tmp_called_value_166);
            Py_DECREF(tmp_called_value_168);
            Py_DECREF(tmp_called_value_170);
            Py_DECREF(tmp_called_value_172);
            Py_DECREF(tmp_called_value_174);
            Py_DECREF(tmp_called_value_176);
            Py_DECREF(tmp_called_value_178);

            exception_lineno = 126;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 126;
        tmp_called_value_180 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_181, tmp_args_element_value_90);
        Py_DECREF(tmp_args_element_value_90);
        if (tmp_called_value_180 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_called_value_154);
            Py_DECREF(tmp_called_value_156);
            Py_DECREF(tmp_called_value_158);
            Py_DECREF(tmp_called_value_160);
            Py_DECREF(tmp_called_value_162);
            Py_DECREF(tmp_called_value_164);
            Py_DECREF(tmp_called_value_166);
            Py_DECREF(tmp_called_value_168);
            Py_DECREF(tmp_called_value_170);
            Py_DECREF(tmp_called_value_172);
            Py_DECREF(tmp_called_value_174);
            Py_DECREF(tmp_called_value_176);
            Py_DECREF(tmp_called_value_178);

            exception_lineno = 126;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = DICT_COPY(mod_consts[97]);


        tmp_args_element_value_91 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__1__ignore(tmp_annotations_1);

        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 126;
        tmp_args_element_value_89 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_180, tmp_args_element_value_91);
        Py_DECREF(tmp_called_value_180);
        Py_DECREF(tmp_args_element_value_91);
        if (tmp_args_element_value_89 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_called_value_154);
            Py_DECREF(tmp_called_value_156);
            Py_DECREF(tmp_called_value_158);
            Py_DECREF(tmp_called_value_160);
            Py_DECREF(tmp_called_value_162);
            Py_DECREF(tmp_called_value_164);
            Py_DECREF(tmp_called_value_166);
            Py_DECREF(tmp_called_value_168);
            Py_DECREF(tmp_called_value_170);
            Py_DECREF(tmp_called_value_172);
            Py_DECREF(tmp_called_value_174);
            Py_DECREF(tmp_called_value_176);
            Py_DECREF(tmp_called_value_178);

            exception_lineno = 126;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 125;
        tmp_args_element_value_88 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_178, tmp_args_element_value_89);
        Py_DECREF(tmp_called_value_178);
        Py_DECREF(tmp_args_element_value_89);
        if (tmp_args_element_value_88 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_called_value_154);
            Py_DECREF(tmp_called_value_156);
            Py_DECREF(tmp_called_value_158);
            Py_DECREF(tmp_called_value_160);
            Py_DECREF(tmp_called_value_162);
            Py_DECREF(tmp_called_value_164);
            Py_DECREF(tmp_called_value_166);
            Py_DECREF(tmp_called_value_168);
            Py_DECREF(tmp_called_value_170);
            Py_DECREF(tmp_called_value_172);
            Py_DECREF(tmp_called_value_174);
            Py_DECREF(tmp_called_value_176);

            exception_lineno = 125;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 124;
        tmp_args_element_value_87 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_176, tmp_args_element_value_88);
        Py_DECREF(tmp_called_value_176);
        Py_DECREF(tmp_args_element_value_88);
        if (tmp_args_element_value_87 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_called_value_154);
            Py_DECREF(tmp_called_value_156);
            Py_DECREF(tmp_called_value_158);
            Py_DECREF(tmp_called_value_160);
            Py_DECREF(tmp_called_value_162);
            Py_DECREF(tmp_called_value_164);
            Py_DECREF(tmp_called_value_166);
            Py_DECREF(tmp_called_value_168);
            Py_DECREF(tmp_called_value_170);
            Py_DECREF(tmp_called_value_172);
            Py_DECREF(tmp_called_value_174);

            exception_lineno = 124;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 123;
        tmp_args_element_value_86 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_174, tmp_args_element_value_87);
        Py_DECREF(tmp_called_value_174);
        Py_DECREF(tmp_args_element_value_87);
        if (tmp_args_element_value_86 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_called_value_154);
            Py_DECREF(tmp_called_value_156);
            Py_DECREF(tmp_called_value_158);
            Py_DECREF(tmp_called_value_160);
            Py_DECREF(tmp_called_value_162);
            Py_DECREF(tmp_called_value_164);
            Py_DECREF(tmp_called_value_166);
            Py_DECREF(tmp_called_value_168);
            Py_DECREF(tmp_called_value_170);
            Py_DECREF(tmp_called_value_172);

            exception_lineno = 123;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 122;
        tmp_args_element_value_85 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_172, tmp_args_element_value_86);
        Py_DECREF(tmp_called_value_172);
        Py_DECREF(tmp_args_element_value_86);
        if (tmp_args_element_value_85 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_called_value_154);
            Py_DECREF(tmp_called_value_156);
            Py_DECREF(tmp_called_value_158);
            Py_DECREF(tmp_called_value_160);
            Py_DECREF(tmp_called_value_162);
            Py_DECREF(tmp_called_value_164);
            Py_DECREF(tmp_called_value_166);
            Py_DECREF(tmp_called_value_168);
            Py_DECREF(tmp_called_value_170);

            exception_lineno = 122;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 121;
        tmp_args_element_value_84 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_170, tmp_args_element_value_85);
        Py_DECREF(tmp_called_value_170);
        Py_DECREF(tmp_args_element_value_85);
        if (tmp_args_element_value_84 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_called_value_154);
            Py_DECREF(tmp_called_value_156);
            Py_DECREF(tmp_called_value_158);
            Py_DECREF(tmp_called_value_160);
            Py_DECREF(tmp_called_value_162);
            Py_DECREF(tmp_called_value_164);
            Py_DECREF(tmp_called_value_166);
            Py_DECREF(tmp_called_value_168);

            exception_lineno = 121;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 120;
        tmp_args_element_value_83 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_168, tmp_args_element_value_84);
        Py_DECREF(tmp_called_value_168);
        Py_DECREF(tmp_args_element_value_84);
        if (tmp_args_element_value_83 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_called_value_154);
            Py_DECREF(tmp_called_value_156);
            Py_DECREF(tmp_called_value_158);
            Py_DECREF(tmp_called_value_160);
            Py_DECREF(tmp_called_value_162);
            Py_DECREF(tmp_called_value_164);
            Py_DECREF(tmp_called_value_166);

            exception_lineno = 120;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 119;
        tmp_args_element_value_82 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_166, tmp_args_element_value_83);
        Py_DECREF(tmp_called_value_166);
        Py_DECREF(tmp_args_element_value_83);
        if (tmp_args_element_value_82 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_called_value_154);
            Py_DECREF(tmp_called_value_156);
            Py_DECREF(tmp_called_value_158);
            Py_DECREF(tmp_called_value_160);
            Py_DECREF(tmp_called_value_162);
            Py_DECREF(tmp_called_value_164);

            exception_lineno = 119;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 118;
        tmp_args_element_value_81 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_164, tmp_args_element_value_82);
        Py_DECREF(tmp_called_value_164);
        Py_DECREF(tmp_args_element_value_82);
        if (tmp_args_element_value_81 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_called_value_154);
            Py_DECREF(tmp_called_value_156);
            Py_DECREF(tmp_called_value_158);
            Py_DECREF(tmp_called_value_160);
            Py_DECREF(tmp_called_value_162);

            exception_lineno = 118;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 117;
        tmp_args_element_value_80 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_162, tmp_args_element_value_81);
        Py_DECREF(tmp_called_value_162);
        Py_DECREF(tmp_args_element_value_81);
        if (tmp_args_element_value_80 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_called_value_154);
            Py_DECREF(tmp_called_value_156);
            Py_DECREF(tmp_called_value_158);
            Py_DECREF(tmp_called_value_160);

            exception_lineno = 117;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 116;
        tmp_args_element_value_79 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_160, tmp_args_element_value_80);
        Py_DECREF(tmp_called_value_160);
        Py_DECREF(tmp_args_element_value_80);
        if (tmp_args_element_value_79 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_called_value_154);
            Py_DECREF(tmp_called_value_156);
            Py_DECREF(tmp_called_value_158);

            exception_lineno = 116;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 115;
        tmp_args_element_value_78 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_158, tmp_args_element_value_79);
        Py_DECREF(tmp_called_value_158);
        Py_DECREF(tmp_args_element_value_79);
        if (tmp_args_element_value_78 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_called_value_154);
            Py_DECREF(tmp_called_value_156);

            exception_lineno = 115;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 114;
        tmp_args_element_value_77 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_156, tmp_args_element_value_78);
        Py_DECREF(tmp_called_value_156);
        Py_DECREF(tmp_args_element_value_78);
        if (tmp_args_element_value_77 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_called_value_152);
            Py_DECREF(tmp_called_value_154);

            exception_lineno = 114;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 113;
        tmp_args_element_value_76 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_154, tmp_args_element_value_77);
        Py_DECREF(tmp_called_value_154);
        Py_DECREF(tmp_args_element_value_77);
        if (tmp_args_element_value_76 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);
            Py_DECREF(tmp_called_value_152);

            exception_lineno = 113;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 112;
        tmp_args_element_value_75 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_152, tmp_args_element_value_76);
        Py_DECREF(tmp_called_value_152);
        Py_DECREF(tmp_args_element_value_76);
        if (tmp_args_element_value_75 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);
            Py_DECREF(tmp_called_value_150);

            exception_lineno = 112;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 111;
        tmp_args_element_value_74 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_150, tmp_args_element_value_75);
        Py_DECREF(tmp_called_value_150);
        Py_DECREF(tmp_args_element_value_75);
        if (tmp_args_element_value_74 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);
            Py_DECREF(tmp_called_value_148);

            exception_lineno = 111;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 110;
        tmp_args_element_value_73 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_148, tmp_args_element_value_74);
        Py_DECREF(tmp_called_value_148);
        Py_DECREF(tmp_args_element_value_74);
        if (tmp_args_element_value_73 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);
            Py_DECREF(tmp_called_value_146);

            exception_lineno = 110;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 109;
        tmp_args_element_value_72 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_146, tmp_args_element_value_73);
        Py_DECREF(tmp_called_value_146);
        Py_DECREF(tmp_args_element_value_73);
        if (tmp_args_element_value_72 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);
            Py_DECREF(tmp_called_value_144);

            exception_lineno = 109;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 108;
        tmp_args_element_value_71 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_144, tmp_args_element_value_72);
        Py_DECREF(tmp_called_value_144);
        Py_DECREF(tmp_args_element_value_72);
        if (tmp_args_element_value_71 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);
            Py_DECREF(tmp_called_value_142);

            exception_lineno = 108;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 107;
        tmp_args_element_value_70 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_142, tmp_args_element_value_71);
        Py_DECREF(tmp_called_value_142);
        Py_DECREF(tmp_args_element_value_71);
        if (tmp_args_element_value_70 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);
            Py_DECREF(tmp_called_value_140);

            exception_lineno = 107;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 106;
        tmp_args_element_value_69 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_140, tmp_args_element_value_70);
        Py_DECREF(tmp_called_value_140);
        Py_DECREF(tmp_args_element_value_70);
        if (tmp_args_element_value_69 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);
            Py_DECREF(tmp_called_value_138);

            exception_lineno = 106;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 105;
        tmp_args_element_value_68 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_138, tmp_args_element_value_69);
        Py_DECREF(tmp_called_value_138);
        Py_DECREF(tmp_args_element_value_69);
        if (tmp_args_element_value_68 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);
            Py_DECREF(tmp_called_value_136);

            exception_lineno = 105;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 104;
        tmp_args_element_value_67 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_136, tmp_args_element_value_68);
        Py_DECREF(tmp_called_value_136);
        Py_DECREF(tmp_args_element_value_68);
        if (tmp_args_element_value_67 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);
            Py_DECREF(tmp_called_value_134);

            exception_lineno = 104;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 103;
        tmp_args_element_value_66 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_134, tmp_args_element_value_67);
        Py_DECREF(tmp_called_value_134);
        Py_DECREF(tmp_args_element_value_67);
        if (tmp_args_element_value_66 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);
            Py_DECREF(tmp_called_value_132);

            exception_lineno = 103;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 102;
        tmp_args_element_value_65 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_132, tmp_args_element_value_66);
        Py_DECREF(tmp_called_value_132);
        Py_DECREF(tmp_args_element_value_66);
        if (tmp_args_element_value_65 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);
            Py_DECREF(tmp_called_value_130);

            exception_lineno = 102;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 101;
        tmp_args_element_value_64 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_130, tmp_args_element_value_65);
        Py_DECREF(tmp_called_value_130);
        Py_DECREF(tmp_args_element_value_65);
        if (tmp_args_element_value_64 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);
            Py_DECREF(tmp_called_value_128);

            exception_lineno = 101;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 100;
        tmp_args_element_value_63 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_128, tmp_args_element_value_64);
        Py_DECREF(tmp_called_value_128);
        Py_DECREF(tmp_args_element_value_64);
        if (tmp_args_element_value_63 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);
            Py_DECREF(tmp_called_value_126);

            exception_lineno = 100;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 99;
        tmp_args_element_value_62 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_126, tmp_args_element_value_63);
        Py_DECREF(tmp_called_value_126);
        Py_DECREF(tmp_args_element_value_63);
        if (tmp_args_element_value_62 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);
            Py_DECREF(tmp_called_value_124);

            exception_lineno = 99;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 98;
        tmp_args_element_value_61 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_124, tmp_args_element_value_62);
        Py_DECREF(tmp_called_value_124);
        Py_DECREF(tmp_args_element_value_62);
        if (tmp_args_element_value_61 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);
            Py_DECREF(tmp_called_value_122);

            exception_lineno = 98;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 97;
        tmp_args_element_value_60 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_122, tmp_args_element_value_61);
        Py_DECREF(tmp_called_value_122);
        Py_DECREF(tmp_args_element_value_61);
        if (tmp_args_element_value_60 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);
            Py_DECREF(tmp_called_value_120);

            exception_lineno = 97;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 96;
        tmp_args_element_value_59 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_120, tmp_args_element_value_60);
        Py_DECREF(tmp_called_value_120);
        Py_DECREF(tmp_args_element_value_60);
        if (tmp_args_element_value_59 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);
            Py_DECREF(tmp_called_value_118);

            exception_lineno = 96;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 95;
        tmp_args_element_value_58 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_118, tmp_args_element_value_59);
        Py_DECREF(tmp_called_value_118);
        Py_DECREF(tmp_args_element_value_59);
        if (tmp_args_element_value_58 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);
            Py_DECREF(tmp_called_value_116);

            exception_lineno = 95;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 94;
        tmp_args_element_value_57 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_116, tmp_args_element_value_58);
        Py_DECREF(tmp_called_value_116);
        Py_DECREF(tmp_args_element_value_58);
        if (tmp_args_element_value_57 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);
            Py_DECREF(tmp_called_value_114);

            exception_lineno = 94;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 93;
        tmp_args_element_value_56 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_114, tmp_args_element_value_57);
        Py_DECREF(tmp_called_value_114);
        Py_DECREF(tmp_args_element_value_57);
        if (tmp_args_element_value_56 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);
            Py_DECREF(tmp_called_value_112);

            exception_lineno = 93;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 92;
        tmp_args_element_value_55 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_112, tmp_args_element_value_56);
        Py_DECREF(tmp_called_value_112);
        Py_DECREF(tmp_args_element_value_56);
        if (tmp_args_element_value_55 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);
            Py_DECREF(tmp_called_value_110);

            exception_lineno = 92;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 91;
        tmp_args_element_value_54 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_110, tmp_args_element_value_55);
        Py_DECREF(tmp_called_value_110);
        Py_DECREF(tmp_args_element_value_55);
        if (tmp_args_element_value_54 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);
            Py_DECREF(tmp_called_value_108);

            exception_lineno = 91;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 90;
        tmp_args_element_value_53 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_108, tmp_args_element_value_54);
        Py_DECREF(tmp_called_value_108);
        Py_DECREF(tmp_args_element_value_54);
        if (tmp_args_element_value_53 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);
            Py_DECREF(tmp_called_value_106);

            exception_lineno = 90;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 89;
        tmp_args_element_value_52 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_106, tmp_args_element_value_53);
        Py_DECREF(tmp_called_value_106);
        Py_DECREF(tmp_args_element_value_53);
        if (tmp_args_element_value_52 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);
            Py_DECREF(tmp_called_value_104);

            exception_lineno = 89;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 88;
        tmp_args_element_value_51 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_104, tmp_args_element_value_52);
        Py_DECREF(tmp_called_value_104);
        Py_DECREF(tmp_args_element_value_52);
        if (tmp_args_element_value_51 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);
            Py_DECREF(tmp_called_value_102);

            exception_lineno = 88;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 87;
        tmp_args_element_value_50 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_102, tmp_args_element_value_51);
        Py_DECREF(tmp_called_value_102);
        Py_DECREF(tmp_args_element_value_51);
        if (tmp_args_element_value_50 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);
            Py_DECREF(tmp_called_value_100);

            exception_lineno = 87;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 86;
        tmp_args_element_value_49 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_100, tmp_args_element_value_50);
        Py_DECREF(tmp_called_value_100);
        Py_DECREF(tmp_args_element_value_50);
        if (tmp_args_element_value_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);
            Py_DECREF(tmp_called_value_98);

            exception_lineno = 86;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 85;
        tmp_args_element_value_48 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_98, tmp_args_element_value_49);
        Py_DECREF(tmp_called_value_98);
        Py_DECREF(tmp_args_element_value_49);
        if (tmp_args_element_value_48 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);
            Py_DECREF(tmp_called_value_96);

            exception_lineno = 85;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 84;
        tmp_args_element_value_47 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_96, tmp_args_element_value_48);
        Py_DECREF(tmp_called_value_96);
        Py_DECREF(tmp_args_element_value_48);
        if (tmp_args_element_value_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);
            Py_DECREF(tmp_called_value_94);

            exception_lineno = 84;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 83;
        tmp_args_element_value_46 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_94, tmp_args_element_value_47);
        Py_DECREF(tmp_called_value_94);
        Py_DECREF(tmp_args_element_value_47);
        if (tmp_args_element_value_46 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);
            Py_DECREF(tmp_called_value_92);

            exception_lineno = 83;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 82;
        tmp_args_element_value_45 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_92, tmp_args_element_value_46);
        Py_DECREF(tmp_called_value_92);
        Py_DECREF(tmp_args_element_value_46);
        if (tmp_args_element_value_45 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);
            Py_DECREF(tmp_called_value_90);

            exception_lineno = 82;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 81;
        tmp_args_element_value_44 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_90, tmp_args_element_value_45);
        Py_DECREF(tmp_called_value_90);
        Py_DECREF(tmp_args_element_value_45);
        if (tmp_args_element_value_44 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);
            Py_DECREF(tmp_called_value_88);

            exception_lineno = 81;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 80;
        tmp_args_element_value_43 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_88, tmp_args_element_value_44);
        Py_DECREF(tmp_called_value_88);
        Py_DECREF(tmp_args_element_value_44);
        if (tmp_args_element_value_43 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);
            Py_DECREF(tmp_called_value_86);

            exception_lineno = 80;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 79;
        tmp_args_element_value_42 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_86, tmp_args_element_value_43);
        Py_DECREF(tmp_called_value_86);
        Py_DECREF(tmp_args_element_value_43);
        if (tmp_args_element_value_42 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);
            Py_DECREF(tmp_called_value_84);

            exception_lineno = 79;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 78;
        tmp_args_element_value_41 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_84, tmp_args_element_value_42);
        Py_DECREF(tmp_called_value_84);
        Py_DECREF(tmp_args_element_value_42);
        if (tmp_args_element_value_41 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);
            Py_DECREF(tmp_called_value_82);

            exception_lineno = 78;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 77;
        tmp_args_element_value_40 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_82, tmp_args_element_value_41);
        Py_DECREF(tmp_called_value_82);
        Py_DECREF(tmp_args_element_value_41);
        if (tmp_args_element_value_40 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);
            Py_DECREF(tmp_called_value_80);

            exception_lineno = 77;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 76;
        tmp_args_element_value_39 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_80, tmp_args_element_value_40);
        Py_DECREF(tmp_called_value_80);
        Py_DECREF(tmp_args_element_value_40);
        if (tmp_args_element_value_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);
            Py_DECREF(tmp_called_value_78);

            exception_lineno = 76;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 75;
        tmp_args_element_value_38 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_78, tmp_args_element_value_39);
        Py_DECREF(tmp_called_value_78);
        Py_DECREF(tmp_args_element_value_39);
        if (tmp_args_element_value_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);
            Py_DECREF(tmp_called_value_76);

            exception_lineno = 75;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 74;
        tmp_args_element_value_37 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_76, tmp_args_element_value_38);
        Py_DECREF(tmp_called_value_76);
        Py_DECREF(tmp_args_element_value_38);
        if (tmp_args_element_value_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);
            Py_DECREF(tmp_called_value_74);

            exception_lineno = 74;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 73;
        tmp_args_element_value_36 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_74, tmp_args_element_value_37);
        Py_DECREF(tmp_called_value_74);
        Py_DECREF(tmp_args_element_value_37);
        if (tmp_args_element_value_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);
            Py_DECREF(tmp_called_value_72);

            exception_lineno = 73;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 72;
        tmp_args_element_value_35 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_72, tmp_args_element_value_36);
        Py_DECREF(tmp_called_value_72);
        Py_DECREF(tmp_args_element_value_36);
        if (tmp_args_element_value_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);
            Py_DECREF(tmp_called_value_70);

            exception_lineno = 72;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 71;
        tmp_args_element_value_34 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_70, tmp_args_element_value_35);
        Py_DECREF(tmp_called_value_70);
        Py_DECREF(tmp_args_element_value_35);
        if (tmp_args_element_value_34 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);
            Py_DECREF(tmp_called_value_68);

            exception_lineno = 71;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 70;
        tmp_args_element_value_33 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_68, tmp_args_element_value_34);
        Py_DECREF(tmp_called_value_68);
        Py_DECREF(tmp_args_element_value_34);
        if (tmp_args_element_value_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);
            Py_DECREF(tmp_called_value_66);

            exception_lineno = 70;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 69;
        tmp_args_element_value_32 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_66, tmp_args_element_value_33);
        Py_DECREF(tmp_called_value_66);
        Py_DECREF(tmp_args_element_value_33);
        if (tmp_args_element_value_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);
            Py_DECREF(tmp_called_value_64);

            exception_lineno = 69;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 68;
        tmp_args_element_value_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_64, tmp_args_element_value_32);
        Py_DECREF(tmp_called_value_64);
        Py_DECREF(tmp_args_element_value_32);
        if (tmp_args_element_value_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);
            Py_DECREF(tmp_called_value_62);

            exception_lineno = 68;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 67;
        tmp_args_element_value_30 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_62, tmp_args_element_value_31);
        Py_DECREF(tmp_called_value_62);
        Py_DECREF(tmp_args_element_value_31);
        if (tmp_args_element_value_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);
            Py_DECREF(tmp_called_value_60);

            exception_lineno = 67;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 66;
        tmp_args_element_value_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_60, tmp_args_element_value_30);
        Py_DECREF(tmp_called_value_60);
        Py_DECREF(tmp_args_element_value_30);
        if (tmp_args_element_value_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);
            Py_DECREF(tmp_called_value_58);

            exception_lineno = 66;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 65;
        tmp_args_element_value_28 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_58, tmp_args_element_value_29);
        Py_DECREF(tmp_called_value_58);
        Py_DECREF(tmp_args_element_value_29);
        if (tmp_args_element_value_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);
            Py_DECREF(tmp_called_value_56);

            exception_lineno = 65;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 64;
        tmp_args_element_value_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_56, tmp_args_element_value_28);
        Py_DECREF(tmp_called_value_56);
        Py_DECREF(tmp_args_element_value_28);
        if (tmp_args_element_value_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);
            Py_DECREF(tmp_called_value_54);

            exception_lineno = 64;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 63;
        tmp_args_element_value_26 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_54, tmp_args_element_value_27);
        Py_DECREF(tmp_called_value_54);
        Py_DECREF(tmp_args_element_value_27);
        if (tmp_args_element_value_26 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);
            Py_DECREF(tmp_called_value_52);

            exception_lineno = 63;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 62;
        tmp_args_element_value_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_52, tmp_args_element_value_26);
        Py_DECREF(tmp_called_value_52);
        Py_DECREF(tmp_args_element_value_26);
        if (tmp_args_element_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);
            Py_DECREF(tmp_called_value_50);

            exception_lineno = 62;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 61;
        tmp_args_element_value_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_50, tmp_args_element_value_25);
        Py_DECREF(tmp_called_value_50);
        Py_DECREF(tmp_args_element_value_25);
        if (tmp_args_element_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);
            Py_DECREF(tmp_called_value_48);

            exception_lineno = 61;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 60;
        tmp_args_element_value_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_48, tmp_args_element_value_24);
        Py_DECREF(tmp_called_value_48);
        Py_DECREF(tmp_args_element_value_24);
        if (tmp_args_element_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);
            Py_DECREF(tmp_called_value_46);

            exception_lineno = 60;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 59;
        tmp_args_element_value_22 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_46, tmp_args_element_value_23);
        Py_DECREF(tmp_called_value_46);
        Py_DECREF(tmp_args_element_value_23);
        if (tmp_args_element_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);
            Py_DECREF(tmp_called_value_44);

            exception_lineno = 59;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 58;
        tmp_args_element_value_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_44, tmp_args_element_value_22);
        Py_DECREF(tmp_called_value_44);
        Py_DECREF(tmp_args_element_value_22);
        if (tmp_args_element_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);
            Py_DECREF(tmp_called_value_42);

            exception_lineno = 58;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 57;
        tmp_args_element_value_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_42, tmp_args_element_value_21);
        Py_DECREF(tmp_called_value_42);
        Py_DECREF(tmp_args_element_value_21);
        if (tmp_args_element_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);
            Py_DECREF(tmp_called_value_40);

            exception_lineno = 57;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 56;
        tmp_args_element_value_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_40, tmp_args_element_value_20);
        Py_DECREF(tmp_called_value_40);
        Py_DECREF(tmp_args_element_value_20);
        if (tmp_args_element_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);
            Py_DECREF(tmp_called_value_38);

            exception_lineno = 56;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 55;
        tmp_args_element_value_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_38, tmp_args_element_value_19);
        Py_DECREF(tmp_called_value_38);
        Py_DECREF(tmp_args_element_value_19);
        if (tmp_args_element_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);
            Py_DECREF(tmp_called_value_36);

            exception_lineno = 55;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 54;
        tmp_args_element_value_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_36, tmp_args_element_value_18);
        Py_DECREF(tmp_called_value_36);
        Py_DECREF(tmp_args_element_value_18);
        if (tmp_args_element_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);
            Py_DECREF(tmp_called_value_34);

            exception_lineno = 54;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 53;
        tmp_args_element_value_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_34, tmp_args_element_value_17);
        Py_DECREF(tmp_called_value_34);
        Py_DECREF(tmp_args_element_value_17);
        if (tmp_args_element_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);
            Py_DECREF(tmp_called_value_32);

            exception_lineno = 53;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 52;
        tmp_args_element_value_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_32, tmp_args_element_value_16);
        Py_DECREF(tmp_called_value_32);
        Py_DECREF(tmp_args_element_value_16);
        if (tmp_args_element_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);
            Py_DECREF(tmp_called_value_30);

            exception_lineno = 52;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 51;
        tmp_args_element_value_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_30, tmp_args_element_value_15);
        Py_DECREF(tmp_called_value_30);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_args_element_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);
            Py_DECREF(tmp_called_value_28);

            exception_lineno = 51;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 50;
        tmp_args_element_value_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_28, tmp_args_element_value_14);
        Py_DECREF(tmp_called_value_28);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_args_element_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 50;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 49;
        tmp_args_element_value_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_26, tmp_args_element_value_13);
        Py_DECREF(tmp_called_value_26);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_args_element_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);
            Py_DECREF(tmp_called_value_24);

            exception_lineno = 49;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 48;
        tmp_args_element_value_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_24, tmp_args_element_value_12);
        Py_DECREF(tmp_called_value_24);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_args_element_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);
            Py_DECREF(tmp_called_value_22);

            exception_lineno = 48;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 47;
        tmp_args_element_value_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_22, tmp_args_element_value_11);
        Py_DECREF(tmp_called_value_22);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_args_element_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);
            Py_DECREF(tmp_called_value_20);

            exception_lineno = 47;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 46;
        tmp_args_element_value_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_20, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_20);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_args_element_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);
            Py_DECREF(tmp_called_value_18);

            exception_lineno = 46;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 45;
        tmp_args_element_value_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_18, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_18);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_args_element_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 45;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 44;
        tmp_args_element_value_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_16, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_16);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 44;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 43;
        tmp_args_element_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_14, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_args_element_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 43;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 42;
        tmp_args_element_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_12, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 42;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 41;
        tmp_args_element_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_10, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 41;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 40;
        tmp_args_element_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 40;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 39;
        tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 39;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 38;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 38;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 37;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__ignore == NULL);
        var__ignore = tmp_assign_source_4;
    }
    {
        PyObject *tmp_called_value_182;
        PyObject *tmp_called_value_183;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_92;
        PyObject *tmp_called_value_184;
        CHECK_OBJECT(var_handle);
        tmp_called_value_183 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 139;
        tmp_called_value_182 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_183, mod_consts[70]);

        if (tmp_called_value_182 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_184 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_called_value_184 == NULL)) {
            tmp_called_value_184 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_called_value_184 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_182);

            exception_lineno = 139;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 139;
        tmp_args_element_value_92 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_184, mod_consts[102]);

        if (tmp_args_element_value_92 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_182);

            exception_lineno = 139;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 139;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_182, tmp_args_element_value_92);
        Py_DECREF(tmp_called_value_182);
        Py_DECREF(tmp_args_element_value_92);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_185;
        PyObject *tmp_called_value_186;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_93;
        PyObject *tmp_called_value_187;
        CHECK_OBJECT(var_handle);
        tmp_called_value_186 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 140;
        tmp_called_value_185 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_186, mod_consts[71]);

        if (tmp_called_value_185 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_187 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_called_value_187 == NULL)) {
            tmp_called_value_187 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_called_value_187 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_185);

            exception_lineno = 140;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 140;
        tmp_args_element_value_93 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_187, mod_consts[103]);

        if (tmp_args_element_value_93 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_185);

            exception_lineno = 140;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 140;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_185, tmp_args_element_value_93);
        Py_DECREF(tmp_called_value_185);
        Py_DECREF(tmp_args_element_value_93);
        if (tmp_call_result_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_188;
        PyObject *tmp_called_value_189;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_94;
        PyObject *tmp_called_value_190;
        CHECK_OBJECT(var_handle);
        tmp_called_value_189 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 141;
        tmp_called_value_188 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_189, mod_consts[65]);

        if (tmp_called_value_188 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_190 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_called_value_190 == NULL)) {
            tmp_called_value_190 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_called_value_190 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_188);

            exception_lineno = 141;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 141;
        tmp_args_element_value_94 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_190, mod_consts[104]);

        if (tmp_args_element_value_94 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_188);

            exception_lineno = 141;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 141;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_188, tmp_args_element_value_94);
        Py_DECREF(tmp_called_value_188);
        Py_DECREF(tmp_args_element_value_94);
        if (tmp_call_result_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_191;
        PyObject *tmp_called_value_192;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_95;
        PyObject *tmp_called_value_193;
        CHECK_OBJECT(var_handle);
        tmp_called_value_192 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 142;
        tmp_called_value_191 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_192, mod_consts[64]);

        if (tmp_called_value_191 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_193 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_called_value_193 == NULL)) {
            tmp_called_value_193 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_called_value_193 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_191);

            exception_lineno = 142;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 142;
        tmp_args_element_value_95 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_193, mod_consts[105]);

        if (tmp_args_element_value_95 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_191);

            exception_lineno = 142;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 142;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_191, tmp_args_element_value_95);
        Py_DECREF(tmp_called_value_191);
        Py_DECREF(tmp_args_element_value_95);
        if (tmp_call_result_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_194;
        PyObject *tmp_called_value_195;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_96;
        PyObject *tmp_called_value_196;
        CHECK_OBJECT(var_handle);
        tmp_called_value_195 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 143;
        tmp_called_value_194 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_195, mod_consts[87]);

        if (tmp_called_value_194 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_196 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_called_value_196 == NULL)) {
            tmp_called_value_196 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_called_value_196 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_194);

            exception_lineno = 143;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 143;
        tmp_args_element_value_96 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_196, mod_consts[106]);

        if (tmp_args_element_value_96 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_194);

            exception_lineno = 143;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 143;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_194, tmp_args_element_value_96);
        Py_DECREF(tmp_called_value_194);
        Py_DECREF(tmp_args_element_value_96);
        if (tmp_call_result_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_197;
        PyObject *tmp_called_value_198;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_97;
        PyObject *tmp_called_value_199;
        CHECK_OBJECT(var_handle);
        tmp_called_value_198 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 144;
        tmp_called_value_197 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_198, mod_consts[88]);

        if (tmp_called_value_197 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_199 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_called_value_199 == NULL)) {
            tmp_called_value_199 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_called_value_199 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_197);

            exception_lineno = 144;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 144;
        tmp_args_element_value_97 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_199, mod_consts[107]);

        if (tmp_args_element_value_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_197);

            exception_lineno = 144;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 144;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_197, tmp_args_element_value_97);
        Py_DECREF(tmp_called_value_197);
        Py_DECREF(tmp_args_element_value_97);
        if (tmp_call_result_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_value_200;
        PyObject *tmp_called_value_201;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_98;
        PyObject *tmp_called_value_202;
        CHECK_OBJECT(var_handle);
        tmp_called_value_201 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 145;
        tmp_called_value_200 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_201, mod_consts[17]);

        if (tmp_called_value_200 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_202 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_called_value_202 == NULL)) {
            tmp_called_value_202 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_called_value_202 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_200);

            exception_lineno = 145;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 145;
        tmp_args_element_value_98 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_202, mod_consts[108]);

        if (tmp_args_element_value_98 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_200);

            exception_lineno = 145;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 145;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_200, tmp_args_element_value_98);
        Py_DECREF(tmp_called_value_200);
        Py_DECREF(tmp_args_element_value_98);
        if (tmp_call_result_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_value_203;
        PyObject *tmp_called_value_204;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_value_99;
        PyObject *tmp_called_value_205;
        CHECK_OBJECT(var_handle);
        tmp_called_value_204 = var_handle;
        CHECK_OBJECT(var_insert_mode);
        tmp_kw_call_value_0_1 = var_insert_mode;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 147;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
            tmp_called_value_203 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_204, mod_consts[16], kw_values, mod_consts[109]);
        }

        if (tmp_called_value_203 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_205 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_called_value_205 == NULL)) {
            tmp_called_value_205 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_called_value_205 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_203);

            exception_lineno = 147;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 147;
        tmp_args_element_value_99 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_205, mod_consts[110]);

        if (tmp_args_element_value_99 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_203);

            exception_lineno = 147;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 147;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_203, tmp_args_element_value_99);
        Py_DECREF(tmp_called_value_203);
        Py_DECREF(tmp_args_element_value_99);
        if (tmp_call_result_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }
    {
        PyObject *tmp_called_value_206;
        PyObject *tmp_called_value_207;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_100;
        PyObject *tmp_called_value_208;
        CHECK_OBJECT(var_handle);
        tmp_called_value_207 = var_handle;
        CHECK_OBJECT(var_insert_mode);
        tmp_kw_call_value_0_2 = var_insert_mode;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 148;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_2};
            tmp_called_value_206 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_207, mod_consts[26], kw_values, mod_consts[109]);
        }

        if (tmp_called_value_206 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_208 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_called_value_208 == NULL)) {
            tmp_called_value_208 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_called_value_208 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_206);

            exception_lineno = 148;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 148;
        tmp_args_element_value_100 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_208, mod_consts[111]);

        if (tmp_args_element_value_100 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_206);

            exception_lineno = 148;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 148;
        tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_206, tmp_args_element_value_100);
        Py_DECREF(tmp_called_value_206);
        Py_DECREF(tmp_args_element_value_100);
        if (tmp_call_result_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_called_value_209;
        PyObject *tmp_called_value_210;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_value_101;
        PyObject *tmp_called_value_211;
        CHECK_OBJECT(var_handle);
        tmp_called_value_210 = var_handle;
        CHECK_OBJECT(var_insert_mode);
        tmp_kw_call_value_0_3 = var_insert_mode;
        tmp_kw_call_value_1_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_kw_call_value_1_1 == NULL)) {
            tmp_kw_call_value_1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_kw_call_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 149;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_1};
            tmp_called_value_209 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_210, mod_consts[61], kw_values, mod_consts[113]);
        }

        if (tmp_called_value_209 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_211 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_called_value_211 == NULL)) {
            tmp_called_value_211 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_called_value_211 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_209);

            exception_lineno = 150;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 150;
        tmp_args_element_value_101 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_211, mod_consts[114]);

        if (tmp_args_element_value_101 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_209);

            exception_lineno = 150;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 149;
        tmp_call_result_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_209, tmp_args_element_value_101);
        Py_DECREF(tmp_called_value_209);
        Py_DECREF(tmp_args_element_value_101);
        if (tmp_call_result_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        PyObject *tmp_called_value_212;
        PyObject *tmp_called_value_213;
        PyObject *tmp_kw_call_value_0_4;
        PyObject *tmp_kw_call_value_1_2;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_value_102;
        PyObject *tmp_called_value_214;
        CHECK_OBJECT(var_handle);
        tmp_called_value_213 = var_handle;
        CHECK_OBJECT(var_insert_mode);
        tmp_kw_call_value_0_4 = var_insert_mode;
        tmp_kw_call_value_1_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_kw_call_value_1_2 == NULL)) {
            tmp_kw_call_value_1_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_kw_call_value_1_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 152;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_4, tmp_kw_call_value_1_2};
            tmp_called_value_212 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_213, mod_consts[74], kw_values, mod_consts[113]);
        }

        if (tmp_called_value_212 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_214 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_called_value_214 == NULL)) {
            tmp_called_value_214 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_called_value_214 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_212);

            exception_lineno = 153;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 153;
        tmp_args_element_value_102 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_214, mod_consts[115]);

        if (tmp_args_element_value_102 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_212);

            exception_lineno = 153;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 152;
        tmp_call_result_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_212, tmp_args_element_value_102);
        Py_DECREF(tmp_called_value_212);
        Py_DECREF(tmp_args_element_value_102);
        if (tmp_call_result_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_11);
    }
    {
        PyObject *tmp_called_value_215;
        PyObject *tmp_called_value_216;
        PyObject *tmp_kw_call_value_0_5;
        PyObject *tmp_kw_call_value_1_3;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_value_103;
        PyObject *tmp_called_value_217;
        CHECK_OBJECT(var_handle);
        tmp_called_value_216 = var_handle;
        CHECK_OBJECT(var_insert_mode);
        tmp_kw_call_value_0_5 = var_insert_mode;
        tmp_kw_call_value_1_3 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_kw_call_value_1_3 == NULL)) {
            tmp_kw_call_value_1_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_kw_call_value_1_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 155;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_5, tmp_kw_call_value_1_3};
            tmp_called_value_215 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_216, mod_consts[76], kw_values, mod_consts[113]);
        }

        if (tmp_called_value_215 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_217 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_called_value_217 == NULL)) {
            tmp_called_value_217 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_called_value_217 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_215);

            exception_lineno = 156;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 156;
        tmp_args_element_value_103 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_217, mod_consts[115]);

        if (tmp_args_element_value_103 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_215);

            exception_lineno = 156;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 155;
        tmp_call_result_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_215, tmp_args_element_value_103);
        Py_DECREF(tmp_called_value_215);
        Py_DECREF(tmp_args_element_value_103);
        if (tmp_call_result_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_called_value_218;
        PyObject *tmp_called_value_219;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_call_result_13;
        PyObject *tmp_args_element_value_104;
        PyObject *tmp_called_value_220;
        CHECK_OBJECT(var_handle);
        tmp_called_value_219 = var_handle;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[95]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[116]);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_insert_mode);
        tmp_kw_call_dict_value_0_1 = var_insert_mode;
        tmp_kw_call_dict_value_1_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_kw_call_dict_value_1_1 == NULL)) {
            tmp_kw_call_dict_value_1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
        }

        if (tmp_kw_call_dict_value_1_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 158;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 158;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_called_value_218 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_219, args, kw_values, mod_consts[113]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_1);
        if (tmp_called_value_218 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_220 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_called_value_220 == NULL)) {
            tmp_called_value_220 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_called_value_220 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_218);

            exception_lineno = 159;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 159;
        tmp_args_element_value_104 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_220, mod_consts[117]);

        if (tmp_args_element_value_104 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_218);

            exception_lineno = 159;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 158;
        tmp_call_result_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_218, tmp_args_element_value_104);
        Py_DECREF(tmp_called_value_218);
        Py_DECREF(tmp_args_element_value_104);
        if (tmp_call_result_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_13);
    }
    {
        PyObject *tmp_called_value_221;
        PyObject *tmp_called_value_222;
        PyObject *tmp_kw_call_value_0_6;
        PyObject *tmp_call_result_14;
        PyObject *tmp_args_element_value_105;
        PyObject *tmp_called_value_223;
        CHECK_OBJECT(var_handle);
        tmp_called_value_222 = var_handle;
        CHECK_OBJECT(var_insert_mode);
        tmp_kw_call_value_0_6 = var_insert_mode;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 161;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_6};
            tmp_called_value_221 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_222, mod_consts[25], kw_values, mod_consts[109]);
        }

        if (tmp_called_value_221 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_223 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_called_value_223 == NULL)) {
            tmp_called_value_223 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_called_value_223 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_221);

            exception_lineno = 161;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 161;
        tmp_args_element_value_105 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_223, mod_consts[118]);

        if (tmp_args_element_value_105 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_221);

            exception_lineno = 161;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 161;
        tmp_call_result_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_221, tmp_args_element_value_105);
        Py_DECREF(tmp_called_value_221);
        Py_DECREF(tmp_args_element_value_105);
        if (tmp_call_result_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_called_value_224;
        PyObject *tmp_called_value_225;
        PyObject *tmp_kw_call_value_0_7;
        PyObject *tmp_call_result_15;
        PyObject *tmp_args_element_value_106;
        PyObject *tmp_called_value_226;
        CHECK_OBJECT(var_handle);
        tmp_called_value_225 = var_handle;
        CHECK_OBJECT(var_insert_mode);
        tmp_kw_call_value_0_7 = var_insert_mode;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 162;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_7};
            tmp_called_value_224 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_225, mod_consts[14], kw_values, mod_consts[109]);
        }

        if (tmp_called_value_224 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_226 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_called_value_226 == NULL)) {
            tmp_called_value_226 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_called_value_226 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_224);

            exception_lineno = 162;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 162;
        tmp_args_element_value_106 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_226, mod_consts[119]);

        if (tmp_args_element_value_106 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_224);

            exception_lineno = 162;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 162;
        tmp_call_result_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_224, tmp_args_element_value_106);
        Py_DECREF(tmp_called_value_224);
        Py_DECREF(tmp_args_element_value_106);
        if (tmp_call_result_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_15);
    }
    {
        PyObject *tmp_called_value_227;
        PyObject *tmp_called_value_228;
        PyObject *tmp_kw_call_value_0_8;
        PyObject *tmp_call_result_16;
        PyObject *tmp_args_element_value_107;
        PyObject *tmp_called_value_229;
        CHECK_OBJECT(var_handle);
        tmp_called_value_228 = var_handle;
        CHECK_OBJECT(var_insert_mode);
        tmp_kw_call_value_0_8 = var_insert_mode;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 163;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_8};
            tmp_called_value_227 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_228, mod_consts[79], kw_values, mod_consts[109]);
        }

        if (tmp_called_value_227 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_229 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_called_value_229 == NULL)) {
            tmp_called_value_229 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_called_value_229 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_227);

            exception_lineno = 163;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 163;
        tmp_args_element_value_107 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_229, mod_consts[120]);

        if (tmp_args_element_value_107 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_227);

            exception_lineno = 163;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 163;
        tmp_call_result_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_227, tmp_args_element_value_107);
        Py_DECREF(tmp_called_value_227);
        Py_DECREF(tmp_args_element_value_107);
        if (tmp_call_result_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_16);
    }
    {
        PyObject *tmp_called_value_230;
        PyObject *tmp_called_value_231;
        PyObject *tmp_kw_call_value_0_9;
        PyObject *tmp_call_result_17;
        PyObject *tmp_args_element_value_108;
        PyObject *tmp_called_value_232;
        CHECK_OBJECT(var_handle);
        tmp_called_value_231 = var_handle;
        CHECK_OBJECT(var_insert_mode);
        tmp_kw_call_value_0_9 = var_insert_mode;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 167;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_9};
            tmp_called_value_230 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_231, mod_consts[28], kw_values, mod_consts[109]);
        }

        if (tmp_called_value_230 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_232 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_called_value_232 == NULL)) {
            tmp_called_value_232 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_called_value_232 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_230);

            exception_lineno = 167;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 167;
        tmp_args_element_value_108 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_232, mod_consts[121]);

        if (tmp_args_element_value_108 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_230);

            exception_lineno = 167;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 167;
        tmp_call_result_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_230, tmp_args_element_value_108);
        Py_DECREF(tmp_called_value_230);
        Py_DECREF(tmp_args_element_value_108);
        if (tmp_call_result_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_17);
    }
    {
        PyObject *tmp_called_value_233;
        PyObject *tmp_called_value_234;
        PyObject *tmp_kw_call_value_0_10;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_call_result_18;
        PyObject *tmp_args_element_value_109;
        PyObject *tmp_called_value_235;
        CHECK_OBJECT(var_handle);
        tmp_called_value_234 = var_handle;
        tmp_operand_value_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[122]);

        if (unlikely(tmp_operand_value_1 == NULL)) {
            tmp_operand_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[122]);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_10 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_value_1);
        if (tmp_kw_call_value_0_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 169;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_10};
            tmp_called_value_233 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_234, mod_consts[77], kw_values, mod_consts[109]);
        }

        Py_DECREF(tmp_kw_call_value_0_10);
        if (tmp_called_value_233 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_235 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_called_value_235 == NULL)) {
            tmp_called_value_235 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_called_value_235 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_233);

            exception_lineno = 169;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 169;
        tmp_args_element_value_109 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_235, mod_consts[106]);

        if (tmp_args_element_value_109 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_233);

            exception_lineno = 169;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 169;
        tmp_call_result_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_233, tmp_args_element_value_109);
        Py_DECREF(tmp_called_value_233);
        Py_DECREF(tmp_args_element_value_109);
        if (tmp_call_result_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_18);
    }
    {
        PyObject *tmp_called_value_236;
        PyObject *tmp_called_value_237;
        PyObject *tmp_kw_call_value_0_11;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_call_result_19;
        PyObject *tmp_args_element_value_110;
        PyObject *tmp_called_value_238;
        CHECK_OBJECT(var_handle);
        tmp_called_value_237 = var_handle;
        tmp_operand_value_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[122]);

        if (unlikely(tmp_operand_value_2 == NULL)) {
            tmp_operand_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[122]);
        }

        if (tmp_operand_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_11 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_value_2);
        if (tmp_kw_call_value_0_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 170;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_11};
            tmp_called_value_236 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_237, mod_consts[78], kw_values, mod_consts[109]);
        }

        Py_DECREF(tmp_kw_call_value_0_11);
        if (tmp_called_value_236 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_238 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_called_value_238 == NULL)) {
            tmp_called_value_238 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_called_value_238 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_236);

            exception_lineno = 170;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 170;
        tmp_args_element_value_110 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_238, mod_consts[107]);

        if (tmp_args_element_value_110 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_236);

            exception_lineno = 170;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 170;
        tmp_call_result_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_236, tmp_args_element_value_110);
        Py_DECREF(tmp_called_value_236);
        Py_DECREF(tmp_args_element_value_110);
        if (tmp_call_result_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_19);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_239;
        PyObject *tmp_args_element_value_111;
        PyObject *tmp_annotations_2;
        tmp_called_value_239 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_called_value_239 == NULL)) {
            tmp_called_value_239 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
        }

        if (tmp_called_value_239 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_2 = DICT_COPY(mod_consts[124]);


        tmp_args_element_value_111 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__2_has_text_before_cursor(tmp_annotations_2);

        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 174;
        tmp_assign_source_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_239, tmp_args_element_value_111);
        Py_DECREF(tmp_args_element_value_111);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_has_text_before_cursor == NULL);
        var_has_text_before_cursor = tmp_assign_source_5;
    }
    {
        PyObject *tmp_called_value_240;
        PyObject *tmp_called_value_241;
        PyObject *tmp_kw_call_value_0_12;
        PyObject *tmp_bitand_expr_left_1;
        PyObject *tmp_bitand_expr_right_1;
        PyObject *tmp_call_result_20;
        PyObject *tmp_args_element_value_112;
        PyObject *tmp_called_value_242;
        CHECK_OBJECT(var_handle);
        tmp_called_value_241 = var_handle;
        CHECK_OBJECT(var_has_text_before_cursor);
        tmp_bitand_expr_left_1 = var_has_text_before_cursor;
        CHECK_OBJECT(var_insert_mode);
        tmp_bitand_expr_right_1 = var_insert_mode;
        tmp_kw_call_value_0_12 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
        if (tmp_kw_call_value_0_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 178;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_12};
            tmp_called_value_240 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_241, mod_consts[9], kw_values, mod_consts[109]);
        }

        Py_DECREF(tmp_kw_call_value_0_12);
        if (tmp_called_value_240 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_242 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_called_value_242 == NULL)) {
            tmp_called_value_242 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[101]);
        }

        if (tmp_called_value_242 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_240);

            exception_lineno = 179;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 179;
        tmp_args_element_value_112 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_242, mod_consts[115]);

        if (tmp_args_element_value_112 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_240);

            exception_lineno = 179;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 178;
        tmp_call_result_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_240, tmp_args_element_value_112);
        Py_DECREF(tmp_called_value_240);
        Py_DECREF(tmp_args_element_value_112);
        if (tmp_call_result_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_20);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_243;
        PyObject *tmp_called_value_244;
        PyObject *tmp_kw_call_value_0_13;
        PyObject *tmp_bitand_expr_left_2;
        PyObject *tmp_bitand_expr_right_2;
        PyObject *tmp_args_element_value_113;
        PyObject *tmp_annotations_3;
        CHECK_OBJECT(var_handle);
        tmp_called_value_244 = var_handle;
        CHECK_OBJECT(var_insert_mode);
        tmp_bitand_expr_left_2 = var_insert_mode;
        tmp_bitand_expr_right_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[127]);

        if (unlikely(tmp_bitand_expr_right_2 == NULL)) {
            tmp_bitand_expr_right_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[127]);
        }

        if (tmp_bitand_expr_right_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_13 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_2, tmp_bitand_expr_right_2);
        if (tmp_kw_call_value_0_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 182;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_13};
            tmp_called_value_243 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_244, mod_consts[128], kw_values, mod_consts[109]);
        }

        Py_DECREF(tmp_kw_call_value_0_13);
        if (tmp_called_value_243 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_3 = DICT_COPY(mod_consts[97]);


        tmp_args_element_value_113 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__3__newline(tmp_annotations_3);

        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 182;
        tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_243, tmp_args_element_value_113);
        Py_DECREF(tmp_called_value_243);
        Py_DECREF(tmp_args_element_value_113);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__newline == NULL);
        var__newline = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_245;
        PyObject *tmp_called_value_246;
        PyObject *tmp_args_element_value_114;
        PyObject *tmp_annotations_4;
        CHECK_OBJECT(var_handle);
        tmp_called_value_246 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 189;
        tmp_called_value_245 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_246, mod_consts[15]);

        if (tmp_called_value_245 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_4 = DICT_COPY(mod_consts[97]);


        tmp_args_element_value_114 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__4__newline2(tmp_annotations_4);

        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 189;
        tmp_assign_source_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_245, tmp_args_element_value_114);
        Py_DECREF(tmp_called_value_245);
        Py_DECREF(tmp_args_element_value_114);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__newline2 == NULL);
        var__newline2 = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_247;
        PyObject *tmp_called_value_248;
        PyObject *tmp_args_element_value_115;
        PyObject *tmp_annotations_5;
        CHECK_OBJECT(var_handle);
        tmp_called_value_248 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 200;
        tmp_called_value_247 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_248, mod_consts[62]);

        if (tmp_called_value_247 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_5 = DICT_COPY(mod_consts[97]);


        tmp_args_element_value_115 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__5__go_up(tmp_annotations_5);

        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 200;
        tmp_assign_source_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_247, tmp_args_element_value_115);
        Py_DECREF(tmp_called_value_247);
        Py_DECREF(tmp_args_element_value_115);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__go_up == NULL);
        var__go_up = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_249;
        PyObject *tmp_called_value_250;
        PyObject *tmp_args_element_value_116;
        PyObject *tmp_annotations_6;
        CHECK_OBJECT(var_handle);
        tmp_called_value_250 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 204;
        tmp_called_value_249 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_250, mod_consts[63]);

        if (tmp_called_value_249 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_6 = DICT_COPY(mod_consts[97]);


        tmp_args_element_value_116 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__6__go_down(tmp_annotations_6);

        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 204;
        tmp_assign_source_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_249, tmp_args_element_value_116);
        Py_DECREF(tmp_called_value_249);
        Py_DECREF(tmp_args_element_value_116);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__go_down == NULL);
        var__go_down = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_251;
        PyObject *tmp_called_value_252;
        PyObject *tmp_kw_call_value_0_14;
        PyObject *tmp_args_element_value_117;
        PyObject *tmp_annotations_7;
        CHECK_OBJECT(var_handle);
        tmp_called_value_252 = var_handle;
        tmp_kw_call_value_0_14 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[122]);

        if (unlikely(tmp_kw_call_value_0_14 == NULL)) {
            tmp_kw_call_value_0_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[122]);
        }

        if (tmp_kw_call_value_0_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 208;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_14};
            tmp_called_value_251 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tstate, tmp_called_value_252, mod_consts[74], kw_values, mod_consts[109]);
        }

        if (tmp_called_value_251 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_7 = DICT_COPY(mod_consts[97]);


        tmp_args_element_value_117 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__7__cut(tmp_annotations_7);

        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 208;
        tmp_assign_source_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_251, tmp_args_element_value_117);
        Py_DECREF(tmp_called_value_251);
        Py_DECREF(tmp_args_element_value_117);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__cut == NULL);
        var__cut = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_253;
        PyObject *tmp_called_value_254;
        PyObject *tmp_args_element_value_118;
        PyObject *tmp_annotations_8;
        CHECK_OBJECT(var_handle);
        tmp_called_value_254 = var_handle;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 215;
        tmp_called_value_253 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_254, mod_consts[31]);

        if (tmp_called_value_253 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_8 = DICT_COPY(mod_consts[97]);


        tmp_args_element_value_118 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__8__insert_ctrl_z(tmp_annotations_8);

        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 215;
        tmp_assign_source_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_253, tmp_args_element_value_118);
        Py_DECREF(tmp_called_value_253);
        Py_DECREF(tmp_args_element_value_118);
        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__insert_ctrl_z == NULL);
        var__insert_ctrl_z = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_255;
        PyObject *tmp_called_value_256;
        PyObject *tmp_args_element_value_119;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_120;
        PyObject *tmp_annotations_9;
        CHECK_OBJECT(var_handle);
        tmp_called_value_256 = var_handle;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[95]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_119 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[144]);
        if (tmp_args_element_value_119 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 228;
        tmp_called_value_255 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_256, tmp_args_element_value_119);
        Py_DECREF(tmp_args_element_value_119);
        if (tmp_called_value_255 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_9 = DICT_COPY(mod_consts[97]);


        tmp_args_element_value_120 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__9__paste(tmp_annotations_9);

        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 228;
        tmp_assign_source_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_255, tmp_args_element_value_120);
        Py_DECREF(tmp_called_value_255);
        Py_DECREF(tmp_args_element_value_120);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__paste == NULL);
        var__paste = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_257;
        PyObject *tmp_args_element_value_121;
        PyObject *tmp_annotations_10;
        tmp_called_value_257 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[123]);

        if (unlikely(tmp_called_value_257 == NULL)) {
            tmp_called_value_257 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
        }

        if (tmp_called_value_257 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_10 = DICT_COPY(mod_consts[124]);


        tmp_args_element_value_121 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__10_in_quoted_insert(tmp_annotations_10);

        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 243;
        tmp_assign_source_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_257, tmp_args_element_value_121);
        Py_DECREF(tmp_args_element_value_121);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_in_quoted_insert == NULL);
        var_in_quoted_insert = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_258;
        PyObject *tmp_called_value_259;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_kw_call_dict_value_1_2;
        PyObject *tmp_args_element_value_122;
        PyObject *tmp_annotations_11;
        CHECK_OBJECT(var_handle);
        tmp_called_value_259 = var_handle;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[95]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[116]);
        if (tmp_kw_call_arg_value_0_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_in_quoted_insert);
        tmp_kw_call_dict_value_0_2 = var_in_quoted_insert;
        tmp_kw_call_dict_value_1_2 = Py_True;
        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 247;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2};
            tmp_called_value_258 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_259, args, kw_values, mod_consts[150]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_2);
        if (tmp_called_value_258 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_11 = DICT_COPY(mod_consts[97]);


        tmp_args_element_value_122 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__11__insert_text(tmp_annotations_11);

        frame_00d6667bbf727d69ced472e94516a678->m_frame.f_lineno = 247;
        tmp_assign_source_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_258, tmp_args_element_value_122);
        Py_DECREF(tmp_called_value_258);
        Py_DECREF(tmp_args_element_value_122);
        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__insert_text == NULL);
        var__insert_text = tmp_assign_source_14;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_00d6667bbf727d69ced472e94516a678, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_00d6667bbf727d69ced472e94516a678->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_00d6667bbf727d69ced472e94516a678, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_00d6667bbf727d69ced472e94516a678,
        type_description_1,
        var_key_bindings,
        var_insert_mode,
        var_handle,
        var__ignore,
        var_has_text_before_cursor,
        var__newline,
        var__newline2,
        var__go_up,
        var__go_down,
        var__cut,
        var__insert_ctrl_z,
        var__paste,
        var_in_quoted_insert,
        var__insert_text
    );


    // Release cached frame if used for exception.
    if (frame_00d6667bbf727d69ced472e94516a678 == cache_frame_00d6667bbf727d69ced472e94516a678) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_00d6667bbf727d69ced472e94516a678);
        cache_frame_00d6667bbf727d69ced472e94516a678 = NULL;
    }

    assertFrameObject(frame_00d6667bbf727d69ced472e94516a678);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_key_bindings);
    tmp_return_value = var_key_bindings;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_key_bindings);
    Py_DECREF(var_key_bindings);
    var_key_bindings = NULL;
    CHECK_OBJECT(var_insert_mode);
    Py_DECREF(var_insert_mode);
    var_insert_mode = NULL;
    CHECK_OBJECT(var_handle);
    Py_DECREF(var_handle);
    var_handle = NULL;
    CHECK_OBJECT(var__ignore);
    Py_DECREF(var__ignore);
    var__ignore = NULL;
    CHECK_OBJECT(var_has_text_before_cursor);
    Py_DECREF(var_has_text_before_cursor);
    var_has_text_before_cursor = NULL;
    CHECK_OBJECT(var__newline);
    Py_DECREF(var__newline);
    var__newline = NULL;
    CHECK_OBJECT(var__newline2);
    Py_DECREF(var__newline2);
    var__newline2 = NULL;
    CHECK_OBJECT(var__go_up);
    Py_DECREF(var__go_up);
    var__go_up = NULL;
    CHECK_OBJECT(var__go_down);
    Py_DECREF(var__go_down);
    var__go_down = NULL;
    CHECK_OBJECT(var__cut);
    Py_DECREF(var__cut);
    var__cut = NULL;
    CHECK_OBJECT(var__insert_ctrl_z);
    Py_DECREF(var__insert_ctrl_z);
    var__insert_ctrl_z = NULL;
    CHECK_OBJECT(var__paste);
    Py_DECREF(var__paste);
    var__paste = NULL;
    CHECK_OBJECT(var_in_quoted_insert);
    Py_DECREF(var_in_quoted_insert);
    var_in_quoted_insert = NULL;
    CHECK_OBJECT(var__insert_text);
    Py_DECREF(var__insert_text);
    var__insert_text = NULL;
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

    Py_XDECREF(var_key_bindings);
    var_key_bindings = NULL;
    Py_XDECREF(var_insert_mode);
    var_insert_mode = NULL;
    Py_XDECREF(var_handle);
    var_handle = NULL;
    Py_XDECREF(var__ignore);
    var__ignore = NULL;
    Py_XDECREF(var_has_text_before_cursor);
    var_has_text_before_cursor = NULL;
    Py_XDECREF(var__newline);
    var__newline = NULL;
    Py_XDECREF(var__newline2);
    var__newline2 = NULL;
    Py_XDECREF(var__go_up);
    var__go_up = NULL;
    Py_XDECREF(var__go_down);
    var__go_down = NULL;
    Py_XDECREF(var__cut);
    var__cut = NULL;
    Py_XDECREF(var__insert_ctrl_z);
    var__insert_ctrl_z = NULL;
    Py_XDECREF(var__paste);
    var__paste = NULL;
    Py_XDECREF(var_in_quoted_insert);
    var_in_quoted_insert = NULL;
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


static PyObject *impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__2_has_text_before_cursor(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_fc5b85983319aef6c1999586cf80b305;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_fc5b85983319aef6c1999586cf80b305 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fc5b85983319aef6c1999586cf80b305)) {
        Py_XDECREF(cache_frame_fc5b85983319aef6c1999586cf80b305);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fc5b85983319aef6c1999586cf80b305 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fc5b85983319aef6c1999586cf80b305 = MAKE_FUNCTION_FRAME(tstate, codeobj_fc5b85983319aef6c1999586cf80b305, module_prompt_toolkit$key_binding$bindings$basic, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fc5b85983319aef6c1999586cf80b305->m_type_description == NULL);
    frame_fc5b85983319aef6c1999586cf80b305 = cache_frame_fc5b85983319aef6c1999586cf80b305;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_fc5b85983319aef6c1999586cf80b305);
    assert(Py_REFCNT(frame_fc5b85983319aef6c1999586cf80b305) == 2);

    // Framed code:
    {
        PyObject *tmp_value_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[154]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[154]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        frame_fc5b85983319aef6c1999586cf80b305->m_frame.f_lineno = 176;
        tmp_expression_value_2 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[155]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        tmp_value_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[156]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_value_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
        Py_DECREF(tmp_value_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
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
        exception_tb = MAKE_TRACEBACK(frame_fc5b85983319aef6c1999586cf80b305, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fc5b85983319aef6c1999586cf80b305->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fc5b85983319aef6c1999586cf80b305, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fc5b85983319aef6c1999586cf80b305,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_fc5b85983319aef6c1999586cf80b305 == cache_frame_fc5b85983319aef6c1999586cf80b305) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fc5b85983319aef6c1999586cf80b305);
        cache_frame_fc5b85983319aef6c1999586cf80b305 = NULL;
    }

    assertFrameObject(frame_fc5b85983319aef6c1999586cf80b305);

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


static PyObject *impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__3__newline(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    struct Nuitka_FrameObject *frame_fbf1374f2fd7b21505f3052efe9b78f2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_fbf1374f2fd7b21505f3052efe9b78f2 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fbf1374f2fd7b21505f3052efe9b78f2)) {
        Py_XDECREF(cache_frame_fbf1374f2fd7b21505f3052efe9b78f2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fbf1374f2fd7b21505f3052efe9b78f2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fbf1374f2fd7b21505f3052efe9b78f2 = MAKE_FUNCTION_FRAME(tstate, codeobj_fbf1374f2fd7b21505f3052efe9b78f2, module_prompt_toolkit$key_binding$bindings$basic, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fbf1374f2fd7b21505f3052efe9b78f2->m_type_description == NULL);
    frame_fbf1374f2fd7b21505f3052efe9b78f2 = cache_frame_fbf1374f2fd7b21505f3052efe9b78f2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_fbf1374f2fd7b21505f3052efe9b78f2);
    assert(Py_REFCNT(frame_fbf1374f2fd7b21505f3052efe9b78f2) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_2;
        CHECK_OBJECT(par_event);
        tmp_expression_value_2 = par_event;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[155]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[157]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[158]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[158]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 187;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_fbf1374f2fd7b21505f3052efe9b78f2->m_frame.f_lineno = 187;
        tmp_operand_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_2);
        if (tmp_operand_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 187;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 187;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = (tmp_res == 0) ? Py_True : Py_False;
        frame_fbf1374f2fd7b21505f3052efe9b78f2->m_frame.f_lineno = 187;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[159]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fbf1374f2fd7b21505f3052efe9b78f2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fbf1374f2fd7b21505f3052efe9b78f2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fbf1374f2fd7b21505f3052efe9b78f2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fbf1374f2fd7b21505f3052efe9b78f2,
        type_description_1,
        par_event
    );


    // Release cached frame if used for exception.
    if (frame_fbf1374f2fd7b21505f3052efe9b78f2 == cache_frame_fbf1374f2fd7b21505f3052efe9b78f2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fbf1374f2fd7b21505f3052efe9b78f2);
        cache_frame_fbf1374f2fd7b21505f3052efe9b78f2 = NULL;
    }

    assertFrameObject(frame_fbf1374f2fd7b21505f3052efe9b78f2);

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
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__4__newline2(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    struct Nuitka_FrameObject *frame_60b6e9759b62f7c1b3683a7ad399bb1d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_60b6e9759b62f7c1b3683a7ad399bb1d = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_60b6e9759b62f7c1b3683a7ad399bb1d)) {
        Py_XDECREF(cache_frame_60b6e9759b62f7c1b3683a7ad399bb1d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_60b6e9759b62f7c1b3683a7ad399bb1d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_60b6e9759b62f7c1b3683a7ad399bb1d = MAKE_FUNCTION_FRAME(tstate, codeobj_60b6e9759b62f7c1b3683a7ad399bb1d, module_prompt_toolkit$key_binding$bindings$basic, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_60b6e9759b62f7c1b3683a7ad399bb1d->m_type_description == NULL);
    frame_60b6e9759b62f7c1b3683a7ad399bb1d = cache_frame_60b6e9759b62f7c1b3683a7ad399bb1d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_60b6e9759b62f7c1b3683a7ad399bb1d);
    assert(Py_REFCNT(frame_60b6e9759b62f7c1b3683a7ad399bb1d) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(par_event);
        tmp_expression_value_2 = par_event;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[160]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[161]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[162]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 196;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[95]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 196;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[163]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 196;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = mod_consts[164];
        frame_60b6e9759b62f7c1b3683a7ad399bb1d->m_frame.f_lineno = 196;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 196;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[165]);
        frame_60b6e9759b62f7c1b3683a7ad399bb1d->m_frame.f_lineno = 196;
        tmp_call_result_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_60b6e9759b62f7c1b3683a7ad399bb1d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_60b6e9759b62f7c1b3683a7ad399bb1d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_60b6e9759b62f7c1b3683a7ad399bb1d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_60b6e9759b62f7c1b3683a7ad399bb1d,
        type_description_1,
        par_event
    );


    // Release cached frame if used for exception.
    if (frame_60b6e9759b62f7c1b3683a7ad399bb1d == cache_frame_60b6e9759b62f7c1b3683a7ad399bb1d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_60b6e9759b62f7c1b3683a7ad399bb1d);
        cache_frame_60b6e9759b62f7c1b3683a7ad399bb1d = NULL;
    }

    assertFrameObject(frame_60b6e9759b62f7c1b3683a7ad399bb1d);

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
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__5__go_up(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    struct Nuitka_FrameObject *frame_db18a849cb1828b9ad64c9b8d2da7755;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_db18a849cb1828b9ad64c9b8d2da7755 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_db18a849cb1828b9ad64c9b8d2da7755)) {
        Py_XDECREF(cache_frame_db18a849cb1828b9ad64c9b8d2da7755);

#if _DEBUG_REFCOUNTS
        if (cache_frame_db18a849cb1828b9ad64c9b8d2da7755 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_db18a849cb1828b9ad64c9b8d2da7755 = MAKE_FUNCTION_FRAME(tstate, codeobj_db18a849cb1828b9ad64c9b8d2da7755, module_prompt_toolkit$key_binding$bindings$basic, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_db18a849cb1828b9ad64c9b8d2da7755->m_type_description == NULL);
    frame_db18a849cb1828b9ad64c9b8d2da7755 = cache_frame_db18a849cb1828b9ad64c9b8d2da7755;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_db18a849cb1828b9ad64c9b8d2da7755);
    assert(Py_REFCNT(frame_db18a849cb1828b9ad64c9b8d2da7755) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_event);
        tmp_expression_value_2 = par_event;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[155]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[166]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_event);
        tmp_expression_value_3 = par_event;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[167]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 202;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_db18a849cb1828b9ad64c9b8d2da7755->m_frame.f_lineno = 202;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[168]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_db18a849cb1828b9ad64c9b8d2da7755, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_db18a849cb1828b9ad64c9b8d2da7755->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_db18a849cb1828b9ad64c9b8d2da7755, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_db18a849cb1828b9ad64c9b8d2da7755,
        type_description_1,
        par_event
    );


    // Release cached frame if used for exception.
    if (frame_db18a849cb1828b9ad64c9b8d2da7755 == cache_frame_db18a849cb1828b9ad64c9b8d2da7755) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_db18a849cb1828b9ad64c9b8d2da7755);
        cache_frame_db18a849cb1828b9ad64c9b8d2da7755 = NULL;
    }

    assertFrameObject(frame_db18a849cb1828b9ad64c9b8d2da7755);

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
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__6__go_down(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    struct Nuitka_FrameObject *frame_6858ba3a68e11fad3c2c73f8499ef886;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6858ba3a68e11fad3c2c73f8499ef886 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6858ba3a68e11fad3c2c73f8499ef886)) {
        Py_XDECREF(cache_frame_6858ba3a68e11fad3c2c73f8499ef886);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6858ba3a68e11fad3c2c73f8499ef886 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6858ba3a68e11fad3c2c73f8499ef886 = MAKE_FUNCTION_FRAME(tstate, codeobj_6858ba3a68e11fad3c2c73f8499ef886, module_prompt_toolkit$key_binding$bindings$basic, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6858ba3a68e11fad3c2c73f8499ef886->m_type_description == NULL);
    frame_6858ba3a68e11fad3c2c73f8499ef886 = cache_frame_6858ba3a68e11fad3c2c73f8499ef886;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_6858ba3a68e11fad3c2c73f8499ef886);
    assert(Py_REFCNT(frame_6858ba3a68e11fad3c2c73f8499ef886) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_event);
        tmp_expression_value_2 = par_event;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[155]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[169]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_event);
        tmp_expression_value_3 = par_event;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[167]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 206;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_6858ba3a68e11fad3c2c73f8499ef886->m_frame.f_lineno = 206;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_call_result_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_1, kw_values, mod_consts[168]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6858ba3a68e11fad3c2c73f8499ef886, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6858ba3a68e11fad3c2c73f8499ef886->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6858ba3a68e11fad3c2c73f8499ef886, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6858ba3a68e11fad3c2c73f8499ef886,
        type_description_1,
        par_event
    );


    // Release cached frame if used for exception.
    if (frame_6858ba3a68e11fad3c2c73f8499ef886 == cache_frame_6858ba3a68e11fad3c2c73f8499ef886) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6858ba3a68e11fad3c2c73f8499ef886);
        cache_frame_6858ba3a68e11fad3c2c73f8499ef886 = NULL;
    }

    assertFrameObject(frame_6858ba3a68e11fad3c2c73f8499ef886);

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
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__7__cut(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    PyObject *var_data = NULL;
    struct Nuitka_FrameObject *frame_193d39c961612dda17b22251bb194eb3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_193d39c961612dda17b22251bb194eb3 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_193d39c961612dda17b22251bb194eb3)) {
        Py_XDECREF(cache_frame_193d39c961612dda17b22251bb194eb3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_193d39c961612dda17b22251bb194eb3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_193d39c961612dda17b22251bb194eb3 = MAKE_FUNCTION_FRAME(tstate, codeobj_193d39c961612dda17b22251bb194eb3, module_prompt_toolkit$key_binding$bindings$basic, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_193d39c961612dda17b22251bb194eb3->m_type_description == NULL);
    frame_193d39c961612dda17b22251bb194eb3 = cache_frame_193d39c961612dda17b22251bb194eb3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_193d39c961612dda17b22251bb194eb3);
    assert(Py_REFCNT(frame_193d39c961612dda17b22251bb194eb3) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_event);
        tmp_expression_value_1 = par_event;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[155]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_193d39c961612dda17b22251bb194eb3->m_frame.f_lineno = 210;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[170]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_data == NULL);
        var_data = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_event);
        tmp_expression_value_3 = par_event;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[171]);
        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[172]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_instance_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_data);
        tmp_args_element_value_1 = var_data;
        frame_193d39c961612dda17b22251bb194eb3->m_frame.f_lineno = 211;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_2, mod_consts[173], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_193d39c961612dda17b22251bb194eb3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_193d39c961612dda17b22251bb194eb3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_193d39c961612dda17b22251bb194eb3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_193d39c961612dda17b22251bb194eb3,
        type_description_1,
        par_event,
        var_data
    );


    // Release cached frame if used for exception.
    if (frame_193d39c961612dda17b22251bb194eb3 == cache_frame_193d39c961612dda17b22251bb194eb3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_193d39c961612dda17b22251bb194eb3);
        cache_frame_193d39c961612dda17b22251bb194eb3 = NULL;
    }

    assertFrameObject(frame_193d39c961612dda17b22251bb194eb3);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_data);
    Py_DECREF(var_data);
    var_data = NULL;
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

    Py_XDECREF(var_data);
    var_data = NULL;
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
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__8__insert_ctrl_z(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    struct Nuitka_FrameObject *frame_979d42412083397a26113972ba68063e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_979d42412083397a26113972ba68063e = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_979d42412083397a26113972ba68063e)) {
        Py_XDECREF(cache_frame_979d42412083397a26113972ba68063e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_979d42412083397a26113972ba68063e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_979d42412083397a26113972ba68063e = MAKE_FUNCTION_FRAME(tstate, codeobj_979d42412083397a26113972ba68063e, module_prompt_toolkit$key_binding$bindings$basic, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_979d42412083397a26113972ba68063e->m_type_description == NULL);
    frame_979d42412083397a26113972ba68063e = cache_frame_979d42412083397a26113972ba68063e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_979d42412083397a26113972ba68063e);
    assert(Py_REFCNT(frame_979d42412083397a26113972ba68063e) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_event);
        tmp_expression_value_2 = par_event;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[155]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[174]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_event);
        tmp_expression_value_3 = par_event;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[175]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 226;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_979d42412083397a26113972ba68063e->m_frame.f_lineno = 226;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_979d42412083397a26113972ba68063e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_979d42412083397a26113972ba68063e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_979d42412083397a26113972ba68063e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_979d42412083397a26113972ba68063e,
        type_description_1,
        par_event
    );


    // Release cached frame if used for exception.
    if (frame_979d42412083397a26113972ba68063e == cache_frame_979d42412083397a26113972ba68063e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_979d42412083397a26113972ba68063e);
        cache_frame_979d42412083397a26113972ba68063e = NULL;
    }

    assertFrameObject(frame_979d42412083397a26113972ba68063e);

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
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__9__paste(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    PyObject *var_data = NULL;
    struct Nuitka_FrameObject *frame_fdd9dec57635b378121a83b572b45af6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_fdd9dec57635b378121a83b572b45af6 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_fdd9dec57635b378121a83b572b45af6)) {
        Py_XDECREF(cache_frame_fdd9dec57635b378121a83b572b45af6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fdd9dec57635b378121a83b572b45af6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fdd9dec57635b378121a83b572b45af6 = MAKE_FUNCTION_FRAME(tstate, codeobj_fdd9dec57635b378121a83b572b45af6, module_prompt_toolkit$key_binding$bindings$basic, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fdd9dec57635b378121a83b572b45af6->m_type_description == NULL);
    frame_fdd9dec57635b378121a83b572b45af6 = cache_frame_fdd9dec57635b378121a83b572b45af6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_fdd9dec57635b378121a83b572b45af6);
    assert(Py_REFCNT(frame_fdd9dec57635b378121a83b572b45af6) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_event);
        tmp_expression_value_1 = par_event;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[175]);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_data == NULL);
        var_data = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_data);
        tmp_expression_value_2 = var_data;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[176]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_fdd9dec57635b378121a83b572b45af6->m_frame.f_lineno = 238;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_1, mod_consts[177]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_data;
            assert(old != NULL);
            var_data = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_data);
        tmp_expression_value_3 = var_data;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[176]);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_fdd9dec57635b378121a83b572b45af6->m_frame.f_lineno = 239;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_POSARGS2(tstate, tmp_called_value_2, mod_consts[178]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_data;
            assert(old != NULL);
            var_data = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_event);
        tmp_expression_value_4 = par_event;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[155]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_data);
        tmp_args_element_value_1 = var_data;
        frame_fdd9dec57635b378121a83b572b45af6->m_frame.f_lineno = 241;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[174], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fdd9dec57635b378121a83b572b45af6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fdd9dec57635b378121a83b572b45af6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fdd9dec57635b378121a83b572b45af6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fdd9dec57635b378121a83b572b45af6,
        type_description_1,
        par_event,
        var_data
    );


    // Release cached frame if used for exception.
    if (frame_fdd9dec57635b378121a83b572b45af6 == cache_frame_fdd9dec57635b378121a83b572b45af6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fdd9dec57635b378121a83b572b45af6);
        cache_frame_fdd9dec57635b378121a83b572b45af6 = NULL;
    }

    assertFrameObject(frame_fdd9dec57635b378121a83b572b45af6);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_data);
    Py_DECREF(var_data);
    var_data = NULL;
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

    Py_XDECREF(var_data);
    var_data = NULL;
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
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__10_in_quoted_insert(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_f61769e795f82a3275ac2356068ed36d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f61769e795f82a3275ac2356068ed36d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f61769e795f82a3275ac2356068ed36d)) {
        Py_XDECREF(cache_frame_f61769e795f82a3275ac2356068ed36d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f61769e795f82a3275ac2356068ed36d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f61769e795f82a3275ac2356068ed36d = MAKE_FUNCTION_FRAME(tstate, codeobj_f61769e795f82a3275ac2356068ed36d, module_prompt_toolkit$key_binding$bindings$basic, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f61769e795f82a3275ac2356068ed36d->m_type_description == NULL);
    frame_f61769e795f82a3275ac2356068ed36d = cache_frame_f61769e795f82a3275ac2356068ed36d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f61769e795f82a3275ac2356068ed36d);
    assert(Py_REFCNT(frame_f61769e795f82a3275ac2356068ed36d) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[154]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[154]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto frame_exception_exit_1;
        }
        frame_f61769e795f82a3275ac2356068ed36d->m_frame.f_lineno = 245;
        tmp_expression_value_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[179]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

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
        exception_tb = MAKE_TRACEBACK(frame_f61769e795f82a3275ac2356068ed36d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f61769e795f82a3275ac2356068ed36d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f61769e795f82a3275ac2356068ed36d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f61769e795f82a3275ac2356068ed36d,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_f61769e795f82a3275ac2356068ed36d == cache_frame_f61769e795f82a3275ac2356068ed36d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f61769e795f82a3275ac2356068ed36d);
        cache_frame_f61769e795f82a3275ac2356068ed36d = NULL;
    }

    assertFrameObject(frame_f61769e795f82a3275ac2356068ed36d);

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


static PyObject *impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__11__insert_text(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    struct Nuitka_FrameObject *frame_05939fb40126c00bb7c378758ed7d71d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_05939fb40126c00bb7c378758ed7d71d = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_05939fb40126c00bb7c378758ed7d71d)) {
        Py_XDECREF(cache_frame_05939fb40126c00bb7c378758ed7d71d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_05939fb40126c00bb7c378758ed7d71d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_05939fb40126c00bb7c378758ed7d71d = MAKE_FUNCTION_FRAME(tstate, codeobj_05939fb40126c00bb7c378758ed7d71d, module_prompt_toolkit$key_binding$bindings$basic, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_05939fb40126c00bb7c378758ed7d71d->m_type_description == NULL);
    frame_05939fb40126c00bb7c378758ed7d71d = cache_frame_05939fb40126c00bb7c378758ed7d71d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_05939fb40126c00bb7c378758ed7d71d);
    assert(Py_REFCNT(frame_05939fb40126c00bb7c378758ed7d71d) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(par_event);
        tmp_expression_value_2 = par_event;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[155]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[174]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_event);
        tmp_expression_value_3 = par_event;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[175]);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 252;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[180]);
        frame_05939fb40126c00bb7c378758ed7d71d->m_frame.f_lineno = 252;
        tmp_call_result_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_expression_value_4;
        tmp_assattr_value_1 = Py_False;
        CHECK_OBJECT(par_event);
        tmp_expression_value_4 = par_event;
        tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[171]);
        if (tmp_assattr_target_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[179], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_target_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_05939fb40126c00bb7c378758ed7d71d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_05939fb40126c00bb7c378758ed7d71d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_05939fb40126c00bb7c378758ed7d71d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_05939fb40126c00bb7c378758ed7d71d,
        type_description_1,
        par_event
    );


    // Release cached frame if used for exception.
    if (frame_05939fb40126c00bb7c378758ed7d71d == cache_frame_05939fb40126c00bb7c378758ed7d71d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_05939fb40126c00bb7c378758ed7d71d);
        cache_frame_05939fb40126c00bb7c378758ed7d71d = NULL;
    }

    assertFrameObject(frame_05939fb40126c00bb7c378758ed7d71d);

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
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_event);
    Py_DECREF(par_event);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__1_if_no_repeat(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$basic$$$function__1_if_no_repeat,
        mod_consts[112],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7ec4f9768a0f258a5446586f1f817c46,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$basic,
        mod_consts[1],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings,
        mod_consts[204],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_00d6667bbf727d69ced472e94516a678,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$basic,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__10_in_quoted_insert(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__10_in_quoted_insert,
        mod_consts[148],
#if PYTHON_VERSION >= 0x300
        mod_consts[149],
#endif
        codeobj_f61769e795f82a3275ac2356068ed36d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$basic,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__11__insert_text(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__11__insert_text,
        mod_consts[152],
#if PYTHON_VERSION >= 0x300
        mod_consts[153],
#endif
        codeobj_05939fb40126c00bb7c378758ed7d71d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$basic,
        mod_consts[151],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__1__ignore(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[99],
#if PYTHON_VERSION >= 0x300
        mod_consts[100],
#endif
        codeobj_6a338c09b77327b494d9e724c5bdf2ba,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$basic,
        mod_consts[98],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__2_has_text_before_cursor(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__2_has_text_before_cursor,
        mod_consts[125],
#if PYTHON_VERSION >= 0x300
        mod_consts[126],
#endif
        codeobj_fc5b85983319aef6c1999586cf80b305,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$basic,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__3__newline(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__3__newline,
        mod_consts[130],
#if PYTHON_VERSION >= 0x300
        mod_consts[131],
#endif
        codeobj_fbf1374f2fd7b21505f3052efe9b78f2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$basic,
        mod_consts[129],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__4__newline2(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__4__newline2,
        mod_consts[133],
#if PYTHON_VERSION >= 0x300
        mod_consts[134],
#endif
        codeobj_60b6e9759b62f7c1b3683a7ad399bb1d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$basic,
        mod_consts[132],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__5__go_up(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__5__go_up,
        mod_consts[135],
#if PYTHON_VERSION >= 0x300
        mod_consts[136],
#endif
        codeobj_db18a849cb1828b9ad64c9b8d2da7755,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$basic,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__6__go_down(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__6__go_down,
        mod_consts[137],
#if PYTHON_VERSION >= 0x300
        mod_consts[138],
#endif
        codeobj_6858ba3a68e11fad3c2c73f8499ef886,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$basic,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__7__cut(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__7__cut,
        mod_consts[139],
#if PYTHON_VERSION >= 0x300
        mod_consts[140],
#endif
        codeobj_193d39c961612dda17b22251bb194eb3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$basic,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__8__insert_ctrl_z(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__8__insert_ctrl_z,
        mod_consts[142],
#if PYTHON_VERSION >= 0x300
        mod_consts[143],
#endif
        codeobj_979d42412083397a26113972ba68063e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$basic,
        mod_consts[141],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__9__paste(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__9__paste,
        mod_consts[146],
#if PYTHON_VERSION >= 0x300
        mod_consts[147],
#endif
        codeobj_fdd9dec57635b378121a83b572b45af6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$basic,
        mod_consts[145],
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

static function_impl_code const function_table_prompt_toolkit$key_binding$bindings$basic[] = {
    impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__2_has_text_before_cursor,
    impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__3__newline,
    impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__4__newline2,
    impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__5__go_up,
    impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__6__go_down,
    impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__7__cut,
    impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__8__insert_ctrl_z,
    impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__9__paste,
    impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__10_in_quoted_insert,
    impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings$$$function__11__insert_text,
    impl_prompt_toolkit$key_binding$bindings$basic$$$function__1_if_no_repeat,
    impl_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings,
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

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_prompt_toolkit$key_binding$bindings$basic);

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
        module_prompt_toolkit$key_binding$bindings$basic,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        function_table_prompt_toolkit$key_binding$bindings$basic,
        sizeof(function_table_prompt_toolkit$key_binding$bindings$basic) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_prompt_toolkit$key_binding$bindings$basic(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("prompt_toolkit$key_binding$bindings$basic");

    // Store the module for future use.
    module_prompt_toolkit$key_binding$bindings$basic = module;

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
        PRINT_STRING("prompt_toolkit$key_binding$bindings$basic: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("prompt_toolkit$key_binding$bindings$basic: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initprompt_toolkit$key_binding$bindings$basic\n");

    moduledict_prompt_toolkit$key_binding$bindings$basic = MODULE_DICT(module_prompt_toolkit$key_binding$bindings$basic);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_prompt_toolkit$key_binding$bindings$basic,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_prompt_toolkit$key_binding$bindings$basic,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[214]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_prompt_toolkit$key_binding$bindings$basic,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_prompt_toolkit$key_binding$bindings$basic,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_prompt_toolkit$key_binding$bindings$basic,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_prompt_toolkit$key_binding$bindings$basic);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_prompt_toolkit$key_binding$bindings$basic);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_bcb6cac9e810ca5ecb21663716be4393;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[181], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[182], tmp_assign_source_2);
    }
    frame_bcb6cac9e810ca5ecb21663716be4393 = MAKE_MODULE_FRAME(codeobj_bcb6cac9e810ca5ecb21663716be4393, module_prompt_toolkit$key_binding$bindings$basic);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_bcb6cac9e810ca5ecb21663716be4393);
    assert(Py_REFCNT(frame_bcb6cac9e810ca5ecb21663716be4393) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[183]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[183]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[184], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[183]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[183]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[185], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[186], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[187]);
        }
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[187], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[188];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$basic;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[189];
        tmp_level_value_1 = mod_consts[190];
        frame_bcb6cac9e810ca5ecb21663716be4393->m_frame.f_lineno = 4;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$basic,
                mod_consts[154],
                mod_consts[190]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[154]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[191];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$basic;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[192];
        tmp_level_value_2 = mod_consts[190];
        frame_bcb6cac9e810ca5ecb21663716be4393->m_frame.f_lineno = 5;
        tmp_assign_source_6 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$basic,
                mod_consts[123],
                mod_consts[190]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[123]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$basic,
                mod_consts[4],
                mod_consts[190]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[4]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$basic,
                mod_consts[122],
                mod_consts[190]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[122]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$basic,
                mod_consts[158],
                mod_consts[190]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[158]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_6,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$basic,
                mod_consts[127],
                mod_consts[190]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[127]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_7 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_7,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$basic,
                mod_consts[3],
                mod_consts[190]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[3]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_12);
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
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[193];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$basic;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[194];
        tmp_level_value_3 = mod_consts[190];
        frame_bcb6cac9e810ca5ecb21663716be4393->m_frame.f_lineno = 13;
        tmp_assign_source_13 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_13;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_8 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_8,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$basic,
                mod_consts[162],
                mod_consts[190]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts[162]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[162], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_9 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_9,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$basic,
                mod_consts[195],
                mod_consts[190]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts[195]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[195], tmp_assign_source_15);
    }
    goto try_end_2;
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

    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[196];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$basic;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[197];
        tmp_level_value_4 = mod_consts[190];
        frame_bcb6cac9e810ca5ecb21663716be4393->m_frame.f_lineno = 14;
        tmp_import_name_from_10 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_10,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$basic,
                mod_consts[95],
                mod_consts[190]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_10, mod_consts[95]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[198];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$basic;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[199];
        tmp_level_value_5 = mod_consts[200];
        frame_bcb6cac9e810ca5ecb21663716be4393->m_frame.f_lineno = 16;
        tmp_import_name_from_11 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_11,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$basic,
                mod_consts[2],
                mod_consts[190]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_11, mod_consts[2]);
        }

        Py_DECREF(tmp_import_name_from_11);
        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[201];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$basic;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[202];
        tmp_level_value_6 = mod_consts[203];
        frame_bcb6cac9e810ca5ecb21663716be4393->m_frame.f_lineno = 17;
        tmp_import_name_from_12 = IMPORT_MODULE5(tstate, tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_12,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$basic,
                mod_consts[101],
                mod_consts[190]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_12, mod_consts[101]);
        }

        Py_DECREF(tmp_import_name_from_12);
        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = MAKE_LIST1(mod_consts[204]);
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[205], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[195]);

        if (unlikely(tmp_assign_source_20 == NULL)) {
            tmp_assign_source_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[195]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[206], tmp_assign_source_20);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bcb6cac9e810ca5ecb21663716be4393, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bcb6cac9e810ca5ecb21663716be4393->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bcb6cac9e810ca5ecb21663716be4393, exception_lineno);
    }



    assertFrameObject(frame_bcb6cac9e810ca5ecb21663716be4393);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_annotations_1;
        tmp_annotations_1 = DICT_COPY(mod_consts[207]);


        tmp_assign_source_21 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__1_if_no_repeat(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_annotations_2;
        tmp_annotations_2 = DICT_COPY(mod_consts[208]);


        tmp_assign_source_22 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$basic$$$function__2_load_basic_bindings(tmp_annotations_2);

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)mod_consts[204], tmp_assign_source_22);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("prompt_toolkit$key_binding$bindings$basic", false);

    Py_INCREF(module_prompt_toolkit$key_binding$bindings$basic);
    return module_prompt_toolkit$key_binding$bindings$basic;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$basic, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("prompt_toolkit$key_binding$bindings$basic", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
