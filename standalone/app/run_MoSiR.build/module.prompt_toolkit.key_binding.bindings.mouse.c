/* Generated code for Python module 'prompt_toolkit$key_binding$bindings$mouse'
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

/* The "module_prompt_toolkit$key_binding$bindings$mouse" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_prompt_toolkit$key_binding$bindings$mouse;
PyDictObject *moduledict_prompt_toolkit$key_binding$bindings$mouse;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[238];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[238];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("prompt_toolkit.key_binding.bindings.mouse"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 238; i++) {
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
void checkModuleConstants_prompt_toolkit$key_binding$bindings$mouse(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 238; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_bed75980993dda4ba3e533a89f2ecb9f;
static PyCodeObject *codeobj_3e4a824f23b3f47c1a980dc7f2a48140;
static PyCodeObject *codeobj_bed9a462a72bd3131ffcb68d70ce7133;
static PyCodeObject *codeobj_8aa3bb9f438b3654c889ce185b76dbe7;
static PyCodeObject *codeobj_3aefae8f40abd8fffd06dcd0beb54d87;
static PyCodeObject *codeobj_3d5c16c417092b9a33d181e2e66c276f;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[231]); CHECK_OBJECT(module_filename_obj);
    codeobj_bed75980993dda4ba3e533a89f2ecb9f = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts[232], mod_consts[232], NULL, NULL, 0, 0, 0);
    codeobj_3e4a824f23b3f47c1a980dc7f2a48140 = MAKE_CODE_OBJECT(module_filename_obj, 192, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[6], mod_consts[6], mod_consts[233], NULL, 1, 0, 0);
    codeobj_bed9a462a72bd3131ffcb68d70ce7133 = MAKE_CODE_OBJECT(module_filename_obj, 303, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[19], mod_consts[19], mod_consts[234], NULL, 1, 0, 0);
    codeobj_8aa3bb9f438b3654c889ce185b76dbe7 = MAKE_CODE_OBJECT(module_filename_obj, 296, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[15], mod_consts[15], mod_consts[235], NULL, 1, 0, 0);
    codeobj_3aefae8f40abd8fffd06dcd0beb54d87 = MAKE_CODE_OBJECT(module_filename_obj, 287, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[11], mod_consts[11], mod_consts[235], NULL, 1, 0, 0);
    codeobj_3d5c16c417092b9a33d181e2e66c276f = MAKE_CODE_OBJECT(module_filename_obj, 184, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[102], mod_consts[102], mod_consts[236], NULL, 0, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$mouse$$$function__1_load_mouse_bindings(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$mouse$$$function__1_load_mouse_bindings$$$function__1__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$mouse$$$function__1_load_mouse_bindings$$$function__2__scroll_up(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$mouse$$$function__1_load_mouse_bindings$$$function__3__scroll_down(PyObject *annotations);


static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$mouse$$$function__1_load_mouse_bindings$$$function__4__mouse(PyObject *annotations);


// The module function definitions.
static PyObject *impl_prompt_toolkit$key_binding$bindings$mouse$$$function__1_load_mouse_bindings(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *var_key_bindings = NULL;
    PyObject *var__ = NULL;
    PyObject *var__scroll_up = NULL;
    PyObject *var__scroll_down = NULL;
    PyObject *var__mouse = NULL;
    struct Nuitka_FrameObject *frame_3d5c16c417092b9a33d181e2e66c276f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3d5c16c417092b9a33d181e2e66c276f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3d5c16c417092b9a33d181e2e66c276f)) {
        Py_XDECREF(cache_frame_3d5c16c417092b9a33d181e2e66c276f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3d5c16c417092b9a33d181e2e66c276f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3d5c16c417092b9a33d181e2e66c276f = MAKE_FUNCTION_FRAME(tstate, codeobj_3d5c16c417092b9a33d181e2e66c276f, module_prompt_toolkit$key_binding$bindings$mouse, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3d5c16c417092b9a33d181e2e66c276f->m_type_description == NULL);
    frame_3d5c16c417092b9a33d181e2e66c276f = cache_frame_3d5c16c417092b9a33d181e2e66c276f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_3d5c16c417092b9a33d181e2e66c276f);
    assert(Py_REFCNT(frame_3d5c16c417092b9a33d181e2e66c276f) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_3d5c16c417092b9a33d181e2e66c276f->m_frame.f_lineno = 189;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tstate, tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_key_bindings == NULL);
        var_key_bindings = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_annotations_1;
        CHECK_OBJECT(var_key_bindings);
        tmp_expression_value_1 = var_key_bindings;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[1]);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 191;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[3]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 191;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_3d5c16c417092b9a33d181e2e66c276f->m_frame.f_lineno = 191;
        tmp_called_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = DICT_COPY(mod_consts[4]);


        tmp_args_element_value_2 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$mouse$$$function__1_load_mouse_bindings$$$function__1__(tmp_annotations_1);

        frame_3d5c16c417092b9a33d181e2e66c276f->m_frame.f_lineno = 191;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var__ == NULL);
        var__ = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_annotations_2;
        CHECK_OBJECT(var_key_bindings);
        tmp_expression_value_3 = var_key_bindings;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[1]);
        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 286;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[8]);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 286;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_3d5c16c417092b9a33d181e2e66c276f->m_frame.f_lineno = 286;
        tmp_called_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_2 = DICT_COPY(mod_consts[9]);


        tmp_args_element_value_4 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$mouse$$$function__1_load_mouse_bindings$$$function__2__scroll_up(tmp_annotations_2);

        frame_3d5c16c417092b9a33d181e2e66c276f->m_frame.f_lineno = 286;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var__scroll_up == NULL);
        var__scroll_up = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_6;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_annotations_3;
        CHECK_OBJECT(var_key_bindings);
        tmp_expression_value_5 = var_key_bindings;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[1]);
        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 295;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[13]);
        if (tmp_args_element_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 295;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_3d5c16c417092b9a33d181e2e66c276f->m_frame.f_lineno = 295;
        tmp_called_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_7, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_3 = DICT_COPY(mod_consts[9]);


        tmp_args_element_value_6 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$mouse$$$function__1_load_mouse_bindings$$$function__3__scroll_down(tmp_annotations_3);

        frame_3d5c16c417092b9a33d181e2e66c276f->m_frame.f_lineno = 295;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_6, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var__scroll_down == NULL);
        var__scroll_down = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_8;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_annotations_4;
        CHECK_OBJECT(var_key_bindings);
        tmp_expression_value_7 = var_key_bindings;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[1]);
        if (tmp_called_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 302;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[17]);
        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 302;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_3d5c16c417092b9a33d181e2e66c276f->m_frame.f_lineno = 302;
        tmp_called_value_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_9, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_called_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_annotations_4 = DICT_COPY(mod_consts[4]);


        tmp_args_element_value_8 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$mouse$$$function__1_load_mouse_bindings$$$function__4__mouse(tmp_annotations_4);

        frame_3d5c16c417092b9a33d181e2e66c276f->m_frame.f_lineno = 302;
        tmp_assign_source_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_8, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var__mouse == NULL);
        var__mouse = tmp_assign_source_5;
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3d5c16c417092b9a33d181e2e66c276f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3d5c16c417092b9a33d181e2e66c276f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3d5c16c417092b9a33d181e2e66c276f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3d5c16c417092b9a33d181e2e66c276f,
        type_description_1,
        var_key_bindings,
        var__,
        var__scroll_up,
        var__scroll_down,
        var__mouse
    );


    // Release cached frame if used for exception.
    if (frame_3d5c16c417092b9a33d181e2e66c276f == cache_frame_3d5c16c417092b9a33d181e2e66c276f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3d5c16c417092b9a33d181e2e66c276f);
        cache_frame_3d5c16c417092b9a33d181e2e66c276f = NULL;
    }

    assertFrameObject(frame_3d5c16c417092b9a33d181e2e66c276f);

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
    CHECK_OBJECT(var__);
    Py_DECREF(var__);
    var__ = NULL;
    CHECK_OBJECT(var__scroll_up);
    Py_DECREF(var__scroll_up);
    var__scroll_up = NULL;
    CHECK_OBJECT(var__scroll_down);
    Py_DECREF(var__scroll_down);
    var__scroll_down = NULL;
    CHECK_OBJECT(var__mouse);
    Py_DECREF(var__mouse);
    var__mouse = NULL;
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
    Py_XDECREF(var__);
    var__ = NULL;
    Py_XDECREF(var__scroll_up);
    var__scroll_up = NULL;
    Py_XDECREF(var__scroll_down);
    var__scroll_down = NULL;
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


static PyObject *impl_prompt_toolkit$key_binding$bindings$mouse$$$function__1_load_mouse_bindings$$$function__1__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    PyObject *var_mouse_event = NULL;
    PyObject *var_x = NULL;
    PyObject *var_y = NULL;
    PyObject *var_mouse_button = NULL;
    PyObject *var_mouse_event_type = NULL;
    PyObject *var_mouse_modifiers = NULL;
    PyObject *var_data = NULL;
    nuitka_bool var_sgr = NUITKA_BOOL_UNASSIGNED;
    PyObject *var_m = NULL;
    PyObject *var_HeightIsUnknownError = NULL;
    PyObject *var_handler = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__element_3 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_tuple_unpack_4__element_1 = NULL;
    PyObject *tmp_tuple_unpack_4__element_2 = NULL;
    PyObject *tmp_tuple_unpack_4__element_3 = NULL;
    PyObject *tmp_tuple_unpack_4__source_iter = NULL;
    PyObject *tmp_tuple_unpack_5__element_1 = NULL;
    PyObject *tmp_tuple_unpack_5__element_2 = NULL;
    PyObject *tmp_tuple_unpack_5__element_3 = NULL;
    PyObject *tmp_tuple_unpack_5__source_iter = NULL;
    struct Nuitka_FrameObject *frame_3e4a824f23b3f47c1a980dc7f2a48140;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
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
    bool tmp_result;
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
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
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
    struct Nuitka_ExceptionStackItem exception_preserved_2;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    static struct Nuitka_FrameObject *cache_frame_3e4a824f23b3f47c1a980dc7f2a48140 = NULL;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3e4a824f23b3f47c1a980dc7f2a48140)) {
        Py_XDECREF(cache_frame_3e4a824f23b3f47c1a980dc7f2a48140);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3e4a824f23b3f47c1a980dc7f2a48140 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3e4a824f23b3f47c1a980dc7f2a48140 = MAKE_FUNCTION_FRAME(tstate, codeobj_3e4a824f23b3f47c1a980dc7f2a48140, module_prompt_toolkit$key_binding$bindings$mouse, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3e4a824f23b3f47c1a980dc7f2a48140->m_type_description == NULL);
    frame_3e4a824f23b3f47c1a980dc7f2a48140 = cache_frame_3e4a824f23b3f47c1a980dc7f2a48140;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_3e4a824f23b3f47c1a980dc7f2a48140);
    assert(Py_REFCNT(frame_3e4a824f23b3f47c1a980dc7f2a48140) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_event);
        tmp_expression_value_2 = par_event;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[22]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[23];
        tmp_cmp_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 2);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[24];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oooooooobooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_2;
        tmp_called_value_1 = (PyObject *)&PyMap_Type;
        tmp_args_element_value_1 = LOOKUP_BUILTIN(mod_consts[25]);
        assert(tmp_args_element_value_1 != NULL);
        CHECK_OBJECT(par_event);
        tmp_expression_value_4 = par_event;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[22]);
        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "oooooooobooo";
            goto try_except_handler_2;
        }
        tmp_subscript_value_2 = mod_consts[26];
        tmp_args_element_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "oooooooobooo";
            goto try_except_handler_2;
        }
        frame_3e4a824f23b3f47c1a980dc7f2a48140->m_frame.f_lineno = 203;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_iter_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "oooooooobooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "oooooooobooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_2 = UNPACK_NEXT(tstate, tmp_unpack_1, 0, 3);
        if (tmp_assign_source_2 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooobooo";
            exception_lineno = 203;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tstate, tmp_unpack_2, 1, 3);
        if (tmp_assign_source_3 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooobooo";
            exception_lineno = 203;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tstate, tmp_unpack_3, 2, 3);
        if (tmp_assign_source_4 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooobooo";
            exception_lineno = 203;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
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

                    type_description_1 = "oooooooobooo";
                    exception_lineno = 203;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[27];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooobooo";
            exception_lineno = 203;
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
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

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
        assert(var_mouse_event == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_mouse_event = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert(var_x == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_x = tmp_assign_source_6;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_3;
        assert(var_y == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_y = tmp_assign_source_7;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_3;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[28]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oooooooobooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_mouse_event);
        tmp_subscript_value_3 = var_mouse_event;
        tmp_iter_arg_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_3);
        if (tmp_iter_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "oooooooobooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_8 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oooooooobooo";
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_2__source_iter == NULL);
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tstate, tmp_unpack_4, 0, 3);
        if (tmp_assign_source_9 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooobooo";
            exception_lineno = 206;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_1 == NULL);
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tstate, tmp_unpack_5, 1, 3);
        if (tmp_assign_source_10 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooobooo";
            exception_lineno = 206;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_2 == NULL);
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT(tstate, tmp_unpack_6, 2, 3);
        if (tmp_assign_source_11 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooobooo";
            exception_lineno = 206;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_3 == NULL);
        tmp_tuple_unpack_2__element_3 = tmp_assign_source_11;
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

                    type_description_1 = "oooooooobooo";
                    exception_lineno = 206;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[27];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooobooo";
            exception_lineno = 206;
            goto try_except_handler_5;
        }
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_3);
    tmp_tuple_unpack_2__element_3 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_12 = tmp_tuple_unpack_2__element_1;
        assert(var_mouse_button == NULL);
        Py_INCREF(tmp_assign_source_12);
        var_mouse_button = tmp_assign_source_12;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_13 = tmp_tuple_unpack_2__element_2;
        assert(var_mouse_event_type == NULL);
        Py_INCREF(tmp_assign_source_13);
        var_mouse_event_type = tmp_assign_source_13;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_3);
        tmp_assign_source_14 = tmp_tuple_unpack_2__element_3;
        assert(var_mouse_modifiers == NULL);
        Py_INCREF(tmp_assign_source_14);
        var_mouse_modifiers = tmp_assign_source_14;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_3);
    tmp_tuple_unpack_2__element_3 = NULL;

    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_x);
        tmp_cmp_expr_left_2 = var_x;
        tmp_cmp_expr_right_2 = mod_consts[29];
        tmp_condition_result_2 = RICH_COMPARE_GE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "oooooooobooo";
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
        PyObject *tmp_assign_source_15;
        PyObject *tmp_isub_expr_left_1;
        PyObject *tmp_isub_expr_right_1;
        CHECK_OBJECT(var_x);
        tmp_isub_expr_left_1 = var_x;
        tmp_isub_expr_right_1 = mod_consts[29];
        tmp_result = INPLACE_OPERATION_SUB_OBJECT_LONG(&tmp_isub_expr_left_1, tmp_isub_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_15 = tmp_isub_expr_left_1;
        var_x = tmp_assign_source_15;

    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_y);
        tmp_cmp_expr_left_3 = var_y;
        tmp_cmp_expr_right_3 = mod_consts[29];
        tmp_condition_result_3 = RICH_COMPARE_GE_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "oooooooobooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_isub_expr_left_2;
        PyObject *tmp_isub_expr_right_2;
        CHECK_OBJECT(var_y);
        tmp_isub_expr_left_2 = var_y;
        tmp_isub_expr_right_2 = mod_consts[29];
        tmp_result = INPLACE_OPERATION_SUB_OBJECT_LONG(&tmp_isub_expr_left_2, tmp_isub_expr_right_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_16 = tmp_isub_expr_left_2;
        var_y = tmp_assign_source_16;

    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_isub_expr_left_3;
        PyObject *tmp_isub_expr_right_3;
        CHECK_OBJECT(var_x);
        tmp_isub_expr_left_3 = var_x;
        tmp_isub_expr_right_3 = mod_consts[30];
        tmp_result = INPLACE_OPERATION_SUB_OBJECT_LONG(&tmp_isub_expr_left_3, tmp_isub_expr_right_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_17 = tmp_isub_expr_left_3;
        var_x = tmp_assign_source_17;

    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_isub_expr_left_4;
        PyObject *tmp_isub_expr_right_4;
        CHECK_OBJECT(var_y);
        tmp_isub_expr_left_4 = var_y;
        tmp_isub_expr_right_4 = mod_consts[30];
        tmp_result = INPLACE_OPERATION_SUB_OBJECT_LONG(&tmp_isub_expr_left_4, tmp_isub_expr_right_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_18 = tmp_isub_expr_left_4;
        var_y = tmp_assign_source_18;

    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(par_event);
        tmp_expression_value_7 = par_event;
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[22]);
        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_4 = mod_consts[31];
        tmp_assign_source_19 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_4);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_assign_source_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "oooooooobooo";
            goto frame_exception_exit_1;
        }
        assert(var_data == NULL);
        var_data = tmp_assign_source_19;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_5;
        CHECK_OBJECT(var_data);
        tmp_expression_value_8 = var_data;
        tmp_subscript_value_5 = mod_consts[32];
        tmp_cmp_expr_left_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_8, tmp_subscript_value_5);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_4 = mod_consts[33];
        tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "oooooooobooo";
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
        nuitka_bool tmp_assign_source_20;
        tmp_assign_source_20 = NUITKA_BOOL_TRUE;
        var_sgr = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_6;
        CHECK_OBJECT(var_data);
        tmp_expression_value_9 = var_data;
        tmp_subscript_value_6 = mod_consts[34];
        tmp_assign_source_21 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_9, tmp_subscript_value_6);
        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oooooooobooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_data;
            assert(old != NULL);
            var_data = tmp_assign_source_21;
            Py_DECREF(old);
        }

    }
    goto branch_end_4;
    branch_no_4:;
    {
        nuitka_bool tmp_assign_source_22;
        tmp_assign_source_22 = NUITKA_BOOL_FALSE;
        var_sgr = tmp_assign_source_22;
    }
    branch_end_4:;
    // Tried code:
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_7;
        tmp_called_value_2 = (PyObject *)&PyMap_Type;
        tmp_args_element_value_3 = (PyObject *)&PyLong_Type;
        CHECK_OBJECT(var_data);
        tmp_expression_value_11 = var_data;
        tmp_subscript_value_7 = mod_consts[35];
        tmp_expression_value_10 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_11, tmp_subscript_value_7);
        if (tmp_expression_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "oooooooobooo";
            goto try_except_handler_6;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[36]);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "oooooooobooo";
            goto try_except_handler_6;
        }
        frame_3e4a824f23b3f47c1a980dc7f2a48140->m_frame.f_lineno = 230;
        tmp_args_element_value_4 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_3, mod_consts[37]);

        Py_DECREF(tmp_called_value_3);
        if (tmp_args_element_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "oooooooobooo";
            goto try_except_handler_6;
        }
        frame_3e4a824f23b3f47c1a980dc7f2a48140->m_frame.f_lineno = 230;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_4);
        if (tmp_iter_arg_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "oooooooobooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_23 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "oooooooobooo";
            goto try_except_handler_6;
        }
        assert(tmp_tuple_unpack_3__source_iter == NULL);
        tmp_tuple_unpack_3__source_iter = tmp_assign_source_23;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_7 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_24 = UNPACK_NEXT(tstate, tmp_unpack_7, 0, 3);
        if (tmp_assign_source_24 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooobooo";
            exception_lineno = 230;
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_3__element_1 == NULL);
        tmp_tuple_unpack_3__element_1 = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_8 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_25 = UNPACK_NEXT(tstate, tmp_unpack_8, 1, 3);
        if (tmp_assign_source_25 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooobooo";
            exception_lineno = 230;
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_3__element_2 == NULL);
        tmp_tuple_unpack_3__element_2 = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_unpack_9;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_9 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_26 = UNPACK_NEXT(tstate, tmp_unpack_9, 2, 3);
        if (tmp_assign_source_26 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooobooo";
            exception_lineno = 230;
            goto try_except_handler_7;
        }
        assert(tmp_tuple_unpack_3__element_3 == NULL);
        tmp_tuple_unpack_3__element_3 = tmp_assign_source_26;
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

                    type_description_1 = "oooooooobooo";
                    exception_lineno = 230;
                    goto try_except_handler_7;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[27];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooobooo";
            exception_lineno = 230;
            goto try_except_handler_7;
        }
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_6;
    // End of try:
    try_end_5:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
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
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    {
        PyObject *tmp_assign_source_27;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
        tmp_assign_source_27 = tmp_tuple_unpack_3__element_1;
        assert(var_mouse_event == NULL);
        Py_INCREF(tmp_assign_source_27);
        var_mouse_event = tmp_assign_source_27;
    }
    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_28;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
        tmp_assign_source_28 = tmp_tuple_unpack_3__element_2;
        assert(var_x == NULL);
        Py_INCREF(tmp_assign_source_28);
        var_x = tmp_assign_source_28;
    }
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;

    {
        PyObject *tmp_assign_source_29;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_3);
        tmp_assign_source_29 = tmp_tuple_unpack_3__element_3;
        assert(var_y == NULL);
        Py_INCREF(tmp_assign_source_29);
        var_y = tmp_assign_source_29;
    }
    Py_XDECREF(tmp_tuple_unpack_3__element_3);
    tmp_tuple_unpack_3__element_3 = NULL;

    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_8;
        CHECK_OBJECT(var_data);
        tmp_expression_value_12 = var_data;
        tmp_subscript_value_8 = mod_consts[38];
        tmp_assign_source_30 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_12, tmp_subscript_value_8, -1);
        if (tmp_assign_source_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "oooooooobooo";
            goto frame_exception_exit_1;
        }
        assert(var_m == NULL);
        var_m = tmp_assign_source_30;
    }
    {
        bool tmp_condition_result_5;
        assert(var_sgr != NUITKA_BOOL_UNASSIGNED);
        tmp_condition_result_5 = var_sgr == NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_tuple_element_1;
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[39]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "oooooooobooo";
            goto try_except_handler_9;
        }
        CHECK_OBJECT(var_mouse_event);
        tmp_tuple_element_1 = var_mouse_event;
        tmp_subscript_value_9 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_9, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_m);
        tmp_tuple_element_1 = var_m;
        PyTuple_SET_ITEM0(tmp_subscript_value_9, 1, tmp_tuple_element_1);
        tmp_iter_arg_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_13, tmp_subscript_value_9);
        Py_DECREF(tmp_subscript_value_9);
        if (tmp_iter_arg_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "oooooooobooo";
            goto try_except_handler_9;
        }
        tmp_assign_source_31 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
        Py_DECREF(tmp_iter_arg_4);
        if (tmp_assign_source_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "oooooooobooo";
            goto try_except_handler_9;
        }
        assert(tmp_tuple_unpack_4__source_iter == NULL);
        tmp_tuple_unpack_4__source_iter = tmp_assign_source_31;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_unpack_10;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_10 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_32 = UNPACK_NEXT(tstate, tmp_unpack_10, 0, 3);
        if (tmp_assign_source_32 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooobooo";
            exception_lineno = 236;
            goto try_except_handler_10;
        }
        assert(tmp_tuple_unpack_4__element_1 == NULL);
        tmp_tuple_unpack_4__element_1 = tmp_assign_source_32;
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_unpack_11;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_11 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_33 = UNPACK_NEXT(tstate, tmp_unpack_11, 1, 3);
        if (tmp_assign_source_33 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooobooo";
            exception_lineno = 236;
            goto try_except_handler_10;
        }
        assert(tmp_tuple_unpack_4__element_2 == NULL);
        tmp_tuple_unpack_4__element_2 = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_unpack_12;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_12 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_34 = UNPACK_NEXT(tstate, tmp_unpack_12, 2, 3);
        if (tmp_assign_source_34 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooobooo";
            exception_lineno = 236;
            goto try_except_handler_10;
        }
        assert(tmp_tuple_unpack_4__element_3 == NULL);
        tmp_tuple_unpack_4__element_3 = tmp_assign_source_34;
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

                    type_description_1 = "oooooooobooo";
                    exception_lineno = 236;
                    goto try_except_handler_10;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[27];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooobooo";
            exception_lineno = 236;
            goto try_except_handler_10;
        }
    }
    goto try_end_7;
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

    CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
    Py_DECREF(tmp_tuple_unpack_4__source_iter);
    tmp_tuple_unpack_4__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_9;
    // End of try:
    try_end_7:;
    goto try_end_8;
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

    Py_XDECREF(tmp_tuple_unpack_4__element_1);
    tmp_tuple_unpack_4__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_4__element_2);
    tmp_tuple_unpack_4__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_4__element_3);
    tmp_tuple_unpack_4__element_3 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_8;
    // End of try:
    try_end_8:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_9 == NULL) {
        exception_keeper_tb_9 = MAKE_TRACEBACK(frame_3e4a824f23b3f47c1a980dc7f2a48140, exception_keeper_lineno_9);
    } else if (exception_keeper_lineno_9 != 0) {
        exception_keeper_tb_9 = ADD_TRACEBACK(exception_keeper_tb_9, frame_3e4a824f23b3f47c1a980dc7f2a48140, exception_keeper_lineno_9);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_9, &exception_keeper_value_9, &exception_keeper_tb_9);
    // Tried code:
    {
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        tmp_cmp_expr_left_5 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_5 = PyExc_KeyError;
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
    tmp_return_value = Py_NotImplemented;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_11;
    goto branch_end_6;
    branch_no_6:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 235;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_3e4a824f23b3f47c1a980dc7f2a48140->m_frame) frame_3e4a824f23b3f47c1a980dc7f2a48140->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooobooo";
    goto try_except_handler_11;
    branch_end_6:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_11:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    goto frame_return_exit_1;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_9:;
    CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
    Py_DECREF(tmp_tuple_unpack_4__source_iter);
    tmp_tuple_unpack_4__source_iter = NULL;
    {
        PyObject *tmp_assign_source_35;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_1);
        tmp_assign_source_35 = tmp_tuple_unpack_4__element_1;
        assert(var_mouse_button == NULL);
        Py_INCREF(tmp_assign_source_35);
        var_mouse_button = tmp_assign_source_35;
    }
    Py_XDECREF(tmp_tuple_unpack_4__element_1);
    tmp_tuple_unpack_4__element_1 = NULL;

    {
        PyObject *tmp_assign_source_36;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_2);
        tmp_assign_source_36 = tmp_tuple_unpack_4__element_2;
        assert(var_mouse_event_type == NULL);
        Py_INCREF(tmp_assign_source_36);
        var_mouse_event_type = tmp_assign_source_36;
    }
    Py_XDECREF(tmp_tuple_unpack_4__element_2);
    tmp_tuple_unpack_4__element_2 = NULL;

    {
        PyObject *tmp_assign_source_37;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_3);
        tmp_assign_source_37 = tmp_tuple_unpack_4__element_3;
        assert(var_mouse_modifiers == NULL);
        Py_INCREF(tmp_assign_source_37);
        var_mouse_modifiers = tmp_assign_source_37;
    }
    Py_XDECREF(tmp_tuple_unpack_4__element_3);
    tmp_tuple_unpack_4__element_3 = NULL;

    goto branch_end_5;
    branch_no_5:;
    // Tried code:
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_iter_arg_5;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_tuple_element_2;
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[40]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "oooooooobooo";
            goto try_except_handler_12;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[41]);
        if (tmp_called_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "oooooooobooo";
            goto try_except_handler_12;
        }
        CHECK_OBJECT(var_mouse_event);
        tmp_args_element_value_5 = var_mouse_event;
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[42]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 251;
            type_description_1 = "oooooooobooo";
            goto try_except_handler_12;
        }
        tmp_args_element_value_6 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_args_element_value_6, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "oooooooobooo";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_args_element_value_6, 1, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "oooooooobooo";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_args_element_value_6, 2, tmp_tuple_element_2);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_6);
        goto try_except_handler_12;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        frame_3e4a824f23b3f47c1a980dc7f2a48140->m_frame.f_lineno = 250;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_iter_arg_5 = CALL_FUNCTION_WITH_ARGS2(tstate, tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_iter_arg_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "oooooooobooo";
            goto try_except_handler_12;
        }
        tmp_assign_source_38 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
        Py_DECREF(tmp_iter_arg_5);
        if (tmp_assign_source_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oooooooobooo";
            goto try_except_handler_12;
        }
        assert(tmp_tuple_unpack_5__source_iter == NULL);
        tmp_tuple_unpack_5__source_iter = tmp_assign_source_38;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_unpack_13;
        CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
        tmp_unpack_13 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_39 = UNPACK_NEXT(tstate, tmp_unpack_13, 0, 3);
        if (tmp_assign_source_39 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooobooo";
            exception_lineno = 246;
            goto try_except_handler_13;
        }
        assert(tmp_tuple_unpack_5__element_1 == NULL);
        tmp_tuple_unpack_5__element_1 = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_unpack_14;
        CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
        tmp_unpack_14 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_40 = UNPACK_NEXT(tstate, tmp_unpack_14, 1, 3);
        if (tmp_assign_source_40 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooobooo";
            exception_lineno = 246;
            goto try_except_handler_13;
        }
        assert(tmp_tuple_unpack_5__element_2 == NULL);
        tmp_tuple_unpack_5__element_2 = tmp_assign_source_40;
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_unpack_15;
        CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
        tmp_unpack_15 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_41 = UNPACK_NEXT(tstate, tmp_unpack_15, 2, 3);
        if (tmp_assign_source_41 == NULL) {
            if (!HAS_ERROR_OCCURRED(tstate)) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooobooo";
            exception_lineno = 246;
            goto try_except_handler_13;
        }
        assert(tmp_tuple_unpack_5__element_3 == NULL);
        tmp_tuple_unpack_5__element_3 = tmp_assign_source_41;
    }
    {
        PyObject *tmp_iterator_name_5;
        CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
        tmp_iterator_name_5 = tmp_tuple_unpack_5__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_5); assert(HAS_ITERNEXT(tmp_iterator_name_5));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_5)->tp_iternext)(tmp_iterator_name_5);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED(tstate);

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(tstate, error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED(tstate);
                } else {
                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooobooo";
                    exception_lineno = 246;
                    goto try_except_handler_13;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[27];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooobooo";
            exception_lineno = 246;
            goto try_except_handler_13;
        }
    }
    goto try_end_10;
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

    CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
    Py_DECREF(tmp_tuple_unpack_5__source_iter);
    tmp_tuple_unpack_5__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto try_except_handler_12;
    // End of try:
    try_end_10:;
    goto try_end_11;
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

    Py_XDECREF(tmp_tuple_unpack_5__element_1);
    tmp_tuple_unpack_5__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_5__element_2);
    tmp_tuple_unpack_5__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_5__element_3);
    tmp_tuple_unpack_5__element_3 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
    Py_DECREF(tmp_tuple_unpack_5__source_iter);
    tmp_tuple_unpack_5__source_iter = NULL;
    {
        PyObject *tmp_assign_source_42;
        CHECK_OBJECT(tmp_tuple_unpack_5__element_1);
        tmp_assign_source_42 = tmp_tuple_unpack_5__element_1;
        assert(var_mouse_button == NULL);
        Py_INCREF(tmp_assign_source_42);
        var_mouse_button = tmp_assign_source_42;
    }
    Py_XDECREF(tmp_tuple_unpack_5__element_1);
    tmp_tuple_unpack_5__element_1 = NULL;

    {
        PyObject *tmp_assign_source_43;
        CHECK_OBJECT(tmp_tuple_unpack_5__element_2);
        tmp_assign_source_43 = tmp_tuple_unpack_5__element_2;
        assert(var_mouse_event_type == NULL);
        Py_INCREF(tmp_assign_source_43);
        var_mouse_event_type = tmp_assign_source_43;
    }
    Py_XDECREF(tmp_tuple_unpack_5__element_2);
    tmp_tuple_unpack_5__element_2 = NULL;

    {
        PyObject *tmp_assign_source_44;
        CHECK_OBJECT(tmp_tuple_unpack_5__element_3);
        tmp_assign_source_44 = tmp_tuple_unpack_5__element_3;
        assert(var_mouse_modifiers == NULL);
        Py_INCREF(tmp_assign_source_44);
        var_mouse_modifiers = tmp_assign_source_44;
    }
    Py_XDECREF(tmp_tuple_unpack_5__element_3);
    tmp_tuple_unpack_5__element_3 = NULL;

    branch_end_5:;
    branch_end_1:;
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_isub_expr_left_5;
        PyObject *tmp_isub_expr_right_5;
        CHECK_OBJECT(var_x);
        tmp_isub_expr_left_5 = var_x;
        tmp_isub_expr_right_5 = mod_consts[45];
        tmp_result = INPLACE_OPERATION_SUB_OBJECT_LONG(&tmp_isub_expr_left_5, tmp_isub_expr_right_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "oooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_45 = tmp_isub_expr_left_5;
        var_x = tmp_assign_source_45;

    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_isub_expr_left_6;
        PyObject *tmp_isub_expr_right_6;
        CHECK_OBJECT(var_y);
        tmp_isub_expr_left_6 = var_y;
        tmp_isub_expr_right_6 = mod_consts[45];
        tmp_result = INPLACE_OPERATION_SUB_OBJECT_LONG(&tmp_isub_expr_left_6, tmp_isub_expr_right_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "oooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_46 = tmp_isub_expr_left_6;
        var_y = tmp_assign_source_46;

    }
    {
        nuitka_bool tmp_condition_result_7;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        CHECK_OBJECT(par_event);
        tmp_expression_value_17 = par_event;
        tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[46]);
        if (tmp_expression_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "oooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[47]);
        Py_DECREF(tmp_expression_value_16);
        if (tmp_expression_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "oooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[48]);
        Py_DECREF(tmp_expression_value_15);
        if (tmp_attribute_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "oooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 258;
            type_description_1 = "oooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "oooooooobooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_mouse_event_type);
        tmp_cmp_expr_left_6 = var_mouse_event_type;
        tmp_cmp_expr_right_6 = Py_None;
        tmp_and_right_value_1 = (tmp_cmp_expr_left_6 != tmp_cmp_expr_right_6) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        PyObject *tmp_assign_source_47;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[49];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$mouse;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[50];
        tmp_level_value_1 = mod_consts[51];
        frame_3e4a824f23b3f47c1a980dc7f2a48140->m_frame.f_lineno = 261;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "oooooooobooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_47 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$mouse,
                mod_consts[52],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_47 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[52]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_47 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "oooooooobooo";
            goto frame_exception_exit_1;
        }
        assert(var_HeightIsUnknownError == NULL);
        var_HeightIsUnknownError = tmp_assign_source_47;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_isub_expr_left_7;
        PyObject *tmp_isub_expr_right_7;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_expression_value_20;
        CHECK_OBJECT(var_y);
        tmp_isub_expr_left_7 = var_y;
        CHECK_OBJECT(par_event);
        tmp_expression_value_20 = par_event;
        tmp_expression_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[46]);
        if (tmp_expression_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "oooooooobooo";
            goto try_except_handler_14;
        }
        tmp_expression_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[47]);
        Py_DECREF(tmp_expression_value_19);
        if (tmp_expression_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "oooooooobooo";
            goto try_except_handler_14;
        }
        tmp_isub_expr_right_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[53]);
        Py_DECREF(tmp_expression_value_18);
        if (tmp_isub_expr_right_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "oooooooobooo";
            goto try_except_handler_14;
        }
        tmp_result = INPLACE_OPERATION_SUB_OBJECT_OBJECT(&tmp_isub_expr_left_7, tmp_isub_expr_right_7);
        Py_DECREF(tmp_isub_expr_right_7);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "oooooooobooo";
            goto try_except_handler_14;
        }
        tmp_assign_source_48 = tmp_isub_expr_left_7;
        var_y = tmp_assign_source_48;

    }
    goto try_end_12;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 2.
    exception_preserved_2 = GET_CURRENT_EXCEPTION(tstate);

    if (exception_keeper_tb_13 == NULL) {
        exception_keeper_tb_13 = MAKE_TRACEBACK(frame_3e4a824f23b3f47c1a980dc7f2a48140, exception_keeper_lineno_13);
    } else if (exception_keeper_lineno_13 != 0) {
        exception_keeper_tb_13 = ADD_TRACEBACK(exception_keeper_tb_13, frame_3e4a824f23b3f47c1a980dc7f2a48140, exception_keeper_lineno_13);
    }

    PUBLISH_CURRENT_EXCEPTION(tstate, &exception_keeper_type_13, &exception_keeper_value_13, &exception_keeper_tb_13);
    // Tried code:
    {
        bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        tmp_cmp_expr_left_7 = EXC_TYPE(PyThreadState_GET());
        CHECK_OBJECT(var_HeightIsUnknownError);
        tmp_cmp_expr_right_7 = var_HeightIsUnknownError;
        tmp_res = EXCEPTION_MATCH_BOOL(tstate, tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "oooooooobooo";
            goto try_except_handler_15;
        }
        tmp_condition_result_8 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    tmp_return_value = Py_NotImplemented;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_15;
    goto branch_end_8;
    branch_no_8:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 263;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_3e4a824f23b3f47c1a980dc7f2a48140->m_frame) frame_3e4a824f23b3f47c1a980dc7f2a48140->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooobooo";
    goto try_except_handler_15;
    branch_end_8:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_15:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

    goto frame_return_exit_1;
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

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(tstate, &exception_preserved_2);

    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_12:;
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_subscript_value_10;
        PyObject *tmp_subscript_value_11;
        CHECK_OBJECT(par_event);
        tmp_expression_value_26 = par_event;
        tmp_expression_value_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_26, mod_consts[46]);
        if (tmp_expression_value_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_25, mod_consts[47]);
        Py_DECREF(tmp_expression_value_25);
        if (tmp_expression_value_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[54]);
        Py_DECREF(tmp_expression_value_24);
        if (tmp_expression_value_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_23, mod_consts[54]);
        Py_DECREF(tmp_expression_value_23);
        if (tmp_expression_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oooooooobooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_y);
        tmp_subscript_value_10 = var_y;
        tmp_expression_value_21 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_22, tmp_subscript_value_10);
        Py_DECREF(tmp_expression_value_22);
        if (tmp_expression_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oooooooobooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_x);
        tmp_subscript_value_11 = var_x;
        tmp_assign_source_49 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_21, tmp_subscript_value_11);
        Py_DECREF(tmp_expression_value_21);
        if (tmp_assign_source_49 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oooooooobooo";
            goto frame_exception_exit_1;
        }
        assert(var_handler == NULL);
        var_handler = tmp_assign_source_49;
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_called_value_6;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_called_value_7;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_1_2;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        CHECK_OBJECT(var_handler);
        tmp_called_value_5 = var_handler;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "oooooooobooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "oooooooobooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_x);
        tmp_kw_call_value_0_2 = var_x;
        CHECK_OBJECT(var_y);
        tmp_kw_call_value_1_1 = var_y;
        frame_3e4a824f23b3f47c1a980dc7f2a48140->m_frame.f_lineno = 277;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_1};

            tmp_kw_call_value_0_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_7, kw_values, mod_consts[57]);
        }

        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "oooooooobooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_mouse_event_type);
        tmp_kw_call_value_1_2 = var_mouse_event_type;
        CHECK_OBJECT(var_mouse_button);
        tmp_kw_call_value_2_1 = var_mouse_button;
        CHECK_OBJECT(var_mouse_modifiers);
        tmp_kw_call_value_3_1 = var_mouse_modifiers;
        frame_3e4a824f23b3f47c1a980dc7f2a48140->m_frame.f_lineno = 276;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_2, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

            tmp_args_element_value_7 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_6, kw_values, mod_consts[58]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_args_element_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "oooooooobooo";
            goto frame_exception_exit_1;
        }
        frame_3e4a824f23b3f47c1a980dc7f2a48140->m_frame.f_lineno = 275;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_5, tmp_args_element_value_7);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "oooooooobooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_7:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3e4a824f23b3f47c1a980dc7f2a48140, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3e4a824f23b3f47c1a980dc7f2a48140->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3e4a824f23b3f47c1a980dc7f2a48140, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3e4a824f23b3f47c1a980dc7f2a48140,
        type_description_1,
        par_event,
        var_mouse_event,
        var_x,
        var_y,
        var_mouse_button,
        var_mouse_event_type,
        var_mouse_modifiers,
        var_data,
        (int)var_sgr,
        var_m,
        var_HeightIsUnknownError,
        var_handler
    );


    // Release cached frame if used for exception.
    if (frame_3e4a824f23b3f47c1a980dc7f2a48140 == cache_frame_3e4a824f23b3f47c1a980dc7f2a48140) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3e4a824f23b3f47c1a980dc7f2a48140);
        cache_frame_3e4a824f23b3f47c1a980dc7f2a48140 = NULL;
    }

    assertFrameObject(frame_3e4a824f23b3f47c1a980dc7f2a48140);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_NotImplemented;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_mouse_event);
    var_mouse_event = NULL;
    Py_XDECREF(var_x);
    var_x = NULL;
    Py_XDECREF(var_y);
    var_y = NULL;
    Py_XDECREF(var_mouse_button);
    var_mouse_button = NULL;
    Py_XDECREF(var_mouse_event_type);
    var_mouse_event_type = NULL;
    Py_XDECREF(var_mouse_modifiers);
    var_mouse_modifiers = NULL;
    Py_XDECREF(var_data);
    var_data = NULL;
    var_sgr = NUITKA_BOOL_UNASSIGNED;
    Py_XDECREF(var_m);
    var_m = NULL;
    Py_XDECREF(var_HeightIsUnknownError);
    var_HeightIsUnknownError = NULL;
    Py_XDECREF(var_handler);
    var_handler = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_mouse_event);
    var_mouse_event = NULL;
    Py_XDECREF(var_x);
    var_x = NULL;
    Py_XDECREF(var_y);
    var_y = NULL;
    Py_XDECREF(var_mouse_button);
    var_mouse_button = NULL;
    Py_XDECREF(var_mouse_event_type);
    var_mouse_event_type = NULL;
    Py_XDECREF(var_mouse_modifiers);
    var_mouse_modifiers = NULL;
    Py_XDECREF(var_data);
    var_data = NULL;
    var_sgr = NUITKA_BOOL_UNASSIGNED;
    Py_XDECREF(var_m);
    var_m = NULL;
    Py_XDECREF(var_HeightIsUnknownError);
    var_HeightIsUnknownError = NULL;
    Py_XDECREF(var_handler);
    var_handler = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

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


static PyObject *impl_prompt_toolkit$key_binding$bindings$mouse$$$function__1_load_mouse_bindings$$$function__2__scroll_up(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    struct Nuitka_FrameObject *frame_3aefae8f40abd8fffd06dcd0beb54d87;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3aefae8f40abd8fffd06dcd0beb54d87 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3aefae8f40abd8fffd06dcd0beb54d87)) {
        Py_XDECREF(cache_frame_3aefae8f40abd8fffd06dcd0beb54d87);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3aefae8f40abd8fffd06dcd0beb54d87 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3aefae8f40abd8fffd06dcd0beb54d87 = MAKE_FUNCTION_FRAME(tstate, codeobj_3aefae8f40abd8fffd06dcd0beb54d87, module_prompt_toolkit$key_binding$bindings$mouse, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3aefae8f40abd8fffd06dcd0beb54d87->m_type_description == NULL);
    frame_3aefae8f40abd8fffd06dcd0beb54d87 = cache_frame_3aefae8f40abd8fffd06dcd0beb54d87;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_3aefae8f40abd8fffd06dcd0beb54d87);
    assert(Py_REFCNT(frame_3aefae8f40abd8fffd06dcd0beb54d87) == 2);

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
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(par_event);
        tmp_expression_value_2 = par_event;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[59]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[60]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 293;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 293;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[62]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 293;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_3aefae8f40abd8fffd06dcd0beb54d87->m_frame.f_lineno = 293;
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 293;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[63]);
        frame_3aefae8f40abd8fffd06dcd0beb54d87->m_frame.f_lineno = 293;
        tmp_call_result_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
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
        exception_tb = MAKE_TRACEBACK(frame_3aefae8f40abd8fffd06dcd0beb54d87, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3aefae8f40abd8fffd06dcd0beb54d87->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3aefae8f40abd8fffd06dcd0beb54d87, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3aefae8f40abd8fffd06dcd0beb54d87,
        type_description_1,
        par_event
    );


    // Release cached frame if used for exception.
    if (frame_3aefae8f40abd8fffd06dcd0beb54d87 == cache_frame_3aefae8f40abd8fffd06dcd0beb54d87) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3aefae8f40abd8fffd06dcd0beb54d87);
        cache_frame_3aefae8f40abd8fffd06dcd0beb54d87 = NULL;
    }

    assertFrameObject(frame_3aefae8f40abd8fffd06dcd0beb54d87);

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


static PyObject *impl_prompt_toolkit$key_binding$bindings$mouse$$$function__1_load_mouse_bindings$$$function__3__scroll_down(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    struct Nuitka_FrameObject *frame_8aa3bb9f438b3654c889ce185b76dbe7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8aa3bb9f438b3654c889ce185b76dbe7 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8aa3bb9f438b3654c889ce185b76dbe7)) {
        Py_XDECREF(cache_frame_8aa3bb9f438b3654c889ce185b76dbe7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8aa3bb9f438b3654c889ce185b76dbe7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8aa3bb9f438b3654c889ce185b76dbe7 = MAKE_FUNCTION_FRAME(tstate, codeobj_8aa3bb9f438b3654c889ce185b76dbe7, module_prompt_toolkit$key_binding$bindings$mouse, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8aa3bb9f438b3654c889ce185b76dbe7->m_type_description == NULL);
    frame_8aa3bb9f438b3654c889ce185b76dbe7 = cache_frame_8aa3bb9f438b3654c889ce185b76dbe7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_8aa3bb9f438b3654c889ce185b76dbe7);
    assert(Py_REFCNT(frame_8aa3bb9f438b3654c889ce185b76dbe7) == 2);

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
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(par_event);
        tmp_expression_value_2 = par_event;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[59]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[60]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 300;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 300;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[64]);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 300;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_8aa3bb9f438b3654c889ce185b76dbe7->m_frame.f_lineno = 300;
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 300;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[63]);
        frame_8aa3bb9f438b3654c889ce185b76dbe7->m_frame.f_lineno = 300;
        tmp_call_result_1 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
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
        exception_tb = MAKE_TRACEBACK(frame_8aa3bb9f438b3654c889ce185b76dbe7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8aa3bb9f438b3654c889ce185b76dbe7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8aa3bb9f438b3654c889ce185b76dbe7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8aa3bb9f438b3654c889ce185b76dbe7,
        type_description_1,
        par_event
    );


    // Release cached frame if used for exception.
    if (frame_8aa3bb9f438b3654c889ce185b76dbe7 == cache_frame_8aa3bb9f438b3654c889ce185b76dbe7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8aa3bb9f438b3654c889ce185b76dbe7);
        cache_frame_8aa3bb9f438b3654c889ce185b76dbe7 = NULL;
    }

    assertFrameObject(frame_8aa3bb9f438b3654c889ce185b76dbe7);

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


static PyObject *impl_prompt_toolkit$key_binding$bindings$mouse$$$function__1_load_mouse_bindings$$$function__4__mouse(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_event = python_pars[0];
    PyObject *var_pieces = NULL;
    PyObject *var_button = NULL;
    PyObject *var_event_type = NULL;
    PyObject *var_x = NULL;
    PyObject *var_y = NULL;
    PyObject *var_output = NULL;
    PyObject *var_Win32Output = NULL;
    PyObject *var_Windows10_Output = NULL;
    PyObject *var_screen_buffer_info = NULL;
    PyObject *var_rows_above_cursor = NULL;
    PyObject *var_handler = NULL;
    struct Nuitka_FrameObject *frame_bed9a462a72bd3131ffcb68d70ce7133;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_bed9a462a72bd3131ffcb68d70ce7133 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_bed9a462a72bd3131ffcb68d70ce7133)) {
        Py_XDECREF(cache_frame_bed9a462a72bd3131ffcb68d70ce7133);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bed9a462a72bd3131ffcb68d70ce7133 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bed9a462a72bd3131ffcb68d70ce7133 = MAKE_FUNCTION_FRAME(tstate, codeobj_bed9a462a72bd3131ffcb68d70ce7133, module_prompt_toolkit$key_binding$bindings$mouse, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bed9a462a72bd3131ffcb68d70ce7133->m_type_description == NULL);
    frame_bed9a462a72bd3131ffcb68d70ce7133 = cache_frame_bed9a462a72bd3131ffcb68d70ce7133;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_bed9a462a72bd3131ffcb68d70ce7133);
    assert(Py_REFCNT(frame_bed9a462a72bd3131ffcb68d70ce7133) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_event);
        tmp_expression_value_2 = par_event;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[22]);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[36]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bed9a462a72bd3131ffcb68d70ce7133->m_frame.f_lineno = 310;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_POSARGS1(tstate, tmp_called_value_1, mod_consts[37]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_pieces == NULL);
        var_pieces = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_pieces);
        tmp_expression_value_3 = var_pieces;
        tmp_subscript_value_1 = mod_consts[51];
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_3, tmp_subscript_value_1, 0);
        if (tmp_args_element_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bed9a462a72bd3131ffcb68d70ce7133->m_frame.f_lineno = 312;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_button == NULL);
        var_button = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_2;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[66]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_pieces);
        tmp_expression_value_4 = var_pieces;
        tmp_subscript_value_2 = mod_consts[45];
        tmp_args_element_value_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_4, tmp_subscript_value_2, 1);
        if (tmp_args_element_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bed9a462a72bd3131ffcb68d70ce7133->m_frame.f_lineno = 313;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_event_type == NULL);
        var_event_type = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(var_pieces);
        tmp_expression_value_5 = var_pieces;
        tmp_subscript_value_3 = mod_consts[23];
        tmp_int_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_5, tmp_subscript_value_3, 2);
        if (tmp_int_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_x == NULL);
        var_x = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_int_arg_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(var_pieces);
        tmp_expression_value_6 = var_pieces;
        tmp_subscript_value_4 = mod_consts[67];
        tmp_int_arg_2 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_6, tmp_subscript_value_4, 3);
        if (tmp_int_arg_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = PyNumber_Int(tmp_int_arg_2);
        Py_DECREF(tmp_int_arg_2);
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_y == NULL);
        var_y = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(par_event);
        tmp_expression_value_9 = par_event;
        tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[46]);
        if (tmp_expression_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[47]);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_expression_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[68]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_assign_source_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_output == NULL);
        var_output = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[69];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$mouse;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[70];
        tmp_level_value_1 = mod_consts[51];
        frame_bed9a462a72bd3131ffcb68d70ce7133->m_frame.f_lineno = 320;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$mouse,
                mod_consts[71],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[71]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_Win32Output == NULL);
        var_Win32Output = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[72];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$mouse;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[73];
        tmp_level_value_2 = mod_consts[51];
        frame_bed9a462a72bd3131ffcb68d70ce7133->m_frame.f_lineno = 321;
        tmp_import_name_from_2 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$mouse,
                mod_consts[74],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[74]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_Windows10_Output == NULL);
        var_Windows10_Output = tmp_assign_source_8;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_output);
        tmp_isinstance_inst_1 = var_output;
        CHECK_OBJECT(var_Win32Output);
        tmp_tuple_element_1 = var_Win32Output;
        tmp_isinstance_cls_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_isinstance_cls_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_Windows10_Output);
        tmp_tuple_element_1 = var_Windows10_Output;
        PyTuple_SET_ITEM0(tmp_isinstance_cls_1, 1, tmp_tuple_element_1);
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(var_output);
        tmp_called_instance_1 = var_output;
        frame_bed9a462a72bd3131ffcb68d70ce7133->m_frame.f_lineno = 324;
        tmp_assign_source_9 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[75]);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_screen_buffer_info == NULL);
        var_screen_buffer_info = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_expression_value_15;
        CHECK_OBJECT(var_screen_buffer_info);
        tmp_expression_value_11 = var_screen_buffer_info;
        tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[76]);
        if (tmp_expression_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_left_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[77]);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_event);
        tmp_expression_value_15 = par_event;
        tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[46]);
        if (tmp_expression_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_1);

            exception_lineno = 327;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[47]);
        Py_DECREF(tmp_expression_value_14);
        if (tmp_expression_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_1);

            exception_lineno = 327;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[78]);
        Py_DECREF(tmp_expression_value_13);
        if (tmp_expression_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_1);

            exception_lineno = 327;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[79]);
        Py_DECREF(tmp_expression_value_12);
        if (tmp_sub_expr_right_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_1);

            exception_lineno = 327;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        Py_DECREF(tmp_sub_expr_right_1);
        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_rows_above_cursor == NULL);
        var_rows_above_cursor = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_isub_expr_left_1;
        PyObject *tmp_isub_expr_right_1;
        CHECK_OBJECT(var_y);
        tmp_isub_expr_left_1 = var_y;
        CHECK_OBJECT(var_rows_above_cursor);
        tmp_isub_expr_right_1 = var_rows_above_cursor;
        tmp_result = INPLACE_OPERATION_SUB_OBJECT_OBJECT(&tmp_isub_expr_left_1, tmp_isub_expr_right_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 329;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = tmp_isub_expr_left_1;
        var_y = tmp_assign_source_11;

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_subscript_value_6;
        CHECK_OBJECT(par_event);
        tmp_expression_value_21 = par_event;
        tmp_expression_value_20 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[46]);
        if (tmp_expression_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_19 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[47]);
        Py_DECREF(tmp_expression_value_20);
        if (tmp_expression_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_18 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[54]);
        Py_DECREF(tmp_expression_value_19);
        if (tmp_expression_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[54]);
        Py_DECREF(tmp_expression_value_18);
        if (tmp_expression_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_y);
        tmp_subscript_value_5 = var_y;
        tmp_expression_value_16 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_17, tmp_subscript_value_5);
        Py_DECREF(tmp_expression_value_17);
        if (tmp_expression_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_x);
        tmp_subscript_value_6 = var_x;
        tmp_assign_source_12 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_16, tmp_subscript_value_6);
        Py_DECREF(tmp_expression_value_16);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_handler == NULL);
        var_handler = tmp_assign_source_12;
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_value_5;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_called_value_6;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_1_2;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        CHECK_OBJECT(var_handler);
        tmp_called_value_4 = var_handler;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[55]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[56]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_x);
        tmp_kw_call_value_0_2 = var_x;
        CHECK_OBJECT(var_y);
        tmp_kw_call_value_1_1 = var_y;
        frame_bed9a462a72bd3131ffcb68d70ce7133->m_frame.f_lineno = 337;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_1};

            tmp_kw_call_value_0_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_6, kw_values, mod_consts[57]);
        }

        if (tmp_kw_call_value_0_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_event_type);
        tmp_kw_call_value_1_2 = var_event_type;
        CHECK_OBJECT(var_button);
        tmp_kw_call_value_2_1 = var_button;
        tmp_kw_call_value_3_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_kw_call_value_3_1 == NULL)) {
            tmp_kw_call_value_3_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
        }

        if (tmp_kw_call_value_3_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 340;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bed9a462a72bd3131ffcb68d70ce7133->m_frame.f_lineno = 336;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_2, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

            tmp_args_element_value_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tstate, tmp_called_value_5, kw_values, mod_consts[58]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_bed9a462a72bd3131ffcb68d70ce7133->m_frame.f_lineno = 335;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, tmp_called_value_4, tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "oooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bed9a462a72bd3131ffcb68d70ce7133, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bed9a462a72bd3131ffcb68d70ce7133->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bed9a462a72bd3131ffcb68d70ce7133, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bed9a462a72bd3131ffcb68d70ce7133,
        type_description_1,
        par_event,
        var_pieces,
        var_button,
        var_event_type,
        var_x,
        var_y,
        var_output,
        var_Win32Output,
        var_Windows10_Output,
        var_screen_buffer_info,
        var_rows_above_cursor,
        var_handler
    );


    // Release cached frame if used for exception.
    if (frame_bed9a462a72bd3131ffcb68d70ce7133 == cache_frame_bed9a462a72bd3131ffcb68d70ce7133) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bed9a462a72bd3131ffcb68d70ce7133);
        cache_frame_bed9a462a72bd3131ffcb68d70ce7133 = NULL;
    }

    assertFrameObject(frame_bed9a462a72bd3131ffcb68d70ce7133);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    tmp_return_value = Py_NotImplemented;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_pieces);
    Py_DECREF(var_pieces);
    var_pieces = NULL;
    CHECK_OBJECT(var_button);
    Py_DECREF(var_button);
    var_button = NULL;
    CHECK_OBJECT(var_event_type);
    Py_DECREF(var_event_type);
    var_event_type = NULL;
    CHECK_OBJECT(var_x);
    Py_DECREF(var_x);
    var_x = NULL;
    Py_XDECREF(var_y);
    var_y = NULL;
    CHECK_OBJECT(var_output);
    Py_DECREF(var_output);
    var_output = NULL;
    CHECK_OBJECT(var_Win32Output);
    Py_DECREF(var_Win32Output);
    var_Win32Output = NULL;
    CHECK_OBJECT(var_Windows10_Output);
    Py_DECREF(var_Windows10_Output);
    var_Windows10_Output = NULL;
    Py_XDECREF(var_screen_buffer_info);
    var_screen_buffer_info = NULL;
    Py_XDECREF(var_rows_above_cursor);
    var_rows_above_cursor = NULL;
    Py_XDECREF(var_handler);
    var_handler = NULL;
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

    Py_XDECREF(var_pieces);
    var_pieces = NULL;
    Py_XDECREF(var_button);
    var_button = NULL;
    Py_XDECREF(var_event_type);
    var_event_type = NULL;
    Py_XDECREF(var_x);
    var_x = NULL;
    Py_XDECREF(var_y);
    var_y = NULL;
    Py_XDECREF(var_output);
    var_output = NULL;
    Py_XDECREF(var_Win32Output);
    var_Win32Output = NULL;
    Py_XDECREF(var_Windows10_Output);
    var_Windows10_Output = NULL;
    Py_XDECREF(var_screen_buffer_info);
    var_screen_buffer_info = NULL;
    Py_XDECREF(var_rows_above_cursor);
    var_rows_above_cursor = NULL;
    Py_XDECREF(var_handler);
    var_handler = NULL;
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



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$mouse$$$function__1_load_mouse_bindings(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$mouse$$$function__1_load_mouse_bindings,
        mod_consts[102],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3d5c16c417092b9a33d181e2e66c276f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$mouse,
        mod_consts[21],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$mouse$$$function__1_load_mouse_bindings$$$function__1__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$mouse$$$function__1_load_mouse_bindings$$$function__1__,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        mod_consts[7],
#endif
        codeobj_3e4a824f23b3f47c1a980dc7f2a48140,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$mouse,
        mod_consts[5],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$mouse$$$function__1_load_mouse_bindings$$$function__2__scroll_up(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$mouse$$$function__1_load_mouse_bindings$$$function__2__scroll_up,
        mod_consts[11],
#if PYTHON_VERSION >= 0x300
        mod_consts[12],
#endif
        codeobj_3aefae8f40abd8fffd06dcd0beb54d87,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$mouse,
        mod_consts[10],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$mouse$$$function__1_load_mouse_bindings$$$function__3__scroll_down(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$mouse$$$function__1_load_mouse_bindings$$$function__3__scroll_down,
        mod_consts[15],
#if PYTHON_VERSION >= 0x300
        mod_consts[16],
#endif
        codeobj_8aa3bb9f438b3654c889ce185b76dbe7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$mouse,
        mod_consts[14],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$mouse$$$function__1_load_mouse_bindings$$$function__4__mouse(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$key_binding$bindings$mouse$$$function__1_load_mouse_bindings$$$function__4__mouse,
        mod_consts[19],
#if PYTHON_VERSION >= 0x300
        mod_consts[20],
#endif
        codeobj_bed9a462a72bd3131ffcb68d70ce7133,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_prompt_toolkit$key_binding$bindings$mouse,
        mod_consts[18],
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

static function_impl_code const function_table_prompt_toolkit$key_binding$bindings$mouse[] = {
    impl_prompt_toolkit$key_binding$bindings$mouse$$$function__1_load_mouse_bindings$$$function__1__,
    impl_prompt_toolkit$key_binding$bindings$mouse$$$function__1_load_mouse_bindings$$$function__2__scroll_up,
    impl_prompt_toolkit$key_binding$bindings$mouse$$$function__1_load_mouse_bindings$$$function__3__scroll_down,
    impl_prompt_toolkit$key_binding$bindings$mouse$$$function__1_load_mouse_bindings$$$function__4__mouse,
    impl_prompt_toolkit$key_binding$bindings$mouse$$$function__1_load_mouse_bindings,
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

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_prompt_toolkit$key_binding$bindings$mouse);

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
        module_prompt_toolkit$key_binding$bindings$mouse,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        function_table_prompt_toolkit$key_binding$bindings$mouse,
        sizeof(function_table_prompt_toolkit$key_binding$bindings$mouse) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_prompt_toolkit$key_binding$bindings$mouse(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("prompt_toolkit$key_binding$bindings$mouse");

    // Store the module for future use.
    module_prompt_toolkit$key_binding$bindings$mouse = module;

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
        PRINT_STRING("prompt_toolkit$key_binding$bindings$mouse: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("prompt_toolkit$key_binding$bindings$mouse: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initprompt_toolkit$key_binding$bindings$mouse\n");

    moduledict_prompt_toolkit$key_binding$bindings$mouse = MODULE_DICT(module_prompt_toolkit$key_binding$bindings$mouse);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_prompt_toolkit$key_binding$bindings$mouse,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_prompt_toolkit$key_binding$bindings$mouse,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[237]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_prompt_toolkit$key_binding$bindings$mouse,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_prompt_toolkit$key_binding$bindings$mouse,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_prompt_toolkit$key_binding$bindings$mouse,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_prompt_toolkit$key_binding$bindings$mouse);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_prompt_toolkit$key_binding$bindings$mouse);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_bed75980993dda4ba3e533a89f2ecb9f;
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
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_2);
    }
    frame_bed75980993dda4ba3e533a89f2ecb9f = MAKE_MODULE_FRAME(codeobj_bed75980993dda4ba3e533a89f2ecb9f, module_prompt_toolkit$key_binding$bindings$mouse);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_bed75980993dda4ba3e533a89f2ecb9f);
    assert(Py_REFCNT(frame_bed75980993dda4ba3e533a89f2ecb9f) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[82]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[83], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[82]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[84], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = MAKE_DICT_EMPTY();
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_5 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[87]);
        }
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT0(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = Py_False;
        UPDATE_STRING_DICT0(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[89], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[90];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$mouse;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[91];
        tmp_level_value_1 = mod_consts[51];
        frame_bed75980993dda4ba3e533a89f2ecb9f->m_frame.f_lineno = 6;
        tmp_import_name_from_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_1,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$mouse,
                mod_consts[56],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_1, mod_consts[56]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[92];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$mouse;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[93];
        tmp_level_value_2 = mod_consts[51];
        frame_bed75980993dda4ba3e533a89f2ecb9f->m_frame.f_lineno = 7;
        tmp_assign_source_9 = IMPORT_MODULE5(tstate, tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_2,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$mouse,
                mod_consts[61],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_2, mod_consts[61]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_3,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$mouse,
                mod_consts[94],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_3, mod_consts[94]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_11);
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
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[95];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$mouse;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[96];
        tmp_level_value_3 = mod_consts[51];
        frame_bed75980993dda4ba3e533a89f2ecb9f->m_frame.f_lineno = 8;
        tmp_import_name_from_4 = IMPORT_MODULE5(tstate, tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_4,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$mouse,
                mod_consts[2],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_4, mod_consts[2]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[97];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$mouse;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[98];
        tmp_level_value_4 = mod_consts[51];
        frame_bed75980993dda4ba3e533a89f2ecb9f->m_frame.f_lineno = 9;
        tmp_assign_source_13 = IMPORT_MODULE5(tstate, tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_13;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_5,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$mouse,
                mod_consts[65],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_5, mod_consts[65]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_6,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$mouse,
                mod_consts[55],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_6, mod_consts[55]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_7,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$mouse,
                mod_consts[66],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_7, mod_consts[66]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_8 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_8,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$mouse,
                mod_consts[99],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_8, mod_consts[99]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[99], tmp_assign_source_17);
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
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[100];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$mouse;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[101];
        tmp_level_value_5 = mod_consts[23];
        frame_bed75980993dda4ba3e533a89f2ecb9f->m_frame.f_lineno = 16;
        tmp_import_name_from_9 = IMPORT_MODULE5(tstate, tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tstate,
                tmp_import_name_from_9,
                (PyObject *)moduledict_prompt_toolkit$key_binding$bindings$mouse,
                mod_consts[0],
                mod_consts[51]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME_FROM_MODULE(tstate, tmp_import_name_from_9, mod_consts[0]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = MAKE_LIST1(mod_consts[102]);
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_assign_source_20 == NULL)) {
            tmp_assign_source_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[94]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[66]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[105]);
        if (tmp_assign_source_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[66]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_22 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_2, mod_consts[106]);
        if (tmp_assign_source_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[66]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_23 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[107]);
        if (tmp_assign_source_23 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_expression_value_4;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[66]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_24 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_4, mod_consts[43]);
        if (tmp_assign_source_24 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_expression_value_5;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[66]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_25 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_5, mod_consts[108]);
        if (tmp_assign_source_25 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = mod_consts[109];
        UPDATE_STRING_DICT0(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_26);
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_ass_subvalue_1 = mod_consts[111];
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_ass_subscribed_1 == NULL)) {
            tmp_ass_subscribed_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_ass_subscribed_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[110];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_frozenset_arg_1;
        PyObject *tmp_set_element_1;
        PyObject *tmp_expression_value_6;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[99]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_set_element_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[112]);
        if (tmp_set_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_frozenset_arg_1 = PySet_New(NULL);
        assert(tmp_frozenset_arg_1);
        tmp_res = PySet_Add(tmp_frozenset_arg_1, tmp_set_element_1);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_set_element_1);
            Py_DECREF(tmp_frozenset_arg_1);

            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_set_element_1);
        tmp_assign_source_27 = PyFrozenSet_New(tmp_frozenset_arg_1);
        Py_DECREF(tmp_frozenset_arg_1);
        if (tmp_assign_source_27 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_27);
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        tmp_ass_subvalue_2 = mod_consts[111];
        tmp_ass_subscribed_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_ass_subscribed_2 == NULL)) {
            tmp_ass_subscribed_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_ass_subscribed_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_2 = mod_consts[112];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_frozenset_arg_2;
        PyObject *tmp_set_element_2;
        PyObject *tmp_expression_value_7;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[99]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_set_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_7, mod_consts[113]);
        if (tmp_set_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_frozenset_arg_2 = PySet_New(NULL);
        assert(tmp_frozenset_arg_2);
        tmp_res = PySet_Add(tmp_frozenset_arg_2, tmp_set_element_2);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_set_element_2);
            Py_DECREF(tmp_frozenset_arg_2);

            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_set_element_2);
        tmp_assign_source_28 = PyFrozenSet_New(tmp_frozenset_arg_2);
        Py_DECREF(tmp_frozenset_arg_2);
        if (tmp_assign_source_28 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_28);
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        tmp_ass_subvalue_3 = mod_consts[111];
        tmp_ass_subscribed_3 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_ass_subscribed_3 == NULL)) {
            tmp_ass_subscribed_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_ass_subscribed_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_3 = mod_consts[113];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_frozenset_arg_3;
        PyObject *tmp_set_element_3;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[99]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        tmp_set_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_8, mod_consts[112]);
        if (tmp_set_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        tmp_frozenset_arg_3 = PySet_New(NULL);
        assert(tmp_frozenset_arg_3);
        tmp_res = PySet_Add(tmp_frozenset_arg_3, tmp_set_element_3);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_set_element_3);
            Py_DECREF(tmp_frozenset_arg_3);

            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_set_element_3);
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[99]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_frozenset_arg_3);

            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        tmp_set_element_3 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[113]);
        if (tmp_set_element_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_frozenset_arg_3);

            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        tmp_res = PySet_Add(tmp_frozenset_arg_3, tmp_set_element_3);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_frozenset_arg_3);
            Py_DECREF(tmp_set_element_3);

            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_set_element_3);
        tmp_assign_source_29 = PyFrozenSet_New(tmp_frozenset_arg_3);
        Py_DECREF(tmp_frozenset_arg_3);
        if (tmp_assign_source_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_29);
    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        tmp_ass_subvalue_4 = mod_consts[111];
        tmp_ass_subscribed_4 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_ass_subscribed_4 == NULL)) {
            tmp_ass_subscribed_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_ass_subscribed_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_4 = mod_consts[114];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_frozenset_arg_4;
        PyObject *tmp_set_element_4;
        PyObject *tmp_expression_value_10;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[99]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        tmp_set_element_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_10, mod_consts[115]);
        if (tmp_set_element_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        tmp_frozenset_arg_4 = PySet_New(NULL);
        assert(tmp_frozenset_arg_4);
        tmp_res = PySet_Add(tmp_frozenset_arg_4, tmp_set_element_4);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_set_element_4);
            Py_DECREF(tmp_frozenset_arg_4);

            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_set_element_4);
        tmp_assign_source_30 = PyFrozenSet_New(tmp_frozenset_arg_4);
        Py_DECREF(tmp_frozenset_arg_4);
        if (tmp_assign_source_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_30);
    }
    {
        PyObject *tmp_ass_subvalue_5;
        PyObject *tmp_ass_subscribed_5;
        PyObject *tmp_ass_subscript_5;
        tmp_ass_subvalue_5 = mod_consts[111];
        tmp_ass_subscribed_5 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_ass_subscribed_5 == NULL)) {
            tmp_ass_subscribed_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_ass_subscribed_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_5 = mod_consts[115];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_frozenset_arg_5;
        PyObject *tmp_set_element_5;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_expression_value_12;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[99]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        tmp_set_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_11, mod_consts[112]);
        if (tmp_set_element_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        tmp_frozenset_arg_5 = PySet_New(NULL);
        assert(tmp_frozenset_arg_5);
        tmp_res = PySet_Add(tmp_frozenset_arg_5, tmp_set_element_5);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_set_element_5);
            Py_DECREF(tmp_frozenset_arg_5);

            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_set_element_5);
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[99]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_frozenset_arg_5);

            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        tmp_set_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[115]);
        if (tmp_set_element_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_frozenset_arg_5);

            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        tmp_res = PySet_Add(tmp_frozenset_arg_5, tmp_set_element_5);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_frozenset_arg_5);
            Py_DECREF(tmp_set_element_5);

            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_set_element_5);
        tmp_assign_source_31 = PyFrozenSet_New(tmp_frozenset_arg_5);
        Py_DECREF(tmp_frozenset_arg_5);
        if (tmp_assign_source_31 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_31);
    }
    {
        PyObject *tmp_ass_subvalue_6;
        PyObject *tmp_ass_subscribed_6;
        PyObject *tmp_ass_subscript_6;
        tmp_ass_subvalue_6 = mod_consts[111];
        tmp_ass_subscribed_6 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_ass_subscribed_6 == NULL)) {
            tmp_ass_subscribed_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_ass_subscribed_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_6 = mod_consts[116];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_frozenset_arg_6;
        PyObject *tmp_set_element_6;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_expression_value_14;
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[99]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        tmp_set_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_13, mod_consts[113]);
        if (tmp_set_element_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        tmp_frozenset_arg_6 = PySet_New(NULL);
        assert(tmp_frozenset_arg_6);
        tmp_res = PySet_Add(tmp_frozenset_arg_6, tmp_set_element_6);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_set_element_6);
            Py_DECREF(tmp_frozenset_arg_6);

            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_set_element_6);
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[99]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_frozenset_arg_6);

            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        tmp_set_element_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_14, mod_consts[115]);
        if (tmp_set_element_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_frozenset_arg_6);

            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        tmp_res = PySet_Add(tmp_frozenset_arg_6, tmp_set_element_6);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_frozenset_arg_6);
            Py_DECREF(tmp_set_element_6);

            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_set_element_6);
        tmp_assign_source_32 = PyFrozenSet_New(tmp_frozenset_arg_6);
        Py_DECREF(tmp_frozenset_arg_6);
        if (tmp_assign_source_32 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_32);
    }
    {
        PyObject *tmp_ass_subvalue_7;
        PyObject *tmp_ass_subscribed_7;
        PyObject *tmp_ass_subscript_7;
        tmp_ass_subvalue_7 = mod_consts[111];
        tmp_ass_subscribed_7 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_ass_subscribed_7 == NULL)) {
            tmp_ass_subscribed_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_ass_subscribed_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_7 = mod_consts[117];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_frozenset_arg_7;
        PyObject *tmp_set_element_7;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_expression_value_17;
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[99]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        tmp_set_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[112]);
        if (tmp_set_element_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        tmp_frozenset_arg_7 = PySet_New(NULL);
        assert(tmp_frozenset_arg_7);
        tmp_res = PySet_Add(tmp_frozenset_arg_7, tmp_set_element_7);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_set_element_7);
            Py_DECREF(tmp_frozenset_arg_7);

            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_set_element_7);
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[99]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_frozenset_arg_7);

            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        tmp_set_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_16, mod_consts[113]);
        if (tmp_set_element_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_frozenset_arg_7);

            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        tmp_res = PySet_Add(tmp_frozenset_arg_7, tmp_set_element_7);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_frozenset_arg_7);
            Py_DECREF(tmp_set_element_7);

            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_set_element_7);
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[99]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[99]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_frozenset_arg_7);

            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        tmp_set_element_7 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_17, mod_consts[115]);
        if (tmp_set_element_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_frozenset_arg_7);

            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        tmp_res = PySet_Add(tmp_frozenset_arg_7, tmp_set_element_7);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_frozenset_arg_7);
            Py_DECREF(tmp_set_element_7);

            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_set_element_7);
        tmp_assign_source_33 = PyFrozenSet_New(tmp_frozenset_arg_7);
        Py_DECREF(tmp_frozenset_arg_7);
        if (tmp_assign_source_33 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_33);
    }
    {
        PyObject *tmp_ass_subvalue_8;
        PyObject *tmp_ass_subscribed_8;
        PyObject *tmp_ass_subscript_8;
        tmp_ass_subvalue_8 = mod_consts[111];
        tmp_ass_subscribed_8 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_ass_subscribed_8 == NULL)) {
            tmp_ass_subscribed_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_ass_subscribed_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_8 = mod_consts[118];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = mod_consts[109];
        UPDATE_STRING_DICT0(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_34);
    }
    {
        PyObject *tmp_ass_subvalue_9;
        PyObject *tmp_ass_subscribed_9;
        PyObject *tmp_ass_subscript_9;
        tmp_ass_subvalue_9 = mod_consts[111];
        tmp_ass_subscribed_9 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_ass_subscribed_9 == NULL)) {
            tmp_ass_subscribed_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[86]);
        }

        if (tmp_ass_subscribed_9 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_9 = mod_consts[44];
        tmp_result = SET_SUBSCRIPT(tstate, tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_expression_value_18;
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_35 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[119]);
        if (tmp_assign_source_35 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_expression_value_19;
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_36 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_19, mod_consts[120]);
        if (tmp_assign_source_36 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_expression_value_20;
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_37 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_20, mod_consts[121]);
        if (tmp_assign_source_37 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_expression_value_21;
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_38 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[122]);
        if (tmp_assign_source_38 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_expression_value_22;
        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[65]);

        if (unlikely(tmp_expression_value_22 == NULL)) {
            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[65]);
        }

        if (tmp_expression_value_22 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_39 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_22, mod_consts[124]);
        if (tmp_assign_source_39 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        tmp_dict_key_1 = mod_consts[125];
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[119]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[119]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_dict_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_40 = _PyDict_NewPresized( 96 );
        {
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_tuple_element_13;
            PyObject *tmp_tuple_element_14;
            PyObject *tmp_tuple_element_15;
            PyObject *tmp_tuple_element_16;
            PyObject *tmp_tuple_element_17;
            PyObject *tmp_tuple_element_18;
            PyObject *tmp_tuple_element_19;
            PyObject *tmp_tuple_element_20;
            PyObject *tmp_tuple_element_21;
            PyObject *tmp_tuple_element_22;
            PyObject *tmp_tuple_element_23;
            PyObject *tmp_tuple_element_24;
            PyObject *tmp_tuple_element_25;
            PyObject *tmp_tuple_element_26;
            PyObject *tmp_tuple_element_27;
            PyObject *tmp_tuple_element_28;
            PyObject *tmp_tuple_element_29;
            PyObject *tmp_tuple_element_30;
            PyObject *tmp_tuple_element_31;
            PyObject *tmp_tuple_element_32;
            PyObject *tmp_tuple_element_33;
            PyObject *tmp_tuple_element_34;
            PyObject *tmp_tuple_element_35;
            PyObject *tmp_tuple_element_36;
            PyObject *tmp_tuple_element_37;
            PyObject *tmp_tuple_element_38;
            PyObject *tmp_tuple_element_39;
            PyObject *tmp_tuple_element_40;
            PyObject *tmp_tuple_element_41;
            PyObject *tmp_tuple_element_42;
            PyObject *tmp_tuple_element_43;
            PyObject *tmp_tuple_element_44;
            PyObject *tmp_tuple_element_45;
            PyObject *tmp_tuple_element_46;
            PyObject *tmp_tuple_element_47;
            PyObject *tmp_tuple_element_48;
            PyObject *tmp_tuple_element_49;
            PyObject *tmp_tuple_element_50;
            PyObject *tmp_tuple_element_51;
            PyObject *tmp_tuple_element_52;
            PyObject *tmp_tuple_element_53;
            PyObject *tmp_tuple_element_54;
            PyObject *tmp_tuple_element_55;
            PyObject *tmp_tuple_element_56;
            PyObject *tmp_tuple_element_57;
            PyObject *tmp_tuple_element_58;
            PyObject *tmp_tuple_element_59;
            PyObject *tmp_tuple_element_60;
            PyObject *tmp_tuple_element_61;
            PyObject *tmp_tuple_element_62;
            PyObject *tmp_tuple_element_63;
            PyObject *tmp_tuple_element_64;
            PyObject *tmp_tuple_element_65;
            PyObject *tmp_tuple_element_66;
            PyObject *tmp_tuple_element_67;
            PyObject *tmp_tuple_element_68;
            PyObject *tmp_tuple_element_69;
            PyObject *tmp_tuple_element_70;
            PyObject *tmp_tuple_element_71;
            PyObject *tmp_tuple_element_72;
            PyObject *tmp_tuple_element_73;
            PyObject *tmp_tuple_element_74;
            PyObject *tmp_tuple_element_75;
            PyObject *tmp_tuple_element_76;
            PyObject *tmp_tuple_element_77;
            PyObject *tmp_tuple_element_78;
            PyObject *tmp_tuple_element_79;
            PyObject *tmp_tuple_element_80;
            PyObject *tmp_tuple_element_81;
            PyObject *tmp_tuple_element_82;
            PyObject *tmp_tuple_element_83;
            PyObject *tmp_tuple_element_84;
            PyObject *tmp_tuple_element_85;
            PyObject *tmp_tuple_element_86;
            PyObject *tmp_tuple_element_87;
            PyObject *tmp_tuple_element_88;
            PyObject *tmp_tuple_element_89;
            PyObject *tmp_tuple_element_90;
            PyObject *tmp_tuple_element_91;
            PyObject *tmp_tuple_element_92;
            PyObject *tmp_tuple_element_93;
            PyObject *tmp_tuple_element_94;
            PyObject *tmp_tuple_element_95;
            PyObject *tmp_tuple_element_96;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[126];
            tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[119]);

            if (unlikely(tmp_tuple_element_2 == NULL)) {
                tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[119]);
            }

            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[108]);

            if (unlikely(tmp_tuple_element_2 == NULL)) {
                tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
            }

            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[112]);

            if (unlikely(tmp_tuple_element_2 == NULL)) {
                tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
            }

            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_2);
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[127];
            tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[119]);

            if (unlikely(tmp_tuple_element_3 == NULL)) {
                tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[119]);
            }

            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_3);
            tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[108]);

            if (unlikely(tmp_tuple_element_3 == NULL)) {
                tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
            }

            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[113]);

            if (unlikely(tmp_tuple_element_3 == NULL)) {
                tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[113]);
            }

            if (tmp_tuple_element_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_3);
            goto tuple_build_noexception_3;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_3:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[128];
            tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[119]);

            if (unlikely(tmp_tuple_element_4 == NULL)) {
                tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[119]);
            }

            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_4);
            tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[108]);

            if (unlikely(tmp_tuple_element_4 == NULL)) {
                tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
            }

            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[114]);

            if (unlikely(tmp_tuple_element_4 == NULL)) {
                tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[114]);
            }

            if (tmp_tuple_element_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_4);
            goto tuple_build_noexception_4;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_4:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_4:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[129];
            tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[119]);

            if (unlikely(tmp_tuple_element_5 == NULL)) {
                tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[119]);
            }

            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_5);
            tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[108]);

            if (unlikely(tmp_tuple_element_5 == NULL)) {
                tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
            }

            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_5);
            tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_tuple_element_5 == NULL)) {
                tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[115]);
            }

            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;

                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_5);
            goto tuple_build_noexception_5;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_5:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_5:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[130];
            tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[119]);

            if (unlikely(tmp_tuple_element_6 == NULL)) {
                tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[119]);
            }

            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_6);
            tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[108]);

            if (unlikely(tmp_tuple_element_6 == NULL)) {
                tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
            }

            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_6);
            tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_tuple_element_6 == NULL)) {
                tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[116]);
            }

            if (tmp_tuple_element_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_6);
            goto tuple_build_noexception_6;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_6:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_6:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[131];
            tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[119]);

            if (unlikely(tmp_tuple_element_7 == NULL)) {
                tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[119]);
            }

            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_7);
            tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[108]);

            if (unlikely(tmp_tuple_element_7 == NULL)) {
                tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
            }

            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_7);
            tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[117]);

            if (unlikely(tmp_tuple_element_7 == NULL)) {
                tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[117]);
            }

            if (tmp_tuple_element_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;

                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_7);
            goto tuple_build_noexception_7;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_7:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_7:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[132];
            tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[119]);

            if (unlikely(tmp_tuple_element_8 == NULL)) {
                tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[119]);
            }

            if (tmp_tuple_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_8);
            tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[108]);

            if (unlikely(tmp_tuple_element_8 == NULL)) {
                tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
            }

            if (tmp_tuple_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[118]);

            if (unlikely(tmp_tuple_element_8 == NULL)) {
                tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
            }

            if (tmp_tuple_element_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;

                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_8);
            goto tuple_build_noexception_8;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_8:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_8:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[133];
            tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[120]);

            if (unlikely(tmp_tuple_element_9 == NULL)) {
                tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[120]);
            }

            if (tmp_tuple_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_9);
            tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[108]);

            if (unlikely(tmp_tuple_element_9 == NULL)) {
                tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
            }

            if (tmp_tuple_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_9);
            tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[110]);

            if (unlikely(tmp_tuple_element_9 == NULL)) {
                tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
            }

            if (tmp_tuple_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;

                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_9);
            goto tuple_build_noexception_9;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_9:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_9:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[134];
            tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[120]);

            if (unlikely(tmp_tuple_element_10 == NULL)) {
                tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[120]);
            }

            if (tmp_tuple_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_10);
            tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[108]);

            if (unlikely(tmp_tuple_element_10 == NULL)) {
                tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
            }

            if (tmp_tuple_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_10);
            tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[112]);

            if (unlikely(tmp_tuple_element_10 == NULL)) {
                tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
            }

            if (tmp_tuple_element_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_10);
            goto tuple_build_noexception_10;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_10:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_10:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[135];
            tmp_tuple_element_11 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[120]);

            if (unlikely(tmp_tuple_element_11 == NULL)) {
                tmp_tuple_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[120]);
            }

            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_11);
            tmp_tuple_element_11 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[108]);

            if (unlikely(tmp_tuple_element_11 == NULL)) {
                tmp_tuple_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
            }

            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_11);
            tmp_tuple_element_11 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[113]);

            if (unlikely(tmp_tuple_element_11 == NULL)) {
                tmp_tuple_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[113]);
            }

            if (tmp_tuple_element_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 62;

                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_11);
            goto tuple_build_noexception_11;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_11:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_11:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[136];
            tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[120]);

            if (unlikely(tmp_tuple_element_12 == NULL)) {
                tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[120]);
            }

            if (tmp_tuple_element_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_12);
            tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[108]);

            if (unlikely(tmp_tuple_element_12 == NULL)) {
                tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
            }

            if (tmp_tuple_element_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;

                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_12);
            tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[114]);

            if (unlikely(tmp_tuple_element_12 == NULL)) {
                tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[114]);
            }

            if (tmp_tuple_element_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;

                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_12);
            goto tuple_build_noexception_12;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_12:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_12:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[137];
            tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[120]);

            if (unlikely(tmp_tuple_element_13 == NULL)) {
                tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[120]);
            }

            if (tmp_tuple_element_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_13);
            tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[108]);

            if (unlikely(tmp_tuple_element_13 == NULL)) {
                tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
            }

            if (tmp_tuple_element_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;

                goto tuple_build_exception_13;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_13);
            tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_tuple_element_13 == NULL)) {
                tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[115]);
            }

            if (tmp_tuple_element_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 64;

                goto tuple_build_exception_13;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_13);
            goto tuple_build_noexception_13;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_13:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_13:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[138];
            tmp_tuple_element_14 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[120]);

            if (unlikely(tmp_tuple_element_14 == NULL)) {
                tmp_tuple_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[120]);
            }

            if (tmp_tuple_element_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_14);
            tmp_tuple_element_14 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[108]);

            if (unlikely(tmp_tuple_element_14 == NULL)) {
                tmp_tuple_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
            }

            if (tmp_tuple_element_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;

                goto tuple_build_exception_14;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_14);
            tmp_tuple_element_14 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_tuple_element_14 == NULL)) {
                tmp_tuple_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[116]);
            }

            if (tmp_tuple_element_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;

                goto tuple_build_exception_14;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_14);
            goto tuple_build_noexception_14;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_14:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_14:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[139];
            tmp_tuple_element_15 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[120]);

            if (unlikely(tmp_tuple_element_15 == NULL)) {
                tmp_tuple_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[120]);
            }

            if (tmp_tuple_element_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_15);
            tmp_tuple_element_15 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[108]);

            if (unlikely(tmp_tuple_element_15 == NULL)) {
                tmp_tuple_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
            }

            if (tmp_tuple_element_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_15);
            tmp_tuple_element_15 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[117]);

            if (unlikely(tmp_tuple_element_15 == NULL)) {
                tmp_tuple_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[117]);
            }

            if (tmp_tuple_element_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;

                goto tuple_build_exception_15;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_15);
            goto tuple_build_noexception_15;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_15:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_15:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[140];
            tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[120]);

            if (unlikely(tmp_tuple_element_16 == NULL)) {
                tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[120]);
            }

            if (tmp_tuple_element_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_16);
            tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[108]);

            if (unlikely(tmp_tuple_element_16 == NULL)) {
                tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
            }

            if (tmp_tuple_element_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;

                goto tuple_build_exception_16;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_16);
            tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[118]);

            if (unlikely(tmp_tuple_element_16 == NULL)) {
                tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
            }

            if (tmp_tuple_element_16 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;

                goto tuple_build_exception_16;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_16);
            goto tuple_build_noexception_16;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_16:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_16:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[141];
            tmp_tuple_element_17 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[121]);

            if (unlikely(tmp_tuple_element_17 == NULL)) {
                tmp_tuple_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[121]);
            }

            if (tmp_tuple_element_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_17);
            tmp_tuple_element_17 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[108]);

            if (unlikely(tmp_tuple_element_17 == NULL)) {
                tmp_tuple_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
            }

            if (tmp_tuple_element_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;

                goto tuple_build_exception_17;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_17);
            tmp_tuple_element_17 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[110]);

            if (unlikely(tmp_tuple_element_17 == NULL)) {
                tmp_tuple_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
            }

            if (tmp_tuple_element_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;

                goto tuple_build_exception_17;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_17);
            goto tuple_build_noexception_17;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_17:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_17:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[142];
            tmp_tuple_element_18 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[121]);

            if (unlikely(tmp_tuple_element_18 == NULL)) {
                tmp_tuple_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[121]);
            }

            if (tmp_tuple_element_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_18);
            tmp_tuple_element_18 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[108]);

            if (unlikely(tmp_tuple_element_18 == NULL)) {
                tmp_tuple_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
            }

            if (tmp_tuple_element_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;

                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_18);
            tmp_tuple_element_18 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[112]);

            if (unlikely(tmp_tuple_element_18 == NULL)) {
                tmp_tuple_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
            }

            if (tmp_tuple_element_18 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;

                goto tuple_build_exception_18;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_18);
            goto tuple_build_noexception_18;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_18:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_18:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[143];
            tmp_tuple_element_19 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[121]);

            if (unlikely(tmp_tuple_element_19 == NULL)) {
                tmp_tuple_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[121]);
            }

            if (tmp_tuple_element_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_19);
            tmp_tuple_element_19 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[108]);

            if (unlikely(tmp_tuple_element_19 == NULL)) {
                tmp_tuple_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
            }

            if (tmp_tuple_element_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto tuple_build_exception_19;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_19);
            tmp_tuple_element_19 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[113]);

            if (unlikely(tmp_tuple_element_19 == NULL)) {
                tmp_tuple_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[113]);
            }

            if (tmp_tuple_element_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto tuple_build_exception_19;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_19);
            goto tuple_build_noexception_19;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_19:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_19:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[144];
            tmp_tuple_element_20 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[121]);

            if (unlikely(tmp_tuple_element_20 == NULL)) {
                tmp_tuple_element_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[121]);
            }

            if (tmp_tuple_element_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_20);
            tmp_tuple_element_20 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[108]);

            if (unlikely(tmp_tuple_element_20 == NULL)) {
                tmp_tuple_element_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
            }

            if (tmp_tuple_element_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto tuple_build_exception_20;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_20);
            tmp_tuple_element_20 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[114]);

            if (unlikely(tmp_tuple_element_20 == NULL)) {
                tmp_tuple_element_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[114]);
            }

            if (tmp_tuple_element_20 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto tuple_build_exception_20;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_20);
            goto tuple_build_noexception_20;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_20:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_20:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[145];
            tmp_tuple_element_21 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[121]);

            if (unlikely(tmp_tuple_element_21 == NULL)) {
                tmp_tuple_element_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[121]);
            }

            if (tmp_tuple_element_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_21);
            tmp_tuple_element_21 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[108]);

            if (unlikely(tmp_tuple_element_21 == NULL)) {
                tmp_tuple_element_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
            }

            if (tmp_tuple_element_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;

                goto tuple_build_exception_21;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_21);
            tmp_tuple_element_21 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_tuple_element_21 == NULL)) {
                tmp_tuple_element_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[115]);
            }

            if (tmp_tuple_element_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;

                goto tuple_build_exception_21;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_21);
            goto tuple_build_noexception_21;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_21:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_21:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[146];
            tmp_tuple_element_22 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[121]);

            if (unlikely(tmp_tuple_element_22 == NULL)) {
                tmp_tuple_element_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[121]);
            }

            if (tmp_tuple_element_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_22);
            tmp_tuple_element_22 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[108]);

            if (unlikely(tmp_tuple_element_22 == NULL)) {
                tmp_tuple_element_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
            }

            if (tmp_tuple_element_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;

                goto tuple_build_exception_22;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_22);
            tmp_tuple_element_22 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_tuple_element_22 == NULL)) {
                tmp_tuple_element_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[116]);
            }

            if (tmp_tuple_element_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;

                goto tuple_build_exception_22;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_22);
            goto tuple_build_noexception_22;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_22:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_22:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[147];
            tmp_tuple_element_23 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[121]);

            if (unlikely(tmp_tuple_element_23 == NULL)) {
                tmp_tuple_element_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[121]);
            }

            if (tmp_tuple_element_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_23);
            tmp_tuple_element_23 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[108]);

            if (unlikely(tmp_tuple_element_23 == NULL)) {
                tmp_tuple_element_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
            }

            if (tmp_tuple_element_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;

                goto tuple_build_exception_23;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_23);
            tmp_tuple_element_23 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[117]);

            if (unlikely(tmp_tuple_element_23 == NULL)) {
                tmp_tuple_element_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[117]);
            }

            if (tmp_tuple_element_23 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;

                goto tuple_build_exception_23;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_23);
            goto tuple_build_noexception_23;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_23:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_23:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[148];
            tmp_tuple_element_24 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[121]);

            if (unlikely(tmp_tuple_element_24 == NULL)) {
                tmp_tuple_element_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[121]);
            }

            if (tmp_tuple_element_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_24);
            tmp_tuple_element_24 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[108]);

            if (unlikely(tmp_tuple_element_24 == NULL)) {
                tmp_tuple_element_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
            }

            if (tmp_tuple_element_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;

                goto tuple_build_exception_24;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_24);
            tmp_tuple_element_24 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[118]);

            if (unlikely(tmp_tuple_element_24 == NULL)) {
                tmp_tuple_element_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
            }

            if (tmp_tuple_element_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;

                goto tuple_build_exception_24;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_24);
            goto tuple_build_noexception_24;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_24:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_24:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[149];
            tmp_tuple_element_25 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[119]);

            if (unlikely(tmp_tuple_element_25 == NULL)) {
                tmp_tuple_element_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[119]);
            }

            if (tmp_tuple_element_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_25);
            tmp_tuple_element_25 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[107]);

            if (unlikely(tmp_tuple_element_25 == NULL)) {
                tmp_tuple_element_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
            }

            if (tmp_tuple_element_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;

                goto tuple_build_exception_25;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_25);
            tmp_tuple_element_25 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[110]);

            if (unlikely(tmp_tuple_element_25 == NULL)) {
                tmp_tuple_element_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
            }

            if (tmp_tuple_element_25 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;

                goto tuple_build_exception_25;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_25);
            goto tuple_build_noexception_25;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_25:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_25:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[150];
            tmp_tuple_element_26 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[119]);

            if (unlikely(tmp_tuple_element_26 == NULL)) {
                tmp_tuple_element_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[119]);
            }

            if (tmp_tuple_element_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_26);
            tmp_tuple_element_26 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[107]);

            if (unlikely(tmp_tuple_element_26 == NULL)) {
                tmp_tuple_element_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
            }

            if (tmp_tuple_element_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;

                goto tuple_build_exception_26;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_26);
            tmp_tuple_element_26 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[112]);

            if (unlikely(tmp_tuple_element_26 == NULL)) {
                tmp_tuple_element_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
            }

            if (tmp_tuple_element_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;

                goto tuple_build_exception_26;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_26);
            goto tuple_build_noexception_26;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_26:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_26:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[151];
            tmp_tuple_element_27 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[119]);

            if (unlikely(tmp_tuple_element_27 == NULL)) {
                tmp_tuple_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[119]);
            }

            if (tmp_tuple_element_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_27);
            tmp_tuple_element_27 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[107]);

            if (unlikely(tmp_tuple_element_27 == NULL)) {
                tmp_tuple_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
            }

            if (tmp_tuple_element_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;

                goto tuple_build_exception_27;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_27);
            tmp_tuple_element_27 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[113]);

            if (unlikely(tmp_tuple_element_27 == NULL)) {
                tmp_tuple_element_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[113]);
            }

            if (tmp_tuple_element_27 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;

                goto tuple_build_exception_27;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_27);
            goto tuple_build_noexception_27;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_27:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_27:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[152];
            tmp_tuple_element_28 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[119]);

            if (unlikely(tmp_tuple_element_28 == NULL)) {
                tmp_tuple_element_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[119]);
            }

            if (tmp_tuple_element_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_28);
            tmp_tuple_element_28 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[107]);

            if (unlikely(tmp_tuple_element_28 == NULL)) {
                tmp_tuple_element_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
            }

            if (tmp_tuple_element_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;

                goto tuple_build_exception_28;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_28);
            tmp_tuple_element_28 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[114]);

            if (unlikely(tmp_tuple_element_28 == NULL)) {
                tmp_tuple_element_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[114]);
            }

            if (tmp_tuple_element_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;

                goto tuple_build_exception_28;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_28);
            goto tuple_build_noexception_28;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_28:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_28:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[153];
            tmp_tuple_element_29 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[119]);

            if (unlikely(tmp_tuple_element_29 == NULL)) {
                tmp_tuple_element_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[119]);
            }

            if (tmp_tuple_element_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_29);
            tmp_tuple_element_29 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[107]);

            if (unlikely(tmp_tuple_element_29 == NULL)) {
                tmp_tuple_element_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
            }

            if (tmp_tuple_element_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;

                goto tuple_build_exception_29;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_29);
            tmp_tuple_element_29 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_tuple_element_29 == NULL)) {
                tmp_tuple_element_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[115]);
            }

            if (tmp_tuple_element_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;

                goto tuple_build_exception_29;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_29);
            goto tuple_build_noexception_29;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_29:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_29:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[154];
            tmp_tuple_element_30 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[119]);

            if (unlikely(tmp_tuple_element_30 == NULL)) {
                tmp_tuple_element_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[119]);
            }

            if (tmp_tuple_element_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_30);
            tmp_tuple_element_30 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[107]);

            if (unlikely(tmp_tuple_element_30 == NULL)) {
                tmp_tuple_element_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
            }

            if (tmp_tuple_element_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;

                goto tuple_build_exception_30;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_30);
            tmp_tuple_element_30 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_tuple_element_30 == NULL)) {
                tmp_tuple_element_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[116]);
            }

            if (tmp_tuple_element_30 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;

                goto tuple_build_exception_30;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_30);
            goto tuple_build_noexception_30;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_30:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_30:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[155];
            tmp_tuple_element_31 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[119]);

            if (unlikely(tmp_tuple_element_31 == NULL)) {
                tmp_tuple_element_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[119]);
            }

            if (tmp_tuple_element_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_31);
            tmp_tuple_element_31 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[107]);

            if (unlikely(tmp_tuple_element_31 == NULL)) {
                tmp_tuple_element_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
            }

            if (tmp_tuple_element_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;

                goto tuple_build_exception_31;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_31);
            tmp_tuple_element_31 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[117]);

            if (unlikely(tmp_tuple_element_31 == NULL)) {
                tmp_tuple_element_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[117]);
            }

            if (tmp_tuple_element_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 84;

                goto tuple_build_exception_31;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_31);
            goto tuple_build_noexception_31;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_31:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_31:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[156];
            tmp_tuple_element_32 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[119]);

            if (unlikely(tmp_tuple_element_32 == NULL)) {
                tmp_tuple_element_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[119]);
            }

            if (tmp_tuple_element_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_32);
            tmp_tuple_element_32 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[107]);

            if (unlikely(tmp_tuple_element_32 == NULL)) {
                tmp_tuple_element_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
            }

            if (tmp_tuple_element_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;

                goto tuple_build_exception_32;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_32);
            tmp_tuple_element_32 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[118]);

            if (unlikely(tmp_tuple_element_32 == NULL)) {
                tmp_tuple_element_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
            }

            if (tmp_tuple_element_32 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;

                goto tuple_build_exception_32;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_32);
            goto tuple_build_noexception_32;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_32:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_32:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[157];
            tmp_tuple_element_33 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[120]);

            if (unlikely(tmp_tuple_element_33 == NULL)) {
                tmp_tuple_element_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[120]);
            }

            if (tmp_tuple_element_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_33);
            tmp_tuple_element_33 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[107]);

            if (unlikely(tmp_tuple_element_33 == NULL)) {
                tmp_tuple_element_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
            }

            if (tmp_tuple_element_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;

                goto tuple_build_exception_33;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_33);
            tmp_tuple_element_33 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[110]);

            if (unlikely(tmp_tuple_element_33 == NULL)) {
                tmp_tuple_element_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
            }

            if (tmp_tuple_element_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;

                goto tuple_build_exception_33;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_33);
            goto tuple_build_noexception_33;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_33:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_33:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[158];
            tmp_tuple_element_34 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[120]);

            if (unlikely(tmp_tuple_element_34 == NULL)) {
                tmp_tuple_element_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[120]);
            }

            if (tmp_tuple_element_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_34);
            tmp_tuple_element_34 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[107]);

            if (unlikely(tmp_tuple_element_34 == NULL)) {
                tmp_tuple_element_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
            }

            if (tmp_tuple_element_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;

                goto tuple_build_exception_34;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_34);
            tmp_tuple_element_34 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[112]);

            if (unlikely(tmp_tuple_element_34 == NULL)) {
                tmp_tuple_element_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
            }

            if (tmp_tuple_element_34 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;

                goto tuple_build_exception_34;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_34);
            goto tuple_build_noexception_34;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_34:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_34:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[159];
            tmp_tuple_element_35 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[120]);

            if (unlikely(tmp_tuple_element_35 == NULL)) {
                tmp_tuple_element_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[120]);
            }

            if (tmp_tuple_element_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_35);
            tmp_tuple_element_35 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[107]);

            if (unlikely(tmp_tuple_element_35 == NULL)) {
                tmp_tuple_element_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
            }

            if (tmp_tuple_element_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;

                goto tuple_build_exception_35;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_35);
            tmp_tuple_element_35 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[113]);

            if (unlikely(tmp_tuple_element_35 == NULL)) {
                tmp_tuple_element_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[113]);
            }

            if (tmp_tuple_element_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;

                goto tuple_build_exception_35;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_35);
            goto tuple_build_noexception_35;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_35:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_35:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[160];
            tmp_tuple_element_36 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[120]);

            if (unlikely(tmp_tuple_element_36 == NULL)) {
                tmp_tuple_element_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[120]);
            }

            if (tmp_tuple_element_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_36);
            tmp_tuple_element_36 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[107]);

            if (unlikely(tmp_tuple_element_36 == NULL)) {
                tmp_tuple_element_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
            }

            if (tmp_tuple_element_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;

                goto tuple_build_exception_36;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_36);
            tmp_tuple_element_36 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[114]);

            if (unlikely(tmp_tuple_element_36 == NULL)) {
                tmp_tuple_element_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[114]);
            }

            if (tmp_tuple_element_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;

                goto tuple_build_exception_36;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_36);
            goto tuple_build_noexception_36;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_36:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_36:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[161];
            tmp_tuple_element_37 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[120]);

            if (unlikely(tmp_tuple_element_37 == NULL)) {
                tmp_tuple_element_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[120]);
            }

            if (tmp_tuple_element_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_37);
            tmp_tuple_element_37 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[107]);

            if (unlikely(tmp_tuple_element_37 == NULL)) {
                tmp_tuple_element_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
            }

            if (tmp_tuple_element_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;

                goto tuple_build_exception_37;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_37);
            tmp_tuple_element_37 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_tuple_element_37 == NULL)) {
                tmp_tuple_element_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[115]);
            }

            if (tmp_tuple_element_37 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;

                goto tuple_build_exception_37;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_37);
            goto tuple_build_noexception_37;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_37:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_37:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[162];
            tmp_tuple_element_38 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[120]);

            if (unlikely(tmp_tuple_element_38 == NULL)) {
                tmp_tuple_element_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[120]);
            }

            if (tmp_tuple_element_38 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_38);
            tmp_tuple_element_38 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[107]);

            if (unlikely(tmp_tuple_element_38 == NULL)) {
                tmp_tuple_element_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
            }

            if (tmp_tuple_element_38 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;

                goto tuple_build_exception_38;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_38);
            tmp_tuple_element_38 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_tuple_element_38 == NULL)) {
                tmp_tuple_element_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[116]);
            }

            if (tmp_tuple_element_38 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 92;

                goto tuple_build_exception_38;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_38);
            goto tuple_build_noexception_38;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_38:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_38:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[163];
            tmp_tuple_element_39 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[120]);

            if (unlikely(tmp_tuple_element_39 == NULL)) {
                tmp_tuple_element_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[120]);
            }

            if (tmp_tuple_element_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_39);
            tmp_tuple_element_39 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[107]);

            if (unlikely(tmp_tuple_element_39 == NULL)) {
                tmp_tuple_element_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
            }

            if (tmp_tuple_element_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;

                goto tuple_build_exception_39;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_39);
            tmp_tuple_element_39 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[117]);

            if (unlikely(tmp_tuple_element_39 == NULL)) {
                tmp_tuple_element_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[117]);
            }

            if (tmp_tuple_element_39 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;

                goto tuple_build_exception_39;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_39);
            goto tuple_build_noexception_39;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_39:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_39:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[164];
            tmp_tuple_element_40 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[120]);

            if (unlikely(tmp_tuple_element_40 == NULL)) {
                tmp_tuple_element_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[120]);
            }

            if (tmp_tuple_element_40 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_40);
            tmp_tuple_element_40 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[107]);

            if (unlikely(tmp_tuple_element_40 == NULL)) {
                tmp_tuple_element_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
            }

            if (tmp_tuple_element_40 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;

                goto tuple_build_exception_40;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_40);
            tmp_tuple_element_40 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[118]);

            if (unlikely(tmp_tuple_element_40 == NULL)) {
                tmp_tuple_element_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
            }

            if (tmp_tuple_element_40 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;

                goto tuple_build_exception_40;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_40);
            goto tuple_build_noexception_40;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_40:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_40:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[165];
            tmp_tuple_element_41 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[121]);

            if (unlikely(tmp_tuple_element_41 == NULL)) {
                tmp_tuple_element_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[121]);
            }

            if (tmp_tuple_element_41 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_41);
            tmp_tuple_element_41 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[107]);

            if (unlikely(tmp_tuple_element_41 == NULL)) {
                tmp_tuple_element_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
            }

            if (tmp_tuple_element_41 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;

                goto tuple_build_exception_41;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_41);
            tmp_tuple_element_41 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[110]);

            if (unlikely(tmp_tuple_element_41 == NULL)) {
                tmp_tuple_element_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
            }

            if (tmp_tuple_element_41 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;

                goto tuple_build_exception_41;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_41);
            goto tuple_build_noexception_41;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_41:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_41:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[166];
            tmp_tuple_element_42 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[121]);

            if (unlikely(tmp_tuple_element_42 == NULL)) {
                tmp_tuple_element_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[121]);
            }

            if (tmp_tuple_element_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_42);
            tmp_tuple_element_42 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[107]);

            if (unlikely(tmp_tuple_element_42 == NULL)) {
                tmp_tuple_element_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
            }

            if (tmp_tuple_element_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;

                goto tuple_build_exception_42;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_42);
            tmp_tuple_element_42 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[112]);

            if (unlikely(tmp_tuple_element_42 == NULL)) {
                tmp_tuple_element_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
            }

            if (tmp_tuple_element_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;

                goto tuple_build_exception_42;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_42);
            goto tuple_build_noexception_42;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_42:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_42:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[167];
            tmp_tuple_element_43 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[121]);

            if (unlikely(tmp_tuple_element_43 == NULL)) {
                tmp_tuple_element_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[121]);
            }

            if (tmp_tuple_element_43 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_43);
            tmp_tuple_element_43 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[107]);

            if (unlikely(tmp_tuple_element_43 == NULL)) {
                tmp_tuple_element_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
            }

            if (tmp_tuple_element_43 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;

                goto tuple_build_exception_43;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_43);
            tmp_tuple_element_43 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[113]);

            if (unlikely(tmp_tuple_element_43 == NULL)) {
                tmp_tuple_element_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[113]);
            }

            if (tmp_tuple_element_43 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;

                goto tuple_build_exception_43;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_43);
            goto tuple_build_noexception_43;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_43:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_43:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[168];
            tmp_tuple_element_44 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[121]);

            if (unlikely(tmp_tuple_element_44 == NULL)) {
                tmp_tuple_element_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[121]);
            }

            if (tmp_tuple_element_44 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_44);
            tmp_tuple_element_44 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[107]);

            if (unlikely(tmp_tuple_element_44 == NULL)) {
                tmp_tuple_element_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
            }

            if (tmp_tuple_element_44 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;

                goto tuple_build_exception_44;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_44);
            tmp_tuple_element_44 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[114]);

            if (unlikely(tmp_tuple_element_44 == NULL)) {
                tmp_tuple_element_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[114]);
            }

            if (tmp_tuple_element_44 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;

                goto tuple_build_exception_44;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_44);
            goto tuple_build_noexception_44;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_44:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_44:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[169];
            tmp_tuple_element_45 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[121]);

            if (unlikely(tmp_tuple_element_45 == NULL)) {
                tmp_tuple_element_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[121]);
            }

            if (tmp_tuple_element_45 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_45);
            tmp_tuple_element_45 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[107]);

            if (unlikely(tmp_tuple_element_45 == NULL)) {
                tmp_tuple_element_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
            }

            if (tmp_tuple_element_45 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;

                goto tuple_build_exception_45;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_45);
            tmp_tuple_element_45 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_tuple_element_45 == NULL)) {
                tmp_tuple_element_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[115]);
            }

            if (tmp_tuple_element_45 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;

                goto tuple_build_exception_45;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_45);
            goto tuple_build_noexception_45;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_45:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_45:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[170];
            tmp_tuple_element_46 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[121]);

            if (unlikely(tmp_tuple_element_46 == NULL)) {
                tmp_tuple_element_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[121]);
            }

            if (tmp_tuple_element_46 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_46);
            tmp_tuple_element_46 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[107]);

            if (unlikely(tmp_tuple_element_46 == NULL)) {
                tmp_tuple_element_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
            }

            if (tmp_tuple_element_46 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;

                goto tuple_build_exception_46;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_46);
            tmp_tuple_element_46 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_tuple_element_46 == NULL)) {
                tmp_tuple_element_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[116]);
            }

            if (tmp_tuple_element_46 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;

                goto tuple_build_exception_46;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_46);
            goto tuple_build_noexception_46;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_46:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_46:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[171];
            tmp_tuple_element_47 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[121]);

            if (unlikely(tmp_tuple_element_47 == NULL)) {
                tmp_tuple_element_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[121]);
            }

            if (tmp_tuple_element_47 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_47);
            tmp_tuple_element_47 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[107]);

            if (unlikely(tmp_tuple_element_47 == NULL)) {
                tmp_tuple_element_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
            }

            if (tmp_tuple_element_47 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;

                goto tuple_build_exception_47;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_47);
            tmp_tuple_element_47 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[117]);

            if (unlikely(tmp_tuple_element_47 == NULL)) {
                tmp_tuple_element_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[117]);
            }

            if (tmp_tuple_element_47 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 102;

                goto tuple_build_exception_47;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_47);
            goto tuple_build_noexception_47;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_47:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_47:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[172];
            tmp_tuple_element_48 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[121]);

            if (unlikely(tmp_tuple_element_48 == NULL)) {
                tmp_tuple_element_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[121]);
            }

            if (tmp_tuple_element_48 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_48);
            tmp_tuple_element_48 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[107]);

            if (unlikely(tmp_tuple_element_48 == NULL)) {
                tmp_tuple_element_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
            }

            if (tmp_tuple_element_48 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;

                goto tuple_build_exception_48;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_48);
            tmp_tuple_element_48 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[118]);

            if (unlikely(tmp_tuple_element_48 == NULL)) {
                tmp_tuple_element_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
            }

            if (tmp_tuple_element_48 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;

                goto tuple_build_exception_48;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_48);
            goto tuple_build_noexception_48;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_48:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_48:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[173];
            tmp_tuple_element_49 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[119]);

            if (unlikely(tmp_tuple_element_49 == NULL)) {
                tmp_tuple_element_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[119]);
            }

            if (tmp_tuple_element_49 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_49);
            tmp_tuple_element_49 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_tuple_element_49 == NULL)) {
                tmp_tuple_element_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
            }

            if (tmp_tuple_element_49 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto tuple_build_exception_49;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_49);
            tmp_tuple_element_49 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[110]);

            if (unlikely(tmp_tuple_element_49 == NULL)) {
                tmp_tuple_element_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
            }

            if (tmp_tuple_element_49 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 105;

                goto tuple_build_exception_49;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_49);
            goto tuple_build_noexception_49;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_49:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_49:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[174];
            tmp_tuple_element_50 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[119]);

            if (unlikely(tmp_tuple_element_50 == NULL)) {
                tmp_tuple_element_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[119]);
            }

            if (tmp_tuple_element_50 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_50);
            tmp_tuple_element_50 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_tuple_element_50 == NULL)) {
                tmp_tuple_element_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
            }

            if (tmp_tuple_element_50 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto tuple_build_exception_50;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_50);
            tmp_tuple_element_50 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[112]);

            if (unlikely(tmp_tuple_element_50 == NULL)) {
                tmp_tuple_element_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
            }

            if (tmp_tuple_element_50 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto tuple_build_exception_50;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_50);
            goto tuple_build_noexception_50;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_50:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_50:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[175];
            tmp_tuple_element_51 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[119]);

            if (unlikely(tmp_tuple_element_51 == NULL)) {
                tmp_tuple_element_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[119]);
            }

            if (tmp_tuple_element_51 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_51);
            tmp_tuple_element_51 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_tuple_element_51 == NULL)) {
                tmp_tuple_element_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
            }

            if (tmp_tuple_element_51 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;

                goto tuple_build_exception_51;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_51);
            tmp_tuple_element_51 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[113]);

            if (unlikely(tmp_tuple_element_51 == NULL)) {
                tmp_tuple_element_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[113]);
            }

            if (tmp_tuple_element_51 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;

                goto tuple_build_exception_51;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_51);
            goto tuple_build_noexception_51;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_51:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_51:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[176];
            tmp_tuple_element_52 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[119]);

            if (unlikely(tmp_tuple_element_52 == NULL)) {
                tmp_tuple_element_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[119]);
            }

            if (tmp_tuple_element_52 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_52);
            tmp_tuple_element_52 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_tuple_element_52 == NULL)) {
                tmp_tuple_element_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
            }

            if (tmp_tuple_element_52 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;

                goto tuple_build_exception_52;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_52);
            tmp_tuple_element_52 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[114]);

            if (unlikely(tmp_tuple_element_52 == NULL)) {
                tmp_tuple_element_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[114]);
            }

            if (tmp_tuple_element_52 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;

                goto tuple_build_exception_52;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_52);
            goto tuple_build_noexception_52;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_52:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_52:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[177];
            tmp_tuple_element_53 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[119]);

            if (unlikely(tmp_tuple_element_53 == NULL)) {
                tmp_tuple_element_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[119]);
            }

            if (tmp_tuple_element_53 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_53);
            tmp_tuple_element_53 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_tuple_element_53 == NULL)) {
                tmp_tuple_element_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
            }

            if (tmp_tuple_element_53 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto tuple_build_exception_53;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_53);
            tmp_tuple_element_53 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_tuple_element_53 == NULL)) {
                tmp_tuple_element_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[115]);
            }

            if (tmp_tuple_element_53 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto tuple_build_exception_53;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_53);
            goto tuple_build_noexception_53;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_53:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_53:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[178];
            tmp_tuple_element_54 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[119]);

            if (unlikely(tmp_tuple_element_54 == NULL)) {
                tmp_tuple_element_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[119]);
            }

            if (tmp_tuple_element_54 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_54);
            tmp_tuple_element_54 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_tuple_element_54 == NULL)) {
                tmp_tuple_element_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
            }

            if (tmp_tuple_element_54 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto tuple_build_exception_54;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_54);
            tmp_tuple_element_54 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_tuple_element_54 == NULL)) {
                tmp_tuple_element_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[116]);
            }

            if (tmp_tuple_element_54 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto tuple_build_exception_54;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_54);
            goto tuple_build_noexception_54;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_54:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_54:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[179];
            tmp_tuple_element_55 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[119]);

            if (unlikely(tmp_tuple_element_55 == NULL)) {
                tmp_tuple_element_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[119]);
            }

            if (tmp_tuple_element_55 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_55);
            tmp_tuple_element_55 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_tuple_element_55 == NULL)) {
                tmp_tuple_element_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
            }

            if (tmp_tuple_element_55 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto tuple_build_exception_55;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_55);
            tmp_tuple_element_55 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[117]);

            if (unlikely(tmp_tuple_element_55 == NULL)) {
                tmp_tuple_element_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[117]);
            }

            if (tmp_tuple_element_55 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto tuple_build_exception_55;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_55);
            goto tuple_build_noexception_55;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_55:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_55:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[180];
            tmp_tuple_element_56 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[119]);

            if (unlikely(tmp_tuple_element_56 == NULL)) {
                tmp_tuple_element_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[119]);
            }

            if (tmp_tuple_element_56 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_56);
            tmp_tuple_element_56 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_tuple_element_56 == NULL)) {
                tmp_tuple_element_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
            }

            if (tmp_tuple_element_56 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;

                goto tuple_build_exception_56;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_56);
            tmp_tuple_element_56 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[118]);

            if (unlikely(tmp_tuple_element_56 == NULL)) {
                tmp_tuple_element_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
            }

            if (tmp_tuple_element_56 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;

                goto tuple_build_exception_56;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_56);
            goto tuple_build_noexception_56;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_56:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_56:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[181];
            tmp_tuple_element_57 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[120]);

            if (unlikely(tmp_tuple_element_57 == NULL)) {
                tmp_tuple_element_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[120]);
            }

            if (tmp_tuple_element_57 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_57);
            tmp_tuple_element_57 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_tuple_element_57 == NULL)) {
                tmp_tuple_element_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
            }

            if (tmp_tuple_element_57 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;

                goto tuple_build_exception_57;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_57);
            tmp_tuple_element_57 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[110]);

            if (unlikely(tmp_tuple_element_57 == NULL)) {
                tmp_tuple_element_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
            }

            if (tmp_tuple_element_57 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;

                goto tuple_build_exception_57;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_57);
            goto tuple_build_noexception_57;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_57:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_57:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[182];
            tmp_tuple_element_58 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[120]);

            if (unlikely(tmp_tuple_element_58 == NULL)) {
                tmp_tuple_element_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[120]);
            }

            if (tmp_tuple_element_58 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_58);
            tmp_tuple_element_58 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_tuple_element_58 == NULL)) {
                tmp_tuple_element_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
            }

            if (tmp_tuple_element_58 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;

                goto tuple_build_exception_58;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_58);
            tmp_tuple_element_58 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[112]);

            if (unlikely(tmp_tuple_element_58 == NULL)) {
                tmp_tuple_element_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
            }

            if (tmp_tuple_element_58 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;

                goto tuple_build_exception_58;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_58);
            goto tuple_build_noexception_58;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_58:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_58:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[183];
            tmp_tuple_element_59 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[120]);

            if (unlikely(tmp_tuple_element_59 == NULL)) {
                tmp_tuple_element_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[120]);
            }

            if (tmp_tuple_element_59 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_59);
            tmp_tuple_element_59 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_tuple_element_59 == NULL)) {
                tmp_tuple_element_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
            }

            if (tmp_tuple_element_59 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;

                goto tuple_build_exception_59;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_59);
            tmp_tuple_element_59 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[113]);

            if (unlikely(tmp_tuple_element_59 == NULL)) {
                tmp_tuple_element_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[113]);
            }

            if (tmp_tuple_element_59 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;

                goto tuple_build_exception_59;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_59);
            goto tuple_build_noexception_59;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_59:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_59:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[184];
            tmp_tuple_element_60 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[120]);

            if (unlikely(tmp_tuple_element_60 == NULL)) {
                tmp_tuple_element_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[120]);
            }

            if (tmp_tuple_element_60 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_60);
            tmp_tuple_element_60 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_tuple_element_60 == NULL)) {
                tmp_tuple_element_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
            }

            if (tmp_tuple_element_60 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;

                goto tuple_build_exception_60;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_60);
            tmp_tuple_element_60 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[114]);

            if (unlikely(tmp_tuple_element_60 == NULL)) {
                tmp_tuple_element_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[114]);
            }

            if (tmp_tuple_element_60 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;

                goto tuple_build_exception_60;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_60);
            goto tuple_build_noexception_60;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_60:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_60:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[185];
            tmp_tuple_element_61 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[120]);

            if (unlikely(tmp_tuple_element_61 == NULL)) {
                tmp_tuple_element_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[120]);
            }

            if (tmp_tuple_element_61 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_61);
            tmp_tuple_element_61 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_tuple_element_61 == NULL)) {
                tmp_tuple_element_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
            }

            if (tmp_tuple_element_61 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;

                goto tuple_build_exception_61;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_61);
            tmp_tuple_element_61 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_tuple_element_61 == NULL)) {
                tmp_tuple_element_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[115]);
            }

            if (tmp_tuple_element_61 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 118;

                goto tuple_build_exception_61;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_61);
            goto tuple_build_noexception_61;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_61:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_61:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[186];
            tmp_tuple_element_62 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[120]);

            if (unlikely(tmp_tuple_element_62 == NULL)) {
                tmp_tuple_element_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[120]);
            }

            if (tmp_tuple_element_62 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_62);
            tmp_tuple_element_62 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_tuple_element_62 == NULL)) {
                tmp_tuple_element_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
            }

            if (tmp_tuple_element_62 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;

                goto tuple_build_exception_62;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_62);
            tmp_tuple_element_62 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_tuple_element_62 == NULL)) {
                tmp_tuple_element_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[116]);
            }

            if (tmp_tuple_element_62 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;

                goto tuple_build_exception_62;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_62);
            goto tuple_build_noexception_62;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_62:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_62:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[187];
            tmp_tuple_element_63 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[120]);

            if (unlikely(tmp_tuple_element_63 == NULL)) {
                tmp_tuple_element_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[120]);
            }

            if (tmp_tuple_element_63 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_63);
            tmp_tuple_element_63 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_tuple_element_63 == NULL)) {
                tmp_tuple_element_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
            }

            if (tmp_tuple_element_63 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;

                goto tuple_build_exception_63;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_63);
            tmp_tuple_element_63 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[117]);

            if (unlikely(tmp_tuple_element_63 == NULL)) {
                tmp_tuple_element_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[117]);
            }

            if (tmp_tuple_element_63 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;

                goto tuple_build_exception_63;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_63);
            goto tuple_build_noexception_63;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_63:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_63:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[188];
            tmp_tuple_element_64 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[120]);

            if (unlikely(tmp_tuple_element_64 == NULL)) {
                tmp_tuple_element_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[120]);
            }

            if (tmp_tuple_element_64 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_64);
            tmp_tuple_element_64 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_tuple_element_64 == NULL)) {
                tmp_tuple_element_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
            }

            if (tmp_tuple_element_64 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;

                goto tuple_build_exception_64;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_64);
            tmp_tuple_element_64 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[118]);

            if (unlikely(tmp_tuple_element_64 == NULL)) {
                tmp_tuple_element_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
            }

            if (tmp_tuple_element_64 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;

                goto tuple_build_exception_64;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_64);
            goto tuple_build_noexception_64;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_64:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_64:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[189];
            tmp_tuple_element_65 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[121]);

            if (unlikely(tmp_tuple_element_65 == NULL)) {
                tmp_tuple_element_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[121]);
            }

            if (tmp_tuple_element_65 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_65);
            tmp_tuple_element_65 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_tuple_element_65 == NULL)) {
                tmp_tuple_element_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
            }

            if (tmp_tuple_element_65 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;

                goto tuple_build_exception_65;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_65);
            tmp_tuple_element_65 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[110]);

            if (unlikely(tmp_tuple_element_65 == NULL)) {
                tmp_tuple_element_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
            }

            if (tmp_tuple_element_65 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;

                goto tuple_build_exception_65;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_65);
            goto tuple_build_noexception_65;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_65:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_65:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[190];
            tmp_tuple_element_66 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[121]);

            if (unlikely(tmp_tuple_element_66 == NULL)) {
                tmp_tuple_element_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[121]);
            }

            if (tmp_tuple_element_66 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_66);
            tmp_tuple_element_66 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_tuple_element_66 == NULL)) {
                tmp_tuple_element_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
            }

            if (tmp_tuple_element_66 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;

                goto tuple_build_exception_66;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_66);
            tmp_tuple_element_66 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[112]);

            if (unlikely(tmp_tuple_element_66 == NULL)) {
                tmp_tuple_element_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
            }

            if (tmp_tuple_element_66 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 124;

                goto tuple_build_exception_66;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_66);
            goto tuple_build_noexception_66;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_66:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_66:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[191];
            tmp_tuple_element_67 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[121]);

            if (unlikely(tmp_tuple_element_67 == NULL)) {
                tmp_tuple_element_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[121]);
            }

            if (tmp_tuple_element_67 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_67);
            tmp_tuple_element_67 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_tuple_element_67 == NULL)) {
                tmp_tuple_element_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
            }

            if (tmp_tuple_element_67 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;

                goto tuple_build_exception_67;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_67);
            tmp_tuple_element_67 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[113]);

            if (unlikely(tmp_tuple_element_67 == NULL)) {
                tmp_tuple_element_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[113]);
            }

            if (tmp_tuple_element_67 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 125;

                goto tuple_build_exception_67;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_67);
            goto tuple_build_noexception_67;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_67:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_67:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[192];
            tmp_tuple_element_68 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[121]);

            if (unlikely(tmp_tuple_element_68 == NULL)) {
                tmp_tuple_element_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[121]);
            }

            if (tmp_tuple_element_68 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_68);
            tmp_tuple_element_68 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_tuple_element_68 == NULL)) {
                tmp_tuple_element_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
            }

            if (tmp_tuple_element_68 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;

                goto tuple_build_exception_68;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_68);
            tmp_tuple_element_68 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[114]);

            if (unlikely(tmp_tuple_element_68 == NULL)) {
                tmp_tuple_element_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[114]);
            }

            if (tmp_tuple_element_68 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 126;

                goto tuple_build_exception_68;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_68);
            goto tuple_build_noexception_68;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_68:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_68:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[193];
            tmp_tuple_element_69 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[121]);

            if (unlikely(tmp_tuple_element_69 == NULL)) {
                tmp_tuple_element_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[121]);
            }

            if (tmp_tuple_element_69 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_69);
            tmp_tuple_element_69 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_tuple_element_69 == NULL)) {
                tmp_tuple_element_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
            }

            if (tmp_tuple_element_69 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;

                goto tuple_build_exception_69;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_69);
            tmp_tuple_element_69 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_tuple_element_69 == NULL)) {
                tmp_tuple_element_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[115]);
            }

            if (tmp_tuple_element_69 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;

                goto tuple_build_exception_69;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_69);
            goto tuple_build_noexception_69;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_69:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_69:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[194];
            tmp_tuple_element_70 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[121]);

            if (unlikely(tmp_tuple_element_70 == NULL)) {
                tmp_tuple_element_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[121]);
            }

            if (tmp_tuple_element_70 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 128;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_70);
            tmp_tuple_element_70 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_tuple_element_70 == NULL)) {
                tmp_tuple_element_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
            }

            if (tmp_tuple_element_70 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 128;

                goto tuple_build_exception_70;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_70);
            tmp_tuple_element_70 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_tuple_element_70 == NULL)) {
                tmp_tuple_element_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[116]);
            }

            if (tmp_tuple_element_70 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 128;

                goto tuple_build_exception_70;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_70);
            goto tuple_build_noexception_70;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_70:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_70:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[195];
            tmp_tuple_element_71 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[121]);

            if (unlikely(tmp_tuple_element_71 == NULL)) {
                tmp_tuple_element_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[121]);
            }

            if (tmp_tuple_element_71 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 129;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_71);
            tmp_tuple_element_71 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_tuple_element_71 == NULL)) {
                tmp_tuple_element_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
            }

            if (tmp_tuple_element_71 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 129;

                goto tuple_build_exception_71;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_71);
            tmp_tuple_element_71 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[117]);

            if (unlikely(tmp_tuple_element_71 == NULL)) {
                tmp_tuple_element_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[117]);
            }

            if (tmp_tuple_element_71 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 129;

                goto tuple_build_exception_71;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_71);
            goto tuple_build_noexception_71;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_71:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_71:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[196];
            tmp_tuple_element_72 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[121]);

            if (unlikely(tmp_tuple_element_72 == NULL)) {
                tmp_tuple_element_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[121]);
            }

            if (tmp_tuple_element_72 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_72);
            tmp_tuple_element_72 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_tuple_element_72 == NULL)) {
                tmp_tuple_element_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
            }

            if (tmp_tuple_element_72 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;

                goto tuple_build_exception_72;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_72);
            tmp_tuple_element_72 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[118]);

            if (unlikely(tmp_tuple_element_72 == NULL)) {
                tmp_tuple_element_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
            }

            if (tmp_tuple_element_72 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 130;

                goto tuple_build_exception_72;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_72);
            goto tuple_build_noexception_72;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_72:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_72:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[197];
            tmp_tuple_element_73 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[123]);

            if (unlikely(tmp_tuple_element_73 == NULL)) {
                tmp_tuple_element_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
            }

            if (tmp_tuple_element_73 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_73);
            tmp_tuple_element_73 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_tuple_element_73 == NULL)) {
                tmp_tuple_element_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
            }

            if (tmp_tuple_element_73 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;

                goto tuple_build_exception_73;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_73);
            tmp_tuple_element_73 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[110]);

            if (unlikely(tmp_tuple_element_73 == NULL)) {
                tmp_tuple_element_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
            }

            if (tmp_tuple_element_73 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 132;

                goto tuple_build_exception_73;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_73);
            goto tuple_build_noexception_73;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_73:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_73:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[198];
            tmp_tuple_element_74 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[123]);

            if (unlikely(tmp_tuple_element_74 == NULL)) {
                tmp_tuple_element_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
            }

            if (tmp_tuple_element_74 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_74);
            tmp_tuple_element_74 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_tuple_element_74 == NULL)) {
                tmp_tuple_element_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
            }

            if (tmp_tuple_element_74 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;

                goto tuple_build_exception_74;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_74);
            tmp_tuple_element_74 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[112]);

            if (unlikely(tmp_tuple_element_74 == NULL)) {
                tmp_tuple_element_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
            }

            if (tmp_tuple_element_74 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;

                goto tuple_build_exception_74;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_74);
            goto tuple_build_noexception_74;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_74:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_74:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[199];
            tmp_tuple_element_75 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[123]);

            if (unlikely(tmp_tuple_element_75 == NULL)) {
                tmp_tuple_element_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
            }

            if (tmp_tuple_element_75 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_75);
            tmp_tuple_element_75 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_tuple_element_75 == NULL)) {
                tmp_tuple_element_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
            }

            if (tmp_tuple_element_75 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;

                goto tuple_build_exception_75;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_75);
            tmp_tuple_element_75 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[113]);

            if (unlikely(tmp_tuple_element_75 == NULL)) {
                tmp_tuple_element_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[113]);
            }

            if (tmp_tuple_element_75 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 134;

                goto tuple_build_exception_75;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_75);
            goto tuple_build_noexception_75;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_75:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_75:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[200];
            tmp_tuple_element_76 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[123]);

            if (unlikely(tmp_tuple_element_76 == NULL)) {
                tmp_tuple_element_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
            }

            if (tmp_tuple_element_76 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_76);
            tmp_tuple_element_76 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_tuple_element_76 == NULL)) {
                tmp_tuple_element_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
            }

            if (tmp_tuple_element_76 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;

                goto tuple_build_exception_76;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_76);
            tmp_tuple_element_76 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[114]);

            if (unlikely(tmp_tuple_element_76 == NULL)) {
                tmp_tuple_element_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[114]);
            }

            if (tmp_tuple_element_76 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;

                goto tuple_build_exception_76;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_76);
            goto tuple_build_noexception_76;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_76:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_76:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[201];
            tmp_tuple_element_77 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[123]);

            if (unlikely(tmp_tuple_element_77 == NULL)) {
                tmp_tuple_element_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
            }

            if (tmp_tuple_element_77 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_77);
            tmp_tuple_element_77 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_tuple_element_77 == NULL)) {
                tmp_tuple_element_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
            }

            if (tmp_tuple_element_77 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;

                goto tuple_build_exception_77;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_77);
            tmp_tuple_element_77 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_tuple_element_77 == NULL)) {
                tmp_tuple_element_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[115]);
            }

            if (tmp_tuple_element_77 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;

                goto tuple_build_exception_77;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_77);
            goto tuple_build_noexception_77;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_77:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_77:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[202];
            tmp_tuple_element_78 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[123]);

            if (unlikely(tmp_tuple_element_78 == NULL)) {
                tmp_tuple_element_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
            }

            if (tmp_tuple_element_78 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_78);
            tmp_tuple_element_78 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_tuple_element_78 == NULL)) {
                tmp_tuple_element_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
            }

            if (tmp_tuple_element_78 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;

                goto tuple_build_exception_78;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_78);
            tmp_tuple_element_78 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_tuple_element_78 == NULL)) {
                tmp_tuple_element_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[116]);
            }

            if (tmp_tuple_element_78 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;

                goto tuple_build_exception_78;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_78);
            goto tuple_build_noexception_78;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_78:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_78:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[203];
            tmp_tuple_element_79 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[123]);

            if (unlikely(tmp_tuple_element_79 == NULL)) {
                tmp_tuple_element_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
            }

            if (tmp_tuple_element_79 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_79);
            tmp_tuple_element_79 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_tuple_element_79 == NULL)) {
                tmp_tuple_element_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
            }

            if (tmp_tuple_element_79 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;

                goto tuple_build_exception_79;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_79);
            tmp_tuple_element_79 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[117]);

            if (unlikely(tmp_tuple_element_79 == NULL)) {
                tmp_tuple_element_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[117]);
            }

            if (tmp_tuple_element_79 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;

                goto tuple_build_exception_79;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_79);
            goto tuple_build_noexception_79;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_79:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_79:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[204];
            tmp_tuple_element_80 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[123]);

            if (unlikely(tmp_tuple_element_80 == NULL)) {
                tmp_tuple_element_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
            }

            if (tmp_tuple_element_80 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_80);
            tmp_tuple_element_80 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_tuple_element_80 == NULL)) {
                tmp_tuple_element_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
            }

            if (tmp_tuple_element_80 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;

                goto tuple_build_exception_80;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_80);
            tmp_tuple_element_80 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[118]);

            if (unlikely(tmp_tuple_element_80 == NULL)) {
                tmp_tuple_element_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
            }

            if (tmp_tuple_element_80 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;

                goto tuple_build_exception_80;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_80);
            goto tuple_build_noexception_80;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_80:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_80:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[205];
            tmp_tuple_element_81 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[123]);

            if (unlikely(tmp_tuple_element_81 == NULL)) {
                tmp_tuple_element_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
            }

            if (tmp_tuple_element_81 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_81);
            tmp_tuple_element_81 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[105]);

            if (unlikely(tmp_tuple_element_81 == NULL)) {
                tmp_tuple_element_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[105]);
            }

            if (tmp_tuple_element_81 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;

                goto tuple_build_exception_81;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_81);
            tmp_tuple_element_81 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[110]);

            if (unlikely(tmp_tuple_element_81 == NULL)) {
                tmp_tuple_element_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
            }

            if (tmp_tuple_element_81 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 141;

                goto tuple_build_exception_81;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_81);
            goto tuple_build_noexception_81;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_81:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_81:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[206];
            tmp_tuple_element_82 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[123]);

            if (unlikely(tmp_tuple_element_82 == NULL)) {
                tmp_tuple_element_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
            }

            if (tmp_tuple_element_82 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_82);
            tmp_tuple_element_82 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[105]);

            if (unlikely(tmp_tuple_element_82 == NULL)) {
                tmp_tuple_element_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[105]);
            }

            if (tmp_tuple_element_82 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;

                goto tuple_build_exception_82;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_82);
            tmp_tuple_element_82 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[112]);

            if (unlikely(tmp_tuple_element_82 == NULL)) {
                tmp_tuple_element_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
            }

            if (tmp_tuple_element_82 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;

                goto tuple_build_exception_82;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_82);
            goto tuple_build_noexception_82;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_82:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_82:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[207];
            tmp_tuple_element_83 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[123]);

            if (unlikely(tmp_tuple_element_83 == NULL)) {
                tmp_tuple_element_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
            }

            if (tmp_tuple_element_83 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_83);
            tmp_tuple_element_83 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[105]);

            if (unlikely(tmp_tuple_element_83 == NULL)) {
                tmp_tuple_element_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[105]);
            }

            if (tmp_tuple_element_83 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;

                goto tuple_build_exception_83;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_83);
            tmp_tuple_element_83 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[113]);

            if (unlikely(tmp_tuple_element_83 == NULL)) {
                tmp_tuple_element_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[113]);
            }

            if (tmp_tuple_element_83 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 143;

                goto tuple_build_exception_83;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_83);
            goto tuple_build_noexception_83;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_83:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_83:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[208];
            tmp_tuple_element_84 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[123]);

            if (unlikely(tmp_tuple_element_84 == NULL)) {
                tmp_tuple_element_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
            }

            if (tmp_tuple_element_84 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_84);
            tmp_tuple_element_84 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[105]);

            if (unlikely(tmp_tuple_element_84 == NULL)) {
                tmp_tuple_element_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[105]);
            }

            if (tmp_tuple_element_84 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;

                goto tuple_build_exception_84;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_84);
            tmp_tuple_element_84 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[114]);

            if (unlikely(tmp_tuple_element_84 == NULL)) {
                tmp_tuple_element_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[114]);
            }

            if (tmp_tuple_element_84 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 144;

                goto tuple_build_exception_84;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_84);
            goto tuple_build_noexception_84;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_84:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_84:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[209];
            tmp_tuple_element_85 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[123]);

            if (unlikely(tmp_tuple_element_85 == NULL)) {
                tmp_tuple_element_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
            }

            if (tmp_tuple_element_85 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_85);
            tmp_tuple_element_85 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[105]);

            if (unlikely(tmp_tuple_element_85 == NULL)) {
                tmp_tuple_element_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[105]);
            }

            if (tmp_tuple_element_85 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;

                goto tuple_build_exception_85;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_85);
            tmp_tuple_element_85 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_tuple_element_85 == NULL)) {
                tmp_tuple_element_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[115]);
            }

            if (tmp_tuple_element_85 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;

                goto tuple_build_exception_85;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_85);
            goto tuple_build_noexception_85;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_85:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_85:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[210];
            tmp_tuple_element_86 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[123]);

            if (unlikely(tmp_tuple_element_86 == NULL)) {
                tmp_tuple_element_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
            }

            if (tmp_tuple_element_86 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_86);
            tmp_tuple_element_86 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[105]);

            if (unlikely(tmp_tuple_element_86 == NULL)) {
                tmp_tuple_element_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[105]);
            }

            if (tmp_tuple_element_86 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;

                goto tuple_build_exception_86;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_86);
            tmp_tuple_element_86 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_tuple_element_86 == NULL)) {
                tmp_tuple_element_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[116]);
            }

            if (tmp_tuple_element_86 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;

                goto tuple_build_exception_86;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_86);
            goto tuple_build_noexception_86;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_86:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_86:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[211];
            tmp_tuple_element_87 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[123]);

            if (unlikely(tmp_tuple_element_87 == NULL)) {
                tmp_tuple_element_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
            }

            if (tmp_tuple_element_87 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 147;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_87);
            tmp_tuple_element_87 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[105]);

            if (unlikely(tmp_tuple_element_87 == NULL)) {
                tmp_tuple_element_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[105]);
            }

            if (tmp_tuple_element_87 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 147;

                goto tuple_build_exception_87;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_87);
            tmp_tuple_element_87 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[117]);

            if (unlikely(tmp_tuple_element_87 == NULL)) {
                tmp_tuple_element_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[117]);
            }

            if (tmp_tuple_element_87 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 147;

                goto tuple_build_exception_87;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_87);
            goto tuple_build_noexception_87;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_87:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_87:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[212];
            tmp_tuple_element_88 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[123]);

            if (unlikely(tmp_tuple_element_88 == NULL)) {
                tmp_tuple_element_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
            }

            if (tmp_tuple_element_88 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_88);
            tmp_tuple_element_88 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[105]);

            if (unlikely(tmp_tuple_element_88 == NULL)) {
                tmp_tuple_element_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[105]);
            }

            if (tmp_tuple_element_88 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;

                goto tuple_build_exception_88;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_88);
            tmp_tuple_element_88 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[118]);

            if (unlikely(tmp_tuple_element_88 == NULL)) {
                tmp_tuple_element_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
            }

            if (tmp_tuple_element_88 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 148;

                goto tuple_build_exception_88;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_88);
            goto tuple_build_noexception_88;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_88:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_88:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[213];
            tmp_tuple_element_89 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[123]);

            if (unlikely(tmp_tuple_element_89 == NULL)) {
                tmp_tuple_element_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
            }

            if (tmp_tuple_element_89 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_89);
            tmp_tuple_element_89 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[106]);

            if (unlikely(tmp_tuple_element_89 == NULL)) {
                tmp_tuple_element_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[106]);
            }

            if (tmp_tuple_element_89 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;

                goto tuple_build_exception_89;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_89);
            tmp_tuple_element_89 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[110]);

            if (unlikely(tmp_tuple_element_89 == NULL)) {
                tmp_tuple_element_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[110]);
            }

            if (tmp_tuple_element_89 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 150;

                goto tuple_build_exception_89;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_89);
            goto tuple_build_noexception_89;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_89:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_89:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[214];
            tmp_tuple_element_90 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[123]);

            if (unlikely(tmp_tuple_element_90 == NULL)) {
                tmp_tuple_element_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
            }

            if (tmp_tuple_element_90 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 151;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_90);
            tmp_tuple_element_90 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[106]);

            if (unlikely(tmp_tuple_element_90 == NULL)) {
                tmp_tuple_element_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[106]);
            }

            if (tmp_tuple_element_90 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 151;

                goto tuple_build_exception_90;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_90);
            tmp_tuple_element_90 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[112]);

            if (unlikely(tmp_tuple_element_90 == NULL)) {
                tmp_tuple_element_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[112]);
            }

            if (tmp_tuple_element_90 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 151;

                goto tuple_build_exception_90;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_90);
            goto tuple_build_noexception_90;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_90:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_90:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[215];
            tmp_tuple_element_91 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[123]);

            if (unlikely(tmp_tuple_element_91 == NULL)) {
                tmp_tuple_element_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
            }

            if (tmp_tuple_element_91 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_91);
            tmp_tuple_element_91 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[106]);

            if (unlikely(tmp_tuple_element_91 == NULL)) {
                tmp_tuple_element_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[106]);
            }

            if (tmp_tuple_element_91 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;

                goto tuple_build_exception_91;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_91);
            tmp_tuple_element_91 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[113]);

            if (unlikely(tmp_tuple_element_91 == NULL)) {
                tmp_tuple_element_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[113]);
            }

            if (tmp_tuple_element_91 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 152;

                goto tuple_build_exception_91;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_91);
            goto tuple_build_noexception_91;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_91:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_91:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[216];
            tmp_tuple_element_92 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[123]);

            if (unlikely(tmp_tuple_element_92 == NULL)) {
                tmp_tuple_element_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
            }

            if (tmp_tuple_element_92 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_92);
            tmp_tuple_element_92 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[106]);

            if (unlikely(tmp_tuple_element_92 == NULL)) {
                tmp_tuple_element_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[106]);
            }

            if (tmp_tuple_element_92 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;

                goto tuple_build_exception_92;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_92);
            tmp_tuple_element_92 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[114]);

            if (unlikely(tmp_tuple_element_92 == NULL)) {
                tmp_tuple_element_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[114]);
            }

            if (tmp_tuple_element_92 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 153;

                goto tuple_build_exception_92;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_92);
            goto tuple_build_noexception_92;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_92:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_92:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[217];
            tmp_tuple_element_93 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[123]);

            if (unlikely(tmp_tuple_element_93 == NULL)) {
                tmp_tuple_element_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
            }

            if (tmp_tuple_element_93 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_93);
            tmp_tuple_element_93 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[106]);

            if (unlikely(tmp_tuple_element_93 == NULL)) {
                tmp_tuple_element_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[106]);
            }

            if (tmp_tuple_element_93 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;

                goto tuple_build_exception_93;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_93);
            tmp_tuple_element_93 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[115]);

            if (unlikely(tmp_tuple_element_93 == NULL)) {
                tmp_tuple_element_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[115]);
            }

            if (tmp_tuple_element_93 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;

                goto tuple_build_exception_93;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_93);
            goto tuple_build_noexception_93;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_93:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_93:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[218];
            tmp_tuple_element_94 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[123]);

            if (unlikely(tmp_tuple_element_94 == NULL)) {
                tmp_tuple_element_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
            }

            if (tmp_tuple_element_94 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_94);
            tmp_tuple_element_94 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[106]);

            if (unlikely(tmp_tuple_element_94 == NULL)) {
                tmp_tuple_element_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[106]);
            }

            if (tmp_tuple_element_94 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;

                goto tuple_build_exception_94;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_94);
            tmp_tuple_element_94 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_tuple_element_94 == NULL)) {
                tmp_tuple_element_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[116]);
            }

            if (tmp_tuple_element_94 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 155;

                goto tuple_build_exception_94;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_94);
            goto tuple_build_noexception_94;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_94:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_94:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[219];
            tmp_tuple_element_95 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[123]);

            if (unlikely(tmp_tuple_element_95 == NULL)) {
                tmp_tuple_element_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
            }

            if (tmp_tuple_element_95 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 156;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_95);
            tmp_tuple_element_95 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[106]);

            if (unlikely(tmp_tuple_element_95 == NULL)) {
                tmp_tuple_element_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[106]);
            }

            if (tmp_tuple_element_95 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 156;

                goto tuple_build_exception_95;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_95);
            tmp_tuple_element_95 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[117]);

            if (unlikely(tmp_tuple_element_95 == NULL)) {
                tmp_tuple_element_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[117]);
            }

            if (tmp_tuple_element_95 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 156;

                goto tuple_build_exception_95;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_95);
            goto tuple_build_noexception_95;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_95:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_95:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[220];
            tmp_tuple_element_96 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[123]);

            if (unlikely(tmp_tuple_element_96 == NULL)) {
                tmp_tuple_element_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
            }

            if (tmp_tuple_element_96 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_1, 0, tmp_tuple_element_96);
            tmp_tuple_element_96 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[106]);

            if (unlikely(tmp_tuple_element_96 == NULL)) {
                tmp_tuple_element_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[106]);
            }

            if (tmp_tuple_element_96 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;

                goto tuple_build_exception_96;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_96);
            tmp_tuple_element_96 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[118]);

            if (unlikely(tmp_tuple_element_96 == NULL)) {
                tmp_tuple_element_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[118]);
            }

            if (tmp_tuple_element_96 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;

                goto tuple_build_exception_96;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_1, 2, tmp_tuple_element_96);
            goto tuple_build_noexception_96;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_96:;
            Py_DECREF(tmp_dict_value_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_96:;
            tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_40);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_tuple_element_97;
        tmp_dict_key_2 = mod_consts[30];
        tmp_tuple_element_97 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[119]);

        if (unlikely(tmp_tuple_element_97 == NULL)) {
            tmp_tuple_element_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[119]);
        }

        if (tmp_tuple_element_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_2 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_dict_value_2, 0, tmp_tuple_element_97);
        tmp_tuple_element_97 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_tuple_element_97 == NULL)) {
            tmp_tuple_element_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
        }

        if (tmp_tuple_element_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto tuple_build_exception_97;
        }
        PyTuple_SET_ITEM0(tmp_dict_value_2, 1, tmp_tuple_element_97);
        tmp_tuple_element_97 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_tuple_element_97 == NULL)) {
            tmp_tuple_element_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
        }

        if (tmp_tuple_element_97 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto tuple_build_exception_97;
        }
        PyTuple_SET_ITEM0(tmp_dict_value_2, 2, tmp_tuple_element_97);
        goto tuple_build_noexception_97;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_97:;
        Py_DECREF(tmp_dict_value_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_97:;
        tmp_assign_source_41 = _PyDict_NewPresized( 10 );
        {
            PyObject *tmp_tuple_element_98;
            PyObject *tmp_tuple_element_99;
            PyObject *tmp_tuple_element_100;
            PyObject *tmp_tuple_element_101;
            PyObject *tmp_tuple_element_102;
            PyObject *tmp_tuple_element_103;
            PyObject *tmp_tuple_element_104;
            PyObject *tmp_tuple_element_105;
            PyObject *tmp_tuple_element_106;
            tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[221];
            tmp_tuple_element_98 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[120]);

            if (unlikely(tmp_tuple_element_98 == NULL)) {
                tmp_tuple_element_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[120]);
            }

            if (tmp_tuple_element_98 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_2, 0, tmp_tuple_element_98);
            tmp_tuple_element_98 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[107]);

            if (unlikely(tmp_tuple_element_98 == NULL)) {
                tmp_tuple_element_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
            }

            if (tmp_tuple_element_98 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;

                goto tuple_build_exception_98;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_2, 1, tmp_tuple_element_98);
            tmp_tuple_element_98 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_tuple_element_98 == NULL)) {
                tmp_tuple_element_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
            }

            if (tmp_tuple_element_98 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;

                goto tuple_build_exception_98;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_2, 2, tmp_tuple_element_98);
            goto tuple_build_noexception_98;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_98:;
            Py_DECREF(tmp_dict_value_2);
            goto dict_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_98:;
            tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[222];
            tmp_tuple_element_99 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[121]);

            if (unlikely(tmp_tuple_element_99 == NULL)) {
                tmp_tuple_element_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[121]);
            }

            if (tmp_tuple_element_99 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_2, 0, tmp_tuple_element_99);
            tmp_tuple_element_99 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[107]);

            if (unlikely(tmp_tuple_element_99 == NULL)) {
                tmp_tuple_element_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
            }

            if (tmp_tuple_element_99 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;

                goto tuple_build_exception_99;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_2, 1, tmp_tuple_element_99);
            tmp_tuple_element_99 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_tuple_element_99 == NULL)) {
                tmp_tuple_element_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
            }

            if (tmp_tuple_element_99 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 163;

                goto tuple_build_exception_99;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_2, 2, tmp_tuple_element_99);
            goto tuple_build_noexception_99;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_99:;
            Py_DECREF(tmp_dict_value_2);
            goto dict_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_99:;
            tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[223];
            tmp_tuple_element_100 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[42]);

            if (unlikely(tmp_tuple_element_100 == NULL)) {
                tmp_tuple_element_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[42]);
            }

            assert(!(tmp_tuple_element_100 == NULL));
            tmp_dict_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_2, 0, tmp_tuple_element_100);
            tmp_tuple_element_100 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[108]);

            if (unlikely(tmp_tuple_element_100 == NULL)) {
                tmp_tuple_element_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
            }

            if (tmp_tuple_element_100 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;

                goto tuple_build_exception_100;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_2, 1, tmp_tuple_element_100);
            tmp_tuple_element_100 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_tuple_element_100 == NULL)) {
                tmp_tuple_element_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
            }

            if (tmp_tuple_element_100 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;

                goto tuple_build_exception_100;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_2, 2, tmp_tuple_element_100);
            goto tuple_build_noexception_100;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_100:;
            Py_DECREF(tmp_dict_value_2);
            goto dict_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_100:;
            tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[224];
            tmp_tuple_element_101 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[119]);

            if (unlikely(tmp_tuple_element_101 == NULL)) {
                tmp_tuple_element_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[119]);
            }

            if (tmp_tuple_element_101 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_2, 0, tmp_tuple_element_101);
            tmp_tuple_element_101 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_tuple_element_101 == NULL)) {
                tmp_tuple_element_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
            }

            if (tmp_tuple_element_101 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;

                goto tuple_build_exception_101;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_2, 1, tmp_tuple_element_101);
            tmp_tuple_element_101 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_tuple_element_101 == NULL)) {
                tmp_tuple_element_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
            }

            if (tmp_tuple_element_101 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 166;

                goto tuple_build_exception_101;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_2, 2, tmp_tuple_element_101);
            goto tuple_build_noexception_101;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_101:;
            Py_DECREF(tmp_dict_value_2);
            goto dict_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_101:;
            tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[225];
            tmp_tuple_element_102 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[120]);

            if (unlikely(tmp_tuple_element_102 == NULL)) {
                tmp_tuple_element_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[120]);
            }

            if (tmp_tuple_element_102 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_2, 0, tmp_tuple_element_102);
            tmp_tuple_element_102 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_tuple_element_102 == NULL)) {
                tmp_tuple_element_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
            }

            if (tmp_tuple_element_102 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;

                goto tuple_build_exception_102;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_2, 1, tmp_tuple_element_102);
            tmp_tuple_element_102 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_tuple_element_102 == NULL)) {
                tmp_tuple_element_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
            }

            if (tmp_tuple_element_102 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;

                goto tuple_build_exception_102;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_2, 2, tmp_tuple_element_102);
            goto tuple_build_noexception_102;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_102:;
            Py_DECREF(tmp_dict_value_2);
            goto dict_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_102:;
            tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[226];
            tmp_tuple_element_103 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[121]);

            if (unlikely(tmp_tuple_element_103 == NULL)) {
                tmp_tuple_element_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[121]);
            }

            if (tmp_tuple_element_103 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_2, 0, tmp_tuple_element_103);
            tmp_tuple_element_103 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_tuple_element_103 == NULL)) {
                tmp_tuple_element_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
            }

            if (tmp_tuple_element_103 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;

                goto tuple_build_exception_103;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_2, 1, tmp_tuple_element_103);
            tmp_tuple_element_103 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_tuple_element_103 == NULL)) {
                tmp_tuple_element_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
            }

            if (tmp_tuple_element_103 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;

                goto tuple_build_exception_103;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_2, 2, tmp_tuple_element_103);
            goto tuple_build_noexception_103;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_103:;
            Py_DECREF(tmp_dict_value_2);
            goto dict_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_103:;
            tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[227];
            tmp_tuple_element_104 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[123]);

            if (unlikely(tmp_tuple_element_104 == NULL)) {
                tmp_tuple_element_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
            }

            if (tmp_tuple_element_104 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_2, 0, tmp_tuple_element_104);
            tmp_tuple_element_104 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[43]);

            if (unlikely(tmp_tuple_element_104 == NULL)) {
                tmp_tuple_element_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[43]);
            }

            if (tmp_tuple_element_104 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;

                goto tuple_build_exception_104;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_2, 1, tmp_tuple_element_104);
            tmp_tuple_element_104 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_tuple_element_104 == NULL)) {
                tmp_tuple_element_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
            }

            if (tmp_tuple_element_104 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 169;

                goto tuple_build_exception_104;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_2, 2, tmp_tuple_element_104);
            goto tuple_build_noexception_104;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_104:;
            Py_DECREF(tmp_dict_value_2);
            goto dict_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_104:;
            tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[228];
            tmp_tuple_element_105 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[123]);

            if (unlikely(tmp_tuple_element_105 == NULL)) {
                tmp_tuple_element_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
            }

            if (tmp_tuple_element_105 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_2, 0, tmp_tuple_element_105);
            tmp_tuple_element_105 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[105]);

            if (unlikely(tmp_tuple_element_105 == NULL)) {
                tmp_tuple_element_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[105]);
            }

            if (tmp_tuple_element_105 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;

                goto tuple_build_exception_105;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_2, 1, tmp_tuple_element_105);
            tmp_tuple_element_105 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_tuple_element_105 == NULL)) {
                tmp_tuple_element_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
            }

            if (tmp_tuple_element_105 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 171;

                goto tuple_build_exception_105;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_2, 2, tmp_tuple_element_105);
            goto tuple_build_noexception_105;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_105:;
            Py_DECREF(tmp_dict_value_2);
            goto dict_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_105:;
            tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[229];
            tmp_tuple_element_106 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[123]);

            if (unlikely(tmp_tuple_element_106 == NULL)) {
                tmp_tuple_element_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
            }

            if (tmp_tuple_element_106 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_2, 0, tmp_tuple_element_106);
            tmp_tuple_element_106 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[106]);

            if (unlikely(tmp_tuple_element_106 == NULL)) {
                tmp_tuple_element_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[106]);
            }

            if (tmp_tuple_element_106 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;

                goto tuple_build_exception_106;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_2, 1, tmp_tuple_element_106);
            tmp_tuple_element_106 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_tuple_element_106 == NULL)) {
                tmp_tuple_element_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
            }

            if (tmp_tuple_element_106 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;

                goto tuple_build_exception_106;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_2, 2, tmp_tuple_element_106);
            goto tuple_build_noexception_106;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_106:;
            Py_DECREF(tmp_dict_value_2);
            goto dict_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_106:;
            tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_assign_source_41);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_tuple_element_107;
        tmp_dict_key_3 = mod_consts[30];
        tmp_tuple_element_107 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_tuple_element_107 == NULL)) {
            tmp_tuple_element_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[42]);
        }

        assert(!(tmp_tuple_element_107 == NULL));
        tmp_dict_value_3 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_dict_value_3, 0, tmp_tuple_element_107);
        tmp_tuple_element_107 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_tuple_element_107 == NULL)) {
            tmp_tuple_element_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[107]);
        }

        if (tmp_tuple_element_107 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto tuple_build_exception_107;
        }
        PyTuple_SET_ITEM0(tmp_dict_value_3, 1, tmp_tuple_element_107);
        tmp_tuple_element_107 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_tuple_element_107 == NULL)) {
            tmp_tuple_element_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
        }

        if (tmp_tuple_element_107 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto tuple_build_exception_107;
        }
        PyTuple_SET_ITEM0(tmp_dict_value_3, 2, tmp_tuple_element_107);
        goto tuple_build_noexception_107;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_107:;
        Py_DECREF(tmp_dict_value_3);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_107:;
        tmp_assign_source_42 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_tuple_element_108;
            PyObject *tmp_tuple_element_109;
            PyObject *tmp_tuple_element_110;
            tmp_res = PyDict_SetItem(tmp_assign_source_42, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[223];
            tmp_tuple_element_108 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[42]);

            if (unlikely(tmp_tuple_element_108 == NULL)) {
                tmp_tuple_element_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[42]);
            }

            assert(!(tmp_tuple_element_108 == NULL));
            tmp_dict_value_3 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_3, 0, tmp_tuple_element_108);
            tmp_tuple_element_108 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[108]);

            if (unlikely(tmp_tuple_element_108 == NULL)) {
                tmp_tuple_element_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[108]);
            }

            if (tmp_tuple_element_108 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;

                goto tuple_build_exception_108;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_3, 1, tmp_tuple_element_108);
            tmp_tuple_element_108 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_tuple_element_108 == NULL)) {
                tmp_tuple_element_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
            }

            if (tmp_tuple_element_108 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 177;

                goto tuple_build_exception_108;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_3, 2, tmp_tuple_element_108);
            goto tuple_build_noexception_108;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_108:;
            Py_DECREF(tmp_dict_value_3);
            goto dict_build_exception_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_108:;
            tmp_res = PyDict_SetItem(tmp_assign_source_42, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[228];
            tmp_tuple_element_109 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[123]);

            if (unlikely(tmp_tuple_element_109 == NULL)) {
                tmp_tuple_element_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
            }

            if (tmp_tuple_element_109 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 178;

                goto dict_build_exception_3;
            }
            tmp_dict_value_3 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_3, 0, tmp_tuple_element_109);
            tmp_tuple_element_109 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[105]);

            if (unlikely(tmp_tuple_element_109 == NULL)) {
                tmp_tuple_element_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[105]);
            }

            if (tmp_tuple_element_109 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 178;

                goto tuple_build_exception_109;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_3, 1, tmp_tuple_element_109);
            tmp_tuple_element_109 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_tuple_element_109 == NULL)) {
                tmp_tuple_element_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
            }

            if (tmp_tuple_element_109 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 178;

                goto tuple_build_exception_109;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_3, 2, tmp_tuple_element_109);
            goto tuple_build_noexception_109;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_109:;
            Py_DECREF(tmp_dict_value_3);
            goto dict_build_exception_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_109:;
            tmp_res = PyDict_SetItem(tmp_assign_source_42, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[229];
            tmp_tuple_element_110 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[123]);

            if (unlikely(tmp_tuple_element_110 == NULL)) {
                tmp_tuple_element_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[123]);
            }

            if (tmp_tuple_element_110 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;

                goto dict_build_exception_3;
            }
            tmp_dict_value_3 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_dict_value_3, 0, tmp_tuple_element_110);
            tmp_tuple_element_110 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[106]);

            if (unlikely(tmp_tuple_element_110 == NULL)) {
                tmp_tuple_element_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[106]);
            }

            if (tmp_tuple_element_110 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;

                goto tuple_build_exception_110;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_3, 1, tmp_tuple_element_110);
            tmp_tuple_element_110 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_tuple_element_110 == NULL)) {
                tmp_tuple_element_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[44]);
            }

            if (tmp_tuple_element_110 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;

                goto tuple_build_exception_110;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_3, 2, tmp_tuple_element_110);
            goto tuple_build_noexception_110;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_110:;
            Py_DECREF(tmp_dict_value_3);
            goto dict_build_exception_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_110:;
            tmp_res = PyDict_SetItem(tmp_assign_source_42, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_3;
        // Exception handling pass through code for dict_build:
        dict_build_exception_3:;
        Py_DECREF(tmp_assign_source_42);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_3:;
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_42);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bed75980993dda4ba3e533a89f2ecb9f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bed75980993dda4ba3e533a89f2ecb9f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bed75980993dda4ba3e533a89f2ecb9f, exception_lineno);
    }



    assertFrameObject(frame_bed75980993dda4ba3e533a89f2ecb9f);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_annotations_1;
        tmp_annotations_1 = DICT_COPY(mod_consts[230]);


        tmp_assign_source_43 = MAKE_FUNCTION_prompt_toolkit$key_binding$bindings$mouse$$$function__1_load_mouse_bindings(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_43);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("prompt_toolkit$key_binding$bindings$mouse", false);

    Py_INCREF(module_prompt_toolkit$key_binding$bindings$mouse);
    return module_prompt_toolkit$key_binding$bindings$mouse;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$key_binding$bindings$mouse, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("prompt_toolkit$key_binding$bindings$mouse", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
