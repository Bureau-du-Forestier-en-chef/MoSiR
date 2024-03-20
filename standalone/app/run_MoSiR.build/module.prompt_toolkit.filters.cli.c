/* Generated code for Python module 'prompt_toolkit$filters$cli'
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

/* The "module_prompt_toolkit$filters$cli" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_prompt_toolkit$filters$cli;
PyDictObject *moduledict_prompt_toolkit$filters$cli;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[66];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[66];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("prompt_toolkit.filters.cli"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 66; i++) {
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
void checkModuleConstants_prompt_toolkit$filters$cli(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 66; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_89ca334ba35148ae265e6c86f655368b;
static PyCodeObject *codeobj_b3e4b355fc41ead8b82cb1817876d8b6;
static PyCodeObject *codeobj_4c96b31685b868145e1ae1aaadb43900;
static PyCodeObject *codeobj_3ffc2f7c4f1769ec4baae0c0884ec70b;
static PyCodeObject *codeobj_8b2177ee9a7142432fb188d6782f788b;
static PyCodeObject *codeobj_ea393623f1fd968d6aadb2fc7d89e53a;
static PyCodeObject *codeobj_b847b48a19bb80bc12756cb1b2e2c0bc;
static PyCodeObject *codeobj_2a32f0cd24bfa4aa93175a2d79e96ea4;
static PyCodeObject *codeobj_d626710d05b3410d8d14e356e3bae488;
static PyCodeObject *codeobj_f9dd6cac2ba91bfb932e9c9af733c6b1;
static PyCodeObject *codeobj_a56e31bc67e607a4668541a9adc25e88;
static PyCodeObject *codeobj_57fd2d981acd6c7a38fa71c65dc6bff2;
static PyCodeObject *codeobj_61b7ee717fd859112093ec371c5c080e;
static PyCodeObject *codeobj_50d8e1018b3861670b79c5df3dccfb83;
static PyCodeObject *codeobj_69e2de4a6ba20e0d57438fa98979f582;
static PyCodeObject *codeobj_cdb6e6df7c390a36007bf852bbaeef4f;
static PyCodeObject *codeobj_94541a0faeaed40274f819108406a56c;
static PyCodeObject *codeobj_1c6dae572bba6b7956f168918aff33da;
static PyCodeObject *codeobj_4b098c6d9b9e3b8992307dfc41d419ad;
static PyCodeObject *codeobj_e7033fd63b0c85324c9e7b2ef1983cdd;
static PyCodeObject *codeobj_3e214168a69000b625f47382eddd3efc;
static PyCodeObject *codeobj_bf0acf71324c92d2827e431c17cdba64;
static PyCodeObject *codeobj_36ab11aff1ab6c17655dc151fabb2d55;
static PyCodeObject *codeobj_300332c349648fb1a434dc40a994299b;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[63]); CHECK_OBJECT(module_filename_obj);
    codeobj_89ca334ba35148ae265e6c86f655368b = MAKE_CODE_OBJECT(module_filename_obj, 39, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[35], mod_consts[35], NULL, NULL, 0, 0, 0);
    codeobj_b3e4b355fc41ead8b82cb1817876d8b6 = MAKE_CODE_OBJECT(module_filename_obj, 40, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[35], mod_consts[35], NULL, NULL, 0, 0, 0);
    codeobj_4c96b31685b868145e1ae1aaadb43900 = MAKE_CODE_OBJECT(module_filename_obj, 41, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[35], mod_consts[35], NULL, NULL, 0, 0, 0);
    codeobj_3ffc2f7c4f1769ec4baae0c0884ec70b = MAKE_CODE_OBJECT(module_filename_obj, 42, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[35], mod_consts[35], NULL, NULL, 0, 0, 0);
    codeobj_8b2177ee9a7142432fb188d6782f788b = MAKE_CODE_OBJECT(module_filename_obj, 43, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[35], mod_consts[35], NULL, NULL, 0, 0, 0);
    codeobj_ea393623f1fd968d6aadb2fc7d89e53a = MAKE_CODE_OBJECT(module_filename_obj, 44, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[35], mod_consts[35], NULL, NULL, 0, 0, 0);
    codeobj_b847b48a19bb80bc12756cb1b2e2c0bc = MAKE_CODE_OBJECT(module_filename_obj, 45, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[35], mod_consts[35], NULL, NULL, 0, 0, 0);
    codeobj_2a32f0cd24bfa4aa93175a2d79e96ea4 = MAKE_CODE_OBJECT(module_filename_obj, 46, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[35], mod_consts[35], NULL, NULL, 0, 0, 0);
    codeobj_d626710d05b3410d8d14e356e3bae488 = MAKE_CODE_OBJECT(module_filename_obj, 47, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[35], mod_consts[35], NULL, NULL, 0, 0, 0);
    codeobj_f9dd6cac2ba91bfb932e9c9af733c6b1 = MAKE_CODE_OBJECT(module_filename_obj, 48, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[35], mod_consts[35], NULL, NULL, 0, 0, 0);
    codeobj_a56e31bc67e607a4668541a9adc25e88 = MAKE_CODE_OBJECT(module_filename_obj, 49, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[35], mod_consts[35], NULL, NULL, 0, 0, 0);
    codeobj_57fd2d981acd6c7a38fa71c65dc6bff2 = MAKE_CODE_OBJECT(module_filename_obj, 50, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[35], mod_consts[35], NULL, NULL, 0, 0, 0);
    codeobj_61b7ee717fd859112093ec371c5c080e = MAKE_CODE_OBJECT(module_filename_obj, 51, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[35], mod_consts[35], NULL, NULL, 0, 0, 0);
    codeobj_50d8e1018b3861670b79c5df3dccfb83 = MAKE_CODE_OBJECT(module_filename_obj, 52, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[35], mod_consts[35], NULL, NULL, 0, 0, 0);
    codeobj_69e2de4a6ba20e0d57438fa98979f582 = MAKE_CODE_OBJECT(module_filename_obj, 53, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[35], mod_consts[35], NULL, NULL, 0, 0, 0);
    codeobj_cdb6e6df7c390a36007bf852bbaeef4f = MAKE_CODE_OBJECT(module_filename_obj, 54, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[35], mod_consts[35], NULL, NULL, 0, 0, 0);
    codeobj_94541a0faeaed40274f819108406a56c = MAKE_CODE_OBJECT(module_filename_obj, 55, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[35], mod_consts[35], NULL, NULL, 0, 0, 0);
    codeobj_1c6dae572bba6b7956f168918aff33da = MAKE_CODE_OBJECT(module_filename_obj, 56, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[35], mod_consts[35], NULL, NULL, 0, 0, 0);
    codeobj_4b098c6d9b9e3b8992307dfc41d419ad = MAKE_CODE_OBJECT(module_filename_obj, 57, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[35], mod_consts[35], NULL, NULL, 0, 0, 0);
    codeobj_e7033fd63b0c85324c9e7b2ef1983cdd = MAKE_CODE_OBJECT(module_filename_obj, 58, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[35], mod_consts[35], NULL, NULL, 0, 0, 0);
    codeobj_3e214168a69000b625f47382eddd3efc = MAKE_CODE_OBJECT(module_filename_obj, 59, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[35], mod_consts[35], NULL, NULL, 0, 0, 0);
    codeobj_bf0acf71324c92d2827e431c17cdba64 = MAKE_CODE_OBJECT(module_filename_obj, 60, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[35], mod_consts[35], NULL, NULL, 0, 0, 0);
    codeobj_36ab11aff1ab6c17655dc151fabb2d55 = MAKE_CODE_OBJECT(module_filename_obj, 61, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ANNOTATIONS, mod_consts[35], mod_consts[35], NULL, NULL, 0, 0, 0);
    codeobj_300332c349648fb1a434dc40a994299b = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_FUTURE_ANNOTATIONS, mod_consts[64], mod_consts[64], NULL, NULL, 0, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__10_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__11_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__12_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__13_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__14_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__15_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__16_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__17_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__18_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__19_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__1_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__20_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__21_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__22_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__23_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__2_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__3_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__4_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__5_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__6_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__7_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__8_lambda();


static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__9_lambda();


// The module function definitions.
static PyObject *impl_prompt_toolkit$filters$cli$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_89ca334ba35148ae265e6c86f655368b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_89ca334ba35148ae265e6c86f655368b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_89ca334ba35148ae265e6c86f655368b)) {
        Py_XDECREF(cache_frame_89ca334ba35148ae265e6c86f655368b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_89ca334ba35148ae265e6c86f655368b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_89ca334ba35148ae265e6c86f655368b = MAKE_FUNCTION_FRAME(tstate, codeobj_89ca334ba35148ae265e6c86f655368b, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_89ca334ba35148ae265e6c86f655368b->m_type_description == NULL);
    frame_89ca334ba35148ae265e6c86f655368b = cache_frame_89ca334ba35148ae265e6c86f655368b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_89ca334ba35148ae265e6c86f655368b);
    assert(Py_REFCNT(frame_89ca334ba35148ae265e6c86f655368b) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[0]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[0]);
    }

    if (tmp_return_value == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 39;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_89ca334ba35148ae265e6c86f655368b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_89ca334ba35148ae265e6c86f655368b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_89ca334ba35148ae265e6c86f655368b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_89ca334ba35148ae265e6c86f655368b,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_89ca334ba35148ae265e6c86f655368b == cache_frame_89ca334ba35148ae265e6c86f655368b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_89ca334ba35148ae265e6c86f655368b);
        cache_frame_89ca334ba35148ae265e6c86f655368b = NULL;
    }

    assertFrameObject(frame_89ca334ba35148ae265e6c86f655368b);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__2_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_b3e4b355fc41ead8b82cb1817876d8b6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b3e4b355fc41ead8b82cb1817876d8b6 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b3e4b355fc41ead8b82cb1817876d8b6)) {
        Py_XDECREF(cache_frame_b3e4b355fc41ead8b82cb1817876d8b6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b3e4b355fc41ead8b82cb1817876d8b6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b3e4b355fc41ead8b82cb1817876d8b6 = MAKE_FUNCTION_FRAME(tstate, codeobj_b3e4b355fc41ead8b82cb1817876d8b6, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b3e4b355fc41ead8b82cb1817876d8b6->m_type_description == NULL);
    frame_b3e4b355fc41ead8b82cb1817876d8b6 = cache_frame_b3e4b355fc41ead8b82cb1817876d8b6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_b3e4b355fc41ead8b82cb1817876d8b6);
    assert(Py_REFCNT(frame_b3e4b355fc41ead8b82cb1817876d8b6) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[1]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[1]);
    }

    if (tmp_return_value == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 40;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b3e4b355fc41ead8b82cb1817876d8b6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b3e4b355fc41ead8b82cb1817876d8b6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b3e4b355fc41ead8b82cb1817876d8b6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b3e4b355fc41ead8b82cb1817876d8b6,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_b3e4b355fc41ead8b82cb1817876d8b6 == cache_frame_b3e4b355fc41ead8b82cb1817876d8b6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b3e4b355fc41ead8b82cb1817876d8b6);
        cache_frame_b3e4b355fc41ead8b82cb1817876d8b6 = NULL;
    }

    assertFrameObject(frame_b3e4b355fc41ead8b82cb1817876d8b6);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__3_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_4c96b31685b868145e1ae1aaadb43900;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4c96b31685b868145e1ae1aaadb43900 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4c96b31685b868145e1ae1aaadb43900)) {
        Py_XDECREF(cache_frame_4c96b31685b868145e1ae1aaadb43900);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4c96b31685b868145e1ae1aaadb43900 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4c96b31685b868145e1ae1aaadb43900 = MAKE_FUNCTION_FRAME(tstate, codeobj_4c96b31685b868145e1ae1aaadb43900, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4c96b31685b868145e1ae1aaadb43900->m_type_description == NULL);
    frame_4c96b31685b868145e1ae1aaadb43900 = cache_frame_4c96b31685b868145e1ae1aaadb43900;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_4c96b31685b868145e1ae1aaadb43900);
    assert(Py_REFCNT(frame_4c96b31685b868145e1ae1aaadb43900) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[2]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[2]);
    }

    if (tmp_return_value == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 41;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4c96b31685b868145e1ae1aaadb43900, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4c96b31685b868145e1ae1aaadb43900->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4c96b31685b868145e1ae1aaadb43900, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4c96b31685b868145e1ae1aaadb43900,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_4c96b31685b868145e1ae1aaadb43900 == cache_frame_4c96b31685b868145e1ae1aaadb43900) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4c96b31685b868145e1ae1aaadb43900);
        cache_frame_4c96b31685b868145e1ae1aaadb43900 = NULL;
    }

    assertFrameObject(frame_4c96b31685b868145e1ae1aaadb43900);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__4_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_3ffc2f7c4f1769ec4baae0c0884ec70b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3ffc2f7c4f1769ec4baae0c0884ec70b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3ffc2f7c4f1769ec4baae0c0884ec70b)) {
        Py_XDECREF(cache_frame_3ffc2f7c4f1769ec4baae0c0884ec70b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3ffc2f7c4f1769ec4baae0c0884ec70b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3ffc2f7c4f1769ec4baae0c0884ec70b = MAKE_FUNCTION_FRAME(tstate, codeobj_3ffc2f7c4f1769ec4baae0c0884ec70b, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3ffc2f7c4f1769ec4baae0c0884ec70b->m_type_description == NULL);
    frame_3ffc2f7c4f1769ec4baae0c0884ec70b = cache_frame_3ffc2f7c4f1769ec4baae0c0884ec70b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_3ffc2f7c4f1769ec4baae0c0884ec70b);
    assert(Py_REFCNT(frame_3ffc2f7c4f1769ec4baae0c0884ec70b) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[3]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[3]);
    }

    if (tmp_return_value == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 42;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3ffc2f7c4f1769ec4baae0c0884ec70b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3ffc2f7c4f1769ec4baae0c0884ec70b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3ffc2f7c4f1769ec4baae0c0884ec70b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3ffc2f7c4f1769ec4baae0c0884ec70b,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_3ffc2f7c4f1769ec4baae0c0884ec70b == cache_frame_3ffc2f7c4f1769ec4baae0c0884ec70b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3ffc2f7c4f1769ec4baae0c0884ec70b);
        cache_frame_3ffc2f7c4f1769ec4baae0c0884ec70b = NULL;
    }

    assertFrameObject(frame_3ffc2f7c4f1769ec4baae0c0884ec70b);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__5_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_8b2177ee9a7142432fb188d6782f788b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_8b2177ee9a7142432fb188d6782f788b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8b2177ee9a7142432fb188d6782f788b)) {
        Py_XDECREF(cache_frame_8b2177ee9a7142432fb188d6782f788b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8b2177ee9a7142432fb188d6782f788b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8b2177ee9a7142432fb188d6782f788b = MAKE_FUNCTION_FRAME(tstate, codeobj_8b2177ee9a7142432fb188d6782f788b, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8b2177ee9a7142432fb188d6782f788b->m_type_description == NULL);
    frame_8b2177ee9a7142432fb188d6782f788b = cache_frame_8b2177ee9a7142432fb188d6782f788b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_8b2177ee9a7142432fb188d6782f788b);
    assert(Py_REFCNT(frame_8b2177ee9a7142432fb188d6782f788b) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[4]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[4]);
    }

    if (tmp_return_value == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 43;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8b2177ee9a7142432fb188d6782f788b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8b2177ee9a7142432fb188d6782f788b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8b2177ee9a7142432fb188d6782f788b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8b2177ee9a7142432fb188d6782f788b,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_8b2177ee9a7142432fb188d6782f788b == cache_frame_8b2177ee9a7142432fb188d6782f788b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8b2177ee9a7142432fb188d6782f788b);
        cache_frame_8b2177ee9a7142432fb188d6782f788b = NULL;
    }

    assertFrameObject(frame_8b2177ee9a7142432fb188d6782f788b);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__6_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_ea393623f1fd968d6aadb2fc7d89e53a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ea393623f1fd968d6aadb2fc7d89e53a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ea393623f1fd968d6aadb2fc7d89e53a)) {
        Py_XDECREF(cache_frame_ea393623f1fd968d6aadb2fc7d89e53a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ea393623f1fd968d6aadb2fc7d89e53a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ea393623f1fd968d6aadb2fc7d89e53a = MAKE_FUNCTION_FRAME(tstate, codeobj_ea393623f1fd968d6aadb2fc7d89e53a, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ea393623f1fd968d6aadb2fc7d89e53a->m_type_description == NULL);
    frame_ea393623f1fd968d6aadb2fc7d89e53a = cache_frame_ea393623f1fd968d6aadb2fc7d89e53a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_ea393623f1fd968d6aadb2fc7d89e53a);
    assert(Py_REFCNT(frame_ea393623f1fd968d6aadb2fc7d89e53a) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[5]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[5]);
    }

    if (tmp_return_value == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 44;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ea393623f1fd968d6aadb2fc7d89e53a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ea393623f1fd968d6aadb2fc7d89e53a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ea393623f1fd968d6aadb2fc7d89e53a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ea393623f1fd968d6aadb2fc7d89e53a,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_ea393623f1fd968d6aadb2fc7d89e53a == cache_frame_ea393623f1fd968d6aadb2fc7d89e53a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ea393623f1fd968d6aadb2fc7d89e53a);
        cache_frame_ea393623f1fd968d6aadb2fc7d89e53a = NULL;
    }

    assertFrameObject(frame_ea393623f1fd968d6aadb2fc7d89e53a);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__7_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_b847b48a19bb80bc12756cb1b2e2c0bc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b847b48a19bb80bc12756cb1b2e2c0bc = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b847b48a19bb80bc12756cb1b2e2c0bc)) {
        Py_XDECREF(cache_frame_b847b48a19bb80bc12756cb1b2e2c0bc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b847b48a19bb80bc12756cb1b2e2c0bc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b847b48a19bb80bc12756cb1b2e2c0bc = MAKE_FUNCTION_FRAME(tstate, codeobj_b847b48a19bb80bc12756cb1b2e2c0bc, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b847b48a19bb80bc12756cb1b2e2c0bc->m_type_description == NULL);
    frame_b847b48a19bb80bc12756cb1b2e2c0bc = cache_frame_b847b48a19bb80bc12756cb1b2e2c0bc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_b847b48a19bb80bc12756cb1b2e2c0bc);
    assert(Py_REFCNT(frame_b847b48a19bb80bc12756cb1b2e2c0bc) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[6]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[6]);
    }

    if (tmp_return_value == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 45;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b847b48a19bb80bc12756cb1b2e2c0bc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b847b48a19bb80bc12756cb1b2e2c0bc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b847b48a19bb80bc12756cb1b2e2c0bc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b847b48a19bb80bc12756cb1b2e2c0bc,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_b847b48a19bb80bc12756cb1b2e2c0bc == cache_frame_b847b48a19bb80bc12756cb1b2e2c0bc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b847b48a19bb80bc12756cb1b2e2c0bc);
        cache_frame_b847b48a19bb80bc12756cb1b2e2c0bc = NULL;
    }

    assertFrameObject(frame_b847b48a19bb80bc12756cb1b2e2c0bc);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__8_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_2a32f0cd24bfa4aa93175a2d79e96ea4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2a32f0cd24bfa4aa93175a2d79e96ea4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2a32f0cd24bfa4aa93175a2d79e96ea4)) {
        Py_XDECREF(cache_frame_2a32f0cd24bfa4aa93175a2d79e96ea4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2a32f0cd24bfa4aa93175a2d79e96ea4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2a32f0cd24bfa4aa93175a2d79e96ea4 = MAKE_FUNCTION_FRAME(tstate, codeobj_2a32f0cd24bfa4aa93175a2d79e96ea4, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2a32f0cd24bfa4aa93175a2d79e96ea4->m_type_description == NULL);
    frame_2a32f0cd24bfa4aa93175a2d79e96ea4 = cache_frame_2a32f0cd24bfa4aa93175a2d79e96ea4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_2a32f0cd24bfa4aa93175a2d79e96ea4);
    assert(Py_REFCNT(frame_2a32f0cd24bfa4aa93175a2d79e96ea4) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[7]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[7]);
    }

    if (tmp_return_value == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 46;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2a32f0cd24bfa4aa93175a2d79e96ea4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2a32f0cd24bfa4aa93175a2d79e96ea4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2a32f0cd24bfa4aa93175a2d79e96ea4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2a32f0cd24bfa4aa93175a2d79e96ea4,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_2a32f0cd24bfa4aa93175a2d79e96ea4 == cache_frame_2a32f0cd24bfa4aa93175a2d79e96ea4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2a32f0cd24bfa4aa93175a2d79e96ea4);
        cache_frame_2a32f0cd24bfa4aa93175a2d79e96ea4 = NULL;
    }

    assertFrameObject(frame_2a32f0cd24bfa4aa93175a2d79e96ea4);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__9_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_d626710d05b3410d8d14e356e3bae488;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d626710d05b3410d8d14e356e3bae488 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d626710d05b3410d8d14e356e3bae488)) {
        Py_XDECREF(cache_frame_d626710d05b3410d8d14e356e3bae488);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d626710d05b3410d8d14e356e3bae488 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d626710d05b3410d8d14e356e3bae488 = MAKE_FUNCTION_FRAME(tstate, codeobj_d626710d05b3410d8d14e356e3bae488, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d626710d05b3410d8d14e356e3bae488->m_type_description == NULL);
    frame_d626710d05b3410d8d14e356e3bae488 = cache_frame_d626710d05b3410d8d14e356e3bae488;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d626710d05b3410d8d14e356e3bae488);
    assert(Py_REFCNT(frame_d626710d05b3410d8d14e356e3bae488) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[8]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[8]);
    }

    if (tmp_return_value == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 47;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d626710d05b3410d8d14e356e3bae488, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d626710d05b3410d8d14e356e3bae488->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d626710d05b3410d8d14e356e3bae488, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d626710d05b3410d8d14e356e3bae488,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_d626710d05b3410d8d14e356e3bae488 == cache_frame_d626710d05b3410d8d14e356e3bae488) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d626710d05b3410d8d14e356e3bae488);
        cache_frame_d626710d05b3410d8d14e356e3bae488 = NULL;
    }

    assertFrameObject(frame_d626710d05b3410d8d14e356e3bae488);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__10_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_f9dd6cac2ba91bfb932e9c9af733c6b1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f9dd6cac2ba91bfb932e9c9af733c6b1 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f9dd6cac2ba91bfb932e9c9af733c6b1)) {
        Py_XDECREF(cache_frame_f9dd6cac2ba91bfb932e9c9af733c6b1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f9dd6cac2ba91bfb932e9c9af733c6b1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f9dd6cac2ba91bfb932e9c9af733c6b1 = MAKE_FUNCTION_FRAME(tstate, codeobj_f9dd6cac2ba91bfb932e9c9af733c6b1, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f9dd6cac2ba91bfb932e9c9af733c6b1->m_type_description == NULL);
    frame_f9dd6cac2ba91bfb932e9c9af733c6b1 = cache_frame_f9dd6cac2ba91bfb932e9c9af733c6b1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f9dd6cac2ba91bfb932e9c9af733c6b1);
    assert(Py_REFCNT(frame_f9dd6cac2ba91bfb932e9c9af733c6b1) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[9]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
    }

    if (tmp_return_value == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 48;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f9dd6cac2ba91bfb932e9c9af733c6b1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f9dd6cac2ba91bfb932e9c9af733c6b1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f9dd6cac2ba91bfb932e9c9af733c6b1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f9dd6cac2ba91bfb932e9c9af733c6b1,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_f9dd6cac2ba91bfb932e9c9af733c6b1 == cache_frame_f9dd6cac2ba91bfb932e9c9af733c6b1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f9dd6cac2ba91bfb932e9c9af733c6b1);
        cache_frame_f9dd6cac2ba91bfb932e9c9af733c6b1 = NULL;
    }

    assertFrameObject(frame_f9dd6cac2ba91bfb932e9c9af733c6b1);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__11_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_a56e31bc67e607a4668541a9adc25e88;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a56e31bc67e607a4668541a9adc25e88 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a56e31bc67e607a4668541a9adc25e88)) {
        Py_XDECREF(cache_frame_a56e31bc67e607a4668541a9adc25e88);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a56e31bc67e607a4668541a9adc25e88 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a56e31bc67e607a4668541a9adc25e88 = MAKE_FUNCTION_FRAME(tstate, codeobj_a56e31bc67e607a4668541a9adc25e88, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a56e31bc67e607a4668541a9adc25e88->m_type_description == NULL);
    frame_a56e31bc67e607a4668541a9adc25e88 = cache_frame_a56e31bc67e607a4668541a9adc25e88;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_a56e31bc67e607a4668541a9adc25e88);
    assert(Py_REFCNT(frame_a56e31bc67e607a4668541a9adc25e88) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[9]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[9]);
    }

    if (tmp_return_value == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 49;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a56e31bc67e607a4668541a9adc25e88, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a56e31bc67e607a4668541a9adc25e88->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a56e31bc67e607a4668541a9adc25e88, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a56e31bc67e607a4668541a9adc25e88,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_a56e31bc67e607a4668541a9adc25e88 == cache_frame_a56e31bc67e607a4668541a9adc25e88) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a56e31bc67e607a4668541a9adc25e88);
        cache_frame_a56e31bc67e607a4668541a9adc25e88 = NULL;
    }

    assertFrameObject(frame_a56e31bc67e607a4668541a9adc25e88);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__12_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_57fd2d981acd6c7a38fa71c65dc6bff2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_57fd2d981acd6c7a38fa71c65dc6bff2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_57fd2d981acd6c7a38fa71c65dc6bff2)) {
        Py_XDECREF(cache_frame_57fd2d981acd6c7a38fa71c65dc6bff2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_57fd2d981acd6c7a38fa71c65dc6bff2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_57fd2d981acd6c7a38fa71c65dc6bff2 = MAKE_FUNCTION_FRAME(tstate, codeobj_57fd2d981acd6c7a38fa71c65dc6bff2, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_57fd2d981acd6c7a38fa71c65dc6bff2->m_type_description == NULL);
    frame_57fd2d981acd6c7a38fa71c65dc6bff2 = cache_frame_57fd2d981acd6c7a38fa71c65dc6bff2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_57fd2d981acd6c7a38fa71c65dc6bff2);
    assert(Py_REFCNT(frame_57fd2d981acd6c7a38fa71c65dc6bff2) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[10]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[10]);
    }

    if (tmp_return_value == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 50;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_57fd2d981acd6c7a38fa71c65dc6bff2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_57fd2d981acd6c7a38fa71c65dc6bff2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_57fd2d981acd6c7a38fa71c65dc6bff2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_57fd2d981acd6c7a38fa71c65dc6bff2,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_57fd2d981acd6c7a38fa71c65dc6bff2 == cache_frame_57fd2d981acd6c7a38fa71c65dc6bff2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_57fd2d981acd6c7a38fa71c65dc6bff2);
        cache_frame_57fd2d981acd6c7a38fa71c65dc6bff2 = NULL;
    }

    assertFrameObject(frame_57fd2d981acd6c7a38fa71c65dc6bff2);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__13_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_61b7ee717fd859112093ec371c5c080e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_61b7ee717fd859112093ec371c5c080e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_61b7ee717fd859112093ec371c5c080e)) {
        Py_XDECREF(cache_frame_61b7ee717fd859112093ec371c5c080e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_61b7ee717fd859112093ec371c5c080e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_61b7ee717fd859112093ec371c5c080e = MAKE_FUNCTION_FRAME(tstate, codeobj_61b7ee717fd859112093ec371c5c080e, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_61b7ee717fd859112093ec371c5c080e->m_type_description == NULL);
    frame_61b7ee717fd859112093ec371c5c080e = cache_frame_61b7ee717fd859112093ec371c5c080e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_61b7ee717fd859112093ec371c5c080e);
    assert(Py_REFCNT(frame_61b7ee717fd859112093ec371c5c080e) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[11]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[11]);
    }

    if (tmp_return_value == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 51;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_61b7ee717fd859112093ec371c5c080e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_61b7ee717fd859112093ec371c5c080e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_61b7ee717fd859112093ec371c5c080e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_61b7ee717fd859112093ec371c5c080e,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_61b7ee717fd859112093ec371c5c080e == cache_frame_61b7ee717fd859112093ec371c5c080e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_61b7ee717fd859112093ec371c5c080e);
        cache_frame_61b7ee717fd859112093ec371c5c080e = NULL;
    }

    assertFrameObject(frame_61b7ee717fd859112093ec371c5c080e);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__14_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_50d8e1018b3861670b79c5df3dccfb83;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_50d8e1018b3861670b79c5df3dccfb83 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_50d8e1018b3861670b79c5df3dccfb83)) {
        Py_XDECREF(cache_frame_50d8e1018b3861670b79c5df3dccfb83);

#if _DEBUG_REFCOUNTS
        if (cache_frame_50d8e1018b3861670b79c5df3dccfb83 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_50d8e1018b3861670b79c5df3dccfb83 = MAKE_FUNCTION_FRAME(tstate, codeobj_50d8e1018b3861670b79c5df3dccfb83, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_50d8e1018b3861670b79c5df3dccfb83->m_type_description == NULL);
    frame_50d8e1018b3861670b79c5df3dccfb83 = cache_frame_50d8e1018b3861670b79c5df3dccfb83;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_50d8e1018b3861670b79c5df3dccfb83);
    assert(Py_REFCNT(frame_50d8e1018b3861670b79c5df3dccfb83) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[12]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[12]);
    }

    if (tmp_return_value == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 52;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_50d8e1018b3861670b79c5df3dccfb83, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_50d8e1018b3861670b79c5df3dccfb83->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_50d8e1018b3861670b79c5df3dccfb83, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_50d8e1018b3861670b79c5df3dccfb83,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_50d8e1018b3861670b79c5df3dccfb83 == cache_frame_50d8e1018b3861670b79c5df3dccfb83) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_50d8e1018b3861670b79c5df3dccfb83);
        cache_frame_50d8e1018b3861670b79c5df3dccfb83 = NULL;
    }

    assertFrameObject(frame_50d8e1018b3861670b79c5df3dccfb83);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__15_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_69e2de4a6ba20e0d57438fa98979f582;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_69e2de4a6ba20e0d57438fa98979f582 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_69e2de4a6ba20e0d57438fa98979f582)) {
        Py_XDECREF(cache_frame_69e2de4a6ba20e0d57438fa98979f582);

#if _DEBUG_REFCOUNTS
        if (cache_frame_69e2de4a6ba20e0d57438fa98979f582 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_69e2de4a6ba20e0d57438fa98979f582 = MAKE_FUNCTION_FRAME(tstate, codeobj_69e2de4a6ba20e0d57438fa98979f582, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_69e2de4a6ba20e0d57438fa98979f582->m_type_description == NULL);
    frame_69e2de4a6ba20e0d57438fa98979f582 = cache_frame_69e2de4a6ba20e0d57438fa98979f582;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_69e2de4a6ba20e0d57438fa98979f582);
    assert(Py_REFCNT(frame_69e2de4a6ba20e0d57438fa98979f582) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[13]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[13]);
    }

    if (tmp_return_value == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 53;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_69e2de4a6ba20e0d57438fa98979f582, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_69e2de4a6ba20e0d57438fa98979f582->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_69e2de4a6ba20e0d57438fa98979f582, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_69e2de4a6ba20e0d57438fa98979f582,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_69e2de4a6ba20e0d57438fa98979f582 == cache_frame_69e2de4a6ba20e0d57438fa98979f582) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_69e2de4a6ba20e0d57438fa98979f582);
        cache_frame_69e2de4a6ba20e0d57438fa98979f582 = NULL;
    }

    assertFrameObject(frame_69e2de4a6ba20e0d57438fa98979f582);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__16_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_cdb6e6df7c390a36007bf852bbaeef4f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cdb6e6df7c390a36007bf852bbaeef4f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cdb6e6df7c390a36007bf852bbaeef4f)) {
        Py_XDECREF(cache_frame_cdb6e6df7c390a36007bf852bbaeef4f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cdb6e6df7c390a36007bf852bbaeef4f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cdb6e6df7c390a36007bf852bbaeef4f = MAKE_FUNCTION_FRAME(tstate, codeobj_cdb6e6df7c390a36007bf852bbaeef4f, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cdb6e6df7c390a36007bf852bbaeef4f->m_type_description == NULL);
    frame_cdb6e6df7c390a36007bf852bbaeef4f = cache_frame_cdb6e6df7c390a36007bf852bbaeef4f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_cdb6e6df7c390a36007bf852bbaeef4f);
    assert(Py_REFCNT(frame_cdb6e6df7c390a36007bf852bbaeef4f) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[14]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[14]);
    }

    if (tmp_return_value == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 54;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cdb6e6df7c390a36007bf852bbaeef4f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cdb6e6df7c390a36007bf852bbaeef4f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cdb6e6df7c390a36007bf852bbaeef4f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cdb6e6df7c390a36007bf852bbaeef4f,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_cdb6e6df7c390a36007bf852bbaeef4f == cache_frame_cdb6e6df7c390a36007bf852bbaeef4f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cdb6e6df7c390a36007bf852bbaeef4f);
        cache_frame_cdb6e6df7c390a36007bf852bbaeef4f = NULL;
    }

    assertFrameObject(frame_cdb6e6df7c390a36007bf852bbaeef4f);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__17_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_94541a0faeaed40274f819108406a56c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_94541a0faeaed40274f819108406a56c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_94541a0faeaed40274f819108406a56c)) {
        Py_XDECREF(cache_frame_94541a0faeaed40274f819108406a56c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_94541a0faeaed40274f819108406a56c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_94541a0faeaed40274f819108406a56c = MAKE_FUNCTION_FRAME(tstate, codeobj_94541a0faeaed40274f819108406a56c, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_94541a0faeaed40274f819108406a56c->m_type_description == NULL);
    frame_94541a0faeaed40274f819108406a56c = cache_frame_94541a0faeaed40274f819108406a56c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_94541a0faeaed40274f819108406a56c);
    assert(Py_REFCNT(frame_94541a0faeaed40274f819108406a56c) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[15]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[15]);
    }

    if (tmp_return_value == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 55;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_94541a0faeaed40274f819108406a56c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_94541a0faeaed40274f819108406a56c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_94541a0faeaed40274f819108406a56c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_94541a0faeaed40274f819108406a56c,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_94541a0faeaed40274f819108406a56c == cache_frame_94541a0faeaed40274f819108406a56c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_94541a0faeaed40274f819108406a56c);
        cache_frame_94541a0faeaed40274f819108406a56c = NULL;
    }

    assertFrameObject(frame_94541a0faeaed40274f819108406a56c);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__18_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_1c6dae572bba6b7956f168918aff33da;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1c6dae572bba6b7956f168918aff33da = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1c6dae572bba6b7956f168918aff33da)) {
        Py_XDECREF(cache_frame_1c6dae572bba6b7956f168918aff33da);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1c6dae572bba6b7956f168918aff33da == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1c6dae572bba6b7956f168918aff33da = MAKE_FUNCTION_FRAME(tstate, codeobj_1c6dae572bba6b7956f168918aff33da, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1c6dae572bba6b7956f168918aff33da->m_type_description == NULL);
    frame_1c6dae572bba6b7956f168918aff33da = cache_frame_1c6dae572bba6b7956f168918aff33da;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1c6dae572bba6b7956f168918aff33da);
    assert(Py_REFCNT(frame_1c6dae572bba6b7956f168918aff33da) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[16]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[16]);
    }

    if (tmp_return_value == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 56;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1c6dae572bba6b7956f168918aff33da, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1c6dae572bba6b7956f168918aff33da->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1c6dae572bba6b7956f168918aff33da, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1c6dae572bba6b7956f168918aff33da,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_1c6dae572bba6b7956f168918aff33da == cache_frame_1c6dae572bba6b7956f168918aff33da) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1c6dae572bba6b7956f168918aff33da);
        cache_frame_1c6dae572bba6b7956f168918aff33da = NULL;
    }

    assertFrameObject(frame_1c6dae572bba6b7956f168918aff33da);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__19_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_4b098c6d9b9e3b8992307dfc41d419ad;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4b098c6d9b9e3b8992307dfc41d419ad = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4b098c6d9b9e3b8992307dfc41d419ad)) {
        Py_XDECREF(cache_frame_4b098c6d9b9e3b8992307dfc41d419ad);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4b098c6d9b9e3b8992307dfc41d419ad == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4b098c6d9b9e3b8992307dfc41d419ad = MAKE_FUNCTION_FRAME(tstate, codeobj_4b098c6d9b9e3b8992307dfc41d419ad, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4b098c6d9b9e3b8992307dfc41d419ad->m_type_description == NULL);
    frame_4b098c6d9b9e3b8992307dfc41d419ad = cache_frame_4b098c6d9b9e3b8992307dfc41d419ad;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_4b098c6d9b9e3b8992307dfc41d419ad);
    assert(Py_REFCNT(frame_4b098c6d9b9e3b8992307dfc41d419ad) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[17]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[17]);
    }

    if (tmp_return_value == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 57;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4b098c6d9b9e3b8992307dfc41d419ad, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4b098c6d9b9e3b8992307dfc41d419ad->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4b098c6d9b9e3b8992307dfc41d419ad, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4b098c6d9b9e3b8992307dfc41d419ad,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_4b098c6d9b9e3b8992307dfc41d419ad == cache_frame_4b098c6d9b9e3b8992307dfc41d419ad) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4b098c6d9b9e3b8992307dfc41d419ad);
        cache_frame_4b098c6d9b9e3b8992307dfc41d419ad = NULL;
    }

    assertFrameObject(frame_4b098c6d9b9e3b8992307dfc41d419ad);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__20_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_e7033fd63b0c85324c9e7b2ef1983cdd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e7033fd63b0c85324c9e7b2ef1983cdd = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e7033fd63b0c85324c9e7b2ef1983cdd)) {
        Py_XDECREF(cache_frame_e7033fd63b0c85324c9e7b2ef1983cdd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e7033fd63b0c85324c9e7b2ef1983cdd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e7033fd63b0c85324c9e7b2ef1983cdd = MAKE_FUNCTION_FRAME(tstate, codeobj_e7033fd63b0c85324c9e7b2ef1983cdd, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e7033fd63b0c85324c9e7b2ef1983cdd->m_type_description == NULL);
    frame_e7033fd63b0c85324c9e7b2ef1983cdd = cache_frame_e7033fd63b0c85324c9e7b2ef1983cdd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_e7033fd63b0c85324c9e7b2ef1983cdd);
    assert(Py_REFCNT(frame_e7033fd63b0c85324c9e7b2ef1983cdd) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[18]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[18]);
    }

    if (tmp_return_value == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 58;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e7033fd63b0c85324c9e7b2ef1983cdd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e7033fd63b0c85324c9e7b2ef1983cdd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e7033fd63b0c85324c9e7b2ef1983cdd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e7033fd63b0c85324c9e7b2ef1983cdd,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_e7033fd63b0c85324c9e7b2ef1983cdd == cache_frame_e7033fd63b0c85324c9e7b2ef1983cdd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e7033fd63b0c85324c9e7b2ef1983cdd);
        cache_frame_e7033fd63b0c85324c9e7b2ef1983cdd = NULL;
    }

    assertFrameObject(frame_e7033fd63b0c85324c9e7b2ef1983cdd);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__21_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_3e214168a69000b625f47382eddd3efc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3e214168a69000b625f47382eddd3efc = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3e214168a69000b625f47382eddd3efc)) {
        Py_XDECREF(cache_frame_3e214168a69000b625f47382eddd3efc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3e214168a69000b625f47382eddd3efc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3e214168a69000b625f47382eddd3efc = MAKE_FUNCTION_FRAME(tstate, codeobj_3e214168a69000b625f47382eddd3efc, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3e214168a69000b625f47382eddd3efc->m_type_description == NULL);
    frame_3e214168a69000b625f47382eddd3efc = cache_frame_3e214168a69000b625f47382eddd3efc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_3e214168a69000b625f47382eddd3efc);
    assert(Py_REFCNT(frame_3e214168a69000b625f47382eddd3efc) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[19]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[19]);
    }

    if (tmp_return_value == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 59;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3e214168a69000b625f47382eddd3efc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3e214168a69000b625f47382eddd3efc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3e214168a69000b625f47382eddd3efc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3e214168a69000b625f47382eddd3efc,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_3e214168a69000b625f47382eddd3efc == cache_frame_3e214168a69000b625f47382eddd3efc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3e214168a69000b625f47382eddd3efc);
        cache_frame_3e214168a69000b625f47382eddd3efc = NULL;
    }

    assertFrameObject(frame_3e214168a69000b625f47382eddd3efc);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__22_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_bf0acf71324c92d2827e431c17cdba64;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_bf0acf71324c92d2827e431c17cdba64 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bf0acf71324c92d2827e431c17cdba64)) {
        Py_XDECREF(cache_frame_bf0acf71324c92d2827e431c17cdba64);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bf0acf71324c92d2827e431c17cdba64 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bf0acf71324c92d2827e431c17cdba64 = MAKE_FUNCTION_FRAME(tstate, codeobj_bf0acf71324c92d2827e431c17cdba64, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bf0acf71324c92d2827e431c17cdba64->m_type_description == NULL);
    frame_bf0acf71324c92d2827e431c17cdba64 = cache_frame_bf0acf71324c92d2827e431c17cdba64;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_bf0acf71324c92d2827e431c17cdba64);
    assert(Py_REFCNT(frame_bf0acf71324c92d2827e431c17cdba64) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[20]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[20]);
    }

    if (tmp_return_value == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 60;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bf0acf71324c92d2827e431c17cdba64, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bf0acf71324c92d2827e431c17cdba64->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bf0acf71324c92d2827e431c17cdba64, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bf0acf71324c92d2827e431c17cdba64,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_bf0acf71324c92d2827e431c17cdba64 == cache_frame_bf0acf71324c92d2827e431c17cdba64) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bf0acf71324c92d2827e431c17cdba64);
        cache_frame_bf0acf71324c92d2827e431c17cdba64 = NULL;
    }

    assertFrameObject(frame_bf0acf71324c92d2827e431c17cdba64);

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


static PyObject *impl_prompt_toolkit$filters$cli$$$function__23_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_36ab11aff1ab6c17655dc151fabb2d55;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_36ab11aff1ab6c17655dc151fabb2d55 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_36ab11aff1ab6c17655dc151fabb2d55)) {
        Py_XDECREF(cache_frame_36ab11aff1ab6c17655dc151fabb2d55);

#if _DEBUG_REFCOUNTS
        if (cache_frame_36ab11aff1ab6c17655dc151fabb2d55 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_36ab11aff1ab6c17655dc151fabb2d55 = MAKE_FUNCTION_FRAME(tstate, codeobj_36ab11aff1ab6c17655dc151fabb2d55, module_prompt_toolkit$filters$cli, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_36ab11aff1ab6c17655dc151fabb2d55->m_type_description == NULL);
    frame_36ab11aff1ab6c17655dc151fabb2d55 = cache_frame_36ab11aff1ab6c17655dc151fabb2d55;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_36ab11aff1ab6c17655dc151fabb2d55);
    assert(Py_REFCNT(frame_36ab11aff1ab6c17655dc151fabb2d55) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[21]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[21]);
    }

    if (tmp_return_value == NULL) {
        assert(HAS_ERROR_OCCURRED(tstate));

        FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


        exception_lineno = 61;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_36ab11aff1ab6c17655dc151fabb2d55, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_36ab11aff1ab6c17655dc151fabb2d55->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_36ab11aff1ab6c17655dc151fabb2d55, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_36ab11aff1ab6c17655dc151fabb2d55,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_36ab11aff1ab6c17655dc151fabb2d55 == cache_frame_36ab11aff1ab6c17655dc151fabb2d55) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_36ab11aff1ab6c17655dc151fabb2d55);
        cache_frame_36ab11aff1ab6c17655dc151fabb2d55 = NULL;
    }

    assertFrameObject(frame_36ab11aff1ab6c17655dc151fabb2d55);

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



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__10_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__10_lambda,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f9dd6cac2ba91bfb932e9c9af733c6b1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__11_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__11_lambda,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a56e31bc67e607a4668541a9adc25e88,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__12_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__12_lambda,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_57fd2d981acd6c7a38fa71c65dc6bff2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__13_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__13_lambda,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_61b7ee717fd859112093ec371c5c080e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__14_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__14_lambda,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_50d8e1018b3861670b79c5df3dccfb83,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__15_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__15_lambda,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_69e2de4a6ba20e0d57438fa98979f582,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__16_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__16_lambda,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cdb6e6df7c390a36007bf852bbaeef4f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__17_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__17_lambda,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_94541a0faeaed40274f819108406a56c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__18_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__18_lambda,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1c6dae572bba6b7956f168918aff33da,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__19_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__19_lambda,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4b098c6d9b9e3b8992307dfc41d419ad,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__1_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__1_lambda,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_89ca334ba35148ae265e6c86f655368b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__20_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__20_lambda,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e7033fd63b0c85324c9e7b2ef1983cdd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__21_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__21_lambda,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3e214168a69000b625f47382eddd3efc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__22_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__22_lambda,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bf0acf71324c92d2827e431c17cdba64,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__23_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__23_lambda,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_36ab11aff1ab6c17655dc151fabb2d55,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__2_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__2_lambda,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b3e4b355fc41ead8b82cb1817876d8b6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__3_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__3_lambda,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4c96b31685b868145e1ae1aaadb43900,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__4_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__4_lambda,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3ffc2f7c4f1769ec4baae0c0884ec70b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__5_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__5_lambda,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8b2177ee9a7142432fb188d6782f788b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__6_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__6_lambda,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ea393623f1fd968d6aadb2fc7d89e53a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__7_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__7_lambda,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b847b48a19bb80bc12756cb1b2e2c0bc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__8_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__8_lambda,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2a32f0cd24bfa4aa93175a2d79e96ea4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__9_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_prompt_toolkit$filters$cli$$$function__9_lambda,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d626710d05b3410d8d14e356e3bae488,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_prompt_toolkit$filters$cli,
        NULL,
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

static function_impl_code const function_table_prompt_toolkit$filters$cli[] = {
    impl_prompt_toolkit$filters$cli$$$function__1_lambda,
    impl_prompt_toolkit$filters$cli$$$function__2_lambda,
    impl_prompt_toolkit$filters$cli$$$function__3_lambda,
    impl_prompt_toolkit$filters$cli$$$function__4_lambda,
    impl_prompt_toolkit$filters$cli$$$function__5_lambda,
    impl_prompt_toolkit$filters$cli$$$function__6_lambda,
    impl_prompt_toolkit$filters$cli$$$function__7_lambda,
    impl_prompt_toolkit$filters$cli$$$function__8_lambda,
    impl_prompt_toolkit$filters$cli$$$function__9_lambda,
    impl_prompt_toolkit$filters$cli$$$function__10_lambda,
    impl_prompt_toolkit$filters$cli$$$function__11_lambda,
    impl_prompt_toolkit$filters$cli$$$function__12_lambda,
    impl_prompt_toolkit$filters$cli$$$function__13_lambda,
    impl_prompt_toolkit$filters$cli$$$function__14_lambda,
    impl_prompt_toolkit$filters$cli$$$function__15_lambda,
    impl_prompt_toolkit$filters$cli$$$function__16_lambda,
    impl_prompt_toolkit$filters$cli$$$function__17_lambda,
    impl_prompt_toolkit$filters$cli$$$function__18_lambda,
    impl_prompt_toolkit$filters$cli$$$function__19_lambda,
    impl_prompt_toolkit$filters$cli$$$function__20_lambda,
    impl_prompt_toolkit$filters$cli$$$function__21_lambda,
    impl_prompt_toolkit$filters$cli$$$function__22_lambda,
    impl_prompt_toolkit$filters$cli$$$function__23_lambda,
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

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_prompt_toolkit$filters$cli);

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
        module_prompt_toolkit$filters$cli,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        function_table_prompt_toolkit$filters$cli,
        sizeof(function_table_prompt_toolkit$filters$cli) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_prompt_toolkit$filters$cli(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("prompt_toolkit$filters$cli");

    // Store the module for future use.
    module_prompt_toolkit$filters$cli = module;

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
        PRINT_STRING("prompt_toolkit$filters$cli: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("prompt_toolkit$filters$cli: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initprompt_toolkit$filters$cli\n");

    moduledict_prompt_toolkit$filters$cli = MODULE_DICT(module_prompt_toolkit$filters$cli);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_prompt_toolkit$filters$cli,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_prompt_toolkit$filters$cli,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[65]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_prompt_toolkit$filters$cli,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_prompt_toolkit$filters$cli,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_prompt_toolkit$filters$cli,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_prompt_toolkit$filters$cli);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_prompt_toolkit$filters$cli);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_300332c349648fb1a434dc40a994299b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[22];
        UPDATE_STRING_DICT0(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_2);
    }
    frame_300332c349648fb1a434dc40a994299b = MAKE_MODULE_FRAME(codeobj_300332c349648fb1a434dc40a994299b, module_prompt_toolkit$filters$cli);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_300332c349648fb1a434dc40a994299b);
    assert(Py_REFCNT(frame_300332c349648fb1a434dc40a994299b) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[26], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[25]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[27], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        {
            PyObject *hard_module = IMPORT_HARD___FUTURE__();
            tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tstate, hard_module, mod_consts[29]);
        }
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_4);
    }
    {
        PyObject *tmp_star_imported_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[30];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_prompt_toolkit$filters$cli;
        tmp_locals_arg_value_1 = (PyObject *)moduledict_prompt_toolkit$filters$cli;
        tmp_fromlist_value_1 = mod_consts[31];
        tmp_level_value_1 = mod_consts[32];
        frame_300332c349648fb1a434dc40a994299b->m_frame.f_lineno = 7;
        tmp_star_imported_1 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_star_imported_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(tstate, module_prompt_toolkit$filters$cli, true, tmp_star_imported_1);
        Py_DECREF(tmp_star_imported_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = LIST_COPY(mod_consts[33]);
        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;


        tmp_assign_source_6 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__1_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;


        tmp_assign_source_7 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__2_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;


        tmp_assign_source_8 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__3_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;


        tmp_assign_source_9 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__4_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;


        tmp_assign_source_10 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__5_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;


        tmp_assign_source_11 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__6_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;


        tmp_assign_source_12 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__7_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;


        tmp_assign_source_13 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__8_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;


        tmp_assign_source_14 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__9_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;


        tmp_assign_source_15 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__10_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;


        tmp_assign_source_16 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__11_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;


        tmp_assign_source_17 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__12_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;


        tmp_assign_source_18 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__13_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;


        tmp_assign_source_19 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__14_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;


        tmp_assign_source_20 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__15_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;


        tmp_assign_source_21 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__16_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;


        tmp_assign_source_22 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__17_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;


        tmp_assign_source_23 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__18_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;


        tmp_assign_source_24 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__19_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;


        tmp_assign_source_25 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__20_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;


        tmp_assign_source_26 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__21_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;


        tmp_assign_source_27 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__22_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;


        tmp_assign_source_28 = MAKE_FUNCTION_prompt_toolkit$filters$cli$$$function__23_lambda();

        UPDATE_STRING_DICT1(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_assign_source_29 == NULL)) {
            tmp_assign_source_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[59]);
        }

        if (tmp_assign_source_29 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_assign_source_30 == NULL)) {
            tmp_assign_source_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[61]);
        }

        if (tmp_assign_source_30 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_30);
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_300332c349648fb1a434dc40a994299b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_300332c349648fb1a434dc40a994299b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_300332c349648fb1a434dc40a994299b, exception_lineno);
    }



    assertFrameObject(frame_300332c349648fb1a434dc40a994299b);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("prompt_toolkit$filters$cli", false);

    Py_INCREF(module_prompt_toolkit$filters$cli);
    return module_prompt_toolkit$filters$cli;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_prompt_toolkit$filters$cli, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("prompt_toolkit$filters$cli", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
