/* Generated code for Python module 'pyvis$physics'
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

/* The "module_pyvis$physics" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pyvis$physics;
PyDictObject *moduledict_pyvis$physics;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[97];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[97];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(PyThreadState *tstate) {
    if (constants_created == false) {
        loadConstantsBlob(tstate, &mod_consts[0], UNTRANSLATE("pyvis.physics"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 97; i++) {
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
void checkModuleConstants_pyvis$physics(PyThreadState *tstate) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 97; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(tstate, mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_ae858997fe9736af0e78c8b246235fcb;
static PyCodeObject *codeobj_8c6cd3a27db039e56f7d235a018b6c8a;
static PyCodeObject *codeobj_dd1c09a1f5ab3a65515349c59d2b34c0;
static PyCodeObject *codeobj_07e48997e4eb9a097b32133ba27fcb0a;
static PyCodeObject *codeobj_100a1b1d865613c478c1e2d425d01a70;
static PyCodeObject *codeobj_f98ce744d36536e1819d98af3a50ffb4;
static PyCodeObject *codeobj_0d110cbee6878611ed01e7c7bff892d5;
static PyCodeObject *codeobj_0da85de0c1f6f79ef43e8cd7545909d5;
static PyCodeObject *codeobj_0c36121a09d37354b1d5ab5ebcaebdbf;
static PyCodeObject *codeobj_c57023a7498d9c92149292f69e4a42b8;
static PyCodeObject *codeobj_8e16ff8613e97e77db890ac68e118919;
static PyCodeObject *codeobj_d3914e44617befd4ac0ea2eeb47f8f75;
static PyCodeObject *codeobj_943799ca262bc975de20fd818d9a100d;
static PyCodeObject *codeobj_4e75635658f0f5622d0e33482784dc2b;
static PyCodeObject *codeobj_5598bc63f4086fb01aa3d272f0499e56;
static PyCodeObject *codeobj_b0ca97ad9171daa7f9fa5a8af28b1267;
static PyCodeObject *codeobj_6a064f956d605e9c1158639c8ae56f16;
static PyCodeObject *codeobj_820248758044ed19a84c2140a5c1b9a7;
static PyCodeObject *codeobj_5c4d0262f21de94bdc3d2e40160180f7;
static PyCodeObject *codeobj_c9dab561df75cae2dc8dc6ecc22c2761;
static PyCodeObject *codeobj_1a28dbe396363197233e6f8a842a12f5;
static PyCodeObject *codeobj_d9e79ef04e27e912f8dd5acf5e9f5a02;
static PyCodeObject *codeobj_07dc4cecf4e854480a4b40a55f90e98a;
static PyCodeObject *codeobj_41d0f98f9918f39fc1b36f4eeb6438a3;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[88]); CHECK_OBJECT(module_filename_obj);
    codeobj_ae858997fe9736af0e78c8b246235fcb = MAKE_CODE_OBJECT(module_filename_obj, 115, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[31], mod_consts[31], mod_consts[89], NULL, 1, 0, 0);
    codeobj_8c6cd3a27db039e56f7d235a018b6c8a = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[90], mod_consts[90], NULL, NULL, 0, 0, 0);
    codeobj_dd1c09a1f5ab3a65515349c59d2b34c0 = MAKE_CODE_OBJECT(module_filename_obj, 4, 0, mod_consts[44], mod_consts[44], mod_consts[91], NULL, 0, 0, 0);
    codeobj_07e48997e4eb9a097b32133ba27fcb0a = MAKE_CODE_OBJECT(module_filename_obj, 48, 0, mod_consts[25], mod_consts[25], mod_consts[91], NULL, 0, 0, 0);
    codeobj_100a1b1d865613c478c1e2d425d01a70 = MAKE_CODE_OBJECT(module_filename_obj, 74, 0, mod_consts[20], mod_consts[20], mod_consts[91], NULL, 0, 0, 0);
    codeobj_f98ce744d36536e1819d98af3a50ffb4 = MAKE_CODE_OBJECT(module_filename_obj, 8, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[45], mod_consts[45], mod_consts[92], NULL, 2, 0, 0);
    codeobj_0d110cbee6878611ed01e7c7bff892d5 = MAKE_CODE_OBJECT(module_filename_obj, 78, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[45], mod_consts[45], mod_consts[92], NULL, 2, 0, 0);
    codeobj_0da85de0c1f6f79ef43e8cd7545909d5 = MAKE_CODE_OBJECT(module_filename_obj, 81, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[59], mod_consts[59], mod_consts[93], NULL, 1, 0, 0);
    codeobj_0c36121a09d37354b1d5ab5ebcaebdbf = MAKE_CODE_OBJECT(module_filename_obj, 91, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[59], mod_consts[59], mod_consts[93], NULL, 1, 0, 0);
    codeobj_c57023a7498d9c92149292f69e4a42b8 = MAKE_CODE_OBJECT(module_filename_obj, 20, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[59], mod_consts[59], mod_consts[94], NULL, 2, 0, 0);
    codeobj_8e16ff8613e97e77db890ac68e118919 = MAKE_CODE_OBJECT(module_filename_obj, 40, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[59], mod_consts[59], mod_consts[94], NULL, 2, 0, 0);
    codeobj_d3914e44617befd4ac0ea2eeb47f8f75 = MAKE_CODE_OBJECT(module_filename_obj, 54, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[59], mod_consts[59], mod_consts[94], NULL, 2, 0, 0);
    codeobj_943799ca262bc975de20fd818d9a100d = MAKE_CODE_OBJECT(module_filename_obj, 67, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[59], mod_consts[59], mod_consts[94], NULL, 2, 0, 0);
    codeobj_4e75635658f0f5622d0e33482784dc2b = MAKE_CODE_OBJECT(module_filename_obj, 11, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[54], mod_consts[54], mod_consts[93], NULL, 1, 0, 0);
    codeobj_5598bc63f4086fb01aa3d272f0499e56 = MAKE_CODE_OBJECT(module_filename_obj, 14, 0, mod_consts[22], mod_consts[22], mod_consts[91], NULL, 0, 0, 0);
    codeobj_b0ca97ad9171daa7f9fa5a8af28b1267 = MAKE_CODE_OBJECT(module_filename_obj, 29, 0, mod_consts[23], mod_consts[23], mod_consts[91], NULL, 0, 0, 0);
    codeobj_6a064f956d605e9c1158639c8ae56f16 = MAKE_CODE_OBJECT(module_filename_obj, 61, 0, mod_consts[27], mod_consts[27], mod_consts[91], NULL, 0, 0, 0);
    codeobj_820248758044ed19a84c2140a5c1b9a7 = MAKE_CODE_OBJECT(module_filename_obj, 113, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[86], mod_consts[86], mod_consts[93], NULL, 1, 0, 0);
    codeobj_5c4d0262f21de94bdc3d2e40160180f7 = MAKE_CODE_OBJECT(module_filename_obj, 88, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[28], mod_consts[28], mod_consts[95], NULL, 2, 0, 0);
    codeobj_c9dab561df75cae2dc8dc6ecc22c2761 = MAKE_CODE_OBJECT(module_filename_obj, 110, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[28], mod_consts[28], mod_consts[95], NULL, 2, 0, 0);
    codeobj_1a28dbe396363197233e6f8a842a12f5 = MAKE_CODE_OBJECT(module_filename_obj, 95, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[77], mod_consts[77], mod_consts[94], NULL, 2, 0, 0);
    codeobj_d9e79ef04e27e912f8dd5acf5e9f5a02 = MAKE_CODE_OBJECT(module_filename_obj, 98, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[79], mod_consts[79], mod_consts[94], NULL, 2, 0, 0);
    codeobj_07dc4cecf4e854480a4b40a55f90e98a = MAKE_CODE_OBJECT(module_filename_obj, 106, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[83], mod_consts[83], mod_consts[94], NULL, 2, 0, 0);
    codeobj_41d0f98f9918f39fc1b36f4eeb6438a3 = MAKE_CODE_OBJECT(module_filename_obj, 102, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[81], mod_consts[81], mod_consts[94], NULL, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyThreadState *tstate, PyObject **python_pars);


static PyObject *MAKE_FUNCTION_pyvis$physics$$$function__10___init__();


static PyObject *MAKE_FUNCTION_pyvis$physics$$$function__11_use_barnes_hut();


static PyObject *MAKE_FUNCTION_pyvis$physics$$$function__12_use_force_atlas_2based();


static PyObject *MAKE_FUNCTION_pyvis$physics$$$function__13_use_repulsion();


static PyObject *MAKE_FUNCTION_pyvis$physics$$$function__14_use_hrepulsion();


static PyObject *MAKE_FUNCTION_pyvis$physics$$$function__15_toggle_stabilization();


static PyObject *MAKE_FUNCTION_pyvis$physics$$$function__16_to_json();


static PyObject *MAKE_FUNCTION_pyvis$physics$$$function__16_to_json$$$function__1_lambda();


static PyObject *MAKE_FUNCTION_pyvis$physics$$$function__1___getitem__();


static PyObject *MAKE_FUNCTION_pyvis$physics$$$function__2___repr__();


static PyObject *MAKE_FUNCTION_pyvis$physics$$$function__3___init__();


static PyObject *MAKE_FUNCTION_pyvis$physics$$$function__4___init__();


static PyObject *MAKE_FUNCTION_pyvis$physics$$$function__5___init__();


static PyObject *MAKE_FUNCTION_pyvis$physics$$$function__6___init__();


static PyObject *MAKE_FUNCTION_pyvis$physics$$$function__7___getitem__();


static PyObject *MAKE_FUNCTION_pyvis$physics$$$function__8___init__();


static PyObject *MAKE_FUNCTION_pyvis$physics$$$function__9_toggle_stabilization();


// The module function definitions.
static PyObject *impl_pyvis$physics$$$function__1___getitem__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_item = python_pars[1];
    struct Nuitka_FrameObject *frame_f98ce744d36536e1819d98af3a50ffb4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f98ce744d36536e1819d98af3a50ffb4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f98ce744d36536e1819d98af3a50ffb4)) {
        Py_XDECREF(cache_frame_f98ce744d36536e1819d98af3a50ffb4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f98ce744d36536e1819d98af3a50ffb4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f98ce744d36536e1819d98af3a50ffb4 = MAKE_FUNCTION_FRAME(tstate, codeobj_f98ce744d36536e1819d98af3a50ffb4, module_pyvis$physics, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f98ce744d36536e1819d98af3a50ffb4->m_type_description == NULL);
    frame_f98ce744d36536e1819d98af3a50ffb4 = cache_frame_f98ce744d36536e1819d98af3a50ffb4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_f98ce744d36536e1819d98af3a50ffb4);
    assert(Py_REFCNT(frame_f98ce744d36536e1819d98af3a50ffb4) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE_DICT_SLOT(tstate, tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_item);
        tmp_subscript_value_1 = par_item;
        tmp_return_value = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;
            type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_f98ce744d36536e1819d98af3a50ffb4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f98ce744d36536e1819d98af3a50ffb4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f98ce744d36536e1819d98af3a50ffb4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f98ce744d36536e1819d98af3a50ffb4,
        type_description_1,
        par_self,
        par_item
    );


    // Release cached frame if used for exception.
    if (frame_f98ce744d36536e1819d98af3a50ffb4 == cache_frame_f98ce744d36536e1819d98af3a50ffb4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f98ce744d36536e1819d98af3a50ffb4);
        cache_frame_f98ce744d36536e1819d98af3a50ffb4 = NULL;
    }

    assertFrameObject(frame_f98ce744d36536e1819d98af3a50ffb4);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_item);
    Py_DECREF(par_item);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_item);
    Py_DECREF(par_item);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyvis$physics$$$function__2___repr__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_4e75635658f0f5622d0e33482784dc2b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4e75635658f0f5622d0e33482784dc2b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4e75635658f0f5622d0e33482784dc2b)) {
        Py_XDECREF(cache_frame_4e75635658f0f5622d0e33482784dc2b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4e75635658f0f5622d0e33482784dc2b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4e75635658f0f5622d0e33482784dc2b = MAKE_FUNCTION_FRAME(tstate, codeobj_4e75635658f0f5622d0e33482784dc2b, module_pyvis$physics, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4e75635658f0f5622d0e33482784dc2b->m_type_description == NULL);
    frame_4e75635658f0f5622d0e33482784dc2b = cache_frame_4e75635658f0f5622d0e33482784dc2b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_4e75635658f0f5622d0e33482784dc2b);
    assert(Py_REFCNT(frame_4e75635658f0f5622d0e33482784dc2b) == 2);

    // Framed code:
    {
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_unicode_arg_1 = LOOKUP_ATTRIBUTE_DICT_SLOT(tstate, tmp_expression_value_1);
        if (tmp_unicode_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        Py_DECREF(tmp_unicode_arg_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;
            type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_4e75635658f0f5622d0e33482784dc2b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4e75635658f0f5622d0e33482784dc2b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4e75635658f0f5622d0e33482784dc2b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4e75635658f0f5622d0e33482784dc2b,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_4e75635658f0f5622d0e33482784dc2b == cache_frame_4e75635658f0f5622d0e33482784dc2b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4e75635658f0f5622d0e33482784dc2b);
        cache_frame_4e75635658f0f5622d0e33482784dc2b = NULL;
    }

    assertFrameObject(frame_4e75635658f0f5622d0e33482784dc2b);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyvis$physics$$$function__3___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_params = python_pars[1];
    struct Nuitka_FrameObject *frame_c57023a7498d9c92149292f69e4a42b8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_c57023a7498d9c92149292f69e4a42b8 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c57023a7498d9c92149292f69e4a42b8)) {
        Py_XDECREF(cache_frame_c57023a7498d9c92149292f69e4a42b8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c57023a7498d9c92149292f69e4a42b8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c57023a7498d9c92149292f69e4a42b8 = MAKE_FUNCTION_FRAME(tstate, codeobj_c57023a7498d9c92149292f69e4a42b8, module_pyvis$physics, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c57023a7498d9c92149292f69e4a42b8->m_type_description == NULL);
    frame_c57023a7498d9c92149292f69e4a42b8 = cache_frame_c57023a7498d9c92149292f69e4a42b8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c57023a7498d9c92149292f69e4a42b8);
    assert(Py_REFCNT(frame_c57023a7498d9c92149292f69e4a42b8) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_params);
        tmp_expression_value_1 = par_params;
        tmp_subscript_value_1 = mod_consts[0];
        tmp_assattr_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[1], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_params);
        tmp_expression_value_2 = par_params;
        tmp_subscript_value_2 = mod_consts[2];
        tmp_assattr_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_assattr_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[3], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_params);
        tmp_expression_value_3 = par_params;
        tmp_subscript_value_3 = mod_consts[4];
        tmp_assattr_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_3);
        if (tmp_assattr_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[5], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_params);
        tmp_expression_value_4 = par_params;
        tmp_subscript_value_4 = mod_consts[6];
        tmp_assattr_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_4);
        if (tmp_assattr_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[7], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_params);
        tmp_expression_value_5 = par_params;
        tmp_subscript_value_5 = mod_consts[8];
        tmp_assattr_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_5);
        if (tmp_assattr_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[8], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(par_params);
        tmp_expression_value_6 = par_params;
        tmp_subscript_value_6 = mod_consts[9];
        tmp_assattr_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_6);
        if (tmp_assattr_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts[10], tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c57023a7498d9c92149292f69e4a42b8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c57023a7498d9c92149292f69e4a42b8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c57023a7498d9c92149292f69e4a42b8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c57023a7498d9c92149292f69e4a42b8,
        type_description_1,
        par_self,
        par_params
    );


    // Release cached frame if used for exception.
    if (frame_c57023a7498d9c92149292f69e4a42b8 == cache_frame_c57023a7498d9c92149292f69e4a42b8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c57023a7498d9c92149292f69e4a42b8);
        cache_frame_c57023a7498d9c92149292f69e4a42b8 = NULL;
    }

    assertFrameObject(frame_c57023a7498d9c92149292f69e4a42b8);

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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyvis$physics$$$function__4___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_params = python_pars[1];
    struct Nuitka_FrameObject *frame_8e16ff8613e97e77db890ac68e118919;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_8e16ff8613e97e77db890ac68e118919 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8e16ff8613e97e77db890ac68e118919)) {
        Py_XDECREF(cache_frame_8e16ff8613e97e77db890ac68e118919);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8e16ff8613e97e77db890ac68e118919 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8e16ff8613e97e77db890ac68e118919 = MAKE_FUNCTION_FRAME(tstate, codeobj_8e16ff8613e97e77db890ac68e118919, module_pyvis$physics, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8e16ff8613e97e77db890ac68e118919->m_type_description == NULL);
    frame_8e16ff8613e97e77db890ac68e118919 = cache_frame_8e16ff8613e97e77db890ac68e118919;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_8e16ff8613e97e77db890ac68e118919);
    assert(Py_REFCNT(frame_8e16ff8613e97e77db890ac68e118919) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_params);
        tmp_expression_value_1 = par_params;
        tmp_subscript_value_1 = mod_consts[0];
        tmp_assattr_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[1], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_params);
        tmp_expression_value_2 = par_params;
        tmp_subscript_value_2 = mod_consts[2];
        tmp_assattr_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_assattr_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[3], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_params);
        tmp_expression_value_3 = par_params;
        tmp_subscript_value_3 = mod_consts[4];
        tmp_assattr_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_3);
        if (tmp_assattr_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[5], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_params);
        tmp_expression_value_4 = par_params;
        tmp_subscript_value_4 = mod_consts[6];
        tmp_assattr_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_4);
        if (tmp_assattr_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[7], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_params);
        tmp_expression_value_5 = par_params;
        tmp_subscript_value_5 = mod_consts[8];
        tmp_assattr_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_5);
        if (tmp_assattr_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[8], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(par_params);
        tmp_expression_value_6 = par_params;
        tmp_subscript_value_6 = mod_consts[9];
        tmp_assattr_value_6 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_6, tmp_subscript_value_6);
        if (tmp_assattr_value_6 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_6, mod_consts[10], tmp_assattr_value_6);
        Py_DECREF(tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8e16ff8613e97e77db890ac68e118919, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8e16ff8613e97e77db890ac68e118919->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8e16ff8613e97e77db890ac68e118919, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8e16ff8613e97e77db890ac68e118919,
        type_description_1,
        par_self,
        par_params
    );


    // Release cached frame if used for exception.
    if (frame_8e16ff8613e97e77db890ac68e118919 == cache_frame_8e16ff8613e97e77db890ac68e118919) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8e16ff8613e97e77db890ac68e118919);
        cache_frame_8e16ff8613e97e77db890ac68e118919 = NULL;
    }

    assertFrameObject(frame_8e16ff8613e97e77db890ac68e118919);

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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyvis$physics$$$function__5___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_params = python_pars[1];
    struct Nuitka_FrameObject *frame_d3914e44617befd4ac0ea2eeb47f8f75;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_d3914e44617befd4ac0ea2eeb47f8f75 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d3914e44617befd4ac0ea2eeb47f8f75)) {
        Py_XDECREF(cache_frame_d3914e44617befd4ac0ea2eeb47f8f75);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d3914e44617befd4ac0ea2eeb47f8f75 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d3914e44617befd4ac0ea2eeb47f8f75 = MAKE_FUNCTION_FRAME(tstate, codeobj_d3914e44617befd4ac0ea2eeb47f8f75, module_pyvis$physics, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d3914e44617befd4ac0ea2eeb47f8f75->m_type_description == NULL);
    frame_d3914e44617befd4ac0ea2eeb47f8f75 = cache_frame_d3914e44617befd4ac0ea2eeb47f8f75;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d3914e44617befd4ac0ea2eeb47f8f75);
    assert(Py_REFCNT(frame_d3914e44617befd4ac0ea2eeb47f8f75) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_params);
        tmp_expression_value_1 = par_params;
        tmp_subscript_value_1 = mod_consts[11];
        tmp_assattr_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[12], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_params);
        tmp_expression_value_2 = par_params;
        tmp_subscript_value_2 = mod_consts[2];
        tmp_assattr_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_assattr_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[3], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_params);
        tmp_expression_value_3 = par_params;
        tmp_subscript_value_3 = mod_consts[4];
        tmp_assattr_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_3);
        if (tmp_assattr_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[5], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_params);
        tmp_expression_value_4 = par_params;
        tmp_subscript_value_4 = mod_consts[6];
        tmp_assattr_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_4);
        if (tmp_assattr_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[7], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_params);
        tmp_expression_value_5 = par_params;
        tmp_subscript_value_5 = mod_consts[8];
        tmp_assattr_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_5);
        if (tmp_assattr_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[8], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d3914e44617befd4ac0ea2eeb47f8f75, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d3914e44617befd4ac0ea2eeb47f8f75->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d3914e44617befd4ac0ea2eeb47f8f75, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d3914e44617befd4ac0ea2eeb47f8f75,
        type_description_1,
        par_self,
        par_params
    );


    // Release cached frame if used for exception.
    if (frame_d3914e44617befd4ac0ea2eeb47f8f75 == cache_frame_d3914e44617befd4ac0ea2eeb47f8f75) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d3914e44617befd4ac0ea2eeb47f8f75);
        cache_frame_d3914e44617befd4ac0ea2eeb47f8f75 = NULL;
    }

    assertFrameObject(frame_d3914e44617befd4ac0ea2eeb47f8f75);

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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyvis$physics$$$function__6___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_params = python_pars[1];
    struct Nuitka_FrameObject *frame_943799ca262bc975de20fd818d9a100d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_943799ca262bc975de20fd818d9a100d = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_943799ca262bc975de20fd818d9a100d)) {
        Py_XDECREF(cache_frame_943799ca262bc975de20fd818d9a100d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_943799ca262bc975de20fd818d9a100d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_943799ca262bc975de20fd818d9a100d = MAKE_FUNCTION_FRAME(tstate, codeobj_943799ca262bc975de20fd818d9a100d, module_pyvis$physics, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_943799ca262bc975de20fd818d9a100d->m_type_description == NULL);
    frame_943799ca262bc975de20fd818d9a100d = cache_frame_943799ca262bc975de20fd818d9a100d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_943799ca262bc975de20fd818d9a100d);
    assert(Py_REFCNT(frame_943799ca262bc975de20fd818d9a100d) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_params);
        tmp_expression_value_1 = par_params;
        tmp_subscript_value_1 = mod_consts[11];
        tmp_assattr_value_1 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[12], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_params);
        tmp_expression_value_2 = par_params;
        tmp_subscript_value_2 = mod_consts[2];
        tmp_assattr_value_2 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_assattr_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[3], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_params);
        tmp_expression_value_3 = par_params;
        tmp_subscript_value_3 = mod_consts[4];
        tmp_assattr_value_3 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_3, tmp_subscript_value_3);
        if (tmp_assattr_value_3 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[5], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_params);
        tmp_expression_value_4 = par_params;
        tmp_subscript_value_4 = mod_consts[6];
        tmp_assattr_value_4 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_4, tmp_subscript_value_4);
        if (tmp_assattr_value_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[7], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_params);
        tmp_expression_value_5 = par_params;
        tmp_subscript_value_5 = mod_consts[8];
        tmp_assattr_value_5 = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_5, tmp_subscript_value_5);
        if (tmp_assattr_value_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[8], tmp_assattr_value_5);
        Py_DECREF(tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_943799ca262bc975de20fd818d9a100d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_943799ca262bc975de20fd818d9a100d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_943799ca262bc975de20fd818d9a100d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_943799ca262bc975de20fd818d9a100d,
        type_description_1,
        par_self,
        par_params
    );


    // Release cached frame if used for exception.
    if (frame_943799ca262bc975de20fd818d9a100d == cache_frame_943799ca262bc975de20fd818d9a100d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_943799ca262bc975de20fd818d9a100d);
        cache_frame_943799ca262bc975de20fd818d9a100d = NULL;
    }

    assertFrameObject(frame_943799ca262bc975de20fd818d9a100d);

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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyvis$physics$$$function__7___getitem__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_item = python_pars[1];
    struct Nuitka_FrameObject *frame_0d110cbee6878611ed01e7c7bff892d5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0d110cbee6878611ed01e7c7bff892d5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0d110cbee6878611ed01e7c7bff892d5)) {
        Py_XDECREF(cache_frame_0d110cbee6878611ed01e7c7bff892d5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0d110cbee6878611ed01e7c7bff892d5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0d110cbee6878611ed01e7c7bff892d5 = MAKE_FUNCTION_FRAME(tstate, codeobj_0d110cbee6878611ed01e7c7bff892d5, module_pyvis$physics, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0d110cbee6878611ed01e7c7bff892d5->m_type_description == NULL);
    frame_0d110cbee6878611ed01e7c7bff892d5 = cache_frame_0d110cbee6878611ed01e7c7bff892d5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_0d110cbee6878611ed01e7c7bff892d5);
    assert(Py_REFCNT(frame_0d110cbee6878611ed01e7c7bff892d5) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE_DICT_SLOT(tstate, tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_item);
        tmp_subscript_value_1 = par_item;
        tmp_return_value = LOOKUP_SUBSCRIPT(tstate, tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oo";
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
        exception_tb = MAKE_TRACEBACK(frame_0d110cbee6878611ed01e7c7bff892d5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0d110cbee6878611ed01e7c7bff892d5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0d110cbee6878611ed01e7c7bff892d5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0d110cbee6878611ed01e7c7bff892d5,
        type_description_1,
        par_self,
        par_item
    );


    // Release cached frame if used for exception.
    if (frame_0d110cbee6878611ed01e7c7bff892d5 == cache_frame_0d110cbee6878611ed01e7c7bff892d5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0d110cbee6878611ed01e7c7bff892d5);
        cache_frame_0d110cbee6878611ed01e7c7bff892d5 = NULL;
    }

    assertFrameObject(frame_0d110cbee6878611ed01e7c7bff892d5);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_item);
    Py_DECREF(par_item);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_item);
    Py_DECREF(par_item);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyvis$physics$$$function__8___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_0da85de0c1f6f79ef43e8cd7545909d5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0da85de0c1f6f79ef43e8cd7545909d5 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0da85de0c1f6f79ef43e8cd7545909d5)) {
        Py_XDECREF(cache_frame_0da85de0c1f6f79ef43e8cd7545909d5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0da85de0c1f6f79ef43e8cd7545909d5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0da85de0c1f6f79ef43e8cd7545909d5 = MAKE_FUNCTION_FRAME(tstate, codeobj_0da85de0c1f6f79ef43e8cd7545909d5, module_pyvis$physics, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0da85de0c1f6f79ef43e8cd7545909d5->m_type_description == NULL);
    frame_0da85de0c1f6f79ef43e8cd7545909d5 = cache_frame_0da85de0c1f6f79ef43e8cd7545909d5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_0da85de0c1f6f79ef43e8cd7545909d5);
    assert(Py_REFCNT(frame_0da85de0c1f6f79ef43e8cd7545909d5) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = Py_True;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[13], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = mod_consts[14];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[15], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = mod_consts[16];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_3, mod_consts[17], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_value_4 = Py_False;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_4, mod_consts[18], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        tmp_assattr_value_5 = Py_True;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_5, mod_consts[19], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0da85de0c1f6f79ef43e8cd7545909d5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0da85de0c1f6f79ef43e8cd7545909d5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0da85de0c1f6f79ef43e8cd7545909d5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0da85de0c1f6f79ef43e8cd7545909d5,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_0da85de0c1f6f79ef43e8cd7545909d5 == cache_frame_0da85de0c1f6f79ef43e8cd7545909d5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0da85de0c1f6f79ef43e8cd7545909d5);
        cache_frame_0da85de0c1f6f79ef43e8cd7545909d5 = NULL;
    }

    assertFrameObject(frame_0da85de0c1f6f79ef43e8cd7545909d5);

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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyvis$physics$$$function__9_toggle_stabilization(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_status = python_pars[1];
    struct Nuitka_FrameObject *frame_5c4d0262f21de94bdc3d2e40160180f7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5c4d0262f21de94bdc3d2e40160180f7 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5c4d0262f21de94bdc3d2e40160180f7)) {
        Py_XDECREF(cache_frame_5c4d0262f21de94bdc3d2e40160180f7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5c4d0262f21de94bdc3d2e40160180f7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5c4d0262f21de94bdc3d2e40160180f7 = MAKE_FUNCTION_FRAME(tstate, codeobj_5c4d0262f21de94bdc3d2e40160180f7, module_pyvis$physics, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5c4d0262f21de94bdc3d2e40160180f7->m_type_description == NULL);
    frame_5c4d0262f21de94bdc3d2e40160180f7 = cache_frame_5c4d0262f21de94bdc3d2e40160180f7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_5c4d0262f21de94bdc3d2e40160180f7);
    assert(Py_REFCNT(frame_5c4d0262f21de94bdc3d2e40160180f7) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_status);
        tmp_assattr_value_1 = par_status;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[13], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5c4d0262f21de94bdc3d2e40160180f7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5c4d0262f21de94bdc3d2e40160180f7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5c4d0262f21de94bdc3d2e40160180f7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5c4d0262f21de94bdc3d2e40160180f7,
        type_description_1,
        par_self,
        par_status
    );


    // Release cached frame if used for exception.
    if (frame_5c4d0262f21de94bdc3d2e40160180f7 == cache_frame_5c4d0262f21de94bdc3d2e40160180f7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5c4d0262f21de94bdc3d2e40160180f7);
        cache_frame_5c4d0262f21de94bdc3d2e40160180f7 = NULL;
    }

    assertFrameObject(frame_5c4d0262f21de94bdc3d2e40160180f7);

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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_status);
    Py_DECREF(par_status);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_status);
    Py_DECREF(par_status);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyvis$physics$$$function__10___init__(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_0c36121a09d37354b1d5ab5ebcaebdbf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0c36121a09d37354b1d5ab5ebcaebdbf = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0c36121a09d37354b1d5ab5ebcaebdbf)) {
        Py_XDECREF(cache_frame_0c36121a09d37354b1d5ab5ebcaebdbf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0c36121a09d37354b1d5ab5ebcaebdbf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0c36121a09d37354b1d5ab5ebcaebdbf = MAKE_FUNCTION_FRAME(tstate, codeobj_0c36121a09d37354b1d5ab5ebcaebdbf, module_pyvis$physics, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0c36121a09d37354b1d5ab5ebcaebdbf->m_type_description == NULL);
    frame_0c36121a09d37354b1d5ab5ebcaebdbf = cache_frame_0c36121a09d37354b1d5ab5ebcaebdbf;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_0c36121a09d37354b1d5ab5ebcaebdbf);
    assert(Py_REFCNT(frame_0c36121a09d37354b1d5ab5ebcaebdbf) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = Py_True;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[13], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_0c36121a09d37354b1d5ab5ebcaebdbf->m_frame.f_lineno = 93;
        tmp_assattr_value_2 = CALL_METHOD_NO_ARGS(tstate, tmp_called_instance_1, mod_consts[20]);
        if (tmp_assattr_value_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[21], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0c36121a09d37354b1d5ab5ebcaebdbf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0c36121a09d37354b1d5ab5ebcaebdbf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0c36121a09d37354b1d5ab5ebcaebdbf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0c36121a09d37354b1d5ab5ebcaebdbf,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_0c36121a09d37354b1d5ab5ebcaebdbf == cache_frame_0c36121a09d37354b1d5ab5ebcaebdbf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0c36121a09d37354b1d5ab5ebcaebdbf);
        cache_frame_0c36121a09d37354b1d5ab5ebcaebdbf = NULL;
    }

    assertFrameObject(frame_0c36121a09d37354b1d5ab5ebcaebdbf);

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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyvis$physics$$$function__11_use_barnes_hut(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_params = python_pars[1];
    struct Nuitka_FrameObject *frame_1a28dbe396363197233e6f8a842a12f5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_1a28dbe396363197233e6f8a842a12f5 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1a28dbe396363197233e6f8a842a12f5)) {
        Py_XDECREF(cache_frame_1a28dbe396363197233e6f8a842a12f5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1a28dbe396363197233e6f8a842a12f5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1a28dbe396363197233e6f8a842a12f5 = MAKE_FUNCTION_FRAME(tstate, codeobj_1a28dbe396363197233e6f8a842a12f5, module_pyvis$physics, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1a28dbe396363197233e6f8a842a12f5->m_type_description == NULL);
    frame_1a28dbe396363197233e6f8a842a12f5 = cache_frame_1a28dbe396363197233e6f8a842a12f5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_1a28dbe396363197233e6f8a842a12f5);
    assert(Py_REFCNT(frame_1a28dbe396363197233e6f8a842a12f5) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_params);
        tmp_args_element_value_1 = par_params;
        frame_1a28dbe396363197233e6f8a842a12f5->m_frame.f_lineno = 96;
        tmp_assattr_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[22], tmp_args_element_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[22], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1a28dbe396363197233e6f8a842a12f5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1a28dbe396363197233e6f8a842a12f5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1a28dbe396363197233e6f8a842a12f5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1a28dbe396363197233e6f8a842a12f5,
        type_description_1,
        par_self,
        par_params
    );


    // Release cached frame if used for exception.
    if (frame_1a28dbe396363197233e6f8a842a12f5 == cache_frame_1a28dbe396363197233e6f8a842a12f5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1a28dbe396363197233e6f8a842a12f5);
        cache_frame_1a28dbe396363197233e6f8a842a12f5 = NULL;
    }

    assertFrameObject(frame_1a28dbe396363197233e6f8a842a12f5);

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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyvis$physics$$$function__12_use_force_atlas_2based(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_params = python_pars[1];
    struct Nuitka_FrameObject *frame_d9e79ef04e27e912f8dd5acf5e9f5a02;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_d9e79ef04e27e912f8dd5acf5e9f5a02 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d9e79ef04e27e912f8dd5acf5e9f5a02)) {
        Py_XDECREF(cache_frame_d9e79ef04e27e912f8dd5acf5e9f5a02);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d9e79ef04e27e912f8dd5acf5e9f5a02 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d9e79ef04e27e912f8dd5acf5e9f5a02 = MAKE_FUNCTION_FRAME(tstate, codeobj_d9e79ef04e27e912f8dd5acf5e9f5a02, module_pyvis$physics, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d9e79ef04e27e912f8dd5acf5e9f5a02->m_type_description == NULL);
    frame_d9e79ef04e27e912f8dd5acf5e9f5a02 = cache_frame_d9e79ef04e27e912f8dd5acf5e9f5a02;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_d9e79ef04e27e912f8dd5acf5e9f5a02);
    assert(Py_REFCNT(frame_d9e79ef04e27e912f8dd5acf5e9f5a02) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_params);
        tmp_args_element_value_1 = par_params;
        frame_d9e79ef04e27e912f8dd5acf5e9f5a02->m_frame.f_lineno = 99;
        tmp_assattr_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[23], tmp_args_element_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[23], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = mod_consts[23];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[24], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d9e79ef04e27e912f8dd5acf5e9f5a02, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d9e79ef04e27e912f8dd5acf5e9f5a02->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d9e79ef04e27e912f8dd5acf5e9f5a02, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d9e79ef04e27e912f8dd5acf5e9f5a02,
        type_description_1,
        par_self,
        par_params
    );


    // Release cached frame if used for exception.
    if (frame_d9e79ef04e27e912f8dd5acf5e9f5a02 == cache_frame_d9e79ef04e27e912f8dd5acf5e9f5a02) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d9e79ef04e27e912f8dd5acf5e9f5a02);
        cache_frame_d9e79ef04e27e912f8dd5acf5e9f5a02 = NULL;
    }

    assertFrameObject(frame_d9e79ef04e27e912f8dd5acf5e9f5a02);

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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyvis$physics$$$function__13_use_repulsion(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_params = python_pars[1];
    struct Nuitka_FrameObject *frame_41d0f98f9918f39fc1b36f4eeb6438a3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_41d0f98f9918f39fc1b36f4eeb6438a3 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_41d0f98f9918f39fc1b36f4eeb6438a3)) {
        Py_XDECREF(cache_frame_41d0f98f9918f39fc1b36f4eeb6438a3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_41d0f98f9918f39fc1b36f4eeb6438a3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_41d0f98f9918f39fc1b36f4eeb6438a3 = MAKE_FUNCTION_FRAME(tstate, codeobj_41d0f98f9918f39fc1b36f4eeb6438a3, module_pyvis$physics, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_41d0f98f9918f39fc1b36f4eeb6438a3->m_type_description == NULL);
    frame_41d0f98f9918f39fc1b36f4eeb6438a3 = cache_frame_41d0f98f9918f39fc1b36f4eeb6438a3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_41d0f98f9918f39fc1b36f4eeb6438a3);
    assert(Py_REFCNT(frame_41d0f98f9918f39fc1b36f4eeb6438a3) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_params);
        tmp_args_element_value_1 = par_params;
        frame_41d0f98f9918f39fc1b36f4eeb6438a3->m_frame.f_lineno = 103;
        tmp_assattr_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[25], tmp_args_element_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[26], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = mod_consts[26];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[24], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_41d0f98f9918f39fc1b36f4eeb6438a3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_41d0f98f9918f39fc1b36f4eeb6438a3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_41d0f98f9918f39fc1b36f4eeb6438a3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_41d0f98f9918f39fc1b36f4eeb6438a3,
        type_description_1,
        par_self,
        par_params
    );


    // Release cached frame if used for exception.
    if (frame_41d0f98f9918f39fc1b36f4eeb6438a3 == cache_frame_41d0f98f9918f39fc1b36f4eeb6438a3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_41d0f98f9918f39fc1b36f4eeb6438a3);
        cache_frame_41d0f98f9918f39fc1b36f4eeb6438a3 = NULL;
    }

    assertFrameObject(frame_41d0f98f9918f39fc1b36f4eeb6438a3);

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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyvis$physics$$$function__14_use_hrepulsion(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_params = python_pars[1];
    struct Nuitka_FrameObject *frame_07dc4cecf4e854480a4b40a55f90e98a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_07dc4cecf4e854480a4b40a55f90e98a = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_07dc4cecf4e854480a4b40a55f90e98a)) {
        Py_XDECREF(cache_frame_07dc4cecf4e854480a4b40a55f90e98a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_07dc4cecf4e854480a4b40a55f90e98a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_07dc4cecf4e854480a4b40a55f90e98a = MAKE_FUNCTION_FRAME(tstate, codeobj_07dc4cecf4e854480a4b40a55f90e98a, module_pyvis$physics, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_07dc4cecf4e854480a4b40a55f90e98a->m_type_description == NULL);
    frame_07dc4cecf4e854480a4b40a55f90e98a = cache_frame_07dc4cecf4e854480a4b40a55f90e98a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_07dc4cecf4e854480a4b40a55f90e98a);
    assert(Py_REFCNT(frame_07dc4cecf4e854480a4b40a55f90e98a) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_params);
        tmp_args_element_value_1 = par_params;
        frame_07dc4cecf4e854480a4b40a55f90e98a->m_frame.f_lineno = 107;
        tmp_assattr_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[27], tmp_args_element_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[27], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = mod_consts[27];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[24], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_07dc4cecf4e854480a4b40a55f90e98a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_07dc4cecf4e854480a4b40a55f90e98a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_07dc4cecf4e854480a4b40a55f90e98a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_07dc4cecf4e854480a4b40a55f90e98a,
        type_description_1,
        par_self,
        par_params
    );


    // Release cached frame if used for exception.
    if (frame_07dc4cecf4e854480a4b40a55f90e98a == cache_frame_07dc4cecf4e854480a4b40a55f90e98a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_07dc4cecf4e854480a4b40a55f90e98a);
        cache_frame_07dc4cecf4e854480a4b40a55f90e98a = NULL;
    }

    assertFrameObject(frame_07dc4cecf4e854480a4b40a55f90e98a);

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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_params);
    Py_DECREF(par_params);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyvis$physics$$$function__15_toggle_stabilization(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_status = python_pars[1];
    struct Nuitka_FrameObject *frame_c9dab561df75cae2dc8dc6ecc22c2761;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c9dab561df75cae2dc8dc6ecc22c2761 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c9dab561df75cae2dc8dc6ecc22c2761)) {
        Py_XDECREF(cache_frame_c9dab561df75cae2dc8dc6ecc22c2761);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c9dab561df75cae2dc8dc6ecc22c2761 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c9dab561df75cae2dc8dc6ecc22c2761 = MAKE_FUNCTION_FRAME(tstate, codeobj_c9dab561df75cae2dc8dc6ecc22c2761, module_pyvis$physics, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c9dab561df75cae2dc8dc6ecc22c2761->m_type_description == NULL);
    frame_c9dab561df75cae2dc8dc6ecc22c2761 = cache_frame_c9dab561df75cae2dc8dc6ecc22c2761;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_c9dab561df75cae2dc8dc6ecc22c2761);
    assert(Py_REFCNT(frame_c9dab561df75cae2dc8dc6ecc22c2761) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[21]);
        if (tmp_called_instance_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_status);
        tmp_args_element_value_1 = par_status;
        frame_c9dab561df75cae2dc8dc6ecc22c2761->m_frame.f_lineno = 111;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tstate, tmp_called_instance_1, mod_consts[28], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
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
        exception_tb = MAKE_TRACEBACK(frame_c9dab561df75cae2dc8dc6ecc22c2761, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c9dab561df75cae2dc8dc6ecc22c2761->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c9dab561df75cae2dc8dc6ecc22c2761, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c9dab561df75cae2dc8dc6ecc22c2761,
        type_description_1,
        par_self,
        par_status
    );


    // Release cached frame if used for exception.
    if (frame_c9dab561df75cae2dc8dc6ecc22c2761 == cache_frame_c9dab561df75cae2dc8dc6ecc22c2761) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c9dab561df75cae2dc8dc6ecc22c2761);
        cache_frame_c9dab561df75cae2dc8dc6ecc22c2761 = NULL;
    }

    assertFrameObject(frame_c9dab561df75cae2dc8dc6ecc22c2761);

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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_status);
    Py_DECREF(par_status);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_status);
    Py_DECREF(par_status);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyvis$physics$$$function__16_to_json(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_820248758044ed19a84c2140a5c1b9a7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_820248758044ed19a84c2140a5c1b9a7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_820248758044ed19a84c2140a5c1b9a7)) {
        Py_XDECREF(cache_frame_820248758044ed19a84c2140a5c1b9a7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_820248758044ed19a84c2140a5c1b9a7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_820248758044ed19a84c2140a5c1b9a7 = MAKE_FUNCTION_FRAME(tstate, codeobj_820248758044ed19a84c2140a5c1b9a7, module_pyvis$physics, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_820248758044ed19a84c2140a5c1b9a7->m_type_description == NULL);
    frame_820248758044ed19a84c2140a5c1b9a7 = cache_frame_820248758044ed19a84c2140a5c1b9a7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_820248758044ed19a84c2140a5c1b9a7);
    assert(Py_REFCNT(frame_820248758044ed19a84c2140a5c1b9a7) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pyvis$physics, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[29]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_1, mod_consts[30]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_kw_call_arg_value_0_1 = par_self;


        tmp_kw_call_dict_value_0_1 = MAKE_FUNCTION_pyvis$physics$$$function__16_to_json$$$function__1_lambda();

        tmp_kw_call_dict_value_1_1 = Py_True;
        tmp_kw_call_dict_value_2_1 = mod_consts[33];
        frame_820248758044ed19a84c2140a5c1b9a7->m_frame.f_lineno = 114;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tstate, tmp_called_value_1, args, kw_values, mod_consts[34]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_820248758044ed19a84c2140a5c1b9a7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_820248758044ed19a84c2140a5c1b9a7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_820248758044ed19a84c2140a5c1b9a7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_820248758044ed19a84c2140a5c1b9a7,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_820248758044ed19a84c2140a5c1b9a7 == cache_frame_820248758044ed19a84c2140a5c1b9a7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_820248758044ed19a84c2140a5c1b9a7);
        cache_frame_820248758044ed19a84c2140a5c1b9a7 = NULL;
    }

    assertFrameObject(frame_820248758044ed19a84c2140a5c1b9a7);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}


static PyObject *impl_pyvis$physics$$$function__16_to_json$$$function__1_lambda(PyThreadState *tstate, struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = HAS_ERROR_OCCURRED(tstate);
#endif

    // Local variable declarations.
    PyObject *par_o = python_pars[0];
    struct Nuitka_FrameObject *frame_ae858997fe9736af0e78c8b246235fcb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ae858997fe9736af0e78c8b246235fcb = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ae858997fe9736af0e78c8b246235fcb)) {
        Py_XDECREF(cache_frame_ae858997fe9736af0e78c8b246235fcb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ae858997fe9736af0e78c8b246235fcb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ae858997fe9736af0e78c8b246235fcb = MAKE_FUNCTION_FRAME(tstate, codeobj_ae858997fe9736af0e78c8b246235fcb, module_pyvis$physics, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ae858997fe9736af0e78c8b246235fcb->m_type_description == NULL);
    frame_ae858997fe9736af0e78c8b246235fcb = cache_frame_ae858997fe9736af0e78c8b246235fcb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_ae858997fe9736af0e78c8b246235fcb);
    assert(Py_REFCNT(frame_ae858997fe9736af0e78c8b246235fcb) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_o);
        tmp_expression_value_1 = par_o;
        tmp_return_value = LOOKUP_ATTRIBUTE_DICT_SLOT(tstate, tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "o";
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
        exception_tb = MAKE_TRACEBACK(frame_ae858997fe9736af0e78c8b246235fcb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ae858997fe9736af0e78c8b246235fcb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ae858997fe9736af0e78c8b246235fcb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ae858997fe9736af0e78c8b246235fcb,
        type_description_1,
        par_o
    );


    // Release cached frame if used for exception.
    if (frame_ae858997fe9736af0e78c8b246235fcb == cache_frame_ae858997fe9736af0e78c8b246235fcb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ae858997fe9736af0e78c8b246235fcb);
        cache_frame_ae858997fe9736af0e78c8b246235fcb = NULL;
    }

    assertFrameObject(frame_ae858997fe9736af0e78c8b246235fcb);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_o);
    Py_DECREF(par_o);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_o);
    Py_DECREF(par_o);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !HAS_ERROR_OCCURRED(tstate));
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_pyvis$physics$$$function__10___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyvis$physics$$$function__10___init__,
        mod_consts[59],
#if PYTHON_VERSION >= 0x300
        mod_consts[76],
#endif
        codeobj_0c36121a09d37354b1d5ab5ebcaebdbf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyvis$physics,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyvis$physics$$$function__11_use_barnes_hut() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyvis$physics$$$function__11_use_barnes_hut,
        mod_consts[77],
#if PYTHON_VERSION >= 0x300
        mod_consts[78],
#endif
        codeobj_1a28dbe396363197233e6f8a842a12f5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyvis$physics,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyvis$physics$$$function__12_use_force_atlas_2based() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyvis$physics$$$function__12_use_force_atlas_2based,
        mod_consts[79],
#if PYTHON_VERSION >= 0x300
        mod_consts[80],
#endif
        codeobj_d9e79ef04e27e912f8dd5acf5e9f5a02,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyvis$physics,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyvis$physics$$$function__13_use_repulsion() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyvis$physics$$$function__13_use_repulsion,
        mod_consts[81],
#if PYTHON_VERSION >= 0x300
        mod_consts[82],
#endif
        codeobj_41d0f98f9918f39fc1b36f4eeb6438a3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyvis$physics,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyvis$physics$$$function__14_use_hrepulsion() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyvis$physics$$$function__14_use_hrepulsion,
        mod_consts[83],
#if PYTHON_VERSION >= 0x300
        mod_consts[84],
#endif
        codeobj_07dc4cecf4e854480a4b40a55f90e98a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyvis$physics,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyvis$physics$$$function__15_toggle_stabilization() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyvis$physics$$$function__15_toggle_stabilization,
        mod_consts[28],
#if PYTHON_VERSION >= 0x300
        mod_consts[85],
#endif
        codeobj_c9dab561df75cae2dc8dc6ecc22c2761,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyvis$physics,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyvis$physics$$$function__16_to_json() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyvis$physics$$$function__16_to_json,
        mod_consts[86],
#if PYTHON_VERSION >= 0x300
        mod_consts[87],
#endif
        codeobj_820248758044ed19a84c2140a5c1b9a7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyvis$physics,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyvis$physics$$$function__16_to_json$$$function__1_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyvis$physics$$$function__16_to_json$$$function__1_lambda,
        mod_consts[31],
#if PYTHON_VERSION >= 0x300
        mod_consts[32],
#endif
        codeobj_ae858997fe9736af0e78c8b246235fcb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyvis$physics,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyvis$physics$$$function__1___getitem__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyvis$physics$$$function__1___getitem__,
        mod_consts[45],
#if PYTHON_VERSION >= 0x300
        mod_consts[53],
#endif
        codeobj_f98ce744d36536e1819d98af3a50ffb4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyvis$physics,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyvis$physics$$$function__2___repr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyvis$physics$$$function__2___repr__,
        mod_consts[54],
#if PYTHON_VERSION >= 0x300
        mod_consts[55],
#endif
        codeobj_4e75635658f0f5622d0e33482784dc2b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyvis$physics,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyvis$physics$$$function__3___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyvis$physics$$$function__3___init__,
        mod_consts[59],
#if PYTHON_VERSION >= 0x300
        mod_consts[60],
#endif
        codeobj_c57023a7498d9c92149292f69e4a42b8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyvis$physics,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyvis$physics$$$function__4___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyvis$physics$$$function__4___init__,
        mod_consts[59],
#if PYTHON_VERSION >= 0x300
        mod_consts[64],
#endif
        codeobj_8e16ff8613e97e77db890ac68e118919,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyvis$physics,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyvis$physics$$$function__5___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyvis$physics$$$function__5___init__,
        mod_consts[59],
#if PYTHON_VERSION >= 0x300
        mod_consts[67],
#endif
        codeobj_d3914e44617befd4ac0ea2eeb47f8f75,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyvis$physics,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyvis$physics$$$function__6___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyvis$physics$$$function__6___init__,
        mod_consts[59],
#if PYTHON_VERSION >= 0x300
        mod_consts[70],
#endif
        codeobj_943799ca262bc975de20fd818d9a100d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyvis$physics,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyvis$physics$$$function__7___getitem__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyvis$physics$$$function__7___getitem__,
        mod_consts[45],
#if PYTHON_VERSION >= 0x300
        mod_consts[73],
#endif
        codeobj_0d110cbee6878611ed01e7c7bff892d5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyvis$physics,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyvis$physics$$$function__8___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyvis$physics$$$function__8___init__,
        mod_consts[59],
#if PYTHON_VERSION >= 0x300
        mod_consts[74],
#endif
        codeobj_0da85de0c1f6f79ef43e8cd7545909d5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyvis$physics,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyvis$physics$$$function__9_toggle_stabilization() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyvis$physics$$$function__9_toggle_stabilization,
        mod_consts[28],
#if PYTHON_VERSION >= 0x300
        mod_consts[75],
#endif
        codeobj_5c4d0262f21de94bdc3d2e40160180f7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyvis$physics,
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

static function_impl_code const function_table_pyvis$physics[] = {
    impl_pyvis$physics$$$function__16_to_json$$$function__1_lambda,
    impl_pyvis$physics$$$function__1___getitem__,
    impl_pyvis$physics$$$function__2___repr__,
    impl_pyvis$physics$$$function__3___init__,
    impl_pyvis$physics$$$function__4___init__,
    impl_pyvis$physics$$$function__5___init__,
    impl_pyvis$physics$$$function__6___init__,
    impl_pyvis$physics$$$function__7___getitem__,
    impl_pyvis$physics$$$function__8___init__,
    impl_pyvis$physics$$$function__9_toggle_stabilization,
    impl_pyvis$physics$$$function__10___init__,
    impl_pyvis$physics$$$function__11_use_barnes_hut,
    impl_pyvis$physics$$$function__12_use_force_atlas_2based,
    impl_pyvis$physics$$$function__13_use_repulsion,
    impl_pyvis$physics$$$function__14_use_hrepulsion,
    impl_pyvis$physics$$$function__15_toggle_stabilization,
    impl_pyvis$physics$$$function__16_to_json,
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

    int offset = Nuitka_Function_GetFunctionCodeIndex(function, function_table_pyvis$physics);

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
        module_pyvis$physics,
        function_qualname,
        function_index,
        code_object_desc,
        constant_return_value,
        defaults,
        kw_defaults,
        doc,
        function_table_pyvis$physics,
        sizeof(function_table_pyvis$physics) / sizeof(function_impl_code)
    );
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_pyvis$physics(PyThreadState *tstate, PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pyvis$physics");

    // Store the module for future use.
    module_pyvis$physics = module;

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
        PRINT_STRING("pyvis$physics: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader(tstate);

#if PYTHON_VERSION >= 0x300
        patchInspectModule(tstate);
#endif

#endif

        /* The constants only used by this module are created now. */
        NUITKA_PRINT_TRACE("pyvis$physics: Calling createModuleConstants().\n");
        createModuleConstants(tstate);

        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initpyvis$physics\n");

    moduledict_pyvis$physics = MODULE_DICT(module_pyvis$physics);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(tstate, loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pyvis$physics,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pyvis$physics,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[96]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyvis$physics, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pyvis$physics,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyvis$physics, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pyvis$physics,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyvis$physics, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pyvis$physics,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pyvis$physics);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pyvis$physics, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pyvis$physics, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_pyvis$physics, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pyvis$physics, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(tstate, _spec_from_module, module_pyvis$physics);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(tstate, spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pyvis$physics, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *outline_5_var___class__ = NULL;
    PyObject *tmp_Physics$class_creation_1__bases = NULL;
    PyObject *tmp_Physics$class_creation_1__bases_orig = NULL;
    PyObject *tmp_Physics$class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_Physics$class_creation_1__metaclass = NULL;
    PyObject *tmp_Physics$class_creation_1__prepared = NULL;
    PyObject *tmp_Physics$class_creation_2__bases = NULL;
    PyObject *tmp_Physics$class_creation_2__bases_orig = NULL;
    PyObject *tmp_Physics$class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_Physics$class_creation_2__metaclass = NULL;
    PyObject *tmp_Physics$class_creation_2__prepared = NULL;
    PyObject *tmp_Physics$class_creation_3__bases = NULL;
    PyObject *tmp_Physics$class_creation_3__bases_orig = NULL;
    PyObject *tmp_Physics$class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_Physics$class_creation_3__metaclass = NULL;
    PyObject *tmp_Physics$class_creation_3__prepared = NULL;
    PyObject *tmp_Physics$class_creation_4__bases = NULL;
    PyObject *tmp_Physics$class_creation_4__bases_orig = NULL;
    PyObject *tmp_Physics$class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_Physics$class_creation_4__metaclass = NULL;
    PyObject *tmp_Physics$class_creation_4__prepared = NULL;
    PyObject *tmp_Physics$class_creation_5__bases = NULL;
    PyObject *tmp_Physics$class_creation_5__bases_orig = NULL;
    PyObject *tmp_Physics$class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_Physics$class_creation_5__metaclass = NULL;
    PyObject *tmp_Physics$class_creation_5__prepared = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    struct Nuitka_FrameObject *frame_8c6cd3a27db039e56f7d235a018b6c8a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *locals_pyvis$physics$$$class__1_Physics_4 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_dd1c09a1f5ab3a65515349c59d2b34c0_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *locals_pyvis$physics$$$class__2_barnesHut_14 = NULL;
    struct Nuitka_FrameObject *frame_5598bc63f4086fb01aa3d272f0499e56_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
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
    PyObject *locals_pyvis$physics$$$class__3_forceAtlas2Based_29 = NULL;
    struct Nuitka_FrameObject *frame_b0ca97ad9171daa7f9fa5a8af28b1267_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
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
    PyObject *locals_pyvis$physics$$$class__4_Repulsion_48 = NULL;
    struct Nuitka_FrameObject *frame_07e48997e4eb9a097b32133ba27fcb0a_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
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
    PyObject *locals_pyvis$physics$$$class__5_hierarchicalRepulsion_61 = NULL;
    struct Nuitka_FrameObject *frame_6a064f956d605e9c1158639c8ae56f16_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
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
    PyObject *locals_pyvis$physics$$$class__6_Stabilization_74 = NULL;
    struct Nuitka_FrameObject *frame_100a1b1d865613c478c1e2d425d01a70_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
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
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pyvis$physics, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_pyvis$physics, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_2);
    }
    frame_8c6cd3a27db039e56f7d235a018b6c8a = MAKE_MODULE_FRAME(codeobj_8c6cd3a27db039e56f7d235a018b6c8a, module_pyvis$physics);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(tstate, frame_8c6cd3a27db039e56f7d235a018b6c8a);
    assert(Py_REFCNT(frame_8c6cd3a27db039e56f7d235a018b6c8a) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pyvis$physics, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_1, mod_consts[38], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pyvis$physics, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(tstate, mod_consts[37]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tstate, tmp_assattr_target_2, mod_consts[39], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_pyvis$physics, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[29];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pyvis$physics;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[41];
        frame_8c6cd3a27db039e56f7d235a018b6c8a->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tstate, tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyvis$physics, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_4);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = mod_consts[42];
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_5 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
        }
        if (tmp_assign_source_5 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_1 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[41];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_7 = SELECT_METACLASS(tstate, tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_7 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_7;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_2, mod_consts[43]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_3, mod_consts[43]);
        if (tmp_called_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        tmp_tuple_element_1 = mod_consts[44];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_1 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_8c6cd3a27db039e56f7d235a018b6c8a->m_frame.f_lineno = 4;
        tmp_assign_source_8 = CALL_FUNCTION(tstate, tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_8 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_8;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_4, mod_consts[45]);
        if (tmp_res == -1) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_default_value_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[46];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_5 = tmp_class_creation_1__metaclass;
        tmp_name_value_2 = mod_consts[47];
        tmp_default_value_1 = mod_consts[48];
        tmp_tuple_element_2 = BUILTIN_GETATTR(tstate, tmp_expression_value_5, tmp_name_value_2, tmp_default_value_1);
        if (tmp_tuple_element_2 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_6;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_6 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_6 == NULL));
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_6, mod_consts[47]);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_tuple_element_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 4;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 4;
        RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_9;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_10;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_pyvis$physics$$$class__1_Physics_4 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[49];
        tmp_res = PyObject_SetItem(locals_pyvis$physics$$$class__1_Physics_4, mod_consts[50], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[44];
        tmp_res = PyObject_SetItem(locals_pyvis$physics$$$class__1_Physics_4, mod_consts[51], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_3;
        }
        frame_dd1c09a1f5ab3a65515349c59d2b34c0_2 = MAKE_CLASS_FRAME(tstate, codeobj_dd1c09a1f5ab3a65515349c59d2b34c0, module_pyvis$physics, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_dd1c09a1f5ab3a65515349c59d2b34c0_2);
        assert(Py_REFCNT(frame_dd1c09a1f5ab3a65515349c59d2b34c0_2) == 2);

        // Framed code:
        tmp_dictset_value = Py_False;
        tmp_res = PyObject_SetItem(locals_pyvis$physics$$$class__1_Physics_4, mod_consts[52], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyvis$physics$$$function__1___getitem__();

        tmp_res = PyObject_SetItem(locals_pyvis$physics$$$class__1_Physics_4, mod_consts[45], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyvis$physics$$$function__2___repr__();

        tmp_res = PyObject_SetItem(locals_pyvis$physics$$$class__1_Physics_4, mod_consts[54], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_tuple_element_3;
            tmp_tuple_element_3 = PyObject_GetItem(locals_pyvis$physics$$$class__1_Physics_4, mod_consts[56]);

            if (tmp_tuple_element_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_3 = (PyObject *)&PyBaseObject_Type;
                    Py_INCREF(tmp_tuple_element_3);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_assign_source_11 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_assign_source_11, 0, tmp_tuple_element_3);
            assert(tmp_Physics$class_creation_1__bases_orig == NULL);
            tmp_Physics$class_creation_1__bases_orig = tmp_assign_source_11;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_dircall_arg1_2;
            CHECK_OBJECT(tmp_Physics$class_creation_1__bases_orig);
            tmp_dircall_arg1_2 = tmp_Physics$class_creation_1__bases_orig;
            Py_INCREF(tmp_dircall_arg1_2);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
                tmp_assign_source_12 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
            }
            if (tmp_assign_source_12 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 14;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
            assert(tmp_Physics$class_creation_1__bases == NULL);
            tmp_Physics$class_creation_1__bases = tmp_assign_source_12;
        }
        {
            PyObject *tmp_assign_source_13;
            tmp_assign_source_13 = MAKE_DICT_EMPTY();
            assert(tmp_Physics$class_creation_1__class_decl_dict == NULL);
            tmp_Physics$class_creation_1__class_decl_dict = tmp_assign_source_13;
        }
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_metaclass_value_2;
            nuitka_bool tmp_condition_result_4;
            int tmp_truth_name_2;
            PyObject *tmp_type_arg_3;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_bases_value_2;
            CHECK_OBJECT(tmp_Physics$class_creation_1__bases);
            tmp_truth_name_2 = CHECK_IF_TRUE(tmp_Physics$class_creation_1__bases);
            if (tmp_truth_name_2 == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 14;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
            tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_2;
            } else {
                goto condexpr_false_2;
            }
            condexpr_true_2:;
            CHECK_OBJECT(tmp_Physics$class_creation_1__bases);
            tmp_expression_value_7 = tmp_Physics$class_creation_1__bases;
            tmp_subscript_value_2 = mod_consts[41];
            tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_7, tmp_subscript_value_2, 0);
            if (tmp_type_arg_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 14;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
            tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
            Py_DECREF(tmp_type_arg_3);
            if (tmp_metaclass_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 14;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
            goto condexpr_end_2;
            condexpr_false_2:;
            tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_2);
            condexpr_end_2:;
            CHECK_OBJECT(tmp_Physics$class_creation_1__bases);
            tmp_bases_value_2 = tmp_Physics$class_creation_1__bases;
            tmp_assign_source_14 = SELECT_METACLASS(tstate, tmp_metaclass_value_2, tmp_bases_value_2);
            Py_DECREF(tmp_metaclass_value_2);
            if (tmp_assign_source_14 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 14;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
            assert(tmp_Physics$class_creation_1__metaclass == NULL);
            tmp_Physics$class_creation_1__metaclass = tmp_assign_source_14;
        }
        {
            bool tmp_condition_result_5;
            PyObject *tmp_expression_value_8;
            CHECK_OBJECT(tmp_Physics$class_creation_1__metaclass);
            tmp_expression_value_8 = tmp_Physics$class_creation_1__metaclass;
            tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_8, mod_consts[43]);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 14;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
            tmp_condition_result_5 = (tmp_res != 0) ? true : false;
            if (tmp_condition_result_5 != false) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_called_value_2;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_Physics$class_creation_1__metaclass);
            tmp_expression_value_9 = tmp_Physics$class_creation_1__metaclass;
            tmp_called_value_2 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_9, mod_consts[43]);
            if (tmp_called_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 14;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
            tmp_tuple_element_4 = mod_consts[22];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_Physics$class_creation_1__bases);
            tmp_tuple_element_4 = tmp_Physics$class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_Physics$class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_Physics$class_creation_1__class_decl_dict;
            frame_dd1c09a1f5ab3a65515349c59d2b34c0_2->m_frame.f_lineno = 14;
            tmp_assign_source_15 = CALL_FUNCTION(tstate, tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_15 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 14;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
            assert(tmp_Physics$class_creation_1__prepared == NULL);
            tmp_Physics$class_creation_1__prepared = tmp_assign_source_15;
        }
        {
            bool tmp_condition_result_6;
            PyObject *tmp_operand_value_2;
            PyObject *tmp_expression_value_10;
            CHECK_OBJECT(tmp_Physics$class_creation_1__prepared);
            tmp_expression_value_10 = tmp_Physics$class_creation_1__prepared;
            tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_10, mod_consts[45]);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 14;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
            tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
            assert(!(tmp_res == -1));
            tmp_condition_result_6 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_6 != false) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
        }
        branch_yes_4:;
        {
            PyObject *tmp_raise_type_2;
            PyObject *tmp_raise_value_2;
            PyObject *tmp_mod_expr_left_2;
            PyObject *tmp_mod_expr_right_2;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_name_value_3;
            PyObject *tmp_default_value_2;
            tmp_raise_type_2 = PyExc_TypeError;
            tmp_mod_expr_left_2 = mod_consts[46];
            CHECK_OBJECT(tmp_Physics$class_creation_1__metaclass);
            tmp_expression_value_11 = tmp_Physics$class_creation_1__metaclass;
            tmp_name_value_3 = mod_consts[47];
            tmp_default_value_2 = mod_consts[48];
            tmp_tuple_element_5 = BUILTIN_GETATTR(tstate, tmp_expression_value_11, tmp_name_value_3, tmp_default_value_2);
            if (tmp_tuple_element_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 14;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
            tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_12;
                PyObject *tmp_type_arg_4;
                PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_5);
                CHECK_OBJECT(tmp_Physics$class_creation_1__prepared);
                tmp_type_arg_4 = tmp_Physics$class_creation_1__prepared;
                tmp_expression_value_12 = BUILTIN_TYPE1(tmp_type_arg_4);
                assert(!(tmp_expression_value_12 == NULL));
                tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_12, mod_consts[47]);
                Py_DECREF(tmp_expression_value_12);
                if (tmp_tuple_element_5 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 14;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_5);
            }
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_mod_expr_right_2);
            goto try_except_handler_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
            Py_DECREF(tmp_mod_expr_right_2);
            if (tmp_raise_value_2 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 14;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
            exception_type = tmp_raise_type_2;
            Py_INCREF(tmp_raise_type_2);
            exception_value = tmp_raise_value_2;
            exception_lineno = 14;
            RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);
            type_description_2 = "o";
            goto try_except_handler_4;
        }
        branch_no_4:;
        goto branch_end_3;
        branch_no_3:;
        {
            PyObject *tmp_assign_source_16;
            tmp_assign_source_16 = MAKE_DICT_EMPTY();
            assert(tmp_Physics$class_creation_1__prepared == NULL);
            tmp_Physics$class_creation_1__prepared = tmp_assign_source_16;
        }
        branch_end_3:;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_Physics$class_creation_1__prepared);
            tmp_set_locals_2 = tmp_Physics$class_creation_1__prepared;
            locals_pyvis$physics$$$class__2_barnesHut_14 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[49];
        tmp_res = PyObject_SetItem(locals_pyvis$physics$$$class__2_barnesHut_14, mod_consts[50], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;
            type_description_2 = "o";
            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[57];
        tmp_res = PyObject_SetItem(locals_pyvis$physics$$$class__2_barnesHut_14, mod_consts[35], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;
            type_description_2 = "o";
            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[58];
        tmp_res = PyObject_SetItem(locals_pyvis$physics$$$class__2_barnesHut_14, mod_consts[51], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;
            type_description_2 = "o";
            goto try_except_handler_6;
        }
        frame_5598bc63f4086fb01aa3d272f0499e56_3 = MAKE_CLASS_FRAME(tstate, codeobj_5598bc63f4086fb01aa3d272f0499e56, module_pyvis$physics, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_5598bc63f4086fb01aa3d272f0499e56_3);
        assert(Py_REFCNT(frame_5598bc63f4086fb01aa3d272f0499e56_3) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_pyvis$physics$$$function__3___init__();

        tmp_res = PyObject_SetItem(locals_pyvis$physics$$$class__2_barnesHut_14, mod_consts[59], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_3 = "o";
            goto frame_exception_exit_3;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_1;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_5598bc63f4086fb01aa3d272f0499e56_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_5598bc63f4086fb01aa3d272f0499e56_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_5598bc63f4086fb01aa3d272f0499e56_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_5598bc63f4086fb01aa3d272f0499e56_3,
            type_description_3,
            outline_1_var___class__
        );



        assertFrameObject(frame_5598bc63f4086fb01aa3d272f0499e56_3);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_2:;
        type_description_2 = "o";
        goto try_except_handler_6;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_Physics$class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_Physics$class_creation_1__bases;
            CHECK_OBJECT(tmp_Physics$class_creation_1__bases_orig);
            tmp_cmp_expr_right_1 = tmp_Physics$class_creation_1__bases_orig;
            tmp_condition_result_7 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 14;
                type_description_2 = "o";
                goto try_except_handler_6;
            }
            if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
                goto branch_yes_5;
            } else {
                goto branch_no_5;
            }
        }
        branch_yes_5:;
        CHECK_OBJECT(tmp_Physics$class_creation_1__bases_orig);
        tmp_dictset_value = tmp_Physics$class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyvis$physics$$$class__2_barnesHut_14, mod_consts[61], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;
            type_description_2 = "o";
            goto try_except_handler_6;
        }
        branch_no_5:;
        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_value_3;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kwargs_value_3;
            CHECK_OBJECT(tmp_Physics$class_creation_1__metaclass);
            tmp_called_value_3 = tmp_Physics$class_creation_1__metaclass;
            tmp_tuple_element_6 = mod_consts[22];
            tmp_args_value_3 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_Physics$class_creation_1__bases);
            tmp_tuple_element_6 = tmp_Physics$class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
            tmp_tuple_element_6 = locals_pyvis$physics$$$class__2_barnesHut_14;
            PyTuple_SET_ITEM0(tmp_args_value_3, 2, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_Physics$class_creation_1__class_decl_dict);
            tmp_kwargs_value_3 = tmp_Physics$class_creation_1__class_decl_dict;
            frame_dd1c09a1f5ab3a65515349c59d2b34c0_2->m_frame.f_lineno = 14;
            tmp_assign_source_17 = CALL_FUNCTION(tstate, tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
            Py_DECREF(tmp_args_value_3);
            if (tmp_assign_source_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 14;
                type_description_2 = "o";
                goto try_except_handler_6;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_17;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_dictset_value = outline_1_var___class__;
        Py_INCREF(tmp_dictset_value);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_pyvis$physics$$$class__2_barnesHut_14);
        locals_pyvis$physics$$$class__2_barnesHut_14 = NULL;
        goto try_return_handler_5;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyvis$physics$$$class__2_barnesHut_14);
        locals_pyvis$physics$$$class__2_barnesHut_14 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
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
        exception_lineno = 14;
        goto try_except_handler_4;
        outline_result_2:;
        tmp_res = PyObject_SetItem(locals_pyvis$physics$$$class__1_Physics_4, mod_consts[22], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;
            type_description_2 = "o";
            goto try_except_handler_4;
        }
        goto try_end_1;
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

        CHECK_OBJECT(tmp_Physics$class_creation_1__bases_orig);
        Py_DECREF(tmp_Physics$class_creation_1__bases_orig);
        tmp_Physics$class_creation_1__bases_orig = NULL;
        Py_XDECREF(tmp_Physics$class_creation_1__bases);
        tmp_Physics$class_creation_1__bases = NULL;
        Py_XDECREF(tmp_Physics$class_creation_1__class_decl_dict);
        tmp_Physics$class_creation_1__class_decl_dict = NULL;
        Py_XDECREF(tmp_Physics$class_creation_1__metaclass);
        tmp_Physics$class_creation_1__metaclass = NULL;
        Py_XDECREF(tmp_Physics$class_creation_1__prepared);
        tmp_Physics$class_creation_1__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto frame_exception_exit_2;
        // End of try:
        try_end_1:;
        CHECK_OBJECT(tmp_Physics$class_creation_1__bases_orig);
        Py_DECREF(tmp_Physics$class_creation_1__bases_orig);
        tmp_Physics$class_creation_1__bases_orig = NULL;
        CHECK_OBJECT(tmp_Physics$class_creation_1__bases);
        Py_DECREF(tmp_Physics$class_creation_1__bases);
        tmp_Physics$class_creation_1__bases = NULL;
        CHECK_OBJECT(tmp_Physics$class_creation_1__class_decl_dict);
        Py_DECREF(tmp_Physics$class_creation_1__class_decl_dict);
        tmp_Physics$class_creation_1__class_decl_dict = NULL;
        CHECK_OBJECT(tmp_Physics$class_creation_1__metaclass);
        Py_DECREF(tmp_Physics$class_creation_1__metaclass);
        tmp_Physics$class_creation_1__metaclass = NULL;
        CHECK_OBJECT(tmp_Physics$class_creation_1__prepared);
        Py_DECREF(tmp_Physics$class_creation_1__prepared);
        tmp_Physics$class_creation_1__prepared = NULL;
        {
            PyObject *tmp_assign_source_18;
            PyObject *tmp_tuple_element_7;
            tmp_tuple_element_7 = PyObject_GetItem(locals_pyvis$physics$$$class__1_Physics_4, mod_consts[56]);

            if (tmp_tuple_element_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_7 = (PyObject *)&PyBaseObject_Type;
                    Py_INCREF(tmp_tuple_element_7);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_assign_source_18 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_assign_source_18, 0, tmp_tuple_element_7);
            assert(tmp_Physics$class_creation_2__bases_orig == NULL);
            tmp_Physics$class_creation_2__bases_orig = tmp_assign_source_18;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_dircall_arg1_3;
            CHECK_OBJECT(tmp_Physics$class_creation_2__bases_orig);
            tmp_dircall_arg1_3 = tmp_Physics$class_creation_2__bases_orig;
            Py_INCREF(tmp_dircall_arg1_3);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
                tmp_assign_source_19 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
            }
            if (tmp_assign_source_19 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            assert(tmp_Physics$class_creation_2__bases == NULL);
            tmp_Physics$class_creation_2__bases = tmp_assign_source_19;
        }
        {
            PyObject *tmp_assign_source_20;
            tmp_assign_source_20 = MAKE_DICT_EMPTY();
            assert(tmp_Physics$class_creation_2__class_decl_dict == NULL);
            tmp_Physics$class_creation_2__class_decl_dict = tmp_assign_source_20;
        }
        {
            PyObject *tmp_assign_source_21;
            PyObject *tmp_metaclass_value_3;
            nuitka_bool tmp_condition_result_8;
            int tmp_truth_name_3;
            PyObject *tmp_type_arg_5;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_subscript_value_3;
            PyObject *tmp_bases_value_3;
            CHECK_OBJECT(tmp_Physics$class_creation_2__bases);
            tmp_truth_name_3 = CHECK_IF_TRUE(tmp_Physics$class_creation_2__bases);
            if (tmp_truth_name_3 == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            tmp_condition_result_8 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_3;
            } else {
                goto condexpr_false_3;
            }
            condexpr_true_3:;
            CHECK_OBJECT(tmp_Physics$class_creation_2__bases);
            tmp_expression_value_13 = tmp_Physics$class_creation_2__bases;
            tmp_subscript_value_3 = mod_consts[41];
            tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_13, tmp_subscript_value_3, 0);
            if (tmp_type_arg_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
            Py_DECREF(tmp_type_arg_5);
            if (tmp_metaclass_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_3);
            condexpr_end_3:;
            CHECK_OBJECT(tmp_Physics$class_creation_2__bases);
            tmp_bases_value_3 = tmp_Physics$class_creation_2__bases;
            tmp_assign_source_21 = SELECT_METACLASS(tstate, tmp_metaclass_value_3, tmp_bases_value_3);
            Py_DECREF(tmp_metaclass_value_3);
            if (tmp_assign_source_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            assert(tmp_Physics$class_creation_2__metaclass == NULL);
            tmp_Physics$class_creation_2__metaclass = tmp_assign_source_21;
        }
        {
            bool tmp_condition_result_9;
            PyObject *tmp_expression_value_14;
            CHECK_OBJECT(tmp_Physics$class_creation_2__metaclass);
            tmp_expression_value_14 = tmp_Physics$class_creation_2__metaclass;
            tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_14, mod_consts[43]);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            tmp_condition_result_9 = (tmp_res != 0) ? true : false;
            if (tmp_condition_result_9 != false) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        {
            PyObject *tmp_assign_source_22;
            PyObject *tmp_called_value_4;
            PyObject *tmp_expression_value_15;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_Physics$class_creation_2__metaclass);
            tmp_expression_value_15 = tmp_Physics$class_creation_2__metaclass;
            tmp_called_value_4 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_15, mod_consts[43]);
            if (tmp_called_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            tmp_tuple_element_8 = mod_consts[23];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_Physics$class_creation_2__bases);
            tmp_tuple_element_8 = tmp_Physics$class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_Physics$class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_Physics$class_creation_2__class_decl_dict;
            frame_dd1c09a1f5ab3a65515349c59d2b34c0_2->m_frame.f_lineno = 29;
            tmp_assign_source_22 = CALL_FUNCTION(tstate, tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_22 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            assert(tmp_Physics$class_creation_2__prepared == NULL);
            tmp_Physics$class_creation_2__prepared = tmp_assign_source_22;
        }
        {
            bool tmp_condition_result_10;
            PyObject *tmp_operand_value_3;
            PyObject *tmp_expression_value_16;
            CHECK_OBJECT(tmp_Physics$class_creation_2__prepared);
            tmp_expression_value_16 = tmp_Physics$class_creation_2__prepared;
            tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_16, mod_consts[45]);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            tmp_operand_value_3 = (tmp_res != 0) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
            assert(!(tmp_res == -1));
            tmp_condition_result_10 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_10 != false) {
                goto branch_yes_7;
            } else {
                goto branch_no_7;
            }
        }
        branch_yes_7:;
        {
            PyObject *tmp_raise_type_3;
            PyObject *tmp_raise_value_3;
            PyObject *tmp_mod_expr_left_3;
            PyObject *tmp_mod_expr_right_3;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_expression_value_17;
            PyObject *tmp_name_value_4;
            PyObject *tmp_default_value_3;
            tmp_raise_type_3 = PyExc_TypeError;
            tmp_mod_expr_left_3 = mod_consts[46];
            CHECK_OBJECT(tmp_Physics$class_creation_2__metaclass);
            tmp_expression_value_17 = tmp_Physics$class_creation_2__metaclass;
            tmp_name_value_4 = mod_consts[47];
            tmp_default_value_3 = mod_consts[48];
            tmp_tuple_element_9 = BUILTIN_GETATTR(tstate, tmp_expression_value_17, tmp_name_value_4, tmp_default_value_3);
            if (tmp_tuple_element_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_18;
                PyObject *tmp_type_arg_6;
                PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_9);
                CHECK_OBJECT(tmp_Physics$class_creation_2__prepared);
                tmp_type_arg_6 = tmp_Physics$class_creation_2__prepared;
                tmp_expression_value_18 = BUILTIN_TYPE1(tmp_type_arg_6);
                assert(!(tmp_expression_value_18 == NULL));
                tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_18, mod_consts[47]);
                Py_DECREF(tmp_expression_value_18);
                if (tmp_tuple_element_9 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 29;
                    type_description_2 = "o";
                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_9);
            }
            goto tuple_build_noexception_3;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_mod_expr_right_3);
            goto try_except_handler_7;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_3:;
            tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
            Py_DECREF(tmp_mod_expr_right_3);
            if (tmp_raise_value_3 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_2 = "o";
                goto try_except_handler_7;
            }
            exception_type = tmp_raise_type_3;
            Py_INCREF(tmp_raise_type_3);
            exception_value = tmp_raise_value_3;
            exception_lineno = 29;
            RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);
            type_description_2 = "o";
            goto try_except_handler_7;
        }
        branch_no_7:;
        goto branch_end_6;
        branch_no_6:;
        {
            PyObject *tmp_assign_source_23;
            tmp_assign_source_23 = MAKE_DICT_EMPTY();
            assert(tmp_Physics$class_creation_2__prepared == NULL);
            tmp_Physics$class_creation_2__prepared = tmp_assign_source_23;
        }
        branch_end_6:;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_Physics$class_creation_2__prepared);
            tmp_set_locals_3 = tmp_Physics$class_creation_2__prepared;
            locals_pyvis$physics$$$class__3_forceAtlas2Based_29 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[49];
        tmp_res = PyObject_SetItem(locals_pyvis$physics$$$class__3_forceAtlas2Based_29, mod_consts[50], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_2 = "o";
            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[62];
        tmp_res = PyObject_SetItem(locals_pyvis$physics$$$class__3_forceAtlas2Based_29, mod_consts[35], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_2 = "o";
            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[63];
        tmp_res = PyObject_SetItem(locals_pyvis$physics$$$class__3_forceAtlas2Based_29, mod_consts[51], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_2 = "o";
            goto try_except_handler_9;
        }
        frame_b0ca97ad9171daa7f9fa5a8af28b1267_4 = MAKE_CLASS_FRAME(tstate, codeobj_b0ca97ad9171daa7f9fa5a8af28b1267, module_pyvis$physics, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_b0ca97ad9171daa7f9fa5a8af28b1267_4);
        assert(Py_REFCNT(frame_b0ca97ad9171daa7f9fa5a8af28b1267_4) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_pyvis$physics$$$function__4___init__();

        tmp_res = PyObject_SetItem(locals_pyvis$physics$$$class__3_forceAtlas2Based_29, mod_consts[59], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_3 = "o";
            goto frame_exception_exit_4;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_2;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_b0ca97ad9171daa7f9fa5a8af28b1267_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_b0ca97ad9171daa7f9fa5a8af28b1267_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_b0ca97ad9171daa7f9fa5a8af28b1267_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_b0ca97ad9171daa7f9fa5a8af28b1267_4,
            type_description_3,
            outline_2_var___class__
        );



        assertFrameObject(frame_b0ca97ad9171daa7f9fa5a8af28b1267_4);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_3:;
        type_description_2 = "o";
        goto try_except_handler_9;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_11;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_Physics$class_creation_2__bases);
            tmp_cmp_expr_left_2 = tmp_Physics$class_creation_2__bases;
            CHECK_OBJECT(tmp_Physics$class_creation_2__bases_orig);
            tmp_cmp_expr_right_2 = tmp_Physics$class_creation_2__bases_orig;
            tmp_condition_result_11 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_11 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_2 = "o";
                goto try_except_handler_9;
            }
            if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
                goto branch_yes_8;
            } else {
                goto branch_no_8;
            }
        }
        branch_yes_8:;
        CHECK_OBJECT(tmp_Physics$class_creation_2__bases_orig);
        tmp_dictset_value = tmp_Physics$class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyvis$physics$$$class__3_forceAtlas2Based_29, mod_consts[61], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_2 = "o";
            goto try_except_handler_9;
        }
        branch_no_8:;
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_value_5;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_kwargs_value_5;
            CHECK_OBJECT(tmp_Physics$class_creation_2__metaclass);
            tmp_called_value_5 = tmp_Physics$class_creation_2__metaclass;
            tmp_tuple_element_10 = mod_consts[23];
            tmp_args_value_5 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_Physics$class_creation_2__bases);
            tmp_tuple_element_10 = tmp_Physics$class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_10);
            tmp_tuple_element_10 = locals_pyvis$physics$$$class__3_forceAtlas2Based_29;
            PyTuple_SET_ITEM0(tmp_args_value_5, 2, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_Physics$class_creation_2__class_decl_dict);
            tmp_kwargs_value_5 = tmp_Physics$class_creation_2__class_decl_dict;
            frame_dd1c09a1f5ab3a65515349c59d2b34c0_2->m_frame.f_lineno = 29;
            tmp_assign_source_24 = CALL_FUNCTION(tstate, tmp_called_value_5, tmp_args_value_5, tmp_kwargs_value_5);
            Py_DECREF(tmp_args_value_5);
            if (tmp_assign_source_24 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;
                type_description_2 = "o";
                goto try_except_handler_9;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_24;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_dictset_value = outline_2_var___class__;
        Py_INCREF(tmp_dictset_value);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_pyvis$physics$$$class__3_forceAtlas2Based_29);
        locals_pyvis$physics$$$class__3_forceAtlas2Based_29 = NULL;
        goto try_return_handler_8;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyvis$physics$$$class__3_forceAtlas2Based_29);
        locals_pyvis$physics$$$class__3_forceAtlas2Based_29 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 29;
        goto try_except_handler_7;
        outline_result_3:;
        tmp_res = PyObject_SetItem(locals_pyvis$physics$$$class__1_Physics_4, mod_consts[23], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_2 = "o";
            goto try_except_handler_7;
        }
        goto try_end_2;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_Physics$class_creation_2__bases_orig);
        Py_DECREF(tmp_Physics$class_creation_2__bases_orig);
        tmp_Physics$class_creation_2__bases_orig = NULL;
        Py_XDECREF(tmp_Physics$class_creation_2__bases);
        tmp_Physics$class_creation_2__bases = NULL;
        Py_XDECREF(tmp_Physics$class_creation_2__class_decl_dict);
        tmp_Physics$class_creation_2__class_decl_dict = NULL;
        Py_XDECREF(tmp_Physics$class_creation_2__metaclass);
        tmp_Physics$class_creation_2__metaclass = NULL;
        Py_XDECREF(tmp_Physics$class_creation_2__prepared);
        tmp_Physics$class_creation_2__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto frame_exception_exit_2;
        // End of try:
        try_end_2:;
        CHECK_OBJECT(tmp_Physics$class_creation_2__bases_orig);
        Py_DECREF(tmp_Physics$class_creation_2__bases_orig);
        tmp_Physics$class_creation_2__bases_orig = NULL;
        CHECK_OBJECT(tmp_Physics$class_creation_2__bases);
        Py_DECREF(tmp_Physics$class_creation_2__bases);
        tmp_Physics$class_creation_2__bases = NULL;
        CHECK_OBJECT(tmp_Physics$class_creation_2__class_decl_dict);
        Py_DECREF(tmp_Physics$class_creation_2__class_decl_dict);
        tmp_Physics$class_creation_2__class_decl_dict = NULL;
        CHECK_OBJECT(tmp_Physics$class_creation_2__metaclass);
        Py_DECREF(tmp_Physics$class_creation_2__metaclass);
        tmp_Physics$class_creation_2__metaclass = NULL;
        CHECK_OBJECT(tmp_Physics$class_creation_2__prepared);
        Py_DECREF(tmp_Physics$class_creation_2__prepared);
        tmp_Physics$class_creation_2__prepared = NULL;
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_tuple_element_11;
            tmp_tuple_element_11 = PyObject_GetItem(locals_pyvis$physics$$$class__1_Physics_4, mod_consts[56]);

            if (tmp_tuple_element_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_11 = (PyObject *)&PyBaseObject_Type;
                    Py_INCREF(tmp_tuple_element_11);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_assign_source_25 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_assign_source_25, 0, tmp_tuple_element_11);
            assert(tmp_Physics$class_creation_3__bases_orig == NULL);
            tmp_Physics$class_creation_3__bases_orig = tmp_assign_source_25;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_26;
            PyObject *tmp_dircall_arg1_4;
            CHECK_OBJECT(tmp_Physics$class_creation_3__bases_orig);
            tmp_dircall_arg1_4 = tmp_Physics$class_creation_3__bases_orig;
            Py_INCREF(tmp_dircall_arg1_4);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
                tmp_assign_source_26 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
            }
            if (tmp_assign_source_26 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            assert(tmp_Physics$class_creation_3__bases == NULL);
            tmp_Physics$class_creation_3__bases = tmp_assign_source_26;
        }
        {
            PyObject *tmp_assign_source_27;
            tmp_assign_source_27 = MAKE_DICT_EMPTY();
            assert(tmp_Physics$class_creation_3__class_decl_dict == NULL);
            tmp_Physics$class_creation_3__class_decl_dict = tmp_assign_source_27;
        }
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_metaclass_value_4;
            nuitka_bool tmp_condition_result_12;
            int tmp_truth_name_4;
            PyObject *tmp_type_arg_7;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_subscript_value_4;
            PyObject *tmp_bases_value_4;
            CHECK_OBJECT(tmp_Physics$class_creation_3__bases);
            tmp_truth_name_4 = CHECK_IF_TRUE(tmp_Physics$class_creation_3__bases);
            if (tmp_truth_name_4 == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            tmp_condition_result_12 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_4;
            } else {
                goto condexpr_false_4;
            }
            condexpr_true_4:;
            CHECK_OBJECT(tmp_Physics$class_creation_3__bases);
            tmp_expression_value_19 = tmp_Physics$class_creation_3__bases;
            tmp_subscript_value_4 = mod_consts[41];
            tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_19, tmp_subscript_value_4, 0);
            if (tmp_type_arg_7 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
            Py_DECREF(tmp_type_arg_7);
            if (tmp_metaclass_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            goto condexpr_end_4;
            condexpr_false_4:;
            tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_4);
            condexpr_end_4:;
            CHECK_OBJECT(tmp_Physics$class_creation_3__bases);
            tmp_bases_value_4 = tmp_Physics$class_creation_3__bases;
            tmp_assign_source_28 = SELECT_METACLASS(tstate, tmp_metaclass_value_4, tmp_bases_value_4);
            Py_DECREF(tmp_metaclass_value_4);
            if (tmp_assign_source_28 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            assert(tmp_Physics$class_creation_3__metaclass == NULL);
            tmp_Physics$class_creation_3__metaclass = tmp_assign_source_28;
        }
        {
            bool tmp_condition_result_13;
            PyObject *tmp_expression_value_20;
            CHECK_OBJECT(tmp_Physics$class_creation_3__metaclass);
            tmp_expression_value_20 = tmp_Physics$class_creation_3__metaclass;
            tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_20, mod_consts[43]);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            tmp_condition_result_13 = (tmp_res != 0) ? true : false;
            if (tmp_condition_result_13 != false) {
                goto branch_yes_9;
            } else {
                goto branch_no_9;
            }
        }
        branch_yes_9:;
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_called_value_6;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_Physics$class_creation_3__metaclass);
            tmp_expression_value_21 = tmp_Physics$class_creation_3__metaclass;
            tmp_called_value_6 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_21, mod_consts[43]);
            if (tmp_called_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            tmp_tuple_element_12 = mod_consts[25];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_Physics$class_creation_3__bases);
            tmp_tuple_element_12 = tmp_Physics$class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_Physics$class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_Physics$class_creation_3__class_decl_dict;
            frame_dd1c09a1f5ab3a65515349c59d2b34c0_2->m_frame.f_lineno = 48;
            tmp_assign_source_29 = CALL_FUNCTION(tstate, tmp_called_value_6, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_29 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            assert(tmp_Physics$class_creation_3__prepared == NULL);
            tmp_Physics$class_creation_3__prepared = tmp_assign_source_29;
        }
        {
            bool tmp_condition_result_14;
            PyObject *tmp_operand_value_4;
            PyObject *tmp_expression_value_22;
            CHECK_OBJECT(tmp_Physics$class_creation_3__prepared);
            tmp_expression_value_22 = tmp_Physics$class_creation_3__prepared;
            tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_22, mod_consts[45]);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            tmp_operand_value_4 = (tmp_res != 0) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
            assert(!(tmp_res == -1));
            tmp_condition_result_14 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_14 != false) {
                goto branch_yes_10;
            } else {
                goto branch_no_10;
            }
        }
        branch_yes_10:;
        {
            PyObject *tmp_raise_type_4;
            PyObject *tmp_raise_value_4;
            PyObject *tmp_mod_expr_left_4;
            PyObject *tmp_mod_expr_right_4;
            PyObject *tmp_tuple_element_13;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_name_value_5;
            PyObject *tmp_default_value_4;
            tmp_raise_type_4 = PyExc_TypeError;
            tmp_mod_expr_left_4 = mod_consts[46];
            CHECK_OBJECT(tmp_Physics$class_creation_3__metaclass);
            tmp_expression_value_23 = tmp_Physics$class_creation_3__metaclass;
            tmp_name_value_5 = mod_consts[47];
            tmp_default_value_4 = mod_consts[48];
            tmp_tuple_element_13 = BUILTIN_GETATTR(tstate, tmp_expression_value_23, tmp_name_value_5, tmp_default_value_4);
            if (tmp_tuple_element_13 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_24;
                PyObject *tmp_type_arg_8;
                PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_13);
                CHECK_OBJECT(tmp_Physics$class_creation_3__prepared);
                tmp_type_arg_8 = tmp_Physics$class_creation_3__prepared;
                tmp_expression_value_24 = BUILTIN_TYPE1(tmp_type_arg_8);
                assert(!(tmp_expression_value_24 == NULL));
                tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_24, mod_consts[47]);
                Py_DECREF(tmp_expression_value_24);
                if (tmp_tuple_element_13 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 48;
                    type_description_2 = "o";
                    goto tuple_build_exception_4;
                }
                PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_13);
            }
            goto tuple_build_noexception_4;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_4:;
            Py_DECREF(tmp_mod_expr_right_4);
            goto try_except_handler_10;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_4:;
            tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
            Py_DECREF(tmp_mod_expr_right_4);
            if (tmp_raise_value_4 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            exception_type = tmp_raise_type_4;
            Py_INCREF(tmp_raise_type_4);
            exception_value = tmp_raise_value_4;
            exception_lineno = 48;
            RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);
            type_description_2 = "o";
            goto try_except_handler_10;
        }
        branch_no_10:;
        goto branch_end_9;
        branch_no_9:;
        {
            PyObject *tmp_assign_source_30;
            tmp_assign_source_30 = MAKE_DICT_EMPTY();
            assert(tmp_Physics$class_creation_3__prepared == NULL);
            tmp_Physics$class_creation_3__prepared = tmp_assign_source_30;
        }
        branch_end_9:;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_Physics$class_creation_3__prepared);
            tmp_set_locals_4 = tmp_Physics$class_creation_3__prepared;
            locals_pyvis$physics$$$class__4_Repulsion_48 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[49];
        tmp_res = PyObject_SetItem(locals_pyvis$physics$$$class__4_Repulsion_48, mod_consts[50], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_2 = "o";
            goto try_except_handler_12;
        }
        tmp_dictset_value = mod_consts[65];
        tmp_res = PyObject_SetItem(locals_pyvis$physics$$$class__4_Repulsion_48, mod_consts[35], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_2 = "o";
            goto try_except_handler_12;
        }
        tmp_dictset_value = mod_consts[66];
        tmp_res = PyObject_SetItem(locals_pyvis$physics$$$class__4_Repulsion_48, mod_consts[51], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_2 = "o";
            goto try_except_handler_12;
        }
        frame_07e48997e4eb9a097b32133ba27fcb0a_5 = MAKE_CLASS_FRAME(tstate, codeobj_07e48997e4eb9a097b32133ba27fcb0a, module_pyvis$physics, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_07e48997e4eb9a097b32133ba27fcb0a_5);
        assert(Py_REFCNT(frame_07e48997e4eb9a097b32133ba27fcb0a_5) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_pyvis$physics$$$function__5___init__();

        tmp_res = PyObject_SetItem(locals_pyvis$physics$$$class__4_Repulsion_48, mod_consts[59], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_3 = "o";
            goto frame_exception_exit_5;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_3;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_07e48997e4eb9a097b32133ba27fcb0a_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_07e48997e4eb9a097b32133ba27fcb0a_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_07e48997e4eb9a097b32133ba27fcb0a_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_07e48997e4eb9a097b32133ba27fcb0a_5,
            type_description_3,
            outline_3_var___class__
        );



        assertFrameObject(frame_07e48997e4eb9a097b32133ba27fcb0a_5);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_4:;
        type_description_2 = "o";
        goto try_except_handler_12;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_15;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_Physics$class_creation_3__bases);
            tmp_cmp_expr_left_3 = tmp_Physics$class_creation_3__bases;
            CHECK_OBJECT(tmp_Physics$class_creation_3__bases_orig);
            tmp_cmp_expr_right_3 = tmp_Physics$class_creation_3__bases_orig;
            tmp_condition_result_15 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_15 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;
                type_description_2 = "o";
                goto try_except_handler_12;
            }
            if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
                goto branch_yes_11;
            } else {
                goto branch_no_11;
            }
        }
        branch_yes_11:;
        CHECK_OBJECT(tmp_Physics$class_creation_3__bases_orig);
        tmp_dictset_value = tmp_Physics$class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyvis$physics$$$class__4_Repulsion_48, mod_consts[61], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_2 = "o";
            goto try_except_handler_12;
        }
        branch_no_11:;
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_value_7;
            PyObject *tmp_tuple_element_14;
            PyObject *tmp_kwargs_value_7;
            CHECK_OBJECT(tmp_Physics$class_creation_3__metaclass);
            tmp_called_value_7 = tmp_Physics$class_creation_3__metaclass;
            tmp_tuple_element_14 = mod_consts[25];
            tmp_args_value_7 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_14);
            CHECK_OBJECT(tmp_Physics$class_creation_3__bases);
            tmp_tuple_element_14 = tmp_Physics$class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_14);
            tmp_tuple_element_14 = locals_pyvis$physics$$$class__4_Repulsion_48;
            PyTuple_SET_ITEM0(tmp_args_value_7, 2, tmp_tuple_element_14);
            CHECK_OBJECT(tmp_Physics$class_creation_3__class_decl_dict);
            tmp_kwargs_value_7 = tmp_Physics$class_creation_3__class_decl_dict;
            frame_dd1c09a1f5ab3a65515349c59d2b34c0_2->m_frame.f_lineno = 48;
            tmp_assign_source_31 = CALL_FUNCTION(tstate, tmp_called_value_7, tmp_args_value_7, tmp_kwargs_value_7);
            Py_DECREF(tmp_args_value_7);
            if (tmp_assign_source_31 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;
                type_description_2 = "o";
                goto try_except_handler_12;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_31;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_dictset_value = outline_3_var___class__;
        Py_INCREF(tmp_dictset_value);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF(locals_pyvis$physics$$$class__4_Repulsion_48);
        locals_pyvis$physics$$$class__4_Repulsion_48 = NULL;
        goto try_return_handler_11;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyvis$physics$$$class__4_Repulsion_48);
        locals_pyvis$physics$$$class__4_Repulsion_48 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 48;
        goto try_except_handler_10;
        outline_result_4:;
        tmp_res = PyObject_SetItem(locals_pyvis$physics$$$class__1_Physics_4, mod_consts[25], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_2 = "o";
            goto try_except_handler_10;
        }
        goto try_end_3;
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

        CHECK_OBJECT(tmp_Physics$class_creation_3__bases_orig);
        Py_DECREF(tmp_Physics$class_creation_3__bases_orig);
        tmp_Physics$class_creation_3__bases_orig = NULL;
        Py_XDECREF(tmp_Physics$class_creation_3__bases);
        tmp_Physics$class_creation_3__bases = NULL;
        Py_XDECREF(tmp_Physics$class_creation_3__class_decl_dict);
        tmp_Physics$class_creation_3__class_decl_dict = NULL;
        Py_XDECREF(tmp_Physics$class_creation_3__metaclass);
        tmp_Physics$class_creation_3__metaclass = NULL;
        Py_XDECREF(tmp_Physics$class_creation_3__prepared);
        tmp_Physics$class_creation_3__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto frame_exception_exit_2;
        // End of try:
        try_end_3:;
        CHECK_OBJECT(tmp_Physics$class_creation_3__bases_orig);
        Py_DECREF(tmp_Physics$class_creation_3__bases_orig);
        tmp_Physics$class_creation_3__bases_orig = NULL;
        CHECK_OBJECT(tmp_Physics$class_creation_3__bases);
        Py_DECREF(tmp_Physics$class_creation_3__bases);
        tmp_Physics$class_creation_3__bases = NULL;
        CHECK_OBJECT(tmp_Physics$class_creation_3__class_decl_dict);
        Py_DECREF(tmp_Physics$class_creation_3__class_decl_dict);
        tmp_Physics$class_creation_3__class_decl_dict = NULL;
        CHECK_OBJECT(tmp_Physics$class_creation_3__metaclass);
        Py_DECREF(tmp_Physics$class_creation_3__metaclass);
        tmp_Physics$class_creation_3__metaclass = NULL;
        CHECK_OBJECT(tmp_Physics$class_creation_3__prepared);
        Py_DECREF(tmp_Physics$class_creation_3__prepared);
        tmp_Physics$class_creation_3__prepared = NULL;
        {
            PyObject *tmp_assign_source_32;
            PyObject *tmp_tuple_element_15;
            tmp_tuple_element_15 = PyObject_GetItem(locals_pyvis$physics$$$class__1_Physics_4, mod_consts[56]);

            if (tmp_tuple_element_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_15 = (PyObject *)&PyBaseObject_Type;
                    Py_INCREF(tmp_tuple_element_15);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_assign_source_32 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_assign_source_32, 0, tmp_tuple_element_15);
            assert(tmp_Physics$class_creation_4__bases_orig == NULL);
            tmp_Physics$class_creation_4__bases_orig = tmp_assign_source_32;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_33;
            PyObject *tmp_dircall_arg1_5;
            CHECK_OBJECT(tmp_Physics$class_creation_4__bases_orig);
            tmp_dircall_arg1_5 = tmp_Physics$class_creation_4__bases_orig;
            Py_INCREF(tmp_dircall_arg1_5);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_5};
                tmp_assign_source_33 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
            }
            if (tmp_assign_source_33 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_2 = "o";
                goto try_except_handler_13;
            }
            assert(tmp_Physics$class_creation_4__bases == NULL);
            tmp_Physics$class_creation_4__bases = tmp_assign_source_33;
        }
        {
            PyObject *tmp_assign_source_34;
            tmp_assign_source_34 = MAKE_DICT_EMPTY();
            assert(tmp_Physics$class_creation_4__class_decl_dict == NULL);
            tmp_Physics$class_creation_4__class_decl_dict = tmp_assign_source_34;
        }
        {
            PyObject *tmp_assign_source_35;
            PyObject *tmp_metaclass_value_5;
            nuitka_bool tmp_condition_result_16;
            int tmp_truth_name_5;
            PyObject *tmp_type_arg_9;
            PyObject *tmp_expression_value_25;
            PyObject *tmp_subscript_value_5;
            PyObject *tmp_bases_value_5;
            CHECK_OBJECT(tmp_Physics$class_creation_4__bases);
            tmp_truth_name_5 = CHECK_IF_TRUE(tmp_Physics$class_creation_4__bases);
            if (tmp_truth_name_5 == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_2 = "o";
                goto try_except_handler_13;
            }
            tmp_condition_result_16 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_5;
            } else {
                goto condexpr_false_5;
            }
            condexpr_true_5:;
            CHECK_OBJECT(tmp_Physics$class_creation_4__bases);
            tmp_expression_value_25 = tmp_Physics$class_creation_4__bases;
            tmp_subscript_value_5 = mod_consts[41];
            tmp_type_arg_9 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_25, tmp_subscript_value_5, 0);
            if (tmp_type_arg_9 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_2 = "o";
                goto try_except_handler_13;
            }
            tmp_metaclass_value_5 = BUILTIN_TYPE1(tmp_type_arg_9);
            Py_DECREF(tmp_type_arg_9);
            if (tmp_metaclass_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_2 = "o";
                goto try_except_handler_13;
            }
            goto condexpr_end_5;
            condexpr_false_5:;
            tmp_metaclass_value_5 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_5);
            condexpr_end_5:;
            CHECK_OBJECT(tmp_Physics$class_creation_4__bases);
            tmp_bases_value_5 = tmp_Physics$class_creation_4__bases;
            tmp_assign_source_35 = SELECT_METACLASS(tstate, tmp_metaclass_value_5, tmp_bases_value_5);
            Py_DECREF(tmp_metaclass_value_5);
            if (tmp_assign_source_35 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_2 = "o";
                goto try_except_handler_13;
            }
            assert(tmp_Physics$class_creation_4__metaclass == NULL);
            tmp_Physics$class_creation_4__metaclass = tmp_assign_source_35;
        }
        {
            bool tmp_condition_result_17;
            PyObject *tmp_expression_value_26;
            CHECK_OBJECT(tmp_Physics$class_creation_4__metaclass);
            tmp_expression_value_26 = tmp_Physics$class_creation_4__metaclass;
            tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_26, mod_consts[43]);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_2 = "o";
                goto try_except_handler_13;
            }
            tmp_condition_result_17 = (tmp_res != 0) ? true : false;
            if (tmp_condition_result_17 != false) {
                goto branch_yes_12;
            } else {
                goto branch_no_12;
            }
        }
        branch_yes_12:;
        {
            PyObject *tmp_assign_source_36;
            PyObject *tmp_called_value_8;
            PyObject *tmp_expression_value_27;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_16;
            PyObject *tmp_kwargs_value_8;
            CHECK_OBJECT(tmp_Physics$class_creation_4__metaclass);
            tmp_expression_value_27 = tmp_Physics$class_creation_4__metaclass;
            tmp_called_value_8 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_27, mod_consts[43]);
            if (tmp_called_value_8 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_2 = "o";
                goto try_except_handler_13;
            }
            tmp_tuple_element_16 = mod_consts[27];
            tmp_args_value_8 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_16);
            CHECK_OBJECT(tmp_Physics$class_creation_4__bases);
            tmp_tuple_element_16 = tmp_Physics$class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_16);
            CHECK_OBJECT(tmp_Physics$class_creation_4__class_decl_dict);
            tmp_kwargs_value_8 = tmp_Physics$class_creation_4__class_decl_dict;
            frame_dd1c09a1f5ab3a65515349c59d2b34c0_2->m_frame.f_lineno = 61;
            tmp_assign_source_36 = CALL_FUNCTION(tstate, tmp_called_value_8, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_36 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_2 = "o";
                goto try_except_handler_13;
            }
            assert(tmp_Physics$class_creation_4__prepared == NULL);
            tmp_Physics$class_creation_4__prepared = tmp_assign_source_36;
        }
        {
            bool tmp_condition_result_18;
            PyObject *tmp_operand_value_5;
            PyObject *tmp_expression_value_28;
            CHECK_OBJECT(tmp_Physics$class_creation_4__prepared);
            tmp_expression_value_28 = tmp_Physics$class_creation_4__prepared;
            tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_28, mod_consts[45]);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_2 = "o";
                goto try_except_handler_13;
            }
            tmp_operand_value_5 = (tmp_res != 0) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
            assert(!(tmp_res == -1));
            tmp_condition_result_18 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_18 != false) {
                goto branch_yes_13;
            } else {
                goto branch_no_13;
            }
        }
        branch_yes_13:;
        {
            PyObject *tmp_raise_type_5;
            PyObject *tmp_raise_value_5;
            PyObject *tmp_mod_expr_left_5;
            PyObject *tmp_mod_expr_right_5;
            PyObject *tmp_tuple_element_17;
            PyObject *tmp_expression_value_29;
            PyObject *tmp_name_value_6;
            PyObject *tmp_default_value_5;
            tmp_raise_type_5 = PyExc_TypeError;
            tmp_mod_expr_left_5 = mod_consts[46];
            CHECK_OBJECT(tmp_Physics$class_creation_4__metaclass);
            tmp_expression_value_29 = tmp_Physics$class_creation_4__metaclass;
            tmp_name_value_6 = mod_consts[47];
            tmp_default_value_5 = mod_consts[48];
            tmp_tuple_element_17 = BUILTIN_GETATTR(tstate, tmp_expression_value_29, tmp_name_value_6, tmp_default_value_5);
            if (tmp_tuple_element_17 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_2 = "o";
                goto try_except_handler_13;
            }
            tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_30;
                PyObject *tmp_type_arg_10;
                PyTuple_SET_ITEM(tmp_mod_expr_right_5, 0, tmp_tuple_element_17);
                CHECK_OBJECT(tmp_Physics$class_creation_4__prepared);
                tmp_type_arg_10 = tmp_Physics$class_creation_4__prepared;
                tmp_expression_value_30 = BUILTIN_TYPE1(tmp_type_arg_10);
                assert(!(tmp_expression_value_30 == NULL));
                tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_30, mod_consts[47]);
                Py_DECREF(tmp_expression_value_30);
                if (tmp_tuple_element_17 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 61;
                    type_description_2 = "o";
                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_mod_expr_right_5, 1, tmp_tuple_element_17);
            }
            goto tuple_build_noexception_5;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_5:;
            Py_DECREF(tmp_mod_expr_right_5);
            goto try_except_handler_13;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_5:;
            tmp_raise_value_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
            Py_DECREF(tmp_mod_expr_right_5);
            if (tmp_raise_value_5 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_2 = "o";
                goto try_except_handler_13;
            }
            exception_type = tmp_raise_type_5;
            Py_INCREF(tmp_raise_type_5);
            exception_value = tmp_raise_value_5;
            exception_lineno = 61;
            RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);
            type_description_2 = "o";
            goto try_except_handler_13;
        }
        branch_no_13:;
        goto branch_end_12;
        branch_no_12:;
        {
            PyObject *tmp_assign_source_37;
            tmp_assign_source_37 = MAKE_DICT_EMPTY();
            assert(tmp_Physics$class_creation_4__prepared == NULL);
            tmp_Physics$class_creation_4__prepared = tmp_assign_source_37;
        }
        branch_end_12:;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_Physics$class_creation_4__prepared);
            tmp_set_locals_5 = tmp_Physics$class_creation_4__prepared;
            locals_pyvis$physics$$$class__5_hierarchicalRepulsion_61 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[49];
        tmp_res = PyObject_SetItem(locals_pyvis$physics$$$class__5_hierarchicalRepulsion_61, mod_consts[50], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_2 = "o";
            goto try_except_handler_15;
        }
        tmp_dictset_value = mod_consts[68];
        tmp_res = PyObject_SetItem(locals_pyvis$physics$$$class__5_hierarchicalRepulsion_61, mod_consts[35], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_2 = "o";
            goto try_except_handler_15;
        }
        tmp_dictset_value = mod_consts[69];
        tmp_res = PyObject_SetItem(locals_pyvis$physics$$$class__5_hierarchicalRepulsion_61, mod_consts[51], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_2 = "o";
            goto try_except_handler_15;
        }
        frame_6a064f956d605e9c1158639c8ae56f16_6 = MAKE_CLASS_FRAME(tstate, codeobj_6a064f956d605e9c1158639c8ae56f16, module_pyvis$physics, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_6a064f956d605e9c1158639c8ae56f16_6);
        assert(Py_REFCNT(frame_6a064f956d605e9c1158639c8ae56f16_6) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_pyvis$physics$$$function__6___init__();

        tmp_res = PyObject_SetItem(locals_pyvis$physics$$$class__5_hierarchicalRepulsion_61, mod_consts[59], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_3 = "o";
            goto frame_exception_exit_6;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_4;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_6a064f956d605e9c1158639c8ae56f16_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_6a064f956d605e9c1158639c8ae56f16_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_6a064f956d605e9c1158639c8ae56f16_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_6a064f956d605e9c1158639c8ae56f16_6,
            type_description_3,
            outline_4_var___class__
        );



        assertFrameObject(frame_6a064f956d605e9c1158639c8ae56f16_6);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_5;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_5:;
        type_description_2 = "o";
        goto try_except_handler_15;
        skip_nested_handling_4:;
        {
            nuitka_bool tmp_condition_result_19;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_Physics$class_creation_4__bases);
            tmp_cmp_expr_left_4 = tmp_Physics$class_creation_4__bases;
            CHECK_OBJECT(tmp_Physics$class_creation_4__bases_orig);
            tmp_cmp_expr_right_4 = tmp_Physics$class_creation_4__bases_orig;
            tmp_condition_result_19 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_condition_result_19 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_2 = "o";
                goto try_except_handler_15;
            }
            if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
                goto branch_yes_14;
            } else {
                goto branch_no_14;
            }
        }
        branch_yes_14:;
        CHECK_OBJECT(tmp_Physics$class_creation_4__bases_orig);
        tmp_dictset_value = tmp_Physics$class_creation_4__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyvis$physics$$$class__5_hierarchicalRepulsion_61, mod_consts[61], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_2 = "o";
            goto try_except_handler_15;
        }
        branch_no_14:;
        {
            PyObject *tmp_assign_source_38;
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_value_9;
            PyObject *tmp_tuple_element_18;
            PyObject *tmp_kwargs_value_9;
            CHECK_OBJECT(tmp_Physics$class_creation_4__metaclass);
            tmp_called_value_9 = tmp_Physics$class_creation_4__metaclass;
            tmp_tuple_element_18 = mod_consts[27];
            tmp_args_value_9 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_18);
            CHECK_OBJECT(tmp_Physics$class_creation_4__bases);
            tmp_tuple_element_18 = tmp_Physics$class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_18);
            tmp_tuple_element_18 = locals_pyvis$physics$$$class__5_hierarchicalRepulsion_61;
            PyTuple_SET_ITEM0(tmp_args_value_9, 2, tmp_tuple_element_18);
            CHECK_OBJECT(tmp_Physics$class_creation_4__class_decl_dict);
            tmp_kwargs_value_9 = tmp_Physics$class_creation_4__class_decl_dict;
            frame_dd1c09a1f5ab3a65515349c59d2b34c0_2->m_frame.f_lineno = 61;
            tmp_assign_source_38 = CALL_FUNCTION(tstate, tmp_called_value_9, tmp_args_value_9, tmp_kwargs_value_9);
            Py_DECREF(tmp_args_value_9);
            if (tmp_assign_source_38 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_2 = "o";
                goto try_except_handler_15;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_38;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_dictset_value = outline_4_var___class__;
        Py_INCREF(tmp_dictset_value);
        goto try_return_handler_15;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        Py_DECREF(locals_pyvis$physics$$$class__5_hierarchicalRepulsion_61);
        locals_pyvis$physics$$$class__5_hierarchicalRepulsion_61 = NULL;
        goto try_return_handler_14;
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyvis$physics$$$class__5_hierarchicalRepulsion_61);
        locals_pyvis$physics$$$class__5_hierarchicalRepulsion_61 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto try_except_handler_14;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        CHECK_OBJECT(outline_4_var___class__);
        Py_DECREF(outline_4_var___class__);
        outline_4_var___class__ = NULL;
        goto outline_result_5;
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

        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 61;
        goto try_except_handler_13;
        outline_result_5:;
        tmp_res = PyObject_SetItem(locals_pyvis$physics$$$class__1_Physics_4, mod_consts[27], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_2 = "o";
            goto try_except_handler_13;
        }
        goto try_end_4;
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

        CHECK_OBJECT(tmp_Physics$class_creation_4__bases_orig);
        Py_DECREF(tmp_Physics$class_creation_4__bases_orig);
        tmp_Physics$class_creation_4__bases_orig = NULL;
        Py_XDECREF(tmp_Physics$class_creation_4__bases);
        tmp_Physics$class_creation_4__bases = NULL;
        Py_XDECREF(tmp_Physics$class_creation_4__class_decl_dict);
        tmp_Physics$class_creation_4__class_decl_dict = NULL;
        Py_XDECREF(tmp_Physics$class_creation_4__metaclass);
        tmp_Physics$class_creation_4__metaclass = NULL;
        Py_XDECREF(tmp_Physics$class_creation_4__prepared);
        tmp_Physics$class_creation_4__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto frame_exception_exit_2;
        // End of try:
        try_end_4:;
        CHECK_OBJECT(tmp_Physics$class_creation_4__bases_orig);
        Py_DECREF(tmp_Physics$class_creation_4__bases_orig);
        tmp_Physics$class_creation_4__bases_orig = NULL;
        CHECK_OBJECT(tmp_Physics$class_creation_4__bases);
        Py_DECREF(tmp_Physics$class_creation_4__bases);
        tmp_Physics$class_creation_4__bases = NULL;
        CHECK_OBJECT(tmp_Physics$class_creation_4__class_decl_dict);
        Py_DECREF(tmp_Physics$class_creation_4__class_decl_dict);
        tmp_Physics$class_creation_4__class_decl_dict = NULL;
        CHECK_OBJECT(tmp_Physics$class_creation_4__metaclass);
        Py_DECREF(tmp_Physics$class_creation_4__metaclass);
        tmp_Physics$class_creation_4__metaclass = NULL;
        CHECK_OBJECT(tmp_Physics$class_creation_4__prepared);
        Py_DECREF(tmp_Physics$class_creation_4__prepared);
        tmp_Physics$class_creation_4__prepared = NULL;
        {
            PyObject *tmp_assign_source_39;
            PyObject *tmp_tuple_element_19;
            tmp_tuple_element_19 = PyObject_GetItem(locals_pyvis$physics$$$class__1_Physics_4, mod_consts[56]);

            if (tmp_tuple_element_19 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED(tstate)) {
                    tmp_tuple_element_19 = (PyObject *)&PyBaseObject_Type;
                    Py_INCREF(tmp_tuple_element_19);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_assign_source_39 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_assign_source_39, 0, tmp_tuple_element_19);
            assert(tmp_Physics$class_creation_5__bases_orig == NULL);
            tmp_Physics$class_creation_5__bases_orig = tmp_assign_source_39;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_40;
            PyObject *tmp_dircall_arg1_6;
            CHECK_OBJECT(tmp_Physics$class_creation_5__bases_orig);
            tmp_dircall_arg1_6 = tmp_Physics$class_creation_5__bases_orig;
            Py_INCREF(tmp_dircall_arg1_6);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_6};
                tmp_assign_source_40 = impl___main__$$$function__1__mro_entries_conversion(tstate, dir_call_args);
            }
            if (tmp_assign_source_40 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            assert(tmp_Physics$class_creation_5__bases == NULL);
            tmp_Physics$class_creation_5__bases = tmp_assign_source_40;
        }
        {
            PyObject *tmp_assign_source_41;
            tmp_assign_source_41 = MAKE_DICT_EMPTY();
            assert(tmp_Physics$class_creation_5__class_decl_dict == NULL);
            tmp_Physics$class_creation_5__class_decl_dict = tmp_assign_source_41;
        }
        {
            PyObject *tmp_assign_source_42;
            PyObject *tmp_metaclass_value_6;
            nuitka_bool tmp_condition_result_20;
            int tmp_truth_name_6;
            PyObject *tmp_type_arg_11;
            PyObject *tmp_expression_value_31;
            PyObject *tmp_subscript_value_6;
            PyObject *tmp_bases_value_6;
            CHECK_OBJECT(tmp_Physics$class_creation_5__bases);
            tmp_truth_name_6 = CHECK_IF_TRUE(tmp_Physics$class_creation_5__bases);
            if (tmp_truth_name_6 == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            tmp_condition_result_20 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_6;
            } else {
                goto condexpr_false_6;
            }
            condexpr_true_6:;
            CHECK_OBJECT(tmp_Physics$class_creation_5__bases);
            tmp_expression_value_31 = tmp_Physics$class_creation_5__bases;
            tmp_subscript_value_6 = mod_consts[41];
            tmp_type_arg_11 = LOOKUP_SUBSCRIPT_CONST(tstate, tmp_expression_value_31, tmp_subscript_value_6, 0);
            if (tmp_type_arg_11 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            tmp_metaclass_value_6 = BUILTIN_TYPE1(tmp_type_arg_11);
            Py_DECREF(tmp_type_arg_11);
            if (tmp_metaclass_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            goto condexpr_end_6;
            condexpr_false_6:;
            tmp_metaclass_value_6 = (PyObject *)&PyType_Type;
            Py_INCREF(tmp_metaclass_value_6);
            condexpr_end_6:;
            CHECK_OBJECT(tmp_Physics$class_creation_5__bases);
            tmp_bases_value_6 = tmp_Physics$class_creation_5__bases;
            tmp_assign_source_42 = SELECT_METACLASS(tstate, tmp_metaclass_value_6, tmp_bases_value_6);
            Py_DECREF(tmp_metaclass_value_6);
            if (tmp_assign_source_42 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            assert(tmp_Physics$class_creation_5__metaclass == NULL);
            tmp_Physics$class_creation_5__metaclass = tmp_assign_source_42;
        }
        {
            bool tmp_condition_result_21;
            PyObject *tmp_expression_value_32;
            CHECK_OBJECT(tmp_Physics$class_creation_5__metaclass);
            tmp_expression_value_32 = tmp_Physics$class_creation_5__metaclass;
            tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_32, mod_consts[43]);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            tmp_condition_result_21 = (tmp_res != 0) ? true : false;
            if (tmp_condition_result_21 != false) {
                goto branch_yes_15;
            } else {
                goto branch_no_15;
            }
        }
        branch_yes_15:;
        {
            PyObject *tmp_assign_source_43;
            PyObject *tmp_called_value_10;
            PyObject *tmp_expression_value_33;
            PyObject *tmp_args_value_10;
            PyObject *tmp_tuple_element_20;
            PyObject *tmp_kwargs_value_10;
            CHECK_OBJECT(tmp_Physics$class_creation_5__metaclass);
            tmp_expression_value_33 = tmp_Physics$class_creation_5__metaclass;
            tmp_called_value_10 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_33, mod_consts[43]);
            if (tmp_called_value_10 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            tmp_tuple_element_20 = mod_consts[20];
            tmp_args_value_10 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_args_value_10, 0, tmp_tuple_element_20);
            CHECK_OBJECT(tmp_Physics$class_creation_5__bases);
            tmp_tuple_element_20 = tmp_Physics$class_creation_5__bases;
            PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_20);
            CHECK_OBJECT(tmp_Physics$class_creation_5__class_decl_dict);
            tmp_kwargs_value_10 = tmp_Physics$class_creation_5__class_decl_dict;
            frame_dd1c09a1f5ab3a65515349c59d2b34c0_2->m_frame.f_lineno = 74;
            tmp_assign_source_43 = CALL_FUNCTION(tstate, tmp_called_value_10, tmp_args_value_10, tmp_kwargs_value_10);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_args_value_10);
            if (tmp_assign_source_43 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            assert(tmp_Physics$class_creation_5__prepared == NULL);
            tmp_Physics$class_creation_5__prepared = tmp_assign_source_43;
        }
        {
            bool tmp_condition_result_22;
            PyObject *tmp_operand_value_6;
            PyObject *tmp_expression_value_34;
            CHECK_OBJECT(tmp_Physics$class_creation_5__prepared);
            tmp_expression_value_34 = tmp_Physics$class_creation_5__prepared;
            tmp_res = HAS_ATTR_BOOL2(tstate, tmp_expression_value_34, mod_consts[45]);
            if (tmp_res == -1) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            tmp_operand_value_6 = (tmp_res != 0) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
            assert(!(tmp_res == -1));
            tmp_condition_result_22 = (tmp_res == 0) ? true : false;
            if (tmp_condition_result_22 != false) {
                goto branch_yes_16;
            } else {
                goto branch_no_16;
            }
        }
        branch_yes_16:;
        {
            PyObject *tmp_raise_type_6;
            PyObject *tmp_raise_value_6;
            PyObject *tmp_mod_expr_left_6;
            PyObject *tmp_mod_expr_right_6;
            PyObject *tmp_tuple_element_21;
            PyObject *tmp_expression_value_35;
            PyObject *tmp_name_value_7;
            PyObject *tmp_default_value_6;
            tmp_raise_type_6 = PyExc_TypeError;
            tmp_mod_expr_left_6 = mod_consts[46];
            CHECK_OBJECT(tmp_Physics$class_creation_5__metaclass);
            tmp_expression_value_35 = tmp_Physics$class_creation_5__metaclass;
            tmp_name_value_7 = mod_consts[47];
            tmp_default_value_6 = mod_consts[48];
            tmp_tuple_element_21 = BUILTIN_GETATTR(tstate, tmp_expression_value_35, tmp_name_value_7, tmp_default_value_6);
            if (tmp_tuple_element_21 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_36;
                PyObject *tmp_type_arg_12;
                PyTuple_SET_ITEM(tmp_mod_expr_right_6, 0, tmp_tuple_element_21);
                CHECK_OBJECT(tmp_Physics$class_creation_5__prepared);
                tmp_type_arg_12 = tmp_Physics$class_creation_5__prepared;
                tmp_expression_value_36 = BUILTIN_TYPE1(tmp_type_arg_12);
                assert(!(tmp_expression_value_36 == NULL));
                tmp_tuple_element_21 = LOOKUP_ATTRIBUTE(tstate, tmp_expression_value_36, mod_consts[47]);
                Py_DECREF(tmp_expression_value_36);
                if (tmp_tuple_element_21 == NULL) {
                    assert(HAS_ERROR_OCCURRED(tstate));

                    FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                    exception_lineno = 74;
                    type_description_2 = "o";
                    goto tuple_build_exception_6;
                }
                PyTuple_SET_ITEM(tmp_mod_expr_right_6, 1, tmp_tuple_element_21);
            }
            goto tuple_build_noexception_6;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_6:;
            Py_DECREF(tmp_mod_expr_right_6);
            goto try_except_handler_16;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_6:;
            tmp_raise_value_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
            Py_DECREF(tmp_mod_expr_right_6);
            if (tmp_raise_value_6 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            exception_type = tmp_raise_type_6;
            Py_INCREF(tmp_raise_type_6);
            exception_value = tmp_raise_value_6;
            exception_lineno = 74;
            RAISE_EXCEPTION_IMPLICIT(tstate, &exception_type, &exception_value, &exception_tb);
            type_description_2 = "o";
            goto try_except_handler_16;
        }
        branch_no_16:;
        goto branch_end_15;
        branch_no_15:;
        {
            PyObject *tmp_assign_source_44;
            tmp_assign_source_44 = MAKE_DICT_EMPTY();
            assert(tmp_Physics$class_creation_5__prepared == NULL);
            tmp_Physics$class_creation_5__prepared = tmp_assign_source_44;
        }
        branch_end_15:;
        {
            PyObject *tmp_set_locals_6;
            CHECK_OBJECT(tmp_Physics$class_creation_5__prepared);
            tmp_set_locals_6 = tmp_Physics$class_creation_5__prepared;
            locals_pyvis$physics$$$class__6_Stabilization_74 = tmp_set_locals_6;
            Py_INCREF(tmp_set_locals_6);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[49];
        tmp_res = PyObject_SetItem(locals_pyvis$physics$$$class__6_Stabilization_74, mod_consts[50], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_2 = "o";
            goto try_except_handler_18;
        }
        tmp_dictset_value = mod_consts[71];
        tmp_res = PyObject_SetItem(locals_pyvis$physics$$$class__6_Stabilization_74, mod_consts[35], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_2 = "o";
            goto try_except_handler_18;
        }
        tmp_dictset_value = mod_consts[72];
        tmp_res = PyObject_SetItem(locals_pyvis$physics$$$class__6_Stabilization_74, mod_consts[51], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_2 = "o";
            goto try_except_handler_18;
        }
        frame_100a1b1d865613c478c1e2d425d01a70_7 = MAKE_CLASS_FRAME(tstate, codeobj_100a1b1d865613c478c1e2d425d01a70, module_pyvis$physics, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(tstate, frame_100a1b1d865613c478c1e2d425d01a70_7);
        assert(Py_REFCNT(frame_100a1b1d865613c478c1e2d425d01a70_7) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_pyvis$physics$$$function__7___getitem__();

        tmp_res = PyObject_SetItem(locals_pyvis$physics$$$class__6_Stabilization_74, mod_consts[45], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_3 = "o";
            goto frame_exception_exit_7;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyvis$physics$$$function__8___init__();

        tmp_res = PyObject_SetItem(locals_pyvis$physics$$$class__6_Stabilization_74, mod_consts[59], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_3 = "o";
            goto frame_exception_exit_7;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyvis$physics$$$function__9_toggle_stabilization();

        tmp_res = PyObject_SetItem(locals_pyvis$physics$$$class__6_Stabilization_74, mod_consts[28], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_3 = "o";
            goto frame_exception_exit_7;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_5;
        frame_exception_exit_7:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_100a1b1d865613c478c1e2d425d01a70_7, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_100a1b1d865613c478c1e2d425d01a70_7->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_100a1b1d865613c478c1e2d425d01a70_7, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_100a1b1d865613c478c1e2d425d01a70_7,
            type_description_3,
            outline_5_var___class__
        );



        assertFrameObject(frame_100a1b1d865613c478c1e2d425d01a70_7);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_6;
        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_6:;
        type_description_2 = "o";
        goto try_except_handler_18;
        skip_nested_handling_5:;
        {
            nuitka_bool tmp_condition_result_23;
            PyObject *tmp_cmp_expr_left_5;
            PyObject *tmp_cmp_expr_right_5;
            CHECK_OBJECT(tmp_Physics$class_creation_5__bases);
            tmp_cmp_expr_left_5 = tmp_Physics$class_creation_5__bases;
            CHECK_OBJECT(tmp_Physics$class_creation_5__bases_orig);
            tmp_cmp_expr_right_5 = tmp_Physics$class_creation_5__bases_orig;
            tmp_condition_result_23 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
            if (tmp_condition_result_23 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_2 = "o";
                goto try_except_handler_18;
            }
            if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
                goto branch_yes_17;
            } else {
                goto branch_no_17;
            }
        }
        branch_yes_17:;
        CHECK_OBJECT(tmp_Physics$class_creation_5__bases_orig);
        tmp_dictset_value = tmp_Physics$class_creation_5__bases_orig;
        tmp_res = PyObject_SetItem(locals_pyvis$physics$$$class__6_Stabilization_74, mod_consts[61], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_2 = "o";
            goto try_except_handler_18;
        }
        branch_no_17:;
        {
            PyObject *tmp_assign_source_45;
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_value_11;
            PyObject *tmp_tuple_element_22;
            PyObject *tmp_kwargs_value_11;
            CHECK_OBJECT(tmp_Physics$class_creation_5__metaclass);
            tmp_called_value_11 = tmp_Physics$class_creation_5__metaclass;
            tmp_tuple_element_22 = mod_consts[20];
            tmp_args_value_11 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_11, 0, tmp_tuple_element_22);
            CHECK_OBJECT(tmp_Physics$class_creation_5__bases);
            tmp_tuple_element_22 = tmp_Physics$class_creation_5__bases;
            PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_22);
            tmp_tuple_element_22 = locals_pyvis$physics$$$class__6_Stabilization_74;
            PyTuple_SET_ITEM0(tmp_args_value_11, 2, tmp_tuple_element_22);
            CHECK_OBJECT(tmp_Physics$class_creation_5__class_decl_dict);
            tmp_kwargs_value_11 = tmp_Physics$class_creation_5__class_decl_dict;
            frame_dd1c09a1f5ab3a65515349c59d2b34c0_2->m_frame.f_lineno = 74;
            tmp_assign_source_45 = CALL_FUNCTION(tstate, tmp_called_value_11, tmp_args_value_11, tmp_kwargs_value_11);
            Py_DECREF(tmp_args_value_11);
            if (tmp_assign_source_45 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;
                type_description_2 = "o";
                goto try_except_handler_18;
            }
            assert(outline_5_var___class__ == NULL);
            outline_5_var___class__ = tmp_assign_source_45;
        }
        CHECK_OBJECT(outline_5_var___class__);
        tmp_dictset_value = outline_5_var___class__;
        Py_INCREF(tmp_dictset_value);
        goto try_return_handler_18;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_18:;
        Py_DECREF(locals_pyvis$physics$$$class__6_Stabilization_74);
        locals_pyvis$physics$$$class__6_Stabilization_74 = NULL;
        goto try_return_handler_17;
        // Exception handler code:
        try_except_handler_18:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyvis$physics$$$class__6_Stabilization_74);
        locals_pyvis$physics$$$class__6_Stabilization_74 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto try_except_handler_17;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_17:;
        CHECK_OBJECT(outline_5_var___class__);
        Py_DECREF(outline_5_var___class__);
        outline_5_var___class__ = NULL;
        goto outline_result_6;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto outline_exception_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_6:;
        exception_lineno = 74;
        goto try_except_handler_16;
        outline_result_6:;
        tmp_res = PyObject_SetItem(locals_pyvis$physics$$$class__1_Physics_4, mod_consts[20], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_2 = "o";
            goto try_except_handler_16;
        }
        goto try_end_5;
        // Exception handler code:
        try_except_handler_16:;
        exception_keeper_type_15 = exception_type;
        exception_keeper_value_15 = exception_value;
        exception_keeper_tb_15 = exception_tb;
        exception_keeper_lineno_15 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_Physics$class_creation_5__bases_orig);
        Py_DECREF(tmp_Physics$class_creation_5__bases_orig);
        tmp_Physics$class_creation_5__bases_orig = NULL;
        Py_XDECREF(tmp_Physics$class_creation_5__bases);
        tmp_Physics$class_creation_5__bases = NULL;
        Py_XDECREF(tmp_Physics$class_creation_5__class_decl_dict);
        tmp_Physics$class_creation_5__class_decl_dict = NULL;
        Py_XDECREF(tmp_Physics$class_creation_5__metaclass);
        tmp_Physics$class_creation_5__metaclass = NULL;
        Py_XDECREF(tmp_Physics$class_creation_5__prepared);
        tmp_Physics$class_creation_5__prepared = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;
        exception_lineno = exception_keeper_lineno_15;

        goto frame_exception_exit_2;
        // End of try:
        try_end_5:;
        CHECK_OBJECT(tmp_Physics$class_creation_5__bases_orig);
        Py_DECREF(tmp_Physics$class_creation_5__bases_orig);
        tmp_Physics$class_creation_5__bases_orig = NULL;
        CHECK_OBJECT(tmp_Physics$class_creation_5__bases);
        Py_DECREF(tmp_Physics$class_creation_5__bases);
        tmp_Physics$class_creation_5__bases = NULL;
        CHECK_OBJECT(tmp_Physics$class_creation_5__class_decl_dict);
        Py_DECREF(tmp_Physics$class_creation_5__class_decl_dict);
        tmp_Physics$class_creation_5__class_decl_dict = NULL;
        CHECK_OBJECT(tmp_Physics$class_creation_5__metaclass);
        Py_DECREF(tmp_Physics$class_creation_5__metaclass);
        tmp_Physics$class_creation_5__metaclass = NULL;
        CHECK_OBJECT(tmp_Physics$class_creation_5__prepared);
        Py_DECREF(tmp_Physics$class_creation_5__prepared);
        tmp_Physics$class_creation_5__prepared = NULL;


        tmp_dictset_value = MAKE_FUNCTION_pyvis$physics$$$function__10___init__();

        tmp_res = PyObject_SetItem(locals_pyvis$physics$$$class__1_Physics_4, mod_consts[59], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyvis$physics$$$function__11_use_barnes_hut();

        tmp_res = PyObject_SetItem(locals_pyvis$physics$$$class__1_Physics_4, mod_consts[77], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyvis$physics$$$function__12_use_force_atlas_2based();

        tmp_res = PyObject_SetItem(locals_pyvis$physics$$$class__1_Physics_4, mod_consts[79], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyvis$physics$$$function__13_use_repulsion();

        tmp_res = PyObject_SetItem(locals_pyvis$physics$$$class__1_Physics_4, mod_consts[81], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyvis$physics$$$function__14_use_hrepulsion();

        tmp_res = PyObject_SetItem(locals_pyvis$physics$$$class__1_Physics_4, mod_consts[83], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyvis$physics$$$function__15_toggle_stabilization();

        tmp_res = PyObject_SetItem(locals_pyvis$physics$$$class__1_Physics_4, mod_consts[28], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_pyvis$physics$$$function__16_to_json();

        tmp_res = PyObject_SetItem(locals_pyvis$physics$$$class__1_Physics_4, mod_consts[86], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        // Put the previous frame back on top.
        popFrameStack(tstate);

        goto frame_no_exception_6;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_dd1c09a1f5ab3a65515349c59d2b34c0_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_dd1c09a1f5ab3a65515349c59d2b34c0_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_dd1c09a1f5ab3a65515349c59d2b34c0_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_dd1c09a1f5ab3a65515349c59d2b34c0_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_dd1c09a1f5ab3a65515349c59d2b34c0_2);

        // Put the previous frame back on top.
        popFrameStack(tstate);

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_6:;
        goto skip_nested_handling_6;
        nested_frame_exit_1:;

        goto try_except_handler_3;
        skip_nested_handling_6:;
        {
            nuitka_bool tmp_condition_result_24;
            PyObject *tmp_cmp_expr_left_6;
            PyObject *tmp_cmp_expr_right_6;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_6 = tmp_class_creation_1__bases;
            tmp_cmp_expr_right_6 = mod_consts[42];
            tmp_condition_result_24 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
            if (tmp_condition_result_24 == NUITKA_BOOL_EXCEPTION) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 4;

                goto try_except_handler_3;
            }
            if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
                goto branch_yes_18;
            } else {
                goto branch_no_18;
            }
        }
        branch_yes_18:;
        tmp_dictset_value = mod_consts[42];
        tmp_res = PyObject_SetItem(locals_pyvis$physics$$$class__1_Physics_4, mod_consts[61], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(HAS_ERROR_OCCURRED(tstate));

            FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_3;
        }
        branch_no_18:;
        {
            PyObject *tmp_assign_source_46;
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_value_12;
            PyObject *tmp_tuple_element_23;
            PyObject *tmp_kwargs_value_12;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_12 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_23 = mod_consts[44];
            tmp_args_value_12 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_12, 0, tmp_tuple_element_23);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_23 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_23);
            tmp_tuple_element_23 = locals_pyvis$physics$$$class__1_Physics_4;
            PyTuple_SET_ITEM0(tmp_args_value_12, 2, tmp_tuple_element_23);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_12 = tmp_class_creation_1__class_decl_dict;
            frame_8c6cd3a27db039e56f7d235a018b6c8a->m_frame.f_lineno = 4;
            tmp_assign_source_46 = CALL_FUNCTION(tstate, tmp_called_value_12, tmp_args_value_12, tmp_kwargs_value_12);
            Py_DECREF(tmp_args_value_12);
            if (tmp_assign_source_46 == NULL) {
                assert(HAS_ERROR_OCCURRED(tstate));

                FETCH_ERROR_OCCURRED(tstate, &exception_type, &exception_value, &exception_tb);


                exception_lineno = 4;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_46;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_10 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_10);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_pyvis$physics$$$class__1_Physics_4);
        locals_pyvis$physics$$$class__1_Physics_4 = NULL;
        goto try_return_handler_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyvis$physics$$$class__1_Physics_4);
        locals_pyvis$physics$$$class__1_Physics_4 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto try_except_handler_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_17 = exception_type;
        exception_keeper_value_17 = exception_value;
        exception_keeper_tb_17 = exception_tb;
        exception_keeper_lineno_17 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;
        exception_lineno = exception_keeper_lineno_17;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 4;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_pyvis$physics, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_10);
    }
    goto try_end_6;
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

    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;


    // Put the previous frame back on top.
    popFrameStack(tstate);

    goto frame_no_exception_7;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8c6cd3a27db039e56f7d235a018b6c8a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8c6cd3a27db039e56f7d235a018b6c8a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8c6cd3a27db039e56f7d235a018b6c8a, exception_lineno);
    }



    assertFrameObject(frame_8c6cd3a27db039e56f7d235a018b6c8a);

    // Put the previous frame back on top.
    popFrameStack(tstate);

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_7:;
    CHECK_OBJECT(tmp_class_creation_1__bases);
    Py_DECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__metaclass);
    Py_DECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pyvis$physics", false);

    Py_INCREF(module_pyvis$physics);
    return module_pyvis$physics;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyvis$physics, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(tstate, module_name);
        }
    }
#endif
    PGO_onModuleExit("pyvis$physics", false);

    RESTORE_ERROR_OCCURRED(tstate, exception_type, exception_value, exception_tb);
    return NULL;
}
